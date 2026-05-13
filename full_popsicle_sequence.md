# Popsicle Stick Inserter — Full Sequence

## 1. High-level sequence

1. **Stage homes** to its start position (`A_start`) and waits.
2. **Conveyor belt is always running.** Belt position is read on the B encoder (continuous, monotonically increasing).
3. **On the rising edge of the popsicle sensor**, the controller captures the B-encoder position (hardware latch) and pushes that popsicle's belt-position into a FIFO queue.
4. **The stage tracks the center of the popsicle currently at the head of the queue** (gearing engaged: A follows B). While tracking, the inserter output is fired and held for `insert_ms`.
5. **While the stage is busy with one popsicle, more popsicles may arrive on the belt.** Each rising edge enqueues another belt-position; the queue grows independently of what the stage is doing.
6. **After insertion**, the stage advances to the next popsicle in the queue using a **relative move superimposed on the active gearing** (`IP` command). The retract/advance speed is planned per move based on (a) how far away the next popsicle is and (b) how much time we have before it reaches the working area.
7. Repeat 4–6 until the queue is empty; then idle (gearing still engaged) until the next sensor edge.

> **Why gearing stays engaged the whole time:** disengaging and re-engaging `GR` introduces re-sync transients and gives up the deterministic A=f(B) relationship we need to land on a moving popsicle. Instead we keep `GR` active and use **`IP`** (Increment Position) which, per the Galil reference, *"will move with the predefined AC, DC, SP values superimposed on top of the existing gearing motion"* when the slave is in gearing mode.

---

## 2. Coordinate system & definitions

| Symbol | Meaning | Units |
| --- | --- | --- |
| `B` | Conveyor belt encoder position (master) | B-counts |
| `A` | Stage commanded position (slave) | A-counts |
| `gr` | Signed gear ratio (`GR` value) | A-counts / B-count |
| `B0`, `A0` | B and A at the moment gearing is engaged | counts |
| `S` | Cumulative `IP` offset applied to A since gearing was engaged | A-counts |
| `cntmma` | A counts per mm of stage travel | 512 |
| `cntinb` | B counts per inch of belt travel | ≈ 3359.55 |
| `spacingb` | Nominal popsicle pitch on the belt | B-counts |
| `sensor_offset_b` | B-counts the belt travels from the sensor's beam to the stage's work-center | B-counts |
| `work_window_a` | ± allowable A travel from `A_start` (one-sided half-width) | A-counts |
| `belt_v_b` | Estimated belt speed (running average of dB/dt) | B-counts/sec |

**Kinematic identity (with gearing engaged):**

```
A(t) = A0 + gr·(B(t) − B0) + S
```

**Belt frame** (the frame moving with the belt): the stage's position in belt frame is just `S` plus a constant. Therefore an `IP A = ΔS` shifts the stage by `ΔS` A-counts *in belt frame*, regardless of belt speed.

**Lock-on condition.** The stage is "locked onto popsicle *k*" when the work-center is at popsicle *k*'s center, i.e. when `B = popsicle_B[k]` we want `A = A_start`. Solving for the required cumulative offset:

```
S_target(k) = (A_start − A0) − gr·(popsicle_B[k] − B0)
```

The `IP` step issued for the k-th popsicle is therefore:

```
ΔS = S_target(k) − S_target(k−1) = −gr · (popsicle_B[k] − popsicle_B[k−1])
```

i.e. the stage shifts in belt frame by exactly one popsicle spacing each cycle — independent of belt speed.

---

## 3. Hardware / I/O assumptions  *(confirm these)*

- **Popsicle sensor → Input 2.** On a DMC-41x3 the B-axis hardware latch is fed by digital Input 2 (A=1, B=2, C=3, D=4). `AL B` arms it; `_RLB` returns the latched B-encoder count at the edge; `_ALB` is 1 while armed.
- **Latch edge polarity** is set by `CN ,, n2` (third arg). Use `CN ,, 1` for rising edge.
- **Inserter actuator** on a digital output bit (`outbit`, currently 1) — `SB outbit` / `CB outbit`.
- **Home switch** on the standard A-axis home input.
- **Sensor-to-work-center geometry** (`sensor_offset_b`) must be measured: place a popsicle on the belt, jog until it triggers the sensor, then jog until its center is under the inserter; record the change in `_RPB`.

---

## 4. State variables

```
DM bqueue[QSIZE]          ' ring buffer of latched popsicle belt positions (B-counts)
qhead   = 0                ' index of next popsicle to process
qtail   = 0                ' index where the next sensor edge will write
qcount  = 0                ' number of popsicles waiting
last_B  = 0                ' popsicle_B of the popsicle the stage is currently locked onto
B0      = 0                ' B at the moment gearing was engaged
A0      = 0                ' A at the moment gearing was engaged (= A_start after home)
```

`QSIZE` should be larger than the worst-case in-flight count: `ceil((sensor_to_workcenter_distance + insert_cycle_time · belt_speed) / popsicle_spacing) + margin`. Start with `QSIZE = 16`.

---

## 5. Pseudocode

### 5.1 `#AUTO` / startup

```
Initialize parameters and arrays
CN  1, 1, 1            ' limit/home active high; latch on rising edge
SH  A                  ' enable A
JS  #HOME              ' run homing routine -> A=0 at A_start

B0 = _RPB              ' snapshot belt position
A0 = _RPA              ' = 0 right after home
S  = 0                 ' running total of IP offsets we've issued
last_B = B0            ' "lock point" starts at engagement point

GA B                   ' set B as master
GR -0.4096 * xratio    ' engage gearing
AL B                   ' arm B-latch on Input 2 for first popsicle

II 2,2,,2              ' (optional) raise #ININT when Input 2 goes high,
                       ' as a redundant trigger to re-arm the latch
JP #LOOP
```

### 5.2 Sensor edge handler

The hardware latch captures the B count automatically; we just need to (a) drain it into the queue and (b) re-arm. Two equivalent approaches:

**Option A — polled in the main loop (simpler, ~1 ms latency):**

```
#CHKSEN
JP #DONESEN, _ALB = 1            ' still armed -> no new edge
' Latch fired:
popsicle_B = _RLB + sensor_offset_b
JS  #ENQ, qcount < QSIZE          ' drop edge if queue is full (TODO: alarm)
AL  B                             ' re-arm for the next popsicle
#DONESEN
EN
```

**Option B — interrupt-driven (`#ININT`):** lower latency, but the latch alone is already deterministic to ±1 sample, so polling is usually fine. Keep `#ININT` only as a safety net.

```
#ENQ
bqueue[qtail] = popsicle_B
qtail = (qtail + 1) % QSIZE
qcount = qcount + 1
EN
```

### 5.3 Main loop

```
#LOOP
JS  #CHKSEN                       ' drain any new sensor edges into queue

JP  #LOOP, qcount = 0             ' nothing to do; spin (gearing keeps stage in belt frame)

' Dequeue head:
target_B = bqueue[qhead]
qhead    = (qhead + 1) % QSIZE
qcount   = qcount - 1

' Plan and execute the relative shift in belt frame:
JS  #PLAN_AND_MOVE                ' sets AC/DC/SP, issues IPA = dS, waits for AM A

' Optional final sync: wait until belt has actually carried popsicle to work-center.
' (Should be ~0 if the move planner did its job.)
MF  B = target_B

' Fire the inserter while still tracking the belt:
SB  outbit
WT  insert_ms
CB  outbit

last_B = target_B
JP  #LOOP
```

### 5.4 Move planner — `#PLAN_AND_MOVE`

This is the heart of the new logic. It picks `SP` (and possibly `AC`/`DC`) so the stage arrives at the new lock-point **before** the popsicle reaches the work-center — but not so fast that it crashes a popsicle that hasn't arrived yet.

```
#PLAN_AND_MOVE
' --- compute distance ---
dS_a   = -gr * (target_B - last_B)        ' signed A-counts (relative move in belt frame)
absdS  = @ABS[dS_a]

' --- compute time available ---
curB   = _RPB
dB_to_target = target_B - curB             ' how much belt travel until popsicle at work-center
                                            ' (>0 = upstream of stage; <0 = already past)

' Estimate belt speed (counts/sec). Update with a low-pass filter elsewhere.
v_b    = belt_v_b
t_avail_ms = 1000 * dB_to_target / v_b      ' ms until popsicle reaches work-center

' --- pick speed ---
' Case 1: popsicle is already in (or past) the work window.
'         Move full speed; rely on AC/DC limits to avoid mech damage.
JP  #PLAN_FAST, dB_to_target <= sensor_offset_b   ' (i.e., popsicle already past sensor span)

' Case 2: popsicle is upstream; we have time.
'         Choose SP so the trap profile finishes in t_avail_ms - guard_ms.
'         For a triangular/trapezoidal trap with given AC=DC=a:
'             t_min = sqrt(4*absdS / a)         (triangular)
'             if t_min < t_avail-guard: use trap with cruise SP = absdS/(t_avail-guard) (clamped)
guard_ms = 50
t_budget = t_avail_ms - guard_ms
sp_plan  = absdS * 1000 / t_budget          ' counts/sec needed for pure-cruise
SP A = @MIN[sp_plan, SP_MAX]                ' clamp
AC A = AC_DEFAULT
DC A = DC_DEFAULT
JP  #PLAN_GO

#PLAN_FAST
SP A = SP_MAX
AC A = AC_DEFAULT
DC A = DC_DEFAULT

#PLAN_GO
' --- safety: do not let the new lock-point push the stage outside the work window ---
' Stage's position in belt frame after this IP step is bounded by ±(gr·spacing)/2 in steady state,
' but during the transient (between issuing IP and AM completing) we briefly cover dS_a.
JP  #SKIP, @ABS[S + dS_a] > work_window_a   ' would overshoot stage limit -> abort/alarm
IP A = dS_a
S = S + dS_a
AM A
EN

#SKIP
MG "MOVE ABORTED: would exceed work window"
EN
```

**Notes on the planner**

- `belt_v_b` should be measured continuously: e.g. every 100 ms compute `(B_now − B_prev) / dt` and low-pass it. Used only for *time budgeting*, not for the move itself — the move's accuracy comes from gearing + IP, not from the speed estimate.
- `SP_MAX`, `AC_DEFAULT`, `DC_DEFAULT`, `guard_ms`, `work_window_a` are tuning constants — list them in the user-parameter block at the top of the DMC file.
- Because IP is *additive on top of gearing*, the "trap profile" applied is in **stage frame**, not belt frame. That's exactly what we want: the controller naturally adds the gearing component during the trap.

### 5.5 Crash-avoidance for an upstream popsicle  *(spec line 10)*

If the next popsicle is detected *before it has entered the work area* (i.e., `target_B > curB`, large positive `dB_to_target`), the planner above already handles it: a small `sp_plan` makes the stage retract slowly so it arrives at the new lock-point *just before* the popsicle does, with the popsicle catching up rather than the stage racing into it.

If `target_B < curB − ε` (popsicle has already passed the work-center — should not happen unless we missed an edge), abort with an alarm. A spec decision is required here:

> **TODO (decision):** What should happen if a popsicle slips past the inserter? Options: (a) skip it and move to the next, (b) e-stop, (c) reverse the belt. Currently nothing handles this.

---

## 6. Open questions / TODOs

- [ ] **Spec line 9 is incomplete**: *"…distance to the next popsicle in the queue and the ___."* — likely meant *"…and the time available before the popsicle reaches the working area."* Confirm.
- [ ] **Sensor wiring**: the popsicle sensor must be on **digital Input 2** to feed the B-axis latch. Confirm with the electrical drawing.
- [ ] **Sensor offset (`sensor_offset_b`)**: distance from sensor beam to inserter centerline, in B-counts. Needs to be measured.
- [ ] **Work window** (`work_window_a`): mechanical travel limits of the linear stage from `A_start`. Needs to be measured.
- [ ] **Belt speed**: do we want a fixed `belt_v_b` parameter, or an online estimator? An estimator is more robust to belt speed changes.
- [ ] **Queue overflow behavior**: drop oldest, drop newest, or alarm?
- [ ] **Missed-popsicle behavior** (`target_B < curB`): skip / e-stop / reverse?
- [ ] **Popsicle pitch (`spacingi`)** is currently a fixed parameter — is the system expected to handle irregular spacing? (The queue mechanism already handles it; only the queue-sizing math depends on a worst-case minimum pitch.)
- [ ] **A-axis 32-bit position counter** monotonically increases while gearing is engaged. At a representative belt speed, estimate time to overflow and decide whether a periodic re-zero (between popsicles, with `DPA`) is needed.
- [ ] **Stick feed/empty detection**: should the inserter signal back to the Galil that a stick was actually loaded? If not, missed sticks go undetected.

---

## 7. Mapping to the existing `popsicle.dmc`

The current file (`GDK_code/popsicle.dmc`) implements steps 1, 4, and a fixed-pitch version of 6 — but disengages gearing during retract and assumes constant belt speed / constant spacing (`MF B = bstart + spacingb`). The expanded design above replaces:

- `GR 0` → *(removed)* gearing stays on
- `PA A = startpos; BG A; AM A` → `IP A = dS_a; AM A`  (move stays superimposed on gearing)
- `MF B = bstart + spacingb` → dequeue from `bqueue[]` populated by the latch handler

Everything else (homing, gear ratio, inserter output handling) carries over.
