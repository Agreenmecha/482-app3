# Galil DMC-41X3 Firmware Command Reference

> Revision: 1840 — 05/17/22  
> © 2022 Galil Motion Control

---

## Table of Contents

Legend
'   Comment
-   Subtraction Operator
#   Label Designator
#AMPERR   Amplifier error automatic subroutine
#AUTO   Subroutine to run automatically upon power up
#AUTOERR   Bootup Error Automatic Subroutine
#CMDERR   Command error automatic subroutine
#COMINT   Communication interrupt automatic subroutine
#FWERR   Firmware Error Automatic Subroutine
#ININT   Input interrupt automatic subroutine
#LIMSWI   Limit switch automatic subroutine
#MCTIME   MC command timeout automatic subroutine
#POSERR   Position error automatic subroutine
#SERERR   Serial Encoder Error Automatic Subroutine
#TCPERR   Ethernet communication error automatic subroutine
$   Hexadecimal
%   Modulo Operator
&   JS subroutine pass variable by reference
&   Bitwise AND Operator
( , )   Parentheses (order of operations)
*   Multiplication Operator
/   Division Operator
;   Semicolon (Command Delimiter)
@ABS   Absolute value
@ACOS   Inverse cosine
@AN   Analog Input Query
@ASIN   Inverse sine
@ATAN   Inverse tangent
@COM   Bitwise complement
@COS   Cosine
@FLOT   Convert Galil 4.2 to Floating Point
@FRAC   Fractional part
@IN   Read digital input
@INT   Integer part
@OUT   Read digital output
@REAL   Convert Floating Point to Galil 4.2
@RND   Round
@SIN   Sine
@SQR   Square Root
@TAN   Tangent
[,]   Square Brackets (Array Index Operator)
^   JS subroutine stack variable
^L^K   Lock program
^R^S   Master Reset
^R^V   Revision Information
_   Operand Overview
_GP   Gearing Phase Differential Operand
_LF   Forward Limit Switch Operand
_LR   Reverse Limit Switch Operand
|   Bitwise OR Operator
~   Variable Axis Designator
+   Addition Operator
<   Less than comparator
<=   Less than or Equal to comparator
<>   Not Equal to comparator
=   Equal to comparator
=   Assignment Operator
>   Greater than comparator
>=   Greater than or Equal to comparator
AB   Abort
AC   Acceleration
AD   After Distance
AF   Analog Feedback Select
AG   Amplifier Gain
AI   After Input
AL   Arm Latch
AM   After Move
AO   Analog Output
AP   After Absolute Position
AQ   Analog Input Configuration
AR   After Relative Distance
AS   At Speed
AT   At Time
AU   Set amplifier current loop
AV   After Vector Distance
AZ   Clear Latched Amplifier Errors
BA   Brushless Axis
BC   Brushless Calibration
BD   Brushless Degrees
BG   Begin
BI   Brushless Inputs
BK   Breakpoint
BL   Reverse Software Limit
BM   Brushless Modulo
BN   Burn
BP   Burn Program
BR   Brush Axis
BT   Begin PVT Motion
BV   Burn Variables and Array
BW   Brake Wait
BX   Sine Amp Initialization
BZ   Brushless Zero
CA   Coordinate Axes
CB   Clear Bit
CC   Configure Communications Port 2
CD   Contour Distance
CE   Configure Encoder
## Table of Contents

CF   Configure Unsolicited Messages Handle
CI   Configure Communication Interrupt
CM   Contour Mode
CN   Configure
CP   Dead band within which the motor is shut off (MO)
CR   Circle
CS   Clear Sequence
CW   Copyright information and Data Adjustment bit on/off
DA   Deallocate Variables and Arrays
DB   Range in which PID and antifriction bias are turned on (on band)
DC    Deceleration
DE   Dual (Auxiliary) Encoder Position
DF   Dual Feedback (DV feedback swap)
DH   DHCP Client Enable
DL   Download
DM   Dimension Array
DP   Define Position
DR   Configures I O Data Record Update Rate
DS   Range in which PID and antifriction bias are turned off (off band)
DT   Delta Time
DV   Dual Velocity (Dual Loop)
EA   Choose ECAM master
EB   Enable ECAM
EC   ECAM Counter
ED   Edit
EG   ECAM go (engage)
EI   Event Interrupts
ELSE   Else function for use with IF conditional statement
EM   Ecam modulus
EN   End
ENDIF   End of IF conditional statement
EO   Echo
EP   Cam table master interval and phase shift
EQ   ECAM quit (disengage)
ER   Error Limit
ES   Ellipse Scale
ET   Electronic cam table
EW   ECAM Widen Segment
EY   ECAM Cycle Count
FA   Acceleration Feedforward
FC   Distance-selectable feedforward gain
FE   Find Edge
FI   Find Index
FL   Forward Software Limit
FN   Distance from end of move when FC is engaged
FV   Velocity Feedforward
GA   Master Axis for Gearing
GD   Gear Distance
GM   Gantry mode
GR   Gear Ratio
HM   Home
## Table of Contents

HS   Handle Assignment Switch
HV   Homing Velocity
HX   Halt Execution
IA   IP Address
ID   Identify
IF   IF conditional statement
IH   Open IP Handle
II   Input Interrupt
IK   Block Ethernet ports
IL   Integrator Limit
IP   Increment Position
IT   Independent Time Constant - Smoothing Function
JG   Jog
JP   Jump to Program Location
JS   Jump to Subroutine
K1   Proportional gain during motion
K2   Integrator gain during motion
K3   Derivative gain during motion
KD   Derivative Constant
KI   Integrator
KP   Proportional Constant
KS   Step Motor Smoothing
LA   List Arrays
LC   Low Current Stepper Mode
LD   Limit Disable
LE   Linear Interpolation End
LI   Linear Interpolation Distance
LL   List Labels
LM   Linear Interpolation Mode
LS   List
LV   List Variables
LZ   Omit leading zeros
MB   Modbus
MC   Motion Complete
ME   Modbus array write enable
MF   Forward Motion to Position
MG   Message
MO   Motor Off
MR   Reverse Motion to Position
MT   Motor Type
MU   Multicast Address
MW   Modbus Wait
NB   Notch Bandwidth
NF   Notch Frequency
NO   No Operation
NZ   Notch Zero
OA   Off on encoder failure
OB   Output Bit
OC   Output Compare
OE   Off-on-Error
OF   Offset
## Table of Contents

OP   Output Port
OT   Off on encoder failure time
OV   Off on encoder failure voltage
P2CD   Serial port 2 code
P2CH   Serial port 2 character
P2NM   Serial port 2 number
P2ST   Serial port 2 string
PA   Position Absolute
PF   Position Format
PL   Pole
PR   Position Relative
PT   Position Tracking
PV   PVT Data
PW   Password
QD   Download Array
QH   Query Hall State
QQ   Clear Sample Time Overflow
QR   I O Data Record
QS   Error Magnitude
QU   Upload Array
QZ   Return Data Record information
RA   Record Array
RC   Record
RD   Record Data
RE   Return from Error Routine
REM   Remark
RI   Return from Interrupt Routine
RL   Report Latched Position
RP   Reference Position
RS   Reset
SB   Set Bit
SC   Stop Code
SD   Limit Switch Deceleration
SH   Servo Here
SI   Configure the special Galil SSI feature
SL   Single Step
SM   Subnet Mask
SP   Speed
SS   Configure the special Galil BiSS feature
ST   Stop
SY   Serial encoder BiSS active level
TA   Tell amplifier error status
TB   Tell Status Byte
TC   Tell Error Code
TD   Tell Dual Encoder
TE   Tell Error
TH   Tell Ethernet Handle
TI   Tell Inputs
TIME   Time Operand
TK   Peak Torque Limit
TL   Torque Limit
## Table of Contents

TM   Update Time
TN   Vector Tangent
TP   Tell Position
TR   Trace
TS   Tell Switches
TT   Tell Torque
TV   Tell Velocity
TW   Timeout for MC trippoint
TZ   Tell I O Configuration
UI   User Interrupt
UL   Upload
US   USB port configuration
VA   Vector Acceleration
VD   Vector Deceleration
VE   Vector Sequence End
VF   Variable Format
VM   Vector Mode
VP   Vector Position
VR   Vector Speed Ratio
VS   Vector Speed
VV   Vector Speed Variable
WH   Which Handle
WT   Wait
XQ   Execute Program
YA   Step Drive Resolution
YB   Step Motor Resolution
YC   Encoder Resolution
YR   Error Correction
YS   Stepper Position Maintenance Mode Enable, Status
ZA   User Data Record Variables
ZN   Negative Antifriction Bias
ZP   Positive Antifriction Bias
ZS   Zero Subroutine Stack
## Table of Contents

## Legend
Burnable
Not BurnableDescriptionCommands with the "burnable" icon can be saved into memory with the BN command. If a reset is issued, the value of thecommand with this icon will persist if it has been burned into memory.
Scaled By TMDescriptionAny command with the "scaled by TM" icon will be automatically adjusted whenever a change is made to the TM setting.Commands with this icon are dependEnt on the sample rate.
TrippointDescriptionA command with the "trippoint" icon will halt further program execution until the trippoint's condition is satisfied. Most trippointscannot be issued as discrete commands, and are only valid in programs.
Valid In Program
Not Valid In ProgramDescriptionCommands with the "valid in program" icon can be used inside of a DMC program that is run locally on the controller. Certaincommands may not be used in the program space, and can only be issued as discrete command from an external source such asa terminal.
Valid In Terminal
Not Valid In TerminalDescriptionWhen communicating with a controller externally, only commands which are "valid in terminal" may be sent to the controller asdiscrete commands. Some commands are only valid when executed in a DMC program and cannot be issued independently.
Valid In Motion
Not Valid In MotionDescriptionIf a command is "valid in motion" then it may be executed while an axis is in motion. Some commands may not be executed whilecertain axes are in motion, and can only be executed when the associated axis is stopped.
Variable Axis SupportedDescriptionCommands with the "variable axis supported" icon support the use of variable axes when using the '~'. See '~' for more details.

---

## `'` — Comment
*Category: PROGRAMMING*


**Syntax:**
```
' str
```

### Description
The ' allows for a user to insert in a comment on a blank line or after a command following a semicolon ";". See examples for valid uses of '.

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
strStringComments added intoprogram
Comment strings are restricted to the maximum row size for a program. This will vary percontroller.

### Remarks
Comments will be downloaded to controller, thus taking up program space and execution time.
See REM for comments that will not download to controller.

### Examples
```dmc
'Galil DMC Code Example
REM This comment is not downloaded to controller and does not take up program
REM   space or execution time
'This comment is downloaded to controller and takes up program space
SH AB;'Comments following a command MUST be preceeded by a semi-colon.
KP 10'This is NOT valid use of the '
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `-` — Subtraction Operator
*Category: PROGRAMMING, MATH FUNCTIONS*


**Syntax:**
```
n0 - n1
```

### Description
The subtraction operator takes any two values and returns a value equal to the difference of the arguments.

### Arguments
| Argument | Min | Max | Default | Resolution | Description |
| --- | --- | --- | --- | --- | --- |
| n0 | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 | Value to subtract from |
| n1 | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 | Value to subtract |

### Remarks
An operator is not a command and is not valid individually.Evaluation occurs left to right. Use parenthesis for operator precedence.n0 and n1 may also be variables, array elements, operands, or @ functions (e.g. @SIN[]).

### Examples
```dmc
'Galil DMC Code Example
'Terminal Example
:apple = 10-4
:banana = apple - 3
:MG banana - 1
 2.0000
:
```
```dmc
'Galil DMC Code Example
REM It is recommended that parenthesis be used when more than one mathmatical 
REM   operation is combined in one command.
cherry = ((10*30)-(60/30));' evaluates as 298
date = 10*30-60/30;' evalutes as 8
EN
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `#` — Label Designator
*Category: PROGRAMMING, SUBROUTINE*


**Syntax:**
```
#str
```

### Description
The # denotes the name of a program label, for example, #move. Labels are often used to implement subroutines or loops. Labels are either user-definedor are reserved names, called "automatic subroutines", that automatically execute when a particular event occurs.

### Arguments
| Argument | Min | Max | Default | Resolution | Description |
| --- | --- | --- | --- | --- | --- |
| str | 1 char | 7 chars | N/A | String | Name of label |

### Remarks
Labels can include the characters A-Z, a-z, 1-9. Numbers can not be the first character. All other characters are invalid.A label can only be defined at the beginning of a new line.The number of labels available can be queried with MG _DL.LL returns the current label table in the controller.Galil recommends that at least the first character be lowercase for user labels to differentiate from automatic subroutines.Automatic subroutines are listed in the command reference starting with a # character.
There is a maximum of 510 labels available.

### Examples
```dmc
'Galil DMC Code Example
REM A sample FOR loop
REM Routine will run 10 times and sum all integers 1 through 10
sum=0;' Variable to hold sum of integers
i=1;' Create a counter
#for
sum=sum+i;' Add counter to sum
i=i+1;' Increment counter
JP#for,(i<=10)
EN
```
```dmc
'Galil DMC Code Example
REM A sample Do-While loop
REM Routine will run while A axis main encoder position is under 100 counts
#while
WT10;' Wait 10 mseconds
JP#while,(_TPA<100);' Loop back if position is under 100 counts
MG"Position is equal or greater than 100"
EN
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `#AMPERR` — Amplifier error automatic subroutine
*Category: PROGRAMMING, ERROR CONTROL, SUBROUTINE*


**Syntax:**
```
#AMPERR
```

### Description
Automatic subroutine used to run code when a fault occurs on a Galil amplifier. See the TA command and individual amplifier information in the controlleruser manual.

### Arguments
Label must be the first element on a line of code.

### Remarks
Use RE to return from the AMPERR subroutine.See the TA command for more information.See the AZ command for more information on clearing latched amplifier errors.Thread 0 does not need to be running for #AMPERR to be executed. This was a requirement on earlier products.When an external servo driver is used on an axes where the AMP-43000 is also installed, the axis should be setup as a brushed motor (BRm=1), otherwisethe lack of hall inputs will cause an amplifier error.

### Related Commands
AG - Amplifier GainAU - Set Amplifier Current LoopAZ - Clear Amplifier ErrorsMT - Motor TypeTA - Tell Amplifier ErrorTK - Peak Torque LimitTL - Torque Limit

### Examples
```dmc
'Galil DMC Code Example
'this code will run in the event of an amplifier error, 
'setting a digital output and notifying the operator.
```
```dmc
#AMPERR
 'Set a digital bit to signal an amplifier error to peripheral hardware
 SB4
```
```dmc
 'Send a message to the user                     
 MG"An amplifier error has occurred"
```
```dmc
'Return from the AMPERR subroutine, restoring trippoints that were running
RE1*
```
```dmc
## Author: Galil Motion Control
## Date: 3.3.2020
## Controller Firmware: 4103 r1.3e
// This is an example of a #AMPERR automatic subroutine.
// The best method to demonstrate the behavior of this example is to assert the ELO input.
#AUTO
// Setup the amplifier for the A axis.
MO         // disable all motors to configure axes
AZ2        // enable enhanced error clearing mode
MTA=1      // set motor type for servo motor
AGA=1      // set amplifier gain
AUA=9      // set current loop gain
TLA=3      // set continuous torque limit to 3V
TKA=6      // set peak torque limit to 6V
```
```dmc
// Set motion parameters
SPA=4000   // set speed of the A axis to 4000 counts/sec
ACA=16000  // set acceleration of the A axis to 16000 counts/sec/sec
DCA=16000  // set deceleration of the A axis to 16000 counts/sec/sec
```
```dmc
// Set tuning parameters
KPA=6      // set proportional term for the A axis to 6
KDA=64     // set derivative term for the A axis to 64
KIA=0      // set integrator term for the A axis to 0
```
```dmc
// Put the program into debug mode.
debug=1    // send message for amplifier errors when debug=1
```

---

## // Main routine that commands motion forward and backward for the A axis.#main;     // label for main application programSHA        // enable A axis
```dmc
// Command motion forward and backward.
#loop      // label to jump back to for loop
PAA=4000   // command motion forward
BGA        // begin motion
AMA        // wait for motion to finish before continuing program
PAA=0      // command motion backward
BGA        // begin motion
AMA        // wait for motion to finish before continuing program
JP#loop    // jump up to line with #loop label
EN
```
```dmc
// #AMPERR automatic routine
// This routine stops motion, sets the indicator lights to error.
#AMPERR    // Amplifier Error Automatic Subroutine
ST;AM      // stop motion and wait until motion is finished on all axes
CB1;SB2    // set indicator lights tied to outputs 1 and 2 to error
MO;WT2     // disable all axes
```
```dmc
JS#report,(debug=1) // print messages if in debug mode
```
```dmc
// Clear any latched amplifier errors and message to the terminal if in debug mode
IF((_TA3&64)|(_TA3&128))  // if there are any latched amplifier errors
    AZ1;WT4               // clear latched amplifier errors
    IF(debug=1)           // print message if in debug mode
        MG"Latched amplifier error cleared"
    ENDIF
ENDIF
```
```dmc
// Create variables to track amplifier error states
ta0=0      // variable to keep track of _TA0
ta3=0      // variable to keep track of _TA3
```
```dmc
// Loop to check if there is still an amplifier error reported.
// While in debug mode, this will send a message to the terminal when any amplifier error state changes.
#check
IF((ta0<>_TA0)|(ta3<>_TA3))       // if the state of the amplifier errors has changed
    ta0=_TA0;ta3=_TA3             // set variables to new reported amplifier error state
    JS#report,(debug=1)           // print messages if in debug mode
ENDIF
WT2
JP#check,((_TA0<>0)|(_TA3<>0))    // jump back to #check if there is still an error
IF(debug=1)                       // print message if in debug mode
  MG"No amplifier errors"
ENDIF
```
```dmc
// When there are no reported errors, set the indicator lights to operating and return to the main program
ZS0       // zero the stack
SB1;CB2   // set indicator lights tied to outputs 1 and 2 to operating
JP#main   // jump back to main program
EN
```
```dmc
// Debug routine for sending messages when an amplifier error is reported
#report;
IF(_TA0&1)                // message for Over-Current error on axis bank A-D
MG "Over-Current amplifier error on axis bank A-D"
ENDIF
IF(_TA0&16)               // message for Over-Current error on axis bank E-H
MG "Over-Current amplifier error on axis bank E-H"
ENDIF
IF(_TA0&2)                // message for Over-Voltage error on axis bank A-D
MG "Over-Voltage amplifier error on axis bank A-D"
ENDIF
IF(_TA0&32)               // message for Over-Voltage error on axis bank E-H
MG "Over-Voltage amplifier error on axis bank E-H"
ENDIF
IF(_TA0&4)                // message for Over-Temperature error on axis bank A-D
MG "Over-Temperature amplifier error on axis bank A-D"
ENDIF
IF(_TA0&64)               // message for Over-Temperature error on axis bank E-H
MG "Over-Temperature amplifier error on axis bank E-H"
ENDIF
IF(_TA0&8)                // message for Under-Voltage error on axis bank A-D
MG "Under-Voltage amplifier error on axis bank A-D"
ENDIF
IF(_TA0&128)              // message for Under-Voltage error on axis bank E-H
MG "Under-Voltage amplifier error on axis bank E-H"
ENDIF
IF((_TA3&1)|((_TA3&2))    // message for ELO
MG "ELO input asserted"
ENDIF
EN
```

---

## `#AUTO` — Subroutine to run automatically upon power up
*Category: PROGRAMMING, SUBROUTINE*


**Syntax:**
```
#AUTO
```

### Description
Defines the automatic entry point of embedded DMC code. When power is applied to the controller, or after the controller is reset, the program willautomatically begin executing at this label. When no host software is used with the controller, #AUTO is required to run an application program on thecontroller stand-alone.

### Arguments
Label must be the first element on a line of code.

### Remarks
Use EN to end the routineThread 0 is used to execute #AUTO on startup
The BP command must be used to burn a program into EEPROM for the #AUTO to function.

### Examples
```dmc
'Galil DMC Code Example
'On startup, this code will create a 50% duty cycle square wave on output 1 with a period of 1 second.
#AUTO;'     Start on powerup
 SB 1;'     Set bit 1
 WT 500;'   Wait 500msec
 CB 1;'     Clear bit 1
 WT 500;'   Wait 500msec
JP #AUTO;'  Jump back to #AUTO 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `#AUTOERR` — Bootup Error Automatic Subroutine
*Category: PROGRAMMING, ERROR CONTROL, SUBROUTINE*


**Syntax:**
```
#AUTOERR
```

### Description
Automatic subroutine that runs code upon power up if the firmware detects errors. If the EEPROM is corrupted, #AUTOERR will run. The EEPROM isconsidered corrupt if the checksum calculated on the bytes in the EEPROM do not match the checksum written to the EEPROM.For SSI and BiSS operation, #AUTOERR will also run if the time to acquire serial position data exceeds 90% of the hardware sample loop. This type of erroris very rare and should never occur in normal operation.

### Arguments
Label must be the first element on a line of code.

### Remarks
Use EN to end the routineThe type of checksum error can be queried with MG_RS
For SSI and BiSS operation
In the event of a serial position acquisition timeout, the following will occur:
The controller will resetThe controller servo loop will not run, TM will be set to zeroTC1 will return "143 TM timed out"The automatic subroutine #AUTOERR will run, if presentThe Error output will be setWhen using serial encoders (SSI or BiSS), the #AUTOERR should follow these guidlines
IF _TC=143 do not employ any trippoints in following code because the timer interrupt is suspendedSerial encoders can be disabled with the commands SIn=0 or SSn=0 where n is the axis indicator ABCDEFG or HIn order to re-enable the timer interrupt issue "TM n" where n is the servo update period in us (usually n=1000). See TM for more details

### Examples
```dmc
'Galil DMC Code Example
'Code detects a checksum error and notifies the user
#AUTOERR
 MG"EEPROM ERROR ",_RS
EN
```
```dmc
'Galil DMC Code Example
'Use for BiSS and SSI only (-SER firmware)
'Distinguishing between a serial timeout
' condition and an EEProm condition
#AUTOERR
IF _TC=143
REM BiSS or SSI timeout
REM No trippoints in this clause
REM Print message to DMC-4020 LCD
 LU0
 MG"BiSS"{L1}
 MG"Timeout"{L2}
 SSA=0
 SSB=0
ELSE
REM Checksum error
REM trippoints ok here
REM Print message to DMC-4020 LCD
 LU0
 MG"EEProm:"{L1}
 MG{Z10.0}_RS{L2}
ENDIF
EN
```
#AUTOERR applies toDMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105

---

## `#CMDERR` — Command error automatic subroutine
*Category: PROGRAMMING, ERROR CONTROL, SUBROUTINE*


**Syntax:**
```
#CMDERR
```

### Description
Automatic subroutine that runs code when a DMC code error occurs. Without #CMDERR defined, if an error (see TC command) occurs in an applicationprogram running on the Galil controller, the program (and all threads) will stop.

### Arguments
Label must be the first element on a line of code.

### Remarks
Use EN to end the routine#CMDERR will only run from errors generated within embedded DMC code, not from the terminal or hostIn a single threaded application (Thread 0 only), the EN command in the #CMDERR routine will restart thread 0 where it left off.In a multi-threaded application, the thread that has an error will be halted when a command error occurs. Thread 0 will be interrupted to run the#CMDERR routine but other threads will continue to run.
In order to restart the thread that encountered the error, see the example in Chapter 7 of the User Manual and the _ED operand.
Thread 0 does not need to be running in order for the #CMDERR routine to execute.

### Examples
```dmc
'Galil DMC Code Example
'This code will put the motion controller in Position Tracking mode.
'Variable "target" is updated from the terminal or from a host program
'to specify a new target.  #CMDERR is used to detect a bad target value.
#start
DPA=0;'      Define current position as zero
PTA=1;'      Turn on position tracking
target=0;'   Initialize target variable
#track;'     Start tracking
PAA=target;' Track to current value of target
WT500;'      Wait 500 ms
JP#track;'   Continue to track
'
'
#CMDERR;' runs if an error occurs
JP#done,_TC<>6 ;'check that an out of range occured (See TC)
MG"Value ",target," is out of range for Position Tracking"
target=_PAA ;' reset target
#done
EN1 ;'return to tracking logic 
```
#CMDERR applies toDMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105

---

## `#COMINT` — Communication interrupt automatic subroutine
*Category: PROGRAMMING, SUBROUTINE*


**Syntax:**
```
#COMINT
```

### Description
Automatic subroutine to provide interrupt driven communications from the serial port. #COMINT can be configured by the CI command to run eitherwhen any character is received, or when a carriage return is received over the com port. The auxiliary port is used if equipped.

### Arguments
Label must be the first element on a line of code.

### Remarks
Use EN to end the routine#COMINT runs in thread 0, and an application must be running in thread 0 in order for #COMINT to be enabled.Code running in thread zero will be interrupted by the #COMINT subroutine.It is important to handle the interrupt condition and return without delay. The controller will continue to receive data and update the data operands(P1CH,P2CH, etc) while in #COMINT. This can lead to missed characters, numbers, and strings if #COMINT is unnecessarily delayed.It is the user's responsiblity to ensure the communication buffer is not filled when in this mode, otherwise the controller will report error code 5 "InputBuffer Full". The buffer on the controller is cleared when either of the two following conditions are met:
A carriage return is recieved on the communication port.CI -1 is called.

### Examples
```dmc
'Galil DMC Code Example
#A;                           'Program Label
 CC9600,0,1,0
 CI2;                         'interrupt on any character
#Loop
 MG "Loop";                   'print a message every second
 WT 1000
 JP#Loop
#COMINT
 MG "COMINT:", P2CH{S1};      'print a message and the received character
 CI -1;                       'Clear the buffer of the received character
EN1,1;                        ' End this subroutine, re-arming trip points that 
'                             were running and re-enabling the CI mask 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC2105*

---

## `#FWERR` — Firmware Error Automatic Subroutine
*Category: PROGRAMMING, SUBROUTINE*


**Syntax:**
```
#FWERR
```

### Description
Automatic subroutine to run when the servo sample overflows. Many features require that the controller perform an action every sample. Running manyof these features simultaneously can lead to there not being enough time to complete every action. See remarks for a list of these features. For themajority of applications, this will never occur. This behavior should only occur when running a low sample time (TM) and using absolute encoders with ahigh number of bits at a low clock frequency.

### Arguments
Label must be the first element on a line of code.

### Remarks
The following are features, and their associated DMC comands, which add a non-negligible amount of time to the servo sample calculations.
Serial Encoders (SI/SS)Analog Encoders (AF)Notch Filter (NF,NZ,NB)Low Sample Time setting (TM)
Use EN to end the routine.#FWERR runs on thread 0. Code does not need to be running in thread 0 for #FWERR to be enabled._QQ reports a value based on whether the interrupt overflow event has occured. See QQ for more details.
When the servo interrupt overlows, the following will occur:
_QQ is set to 1.#FWERR, if present, will run.The notch filter is turned off.Serial and Analog feedback is disabled.All axes are aborted (See AB command).SC will report 41 for all that were profiling.

### Examples
```dmc
'Galil DMC Code Example
'Code detects a checksum error and notifies the user
#FWERR
MG "Interrupt overflow event occurred:" ,_QQ; 'printing the _QQ operand showing that the interrupt has overflown
QQ; 'returns the _QQ operand to 0
MG "Shutdown for diagnostics"
EN
```

---

## `#ININT` — Input interrupt automatic subroutine
*Category: PROGRAMMING, IO, SUBROUTINE*


**Syntax:**
```
#ININT
```

### Description
The #ININT subroutine is used to execute specific code when inputs specified by the II command are in the desired state.

### Arguments
Label must be the first element on a line of code.

### Remarks
Use the II command to enable the routine.Use RI to exit the routine.To make an unconditional jump from #ININT, there are two methods for re-enabling the interrupt capability
Issue a ZS and then re-issue the command II before the JPor, use a "null" routine. The "null" routine allows for the execution of the RI command before the unconditional jump. For more information seeApplication Note #2418, http://www.galil.com/download/application-note/note2418.pdf

### Examples
```dmc
'Galil DMC Code Example
II 1,1,,0;'                 Specify interrupt on input 1 only, and triggers when input 1 = 0.
EN;'                        End Program
#ININT;'                   Interrupt subroutine
'                           The code the user wants to run when II triggers goes here.
WT100;'                     Debounce the input.                       
RI 1;'                      Return to main program, re-enabling trip point.
'                           Specify RI 0 if it is not desired to re-enable trip points. 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `#LIMSWI` — Limit switch automatic subroutine
*Category: PROGRAMMING, ERROR CONTROL, SUBROUTINE*


**Syntax:**
```
#LIMSWI
```

### Description
Automatic sub for running user-defined code on a limit switch event. A limit switch event requires the following conditions.
1. Motion profiling in the direction of the given limit. I.E. RPm increasing for forward switch, RPm decreasing for reverse switch.2. Limit switch toggles active, either a hardware or software limit. See CN for inverting the active sense of the limit swithes.
Without #LIMSWI defined, the controller will issue ST on the axis when its limit switch is tripped during motion in the direction of the switch. With #LIMSWIdefined, code is executed in addition to the stop.In lieu of a controlled stop, the motor can turn off and coast stop in the event of a limit switch event. See OE for this feature.

### Arguments
Label must be the first element on a line of code.

### Remarks
Use RE to terminate the subroutineSee _LF and _LR for switch state operands
#LIMSWI runs on thread 0. Code does not need to be running in thread 0 for #LIMSWI to be enabled.LD can be used to disable the limit operationSD can be used to set the deceleration speed on the limit.

### Examples
```dmc
'Galil DMC Code Example
#Main        ;'print a message every second
  MG "Main"
  WT1000
JP#Main
EN
'
#LIMSWI ;'runs when a limit switch is tripped
MG "Limit switch:"{N}
IF ((_LFA = 0) | (_LRA = 0))
 MG "Axis A"
ENDIF
IF ((_LFB = 0) | (_LRB = 0))
 MG "Axis B"
ENDIF
RE1;' RE used to exit the #LIMSWI sub 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `#MCTIME` — MC command timeout automatic subroutine
*Category: PROGRAMMING, SUBROUTINE*


**Syntax:**
```
#MCTIME
```

### Description
Automatic sub used to run user-code if a Motion Complete (MC) trippoint times out. If the motor position does not reach or pass the target within thespecified timeout (TW), #MCTIME wil run if present.
MC uses position from TP for servos, or TD for steppers.

### Arguments
Label must be the first element on a line of code.

### Remarks
Use EN to terminate the subroutine

### Examples
```dmc
'Galil DMC Code Example
#BEGIN;'                 Begin main program
 TWA= 1000;'             Set the time out to 1000 ms
 PRA= 10000;'            Position relative
 BG A;'                  Begin motion
 MC A;'                  Motion Complete trip point
EN;'                     End main program
'
#MCTIME;'                Motion Complete Subroutine
 MG "A fell short";'     Send out a message
EN 1;'                   End subroutine 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `#POSERR` — Position error automatic subroutine
*Category: SUBROUTINE*


**Syntax:**
```
#POSERR
```

### Description
Automatic subroutine that runs user code when a position error event occurs. The factory default behavior of the Galil controller upon a position error(_TEn > _ERn) is to drive the error signal low only, turning on the red error LED. If OE is set to 1, the motor whose position error (TE) equals or exceedsits threshold (ER) will be turned off (MO). #POSERR is used to run code upon a position error, for example to notify a host computer.

### Arguments
Label must be the first element on a line of code.

### Remarks
Use RE to end the routine.
#POSERR runs on thread 0. Code does not need to be running in thread 0 for #POSERR to be enabled.#POSERR will also run when OE1 is set for an axes and that axis is also setup for encoder failure detection (see OA, OT, OV commands).

### Examples
```dmc
## Author: Galil Motion Control
## Date 6.3.2020
//how to recover from position error on the A axis
#POSERR
ST; // stop commanding motion to all axes
AM; // wait until motion is halted
MO; // disable all axes
MG "Position error occurred"; // send message indicating position error occured
SHA;//reenable A axis, position error is cleared
EN
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `#SERERR` — Serial Encoder Error Automatic Subroutine
*Category: SUBROUTINE*


**Syntax:**
```
#SERERR
```

### Description
During operation, the #SERERR automatic subroutine allows user code to run when there is a serial encoder fault. Encoder faults are reported in the_SSm0 operand, see the SS command for more details.

### Arguments
Label must be the first element on a line of code.

### Remarks
Use the RE command to end this routine.#SERERR runs on thread 0The following are the fault conditions which will cause #SERERR to interrupt.
Serial Encoder Faults
BiSSEncoder timeout (bit 0 of _SSm0)CRC error (bit 1 of _SSm0)Warning bit* (bit 2 of _SSm0)Error bit* (bit 3 of _SSm0)
The active level of the Error and Warning bits for BiSS must be configured with SY.

### Examples
```dmc
'Galil DMC Code Example
#SERERR
'Serial Error routine messages out to the host the type of error.
sercode=_SSA0
IF (sercode & 1)
 MG "BiSS Timeout"
ENDIF
IF (sercode & 2)
 MG "Invalid CRC"
ENDIF
IF (sercode & 4)
 MG "Warning Bit Set"
ENDIF
IF (sercode & 8)
 MG "Error Bit Set"
ENDIF
RE
```
```dmc
'Galil DMC Code Example
#SERERR;' display error, shutdown axis
MG"SERERR"
MG_SSA
REM disable axis A
OEA=1;ERA=0
REM disable axis serial encoder
SSA=0
RE
```

---

## `#TCPERR` — Ethernet communication error automatic subroutine
*Category: SUBROUTINE*


**Syntax:**
```
#TCPERR
```

### Description
Automatic subroutine which allows execution of user code when an TCP error event occurs. #TCPERR allows the application programmer to run code (forexample to reestablish the connection) when error code 123 occurs.

### Arguments
Label must be the first element on a line of code.

### Remarks
Use RE to exit this subroutine.Error code 123 (TCP lost sync or timeout) occurs when a message is sent out a handle, and no acknowledgement is received.
When this occurs, the handle the message was sent out is closed.#TCPERR can be used to reestablish the handle
Code does not need to be running in thread 0 for #TCPERR to run.

### Examples
```dmc
'Galil DMC Code Example
#loop
 MG {EA} "L"
 WT1000
JP#loop
```
```dmc
#TCPERR
 MG {P1} "TCPERR.  Dropped handle", _IA4
RE
```
```dmc
'Galil DMC Code Example
'example of reestablishing connection after TCPERR
'
#main
IHE=192,168,1,30;'   connect to 192,168,1,30
WT100;'              wait for handle to be established
ipe=_IHE0;'          save IP for reconnection use
n=0;'                connection counter
#loop;'              endless message loop
MG"hello"
WT1000
JP#loop
EN
```
```dmc
#TCPERR
IHE=>-3;'            make sure handle E is clear
JP#TCPERR,_IHE2<>0;' wait for clear handle
IHE=ihe;'            set handle with saved IP var
WT100
n=n+1;'              increment counter
JP#END,n>5;'         try at least 5 times
JP#TCPERR,_IHE2<>-2;'repeat if handle failed
#END
IF(n>5)
 MG"failed connection"
 HX0;'               stop code if connection lost
ELSE
 MG"Reconnected"
 n = 0;'             reset connection counter
ENDIF
RE
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,DMC52000,RIO47000,DMC2103*

---

## `$` — Hexadecimal
*Category: PROGRAMMING*


**Syntax:**
```
$n
```

### Description
The $ operator denotes that the following string is in hexadecimal notation.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n$80000000.0000 $7FFFFFFF.FFFF N/A$0.0001Value of hexadecimalnumber
32 bits of integer and 16 bits of fraction intotal

### Remarks
None

### Examples
```dmc
'Galil DMC Code Example
x = $7fffffff.0000              ;'store 2147483647 in x
y = x & $0000ffff.0000          ;'store lower 16 bits of x in y
z = x & $ffff0000.0000 / $10000 ;'store upper 16 bits of x in z 
```
$ applies toDMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,EDD37010,DMC2105

---

## `%` — Modulo Operator
*Category: MATH FUNCTIONS*


**Syntax:**
```
n % n
```

### Description
The % symbol is the modulo operator. It takes as arguments any two values, variables, array elements, operands, or At functions (@SIN[]) and returns avalue equal to the modulo of the arguments.
Mathmatical operations are calculated left to right rather than multiplication and division calculations performed prior to addition and subraction.Example:1+2*3 = 9, not 7
It is recommended that parenthesis be used when more than one mathmatical operation is combined in one command.Example:var = ((10*30)+(60/30));' evaluates as 302var = 10*30+60/30;' evalutes as 12

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -2,147,483,648 -2,147,483,647.9999 N/A |  |  | 1/65,536 | Value to use in modulo operation |  |

### Remarks
This is a binary operator (takes two arguments and returns one value). The result of this operation is a value, which is not valid on its own. It must becoupled with a command. See examples below.Mathmatical operations are calculated left to right rather than multiplication and division calculations performed prior to addition and subraction.
Example: 1+2*3 = 9, not 7It is recommended that parenthesis be used when more than one mathmatical operation is combined in one command.
Example: var = ((10*30)+(60/30));' evaluates as 302var = 10*30+60/30;' evalutes as 12

### Examples
```dmc
'Galil DMC Code Example
'Determine the day of week in n days
DM name[7];'Strings for day of week
name[0]="SUN"
name[1]="MON"
name[2]="TUE"
name[3]="WED"
name[4]="THU"
name[5]="FRI"
name[6]="SAT"
today=2;'Tuesday
days=123;'Days from now
dow=((days + today)%7);'calculate future day of week
MG"The day of week in ",days{Z10.0}," days will be ", name[dow]{S3.0}
EN
```
```dmc
REM Code Returns: The day of week in  123 days will be SAT 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,RIO47000,DMC1806*

---

## `&` — JS subroutine pass variable by reference
*Category: SUBROUTINE*


**Syntax:**
```
JS#str0(&str1,&str1,&str1,&str1,&str1,&str1,&str1,&str1)
```

### Description
The & symbol is used to pass a variable by reference on the subroutine stack. When passed by reference, a change to the local-scope variable changesthe global value.

### Arguments
| Argument | Min | Max | Default | Resolution | Description |
| --- | --- | --- | --- | --- | --- |
| str0 | 1 char | 7 chars | N/A | String Name of label to use for subroutine call |  |
| str1 | 1 char | 8 chars | N/A | String Name of variable to pass by reference to the subroutine |  |

### Remarks
Variables sent to a subroutine must be global variables that are already dimensioned.Do not dimension any variables in a subroutine when passing variables by reference. This can break the variable pointer.

### Examples
```dmc
'Galil DMC Code Example
REM Pass By Reference Example:
```
```dmc
#main
value=5;'         a value to be passed by reference
global=8;'        a global variable
JS#SUM(&value,1,2,3,4,5,6,7);' note first arg passed by reference
MG value;'        message out value after subroutine.
MG _JS;'          message out returned value
EN
'
#SUM;'            (* ^a,^b,^c,^d,^e,^f,^g)
^a=^b+^c+^d+^e+^f+^g+^h+global
EN,,^a
'notes-
'do not use spaces when working with ^
'If using global variables, they MUST be created before the subroutine is run
```
```dmc
'From Terminal
:
Executed program from program2.dmc
36.0000
36.0000 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC1806*

---

## `&` — Bitwise AND Operator
*Category: PROGRAMMING*


**Syntax:**
```
n & n
```

### Description
The & symbol is the bitwise AND operator used with IF, JP, and JS decisions, and also to perform bitwise ANDING of values.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 | Value to use with AND operator |  |

### Remarks
The result of this operation is a value, which is not valid on its own. It must be coupled with a command. See examples below.For IF, JP, and JS, the values used for n are typically the results of logical expressions such as (x > 2) & (y=8)

### Examples
```dmc
'Galil DMC Code Example
'Bitwise use
:var1=$F;'00001111
:var2=$F0;'1111000
:MG (var1 & var2)
0.0000
:MG var1
15.0000
:MG var2
240.0000
:
```
```dmc
'Galil DMC Code Example
'Conditional Use
var1=$F;'00001111
var2=$F0;'1111000
IF (var1 = $F) & (var2 = $F1)
 MG"True"
ELSE
 MG"False"
ENDIF
EN
```
```dmc
REM Returned: False 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `( , )` — Parentheses (order of operations)
*Category: MATH FUNCTIONS*


**Syntax:**
```
(n)
```

### Description
The parentheses denote the order of math and logical operations.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -2,147,483,648 2,147,483,647.9999 N/A |  |  | 1/65,536 | Math or logical expression for evaluation |  |

### Remarks
Note that the controller evaluates expressions from left to right, and does not follow academic algebraic standards (e.g. multiplication and division first,followed by addition or subtraction)It is required to use parentheticals to ensure intended mathematical precedence

### Examples
```dmc
'Galil DMC Code Example
:MG 1+2*3
 9.0000
:MG 1+(2*3)
 7.0000 
```
```dmc
'Galil DMC Code Example
:var1=$1F
:var2=$F
:MG var1&var2/$10
0.9375      ($0.F000)
:MG var1&(var2/$10)
0.0000      ($0.0000) 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `*` — Multiplication Operator
*Category: MATH FUNCTIONS*


**Syntax:**
```
n * n
```

### Description
The * symbol is the multiplication operator. It takes as arguments any two values, variables, array elements, operands, or At functions (@SIN[]) andreturns a value equal to the product of the arguments.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -2,147,483,648 -2,147,483,647 N/A |  |  | 1/65,536 | Value to use in multiplication operation |  |

### Remarks
This is a binary operator (takes two arguments and returns one value). The result of this operation is a value, which is not valid on its own. It must becoupled with a command. See examples below.Mathmatical operations are calculated left to right rather than multiplication and division calculations performed prior to addition and subraction.
Example: 1+2*3 = 9;' not 7It is recommended that parenthesis be used when more than one mathmatical operation is combined in one command.
Example: var = ((10*30)+(60/30));' evaluates as 302var = 10*30+60/30;' evalutes as 12

### Examples
```dmc
'Galil DMC Code Example
:var1 = (2 + 3) * 2
:var2 = var1 * 10
:MG var2 * 0.5
 50.0000
:
```

---

## `/` — Division Operator
*Category: MATH FUNCTIONS*


**Syntax:**
```
n0 / n1
```

### Description
The / symbol is the division operator. It takes as arguments any two values, variables, array elements, operands, or At functions (@SIN[]) and returns avalue equal to the quotient of the arguments.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 | Numerator of divide operation |  |
| n1 |  |  |  |  |  |  |
|  | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 | Denominator of divide operation |  |

### Remarks
This is a binary operator (takes two arguments and returns one value). The result of this operation is a value, which is not valid on its own. It must becoupled with a command. See examples below.Mathmatical operations are calculated left to right rather than multiplication and division calculations performed prior to addition and subraction.
Example: 1+2*3 = 9;' not 7It is recommended that parenthesis be used when more than one mathmatical operation is combined in one command.
Example: var = ((10*30)+(60/30));' evaluates as 302var = 10*30+60/30;' evalutes as 12

### Examples
```dmc
'Galil DMC Code Example
:var1 = 100/10
:var2 = var1/2
:MG var2 + 1
 6.0000
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `;` — Semicolon (Command Delimiter)
*Category: PROGRAMMING*


**Syntax:**
```
arg;arg;arg;arg
```

### Description
The semicolon operator allows multiple Galil commands to exist on a single line.

### Arguments
arg represents any valid Galil commandRemarks

### Examples
```dmc
'Galil DMC Code Example
SB1;WT500;CB1;' multiple commands separated by semicolons with a comment 
```
```dmc
'Galil DMC Code Example
#High;'     #High priority thread executes twice as fast as
 a = a + 1; b = b + 1
JP#High
```
```dmc
#Low;'      #Low when run in parallel
 c = c + 1
 d = d + 1
JP#Low
```
; applies toDMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,RIO47000,EDD37010,DMC2105

---

## `@ABS` — Absolute value
*Category: MATH FUNCTIONS*


**Syntax:**
```
@ABS[n]
```

### Description
The @ABS[] operation takes the absolute value of the given number. Returns the value if positive, and returns -1 times the value if negative.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,535 | Number to display as absolute value |  |

### Remarks
@ABS[] is an operand, not a command. It can only be used as an argument to other commands and operators

### Examples
```dmc
'Galil DMC Code Example
:MG @ABS[-2147483647]
 2147483647.0000 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `@ACOS` — Inverse cosine
*Category: MATH FUNCTIONS*


**Syntax:**
```
@ACOS[n]
```

### Description
The @ACOS operator returns in degrees the arc cosine of the given number.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -1 | 1 | N/A | 1/65,536 | Value used for arc cosine operation |  |

### Remarks
@ACOS[] is an operand, not a command. It can only be used as an argument to other commands and operators@ACOS[] is also referred to as the inverse cosine function

### Examples
```dmc
'Galil DMC Code Example
:MG @ACOS[-1]
 180.0000
:MG @ACOS[0]
 90.0000
:MG @ACOS[1]
 0.0001 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `@AN` — Analog Input Query
*Category: INTERROGATION, IO*


**Syntax:**
```
@AN[n]
```

### Description
The @AN[] operator returns the value of the given analog input in volts.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | 1 | 8 | N/A | 1 | Analog input to query |  |
| n | 1,000 | 8,999 | N/A | 1 | Read Modbus slave analog input See Remarks |  |

### Remarks
@AN[] is an operand, not a command. It can only be used as an argument to other commands and operators
Using @AN with a Modbus Slave
RIO as Modbus Slave3rd Party Modbus Slave Device
n is the I/O number calculated using the following equations:n = (HandleNum*1000) + (Bitnum-1)
HandleNum is the handle specifier from A to H.
Handle must be assigned to port 502 for Modbus comms (See IH)BitNum is the I/O point in the module from 1 to 8

### Examples
```dmc
'Galil DMC Code Example
:MG @AN[1] ;'print analog input 1
 1.7883
:x = @AN[1] ;'assign analog input 1 to a variable 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,RIO57400,DMC1806,DMC2105*

---

## `@ASIN` — Inverse sine
*Category: MATH FUNCTIONS*


**Syntax:**
```
@ASIN[n]
```

### Description
The @ASIN operator returns in degrees the arc sine of the given number.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -1 | 1 | N/A | 1/65,536 | Value used for arc sine operation |  |

### Remarks
@ASIN[] is an operand, not a command. It can only be used as an argument to other commands and operators@ASIN[] is also referred to as the inverse sine function

### Examples
```dmc
'Galil DMC Code Example
:MG @ASIN[-1]
 -90.0000
:MG @ASIN[0]
 0.0000
:MG @ASIN[1]
 90.0000 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `@ATAN` — Inverse tangent
*Category: MATH FUNCTIONS*


**Syntax:**
```
@ATAN[n]
```

### Description
The @ATAN operator returns in degrees the arc tangent of the given number.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -2,147,483,638 2,147,483,647 N/A |  |  | 1/65,536 | Value used for arc tangent operation |  |

### Remarks
@ATAN[] is an operand, not a command. It can only be used as an argument to other commands and operators@ATAN[] is also referred to as the inverse tangent function

### Examples
```dmc
'Galil DMC Code Example
:MG @ATAN[-10]
 -84.2894
:MG @ATAN[0]
 0.0000
:MG @ATAN[10]
 84.2894 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `@COM` — Bitwise complement
*Category: MATH FUNCTIONS*


**Syntax:**
```
@COM[n]
```

### Description
The @COM[] operation performs the bitwise complement (NOT) operation to the given number.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n-2,147,483,648 2,147,483,647 N/A1Value to perform bitwise complementoperation.
Integer interpreted as a 32-bitfield

### Remarks
@COM[] is an operand, not a command. It can only be used as an argument to other commands and operators

### Examples
```dmc
'Galil DMC Code Example
:MG {$8.0} @COM[0]
$FFFFFFFF
:MG {$8.0} @COM[$FFFFFFFF]
$00000000 
```
```dmc
'Galil DMC Code Example
'toggle output 1
OB 1,@COM[@OUT[1]] & 1;' read current state of output 1, take the bitwise complement, mask out bits. 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `@COS` — Cosine
*Category: MATH FUNCTIONS*


**Syntax:**
```
@COS[n]
```

### Description
The @COS[] operation returns the cosine of the given angle in degrees

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -32,768 | 32,767 | N/A | 1/65,536 Value in degrees to use for cosine operation |  |  |

### Remarks
@COS[] is an operand, not a command. It can only be used as an argument to other commands and operators

### Examples
```dmc
'Galil DMC Code Example
:MG @COS[0]
 1.0000
:MG @COS[90]
 0.0000
:MG @COS[180]
 -1.0000
:MG @COS[270]
 0.0000
:MG @COS[360]
 1.0000 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `@FLOT` — Convert Galil 4.2 to Floating Point
*Category: MATH FUNCTIONS*


**Syntax:**
```
@FLOT[n]
```

### Description
The @FLOT operation returns the 32bit floating representation of a number

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 Value to use for floating point conversion |  |  |

### Remarks
@FLOT[] is an operand, not a command. It can only be used as an argument to other commands and operators

### Examples
```dmc
'Galil DMC Code Example
:MG @FLOT[2.5] {$8.0}
$40200000
:MG @REAL[$40200000]
 2.5000
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC2105*

---

## `@FRAC` — Fractional part
*Category: MATH FUNCTIONS*


**Syntax:**
```
@FRAC[n]
```

### Description
The @FRAC operation returns the fractional part of the given number

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 | Value to use in fractional operation |  |

### Remarks
The sign of the number input to the operation will be maintained in the fractional output.@FRAC[] is an operand, not a command. It can only be used as an argument to other commands and operators

### Examples
```dmc
'Galil DMC Code Example
:MG @FRAC[1.2]
 0.2000
:MG @FRAC[-2.4]
 -0.4000 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

INTERROGATION, IO
@IN   Read digital input
@IN[n]
Usage
variable = @IN[value] Performs a function on a value or evaluated statement and returns a value
Description
The @IN operand returns the value of the given digital input (either 0 or 1).
Arguments
Argument
Min
Max
Default
Resolution
Description
Notes
n
N/A
General input to query
Inputs 9-16 only valid for 5-8 axis controller
N/A
Aux encoder input to
query
Used when repurposing aux encoder inputs as digital
inputs
n
1,000
8,999
N/A
Read Modbus slave bit
See Remarks
Remarks
@IN[] is an operand, not a command. It can only be used as an argument to other commands and operators
Using @IN with a Modbus Slave
n = (SlaveAddress*10000) + (HandleNum*1000) + ((Module-1)*4) + (Bitnum-1)
Slave Address is used when the ModBus device has slave devices connected to it and specified as Addresses 0 to 255. Please note that the use
of slave devices for modbus are very rare and this number will usually be 0.
HandleNum is the handle specifier where A is 1, B is 2 and so on.
Module is the position of the module in the rack from 1 to 16.
BitNum is the I/O point in the module from 1 to 4
Examples
'Galil DMC Code Example
:MG @IN[1]
1.0000
:x = @IN[1]
:x = ?;'  print digital input 1
1.000
@IN applies to
DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,RIO57400,DMC1806,DMC1802,DMC2105
@IN
## `@INT` — Integer part
*Category: MATH FUNCTIONS*


**Syntax:**
```
@INT[n]
```

### Description
The @INT operation returns the integer part of the given number. Note that the modulus operator can be implemented with @INT (see example below).

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 | Value to use in integer operation |  |

### Remarks
@INT[] is an operand, not a command. It can only be used as an argument to other commands and operators

### Examples
```dmc
'Galil DMC Code Example
:MG @INT[1.2]
 1.0000
:MG @INT[-2.4]
 -2.0000 
```
```dmc
'Galil DMC Code Example
#AUTO;'        modulus example
 x = 10;'      prepare arguments
 y = 3
 JS#mod;'      call modulus
 MG z;'        print return value
EN
```
```dmc
'subroutine: integer remainder of x/y (10 mod 3 = 1)
'arguments are x and y. Return is in z
#mod
 z = x - (y * @INT[x/y])
EN
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `@OUT` — Read digital output
*Category: INTERROGATION, IO*


**Syntax:**
```
@OUT[n]
```

### Description
Returns the value of the given digital output (either 0 or 1)

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | 1 | 16 | N/A | 1 | General output to query Outputs 9-16 only valid for 5-8 axis controller |  |
| n | 1,000 | 8,999 | N/A | 1 | Query Modbus slave bit | See Remarks |

### Remarks
@OUT[] is an operand, not a command. It can only be used as an argument to other commands and operators
Using @OUT with a Modbus Slave
n = (SlaveAddress*10000) + (HandleNum*1000) + ((Module-1)*4) + (Bitnum-1)
Slave Address is used when the ModBus device has slave devices connected to it and specified as Addresses 0 to 255. Please note that the useof slave devices for modbus are very rare and this number will usually be 0.HandleNum is the handle specifier where A is 1, B is 2 and so on.Module is the position of the module in the rack from 1 to 16.BitNum is the I/O point in the module from 1 to 4

### Examples
```dmc
'Galil DMC Code Example
:MG @OUT[1];'     print state of digital output 1
1.0000
:x = @OUT[1];'    assign state of digital output 1 to a variable 
```
@OUT applies toDMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,RIO57400,DMC1806,DMC1802,DMC2105

---

## `@REAL` — Convert Floating Point to Galil 4.2
*Category: MATH FUNCTIONS*


**Syntax:**
```
@REAL[n]
```

### Description
The @REAL operation returns the Galil 4.2 equivalent of a 32 bit floating point number

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -2,147,483,648 2,147,483,647 N/A |  |  | 1 32 bit floating point number to convert to Galil 4.2 integer |  |  |

### Remarks
@REAL[] is an operand, not a command. It can only be used as an argument to other commands and operators

### Examples
```dmc
'Galil DMC Code Example
:MG @FLOT[2.5] {$8.0}
$40200000
:MG @REAL[$40200000]
 2.5000
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC2105*

---

## `@RND` — Round
*Category: MATH FUNCTIONS*


**Syntax:**
```
@RND[n]
```

### Description
The @RND operation rounds the given number to the nearest integer.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 | Value to use in rounding operation |  |

### Remarks
@FRAC[] is an operand, not a command. It can only be used as an argument to other commands and operatorsThe sign of the number input to the operation will be maintained in the rounded output.

### Examples
```dmc
'Galil DMC Code Example
:MG @RND[1.2]
 1.0000
:MG @RND[1.6]
 2.0000
:MG @RND[-1.2]
 -1.0000
:MG @RND[5.7]
 6.0000
:MG @RND[-5.7]
 -6.0000
:MG @RND[5.5]
 6.0000
:MG @RND[-5.5]
 -5.0000 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `@SIN` — Sine
*Category: MATH FUNCTIONS*


**Syntax:**
```
@SIN[n]
```

### Description
The @SIN[] operation returns the sine of the given angle in degrees

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -32,768 | 32,767 | N/A | 1/65,536 Value in degrees to use for sine operation |  |  |

### Remarks
@SIN[] is an operand, not a command. It can only be used as an argument to other commands and operators

### Examples
```dmc
'Galil DMC Code Example
:MG @SIN[0]
 0.0000
:MG @SIN[90]
 1.0000
:MG @SIN[180]
 0.0000
:MG @SIN[270]
 -1.0000
:MG @SIN[360]
 0.0000 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `@SQR` — Square Root
*Category: MATH FUNCTIONS*


**Syntax:**
```
@SQR[n]
```

### Description
The @SQR operation takes the square root of the given number.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n-2,147,483,648 2,147,483,647 N/A1/65,536Value to use in square rootoperation
If n < 0, the absolute value is takenfirst.

### Remarks
@SQR[] is an operand, not a command. It can only be used as an argument to other commands and operators

### Examples
```dmc
'Galil DMC Code Example
:MG @SQR[2]
 1.4142
:MG @SQR[-2]
 1.4142 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `@TAN` — Tangent
*Category: MATH FUNCTIONS*


**Syntax:**
```
@TAN[n]
```

### Description
The @TAN[] operation returns the tangent of the given angle in degrees.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -32,768 | 32,767 | N/A | 1/65,536 Value in degrees to use for tangent operation |  |  |

### Remarks
@TAN[] is an operand, not a command. It can only be used as an argument to other commands and operators

### Examples
```dmc
'Galil DMC Code Example
:MG @TAN[23]
 0.4245
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `[,]` — Square Brackets (Array Index Operator)
*Category: PROGRAMMING*


**Syntax:**
```
str[n]
```

### Description
The square brackets are used to denote the array index for an array, or to denote an array name.
They are also used to designate the argument to a function, such as @ABS[n].

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| str | 1 char | 8 chars | N/A | String | Name of array to access | Must be a valid dimensioned array name. |
| n | -1 | 15,999 | N/A | 1 | Element of array to query n = -1 returns the array length |  |
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| str | 1 char | 8 chars | N/A | String | Name of array to access | Must be a valid dimensioned array name. |
| n | 0 | 399 | N/A | 1 | Element of array to query For RIO-47x00 |  |
|  | 0 | 999 | N/A | 1 | Element of array to query For RIO-47xx2 and RIO-473xx |  |

### Remarks
If the array will be passed by reference on the subroutine stack (JS), the array name MUST be 6 characters or less.

### Examples
```dmc
'Galil DMC Code Example
DM A[50]        ;'define a 50 element array
A[0] = 3        ;'set first element to 3
MG A[0]         ;'print element 0 
```
```dmc
'Galil DMC Code Example
#array
 DM A[5];'                  define a 5 element array
 A[0] = 3;'                 set first element to 3
 MG "A[0]=",A[0];'          print element 0
 len= A[-1];'               len now contains the length of A[]
 QU A[],0,len-1,1;MG"";'    print entire array
 MG "A[] length=",len;'     display Variable len
EN
```
```dmc
'Example Output from terminal
:XQ#array
:
A[0]= 3 
3, 4320, 216666, 217522, 607950 
A[] length= 5 
```
```dmc
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `^` — JS subroutine stack variable
*Category: PROGRAMMING*


**Syntax:**
```
^s
```

### Description
The ^ character provides local subroutine access for variables passed on the subroutine stack. Passing values on the stack is advanced DMCprogramming, and is recommended for experienced DMC programmers familiar with the concept of passing arguments by value and by reference.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| s | a | h | N/A | N/A | Stack variable name a,b,c,d,e,f,g,h supported |  |

### Remarks
See the JS command for a full explanation of passing stack variables.Passing parameters has no type checking, so it is important to exercise good programming style when passing parameters. See examples below forrecommended syntax.Do not use spaces in expressions containing ^.Global variables MUST be assigned prior to any use in subroutines where variables are passed by reference.Arrays passed on the stack must have names no longer than 6 chars.Stack zero has no local-scope variables. Accessing these variables from stack zero writes to stack 1's variable table.

### Examples
```dmc
'Galil DMC Code Example
#Add
JS#SUM(1,2,3,4,5,6,7,8) ;' call subroutine, pass values
MG_JS ;' print return value
EN
'
#SUM ;NO(^a,^b,^c,^d,^e,^f,^g,^h) Sums the values ^a to ^h and returns the result
EN,,(^a+^b+^c+^d+^e+^f+^g+^h) ;' return sum
```
```dmc
'Output from the previous program
:XQ#Add
36.0000 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC1806*

---

## `^L^K` — Lock program
*Category: SYSTEM CONFIG*


**Syntax:**
```
^L^K str,n
```

### Description
Locks user access to the application program. When locked, the ED, UL, LS, and TR commands will give privilege error #106. The application program willstill run when locked. Once the program is unlocked, it will remain accessible until a lock command or a reset (with the locked condition burned in) occurs.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
str0 char8 chars""StringController passwordstringPassword assigned with the PW command.
n0101Set lock/unlock state forcontroller
n = 1 locks the application program. n = 0 unlocks theapplication program.

### Remarks
The PW command can only be set while the application program is unlocked.^L^K ? will return a 0 if the controller is not locked, and a 1 if it is locked.
ASCII Values
CharDecHex^L120C^K110B

### Examples
```dmc
'Galil DMC Code Example
:PW test,test;'             Set password to "test"
:^L^K test,1;'              Lock the program
:LS;'                       Attempt to list the program
?
:TC 1
106 Privilege violation
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,RIO47000,DMC1806*

---

## `^R^S` — Master Reset
*Category: SYSTEM CONFIG*


**Syntax:**
```
^R^S
```

### Description
The Master Reset command resets the controller to factory default settings and erases EEPROM. A master reset can also be performed by installing ajumper at the location labeled MRST and resetting the board (power cycle or pressing the reset button). Remove the jumper after this procedure.

### Arguments
^R^S has no parameters

### Remarks
Sending a ^R^S over an Ethernet connection will cause the IP address to be cleared from the controller and will result in a timeout.
ASCII Values
CharDecHex^R1812^S1913

### Examples
```dmc
'Galil DMC Code Example
REM Example burns-in a non-default value for KP, does a standard reset with
REM the RS command, then performs a master reset with ^R^S.
```
```dmc
:KP?
 6.00
:KP10
:KP?
 10.00
:BN
:RS
```
```dmc
:KP?
 10.00
:^R^S
```
```dmc
:KP?
 6.00
:
```
^R^S applies toDMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,RIO57400,DMC52000,EDD37010,DMC2105

---

## `^R^V` — Revision Information
*Category: INTERROGATION*


**Syntax:**
```
^R^V
```

### Description
The Revision Information command causes the controller to return the firmware revision information.

### Arguments
^R^V has no arguments

### Remarks
Do not use ^ symbols to send ^R^V command. ^ symbols denote using the control (Ctrl) key when pressing the characters.
ASCII Values
CharDecHex^R1812^V2216

### Examples
```dmc
'Galil DMC Code Example
:^R^V
DMC4143 Rev 1.1a1
:
```
^R^V applies toDMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,RIO57400,DMC52000,EDD37010,DMC2105

---

## `_` — Operand Overview
Operand UsageOperands allow motion or status parameters of the controller to be incorporated into programmable variables and expressions. Most DMC commands havean equivalent operand - which are designated by adding an underscore (_) prior to the DMC command. An operand typically contains the value of thecommand associated with it, for instance _TPA contains the current position of axis A. Below is an example of proper and improper usage for an operand.Example Usage'Galil DMC Code Example'Correct usageMG _TPA;' Message the A Axis' current position.err = _TC;' Save the current error code to a variable, err.
```dmc
'Incorrect usage
_TPA;' Sending this to the controller will result in an error, as operands are not valid commands on their own. 
```
Special OperandsThe majority of DMC operands return information directly related to their command. However, there are a few operands which provide access to internalvariables that are not accessible by standard DMC commands. Below is a list of special operands which contain information not stored in a typical DMCcommand.
For more details on the content of these operands, see their associated command page.
Special OperandDescription_BNContains the controller's serial number._BVContains the number of axes on the controller._DAContains the number of array space left in the controller's memory._DLContains the number of label space left in the controller's memory._DMContains the number of array space left in the controller's memory._ED0Contains the line number where an error last occured._ED1Contains the thread where an error last occured._ED4Contains the thread ID of the thread evaluating the operand._HXnContains the running status of thread 'n'._NOContains a bitmask of the running threads._RSContains a bitmask of checksum errors._ULContains the number of variables left in the controller's memory._XQnContains the current line number of thread 'n'.TIMEContains the current value of the controller's free running clock.

---

## `_GP` — Gearing Phase Differential Operand
*Category: ECAM/GEARING, OPERAND ONLY*


**Syntax:**
```
_GPm
```

### Operands
- `_GPm`
- `Operand has special meaning, see Remarks`

### Description
The _GP operand contains the value of the specified slave's "phase differential" accumulated on the most recent change in the gear ratio between themaster and the slave axes. The value does not update if the distance over which the slave will engage is set to 0 with the GD command.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis of interest |  |

### Remarks
An operand is not valid individually. Instead, _GP would be used in an expression. See example below.Phase Differential is a term that is used to describe the lead or lag between a master axis and the specified slave axis due to gradual gear shift.See application note 2440 for more information on _GP and GD.

### Examples
```dmc
'Galil DMC Code Example
GA DA;'   Sets the A axis aux encoder as the gearing master for the A axis.  
GD1000;'  Set the distance that the master will travel to 1000 
'         counts before the gearing is fully engaged for the A 
'         axis slave.
AI-1;'    Wait for input 1 to go low.  In this example, this 
'         input is representing a sensor that senses an object 
'         on a conveyor.  This will trigger the controller to 
'         begin gearing and synchronize the master and slave 
'         axes together.
GR1;'     Engage gearing between the master and slave
p1=_TDA;' Sets the current A axis position to variable P1.  This 
'         variable is used in the next command
#wait
'         Wait for the aux encoder to move forward 1000 
'         encoder counts so the gearing engagement period is 
'         complete.  Then the phase difference can be adjusted 
'         for.  Note this example assumes forward motion.
JP#wait,  (_TDA < (p1+1000))
IP _GPA;' Increment the difference to bring the master/slave in 
'         position sync from the point that the GR1 command was 
'         issued.
EN;'      End Program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `_LF` — Forward Limit Switch Operand
*Category: IO, OPERAND ONLY*


**Syntax:**
```
_LFm
```

### Operands
- `_LFm`
- `Operand has special meaning, see Remarks`

### Description
The _LF operand contains the state of the forward limit.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis of forward limit switch |  |

### Remarks
_LF is an operand only with the following output:
_LFm = 1 when the limit switch state will allow motion in the positive direction._LFm = 0 when the limit switch state will not allow motion in the positive direction.This operand is not a direct readout of the digital input and is affected by the command CN.See Connecting Hardware in User Manual for active/inactive state
Values of _LF
Digital Input activation_LF value for CN-1_LF value for CN1On. Grounded for TTL, or sufficient activation current flowing for optos. 0 (forward motion prohibited) 1 (forward motion allowed)Off. Pullup for TTL, or insufficient activation current flowing for optos.1 (forward motion allowed)0 (forward motion prohibited)

### Examples
```dmc
'Galil DMC Code Example
MG _LFA;' Display the status of the A axis forward limit switch
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `_LR` — Reverse Limit Switch Operand
*Category: IO, OPERAND ONLY*


**Syntax:**
```
_LRm
```

### Operands
- `_LRm`
- `Operand has special meaning, see Remarks`

### Description
The _LR operand contains the state of the reverse limit.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis of reverse limit switch |  |

### Remarks
_LR is an operand with the following output
_LRm= 1 when the limit switch state will allow motion in the reverse direction._LRm= 0 when the limit switch state will not allow motion in the reverse direction.This operand is not a direct readout of the digital input and is affected by the command CN.See Connecting Hardware in User Manual for active/inactive state
Values of _LR
Digital input activation_LR value for CN-1_LR value for CN1On. Grounded for TTL, or sufficient activation current flowing for optos. 0 (reverse motion prohibited) 1 (reverse motion allowed)Off. Pullup for TTL, or insufficient activation current flowing for optos.1 (reverse motion allowed)0 (reverse motion prohibited)

### Examples
```dmc
'Galil DMC Code Example
MG _LRA;' Display the status of the A axis reverse limit switch
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `|` — Bitwise OR Operator
*Category: PROGRAMMING*


**Syntax:**
```
n | n
```

### Description
The | symbol is the bitwise OR operator used with IF, JP, and JS decisions, and also to perform bitwise ORING of values.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 | Value to use with OR operator |  |

### Remarks
For IF, JP, and JS, the values used for m are typically the results of logical expressions such as (x > 2) | (y=8)The result of this operation is a value, which is not valid on its own. It must be coupled with a command. See examples below.

### Examples
```dmc
'Galil DMC Code Example
'Bitwise use
var1=$F;'00001111
var2=$F0;'1111000
MG (var1 | var2)
EN
```
```dmc
REM Returned: 255.0000 (same as 11111111) 
```
```dmc
'Galil DMC Code Example
'Conditional Use
var1=$F;'00001111
var2=$F0;'1111000
IF (var1 = $F) | (var2 = $F1)
 MG"True"
ELSE
 MG"False"
ENDIF
EN
```
```dmc
REM Returned: True 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `~` — Variable Axis Designator
*Category: PROGRAMMING*


**Syntax:**
```
~s= "str"
~s= n
```

### Description
Variable axis designator. Each variable can be assigned an individual axis, a vector plane, or a virtual axis. Motion commands on the variable will then applyto the assigned axis.
Commands supporting variable axes are denoted in this command reference with the following icon.
Variable axis supported icon

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| s | a | h | N/A | N/A | Variable axis name a,b,c,d,e,f,g,h supported |  |
| str | "A" | "H" | N/A | String | Name of axis "A", "B", "C", "D", "E", "F", "G", "H" supported |  |
|  | "M" | "N" | N/A | String | Virtual axis "M", "N" supported |  |
|  | "S" | "T" | N/A | String | Coordinate System "S","T" supported |  |
| n | 0 | 7 | N/A | 1 | Index of the axis A= 0, B= 1, C= 2, etc. |  |
|  | 8 | 9 | N/A | 1 | Coordinate System S=8, T=9 |  |
|  | 10 | 11 | N/A | 1 | Virtual Axis M= 11, N=10 |  |

### Remarks
~s contains the axis number as defined by n and can be used in expressions (see example)

### Examples
```dmc
'Galil DMC Code Example
~a=2;~b=6;'     Sets ~a to 2 (Z axis).  Sets ~b to 6 (G axis)
MG"~a=",~a;'    Print axis number
MG"~b=",~b;'    Print axis number
PR~a=1000;'     Relative position move 1000 counts on ~a variable (set as Z axis)
JG~b=9000;'     Set jog speed of ~b variable (set as G axis) to 9000 cts/sec
BG~a~b;'        Begin motion on ~a and ~b variables (Z and G) 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `+` — Addition Operator
*Category: MATH FUNCTIONS*


**Syntax:**
```
n + n
```

### Description
The + symbol is the addition operator. It takes as arguments any two values, variables, array elements, operands, or At functions (@SIN[]) and returns avalue equal to the sum of the arguments.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 | Value to use in addition operation |  |

### Remarks
This is a binary operator (takes two arguments and returns one value). The result of this operation is a value, which is not valid on its own. It must becoupled with a command. See examples below.Mathmatical operations are calculated left to right rather than multiplication and division calculations performed prior to addition and subraction.
Example: 1+2*3 = 9;' not 7It is recommended that parenthesis be used when more than one mathmatical operation is combined in one command.
Example: var = ((10*30)+(60/30));' evaluates as 302var = 10*30+60/30;' evalutes as 12

### Examples
```dmc
'Galil DMC Code Example
:var1 = 1+2
:var2 = var1 + 1
:MG var2 + 2
 6.0000
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `<` — Less than comparator
*Category: PROGRAMMING, MATH FUNCTIONS*


**Syntax:**
```
n0 < n1
```

### Description
"Less than" comparator for testing if one value is less than another. Comparators are used in mathematical expressions, IFs, and in conditional jumps. Theresult is a boolean.
Comparators in DMC Code
SymbolComparator<Less than>Greater than=Equal to<=Less than or equal to>=Greater than or equal to<>Not equal to

### Arguments
| Argument | Min | Max | Default | Resolution   Description | Notes |
| --- | --- | --- | --- | --- | --- |
| n0 |  |  |  |  |  |
|  | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 Value to test |  |
| n1 | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 Value to test |  |

### Remarks
A comparator is not a command and is not valid individually. Instead, the above expression would be used as part of a jump (JP,JS), IF expression, orassignment. See examples below.If n0 < n1, the expression will evaluate to 1.0000. If the comparision is false, it will evaluate to 0.0000.Evaluation occurs left to right. Use parenthesis for operator precedence.

### Examples
```dmc
'Galil DMC Code Example
:bool= (1<2)
:MG bool
 1.0000
:bool= (1<0)
:MG bool
 0.0000
:
```
```dmc
'Galil DMC Code Example
REM Example to find the largest 
REM value in an array
REM
REM ***************************
REM Create an array and fill it
len= 5
DM array[len]
array[0]= 5
array[1]= 100.0001
array[2]= 42
array[3]= 3.14
array[4]= 100
JS #max;' call max subroutine
MG "Max value is ", max
EN
REM 
REM ****************************
REM Find max element in array
#max
i= 0
max = -2147483648;' start at min
#max_h
IF (array[i] > max)
 max = array[i]
ENDIF
i= i+1
JP #max_h, (i < len)
EN
REM
REM ****************************
REM Program output
REM :XQ
REM :
REM Max value is 100.0001 
```

---

## < applies to DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105

---

## `<=` — Less than or Equal to comparator
*Category: PROGRAMMING, MATH FUNCTIONS*


**Syntax:**
```
n0 <= n1
```

### Description
"Less than or Equal to" comparator for testing if one value is less than or equal to another. Comparators are used in mathematical expressions, IFs, and inconditional jumps. The result is a boolean.
Comparators in DMC Code
SymbolComparator<Less than>Greater than=Equal to<=Less than or equal to>=Greater than or equal to<>Not equal to

### Arguments
| Argument | Min | Max | Default | Resolution   Description | Notes |
| --- | --- | --- | --- | --- | --- |
| n0 |  |  |  |  |  |
|  | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 Value to test |  |
| n1 | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 Value to test |  |

### Remarks
A comparator is not a command and is not valid individually. Instead, the above expression would be used as part of a jump (JP,JS), IF expression, orassignment. See examples below.If n0 <= n1, the expression will evaluate to 1.0000. If the comparision is false, it will evaluate to 0.0000.Evaluation occurs left to right. Use parenthesis for operator precedence.

### Examples
```dmc
'Galil DMC Code Example
:bool= (1 <= 2)
:MG bool
 1.0000
:bool= (2 <= 2)
:MG bool
 1.0000
:bool= (3 <= 2)
:MG bool
 0.0000
:
```
```dmc
'Galil DMC Code Example
max= 2.05
min= 1.47
value = 0.025
JS #check
value = 1.471
JS #check
EN
REM
REM *******************************
REM Determine if in range
#check
inrange=0
IF ((value >= min) & (value <= max))
 inrange= 1
ENDIF
IF (inrange)
 MG "Value ",value," in range"
ELSE
  MG "Value ",value," NOT in range"
ENDIF
EN
REM
REM *******************************
REM Program output
REM :XQ
REM :
REM  Value 0.0250 NOT in range 
REM  Value 1.4710 in range 
```

---

## `<>` — Not Equal to comparator
*Category: PROGRAMMING, MATH FUNCTIONS*


**Syntax:**
```
n0 <> n1
```

### Description
"Not Equal to" comparator for testing if one value is not equal to another. Comparators are used in mathematical expressions, IFs, and in conditionaljumps. The result is a boolean.
Comparators in DMC Code
SymbolComparator<Less than>Greater than=Equal to<=Less than or equal to>=Greater than or equal to<>Not equal to

### Arguments
| Argument | Min | Max | Default | Resolution   Description | Notes |
| --- | --- | --- | --- | --- | --- |
| n0 |  |  |  |  |  |
|  | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 Value to test |  |
| n1 | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 Value to test |  |

### Remarks
A comparator is not a command and is not valid individually. Instead, the above expression would be used as part of a jump (JP,JS), IF expression, orassignment. See examples below.If n0 <> n1, the expression will evaluate to 1.0000. If the comparision is false, it will evaluate to 0.0000.Evaluation occurs left to right. Use parenthesis for operator precedence.

### Examples
```dmc
'Galil DMC Code Example
:bool= (1 <> 2)
:MG bool
 1.0000
:bool= (2 <> 2)
:MG bool
 0.0000 
```
```dmc
'Galil DMC Code Example
REM Lock out code until
REM a particular digital
REM input pattern is detected
#AUTO
JS#lock;'block until pattern
REM
REM
REM Rest of code here
REM
REM
EN
REM
REM *************************
#lock
JP #lock, (_TI0 <> 170)
EN
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `=` — Equal to comparator
*Category: PROGRAMMING, MATH FUNCTIONS*


**Syntax:**
```
n0 = n1
```

### Description
"Equal to" comparator for testing if one value is equal to another. Comparators are used in mathematical expressions, IFs, and in conditional jumps. Theresult is a boolean.
Comparators in DMC Code
SymbolComparator<Less than>Greater than=Equal to<=Less than or equal to>=Greater than or equal to<>Not equal to

### Arguments
| Argument | Min | Max | Default | Resolution   Description | Notes |
| --- | --- | --- | --- | --- | --- |
| n0 |  |  |  |  |  |
|  | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 Value to test |  |
| n1 | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 Value to test |  |

### Remarks
A comparator is not a command and is not valid individually. Instead, the above expression would be used as part of a jump (JP,JS), IF expression, orassignment. See examples below.If n0 = n1, the expression will evaluate to 1.0000. If the comparision is false, it will evaluate to 0.0000.Evaluation occurs left to right. Use parenthesis for operator precedence.

### Examples
```dmc
'Galil DMC Code Example
:bool= (1=0)
:MG bool
 0.0000
:bool= (3.14=3.14)
:MG bool
 1.0000
:
```
```dmc
'Galil DMC Code Example
REM Checks for a digital
REM input pattern and
REM sets a bit if matched
#loop
IF (_TI0 = 170)
 SB 1
ELSE
 CB 1
ENDIF
JP#loop
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `=` — Assignment Operator
*Category: PROGRAMMING*


**Syntax:**
```
str = n
```

### Description
The = operator is the assignment operator for the controller. The assignment operator is used for two reasons:(1) to define and initialize a variable (x = 0) before it is used(2) to assign a new value to a variable (x = 5)

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| str | 1 char | 8 chars | N/A | String | Variable name to access |  |
n-2,147,483,648 2,147,483,647 see Notes1/65,536Value to assign tospecified variable
Default n, or n = null results in a query of thevalue of variable

### Remarks
None

### Examples
```dmc
'Galil DMC Code Example
:x=5
:x=?
 5.0000
:MG x
 5.0000
'define and initialize x to 5
'print x two different ways 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `>` — Greater than comparator
*Category: PROGRAMMING, MATH FUNCTIONS*


**Syntax:**
```
n0 > n1
```

### Description
"Greater than" comparator for testing if one value is greater than another. Comparators are used in mathematical expressions, IFs, and in conditionaljumps. The result is a boolean.
Comparators in DMC Code
SymbolComparator<Less than>Greater than=Equal to<=Less than or equal to>=Greater than or equal to<>Not equal to

### Arguments
| Argument | Min | Max | Default | Resolution   Description | Notes |
| --- | --- | --- | --- | --- | --- |
| n0 |  |  |  |  |  |
|  | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 Value to test |  |
| n1 | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 Value to test |  |

### Remarks
A comparator is not a command and is not valid individually. Instead, the above expression would be used as part of a jump (JP,JS), IF expression, orassignment. See examples below.If n0 > n1, the expression will evaluate to 1.0000. If the comparision is false, it will evaluate to 0.0000.Evaluation occurs left to right. Use parenthesis for operator precedence.

### Examples
```dmc
'Galil DMC Code Example
:bool= (1>2)
:MG bool
 0.0000
:bool= (1>0)
:MG bool
 1.0000
:
```
```dmc
'Galil DMC Code Example
REM Example to find the largest 
REM value in an array
REM
REM ***************************
REM Create an array and fill it
len= 5
DM array[len]
array[0]= 5
array[1]= 100.0001
array[2]= 42
array[3]= 3.14
array[4]= 100
JS #max;' call max subroutine
MG "Max value is ", max
EN
REM 
REM ****************************
REM Find max element in array
#max
i= 0
max = -2147483648;' start at min
#max_h
IF (array[i] > max)
 max = array[i]
ENDIF
i= i+1
JP #max_h, (i < len)
EN
REM
REM ****************************
REM Program output
REM :XQ
REM :
REM Max value is 100.0001 
```

---

## > applies to DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105

---

## `>=` — Greater than or Equal to comparator
*Category: PROGRAMMING, MATH FUNCTIONS*


**Syntax:**
```
n0 >= n1
```

### Description
"Greater than or Equal to" comparator for testing if one value is greater than or equal to another. Comparators are used in mathematical expressions, IFs,and in conditional jumps. The result is a boolean.
Comparators in DMC Code
SymbolComparator<Less than>Greater than=Equal to<=Less than or equal to>=Greater than or equal to<>Not equal to

### Arguments
| Argument | Min | Max | Default | Resolution   Description | Notes |
| --- | --- | --- | --- | --- | --- |
| n0 |  |  |  |  |  |
|  | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 Value to test |  |
| n1 | -2,147,483,648 2,147,483,647 N/A |  |  | 1/65,536 Value to test |  |

### Remarks
A comparator is not a command and is not valid individually. Instead, the above expression would be used as part of a jump (JP,JS), IF expression, orassignment. See examples below.If n0 >= n1, the expression will evaluate to 1.0000. If the comparision is false, it will evaluate to 0.0000.Evaluation occurs left to right. Use parenthesis for operator precedence.

### Examples
```dmc
'Galil DMC Code Example
:bool= (1 >= 2)
:MG bool
 0.0000
:bool= (2 >= 2)
:MG bool
 1.0000
:bool= (3 >= 2)
:MG bool
 1.0000
:
```
```dmc
'Galil DMC Code Example
max= 2.05
min= 1.47
value = 0.025
JS #check
value = 1.471
JS #check
EN
REM
REM *******************************
REM Determine if in range
#check
inrange=0
IF ((value >= min) & (value <= max))
 inrange= 1
ENDIF
IF (inrange)
 MG "Value ",value," in range"
ELSE
  MG "Value ",value," NOT in range"
ENDIF
EN
REM
REM *******************************
REM Program output
REM :XQ
REM :
REM  Value 0.0250 NOT in range 
REM  Value 1.4710 in range 
```

---

## `AB` — Abort
*Category: PROGRAMMING*


**Syntax:**
```
AB
AB n
```

### Operands
- `_AB`
- `Operand has special meaning, see Remarks`

### Description
The AB command is a command to issue an abort to controller operation.AB (Abort) stops motion instantly without a controlled deceleration. If there is a program operating, AB can also be specified to abort the program and allrunning threads. The command, AB, will shut off the motors for any axis in which the off on error function is enabled (see command "OE").

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | 0 Abort motion and the program operation Default if omitted |  |  |
|  | 1 Abort motion only |  |  |

### Remarks
_AB gives state of Abort Input, 1 inactive and 0 active.
AB aborts motion on all axes in motion and cannot stop individual axes.

### Examples
```dmc
'Galil DMC Code Example
:AB;'     Stops motion
:OE*= 1;' Enable off on error on axes
:AB;'     Shuts off motor command and stops motion 
```
```dmc
'Galil DMC Code Example
#A;'         Label - Start of program
JG 20000;'   Specify jog speed on A-axis
BG A;'       Begin jog on A-axis
WT 5000;'    Wait 5000 msec
AB 1;'       Stop motion without aborting program
WT 5000;'    Wait 5000 milliseconds
SH;'         Servo Here
JP #A;'      Jump to Label A
EN;'         End of the routine
'Remember to use the parameter 1 following AB if you only want the motion to be aborted
'Otherwise, your application program will also be aborted. 
```
AB applies toDMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,RIO47000,EDD37010,DMC2105

---

## `AC` — Acceleration
*Category: INDEPENDENT MOTION*


**Syntax:**
```
ACm= n
AC n,n,n,n,n,n,n,n
```

### Operands
- `_ACm`
- `Operand holds the value last set by the command`

### Description
The Acceleration command (AC) sets the linear acceleration of the motors for independent moves, such as PR, PA, and JG moves. The parameters will berounded down to the nearest factor of 1024 and have units of counts per second squared.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
MNN/AAxisVirtual axis to assignvalue
n1,0241,073,740,800 256,0001,024Acceleration rateAt TM 1000. Resolution and Min depend on TM, seeremarks.

### Remarks
The AC command is used to designate accelerationSpecify realistic acceleration rates based on physical system parameters such as:
motor torque ratingloadsamplifier current ratingSpecifying an excessive acceleration will cause a large following error during acceleration and the motor will not follow the commanded profileThe acceleration feedforward command (FA) will help minimize the error for aggressive accelerations
Resolution
The Min and Resolution depend on the sampling period of the control loop (TM). The equation to calculate these values is:
Resolution = Min = 1024*(1000/TM)^2example:
With TM 500 the minimum AC setting and resolution is 4096 counts/second^2resolution = 1024*(1000/500)^2 = 4096

### Examples
```dmc
'Galil DMC Code Example
SHAB;' Enable axes A and B
REM Set a different acceleration for each axis
AC 10000,400000;
REM Axis A acceleration is  10000 cts/sec
REM Axis B acceleration is 400000 cts/sec
SP 40000,40000;' Set the speed for each axis to 40000 cts/sec
a= _ACB;' Assigns the B acceleration to the variable a
PR 100000, 100000;' Set the move distance to 100000 cts
BG AB;' Begin motion on both axes
t=TIME;' Assign the time started to a variable
AMB;' Halt code execution until motion is completed on axis B
MG{Z5.0} "B axis finished in",TIME - t," samples"
AMA;' Halt code execution until motion is completed on axis A
MG{Z5.0} "A axis finished in",TIME - t," samples"
MO;' Disable all axes after moves are completed
EN
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `AD` — After Distance
*Category: TRIPPOINT*


**Syntax:**
```
ADm= n
AD n,n,n,n,n,n,n,n
```

### Description
Trippoint to block command execution until a given distance is traversed. This is a profiled trippoint which means it depends on the motion profiler and notthe actual motor encoder. AD can only be used when there is commanded motion on the axis.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 2,147,483,647 N/A |  | 1 | Distance of motion Cannot specify more than 1 argument at a time |  |

### Remarks
AD will hold up the execution of the following command until one of the following conditions have been met
The commanded motor position crosses the specified relative distance from the start of the moveThe motion profiling on the axis is completeIf in jog (JG) mode, the commanded motion is in the direction which moves away from the specified positionNot valid for a slave during ECAM or Gearing, use MF and MRIf the direction of motion is reversed when in PT mode, the starting position for AD is reinitialized to the position at which the motor is reversedThe AD command is accurate to the number of counts that occur in 2*TM msecAD command will be affected when the motion smoothing time constant, IT, is not 1. See IT command for further informationAD measures incremental distance from start of move on one axis

### Examples
```dmc
'Galil DMC Code Example
#A
DP 0,0;'                  Zero position
PR 10000,20000;'          Specify position relative moves
BG ;'                     Begin motion
AD 5000;'                 After A reaches 5000
MG "Halfway to A";TP A;'  Send message
AD ,10000;'               After B reaches 10000
MG "Halfway to B";TP B;'  Send message
EN;'                      End Program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `AF` — Analog Feedback Select
*Category: FILTER/CONTROL*


**Syntax:**
```
AFm= n
AF n,n,n,n,n,n,n,n
```

### Operands
- `_AFm`
- `Operand holds the value last set by the command`

### Description
The AF command configures analog feedback mode for the PID filter.The controller ADC can be used as position feedback for the axis control law. The analog input used for feedback is fixed and uses the input thatcorresponds with the axis letter. For example, Analog input 1 is used for the A axis.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
n0101Use the controller ADC as servofeedback
1= analog feedback, 0= digitalfeedback

### Remarks
Below is the feedback in counts decoded by the controller hardware when reading in analog feedback for certain analog input ranges.
12 Bit ADC16 Bit ADC-5V to +5V, -10V to +10V -2048 to 2047 counts -32768 to 32767 counts0V to +5V, 0V to +10V0 to 4095 counts0 to 65535 countsThe analog voltage range is set using the AQ command. AQ must be set prior to setting AFThe analog feedback is decoded by a 12-bit A/D converter. An upgrade option is available for 16-bits.

### Examples
```dmc
'Galil DMC Code Example
AF 1;'          Analog feedback on A axis
v1= _AFA;'      Assign feedback type to variable
KP 1;'          Assigns PID's for motor using analog feedback on A-axis   
KD 10;'
KI 0.5;' 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `AG` — Amplifier Gain
*Category: FILTER/CONTROL*


**Syntax:**
```
AG n,n,n,n,n,n,n,n
AGm=n
```

### Operands
- `_AGm`
- `Operand holds the value last set by the command`

### Description
The AG command sets the amplifier current/voltage gain for the internal amplifier. Note: some Galil internal amplifiers have fixed gains. Please reference themanual or data-sheet for more details.
For Servo motors, to convert motor command output (V) to actual motor current (A), use the following equation.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 3 | 1 | 1 | Gain setting | See table in Remarks for gain settings |

### Remarks
Current Gain Settings with Servo Amplifiers
Gain settings by Amplifier (Amps/Volt)
Gain Setting, n=012NotesD30400.40.71D3140N/AN/AN/AFixed at 0.1 A/VD32400.512D35400.40.81.6D35470.40.81.6D3640N/AN/AN/AFixed at 0.2 A/V
Current Settings with Stepper Drivers
Current settings by Amplifier (Amps per phase)
Current Setting, n=0123D35470.751.536D40400.50.7511.4D41400.5123The axis should be in the motor off state (MO) before setting AG.The MT command must be issued prior to the AG command to set the proper range.

### Related Commands
#AMPERR - Amplifier error automatic subroutineAU - Set amplifier current loopAZ - Clear Amplifier ErrorsMT - Motor TypeTA - Tell Amplifier ErrorTK - Peak Torque LimitTL - Torque Limit

### Examples
```dmc
'Galil DMC Code Example
ST ;'      Stop any motion
AM ;'      Wait for motion to decel and stop
MO ;'      Turn motor off
MT 1;'     Set the A axis as a servo
AG 2;'     Sets the highest amplifier gain for A axis on servo amplifier
BN;'      Save AG setting to EEPROM 
```

---

TRIPPOINT
AI   After Input
AI n
Usage
AI n ...
Arguments specified with an implicit, comma-separated order
Description
The AI command is a trippoint used in motion programs to wait until after a specified input has changed state. This command can be configured such that
the controller will wait until the input goes high or the input goes low.
Arguments
Argument
Min
Max
Default
Resolution
Description
Notes
n
N/A
General input to use for
trippoint
+n = High trigger. -n = low trigger. 9-16 only valid
for 5-8 axis controller
N/A
Aux encoder input to use
for trippoint
Remarks
The AI command actually halts execution until specified input is at desired logic level. Use the conditional Jump command (JP) or input interrupt (II) if
you do not want the program sequence to halt.
AI functions only on local input points. See Example below for network based digital inputs.
Examples
'Galil DMC Code Example
#A;'         Begin Program
AI 8;'       Wait until input 8 is high
SP 10000;'   Speed is 10000 counts/sec
AC 20000;'   Acceleration is 20000 counts/sec2
PR 400;'     Specify position
BGA;'        Begin motion
EN;'         End Program
'Galil DMC Code Example
REM When using a remote I/O device (e.g. the RIO), the following provides
REM a similar function as AI. Assume that the remote device is already
REM configured on handle C (see IH)
'code before
JS #remote;' this call blocks and waits for the remote logic to return
'code after
EN
'***** The example subroutine *****
#remote
WT10;' wait a reasonable interval so we don't flood the network
JP#remote,(@IN[3001] = 1);'loop while input 1 on the remote device is high
EN;' return to calling code.
AI applies to DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105
AI
## `AL` — Arm Latch
*Category: IO*


**Syntax:**
```
AL mm
```

### Operands
- `_ALm`
- `Operand has special meaning, see Remarks`

### Description
The AL command enables the latch function (high speed main or auxiliary position capture) of the controller. When the position latch is armed, the mainor auxiliary encoder position will be captured upon a rising or falling edge on the specified digital input. Use the CN command to configure the edge thatthe latch input will trigger on.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
mmAABCDEFGHN/AMulti-AxisMaskEncoder to latchLatch main encoder
mmSASASBSCSDSESFSGSH N/AMulti-AxisMaskEncoder to latchLatch aux encoder
mmTATATBTCTDTETFTGTH N/AMulti-AxisMask
Index input totrigger latch
Main encoder is latched from the index pulseinstead of a digital input

### Remarks
Latch input by Axis
AxisLatch InputAInput 1BInput 2CInput 3DInput 4EInput 9FInput 10GInput 11HInput 12The command RL returns the latched position_ALm contains the state of the specified latch. 0 = not armed, 1 = armedThe CN command can be used to change the edge which causes the latch to trigger.The latch function is available on incremental quadrature encoder inputs only. For other position capture methods contact Galil.

### Examples
```dmc
'Galil DMC Code Example
#start
AL A;'              Arm A-axis latch
JG 50000;'          Set up jog at 50000 counts/sec
BG A;'              Begin the move
#loop;'             Loop until latch has occurred
JP #loop,(_ALA=1)
RL A;'              Transmit the latched position
EN;'                End of program 
```
```dmc
'Galil DMC Code Example
REM Homing routine using the AL command to detect the Motor's index position
#start
AL TA;'              Arm A-axis latch. Latch will trigger off the index pulse
JG 50000;'           Set up jog at 50000 counts/sec
BG A;'               Begin the move
#loop;'              Loop until latch has occurred
JP #loop,(_ALA=1)
STA;'                Stop the jog
AMA
PAA=_RLA;'           Set up a move to return to the latched position
BGA
AMA
WT100;'              Allow for settling.
REM Checking that KI has eliminated error (TE) would be more thorough
DP0;'                Zero position
MG "A Homed";'       Report status
EN;'                 End of program 
```

---

## s2spd=1000;'stage 2 speed'jog until index is latchedJG~a=s1spd;BG~aWT1000ALT~a#A;JP#A,_AL~a=1ST~a;AM~a'Return to latched positionSP~a=s2spdPA_RL~a;BG~a;MC~aJS#STL;DP~a=0EN
```dmc
'wait for axis to settle
#STL
WT2;JP#STL,@ABS[_TE~a]>2
WT2;JP#STL,@ABS[_TE~a]>0
WT2;JP#STL,@ABS[_TE~a]>0
EN
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `AM` — After Move
*Category: TRIPPOINT*


**Syntax:**
```
AM mm
```

### Description
The AM command is a trippoint used to control the timing of events. This command will hold up execution of the following commands until the currentmove on the specified axis or axes is completed. Any combination of axes or a motion sequence may be specified with the AM command.For example, AM AB waits for motion on both the A and B axis to be complete. AM with no parameter specifies that motion on all axes to be complete.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | ABCDEFGH | Multi-Axis Mask Axes to wait for profiled motion to complete |  |  |
|  | S | T | N/A | Multi-Axis Mask Vector plane to wait for profiled motion to complete |  |  |

### Remarks
AM is a very important command for controlling the timing between multiple move sequences.
For example, if the A-axis is in the middle of a position relative move (PR) you cannot make a position absolute move (PAA, BGA) until the firstmove is complete. Use AMA to halt the program sequence until the first profiled motion is complete.AM tests for profile completion only. The actual motor may still be moving. To halt the program sequence until the actual physical motion hascompleted, use the MC command.To test motion complete without halting the program sequence, use the operand _BGn, which will be zero when profiled motion is complete(see BG command).

### Examples
```dmc
'Galil DMC Code Example
#MOVE;                 'Program MOVE
PR 5000,5000,5000,5000;'Position relative moves
BG A;                  'Start the A-axis
AM A;                  'After the move is complete on A,
BG B;                  'Start the B-axis
AM B;                  'After the move is complete on B,
BG C;                  'Start the C-axis
AM C;                  'After the move is complete on C
BG D;                  'Start the D-axis
AM D;                  'After the move is complete on D
EN;                    'End of Program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `AO` — Analog Output
*Category: IO*


**Syntax:**
```
AO n0,n1
```

### Description
The AO command sets the analog outputs on the Galil or for a Modbus Slave.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n01,0008,999N/A1Set Analog Output on ModbusSlave
See "Using AO with a Modbus Slave" inRemarksn1-9.99989.9998N/A20/65,536Analog Output Voltage

### Remarks
Using AO with a Modbus Slave
RIO as Modbus Slave3rd Party Modbus Slave Device
n0 is the I/O number calculated using the following equations:n0 = (HandleNum*1000) + ((Module-1)*4) + (Bitnum-1)
HandleNum is the handle specifier from A to H.
Handle must be assigned to port 502 for Modbus comms (See IH)Module is the position of the module in the rack from 1 to 16.BitNum is the I/O point in the module from 1 to 4

### Examples
```dmc
'Galil DMC Code Example
:AO 3005,3.2;'          Outputs 3.2 Volts on Channel 5 of the Device connected to Handle C 
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,DMC52000,EDD37010,RIO47000,RIO57400,DMC2103*

---

## `AP` — After Absolute Position
*Category: TRIPPOINT*


**Syntax:**
```
APm= n
AP n,n,n,n,n,n,n,n
```

### Description
The AP command will hold up the execution of the following command until the actual motor position crosses the specified position. This trippoint does notrely on the profiler, but on actual encoder position.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | -2,147,483,648 2,147,483,647 N/A |  |  | 1 | Position trippoint value Only one axis may be specified at a time |  |

### Remarks
For AP command to clear, one of the following conditions have been met:
The actual motor position crosses the specified absolute position.The motion profiling on the axis is complete.The commanded motion is in the direction which moves away from the specified position.
The units of the command are quadrature counts.When using a stepper motor, the AP trippoint condition is satisfied when the stepper position (TD) has crossed the specified position.
For further information see Chapter 6 of the User Manual "Stepper Motor Operation".Not valid for a slave during ECAM or Gearing - use MF and MR.The motion profiler must be active before the AP command is used.AP is accurate to the number of counts that occur in 2*TM msecAP tests for absolute position. Use the AD command to measure incremental distances.

### Examples
```dmc
'Galil DMC Code Example
#TEST;' Program B
DP0;' Define zero
JG 1000;' Jog mode (speed of 1000 counts/sec)
BG A;' Begin move
AP 2000;' After passing the position 2000
V1=_TPA;' Assign V1 A position
MG "Position is", V1;' Print Message
ST;' Stop
EN;' End of Program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `AQ` — Analog Input Configuration
*Category: IO*


**Syntax:**
```
AQ n0,n1
```

### Operands
_AQ1_AQ2_AQ3_AQ4_AQ5_AQ6_AQ7_AQ8
Operand has special meaning, see

### Remarks

### Description
The AQ command is used to set the behavior of the analog inputs. This command will set the analog range and operation for the specified input.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 | 1 | 8 | N/A | 1 | Analog input channel |  |
| n1 | 1 | 4 | 2 | 1 | Analog range setting | See Table Below |
|  | -4 | -1 | N/A | 1 | Specify analog input is differential See Remarks |  |

### Remarks
AQ is a configuration command which must be set at the beginning of application code.
The usage of this command depends on the type of analog inputs present on the particular controller model, check the ID command to determinethe hardware configuration.
Configurable Analog Input Settings
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n1 | 1 | -5V to +5V |  |
|  | 2 | -10V to +10V Default |  |
|  | 3 | 0V to +5V |  |
|  | 4 | 0V to+10V |  |
| Default resolution for analog inputs is 12bits. 16 bit is optional. |  |  |  |
| Operands _AQ1 through _AQ8 return the setting for the specified input |  |  |  |
| Setting a negative n1 for inputs 1,3,5 or 7, configures those inputs as the differential input relative to input 2,4,6 and 8 respectively. |  |  |  |
Differential Input Mapping (-n1)
Input (n0) Compliment (n0 + 1)12345678Position Range when in Analog Feedback by AQ
| Argument | Value | Analog Range   Position Range (12 bit)   Position Range (16 bit) |
| --- | --- | --- |
| n1 |  |  |
|  | 1 | -5V to +5V -2048 to 2047 -32,768 to 32767 |
|  | 2 | -10V to +10V -2048 to 2047 -32,768 to 32767 |
|  | 3 | 0V to 5V 0 to 4095 0 to 65535 |
|  | 4 | 0V to10V 0 to 4095 0 to 65535 |

### Examples
```dmc
'Galil DMC Code Example
:AQ2,3;'      Specify analog input 2 as 0-5V
:AQ1,-3;'     Specify analog input 1 as 0-5V and the differential input to analog input 2
:MG_AQ2
 3.0000 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC52000,RIO57400,EDD37010,DMC2105*

---

## `AR` — After Relative Distance
*Category: TRIPPOINT*


**Syntax:**
```
ARm= n
AR n,n,n,n,n,n,n,n
```

### Description
The After Relative (AR) command is a trippoint used to control the timing of events. This command will hold up the execution of the following commanduntil one of the following conditions have been met: 1. The commanded motor position crosses the specified relative distance from either the start of the move or the last AR or AD command. 2. The motion profiling on the axis is complete.3. If in jog (JG) mode, the commanded motion is in the direction which moves away from the specified position.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | -2,147,483,648 2,147,483,647 N/A |  |  | 1 | Relative position for trippoint Only one axis may be specified at a time. |  |

### Remarks
The units of the command are quadrature counts.When using a stepper motor, this condition is satisfied when the stepper position (as determined by the output buffer) has crossed the specifiedRelative Position.
For further information see Chapter 6 of the User Manual "Stepper Motor Operation".If the direction of the motion is reversed when in position tracking mode (see PT command), the starting point for the trippoint is reinitialized to thepoint at which the motion reversed.The motion profiler must be active before the AR command is issued.Not valid for a slave during ECAM or Gearing - use MF and MR.Note: AR will be affected when the motion smoothing time constant, IT, is not 1. See IT command for further information.
AP is accurate to the number of counts that occur in 2*TM msecAR is used to specify incremental distance from last AR or AD command.Use AR if multiple position trippoints are needed in a single motion sequence.

### Examples
```dmc
'Galil DMC Code Example
#A;'              Begin Program
DP 0
JG 50000;'        Specify speed
BG A;'            Begin motion
#B;'              Label
AR 25000;'        After passing 25000 counts of relative distance on A-axis
MG "Passed";TPA;' Send message on A-axis
JP #B;'           Jump to Label #B
EN;'              End Program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `AS` — At Speed
*Category: TRIPPOINT*


**Syntax:**
```
AS mm
```

### Description
The AS command is a trippoint that occurs when the generated motion profile has reached the specified speed. This command will hold up execution ofthe following command until the commanded speed has been reached. The AS command will operate after either accelerating or decelerating.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGHST ABCDEFGH |  | Multi-Axis Mask Axes to use for AS trippoint |  |  |

### Remarks

*Applies to: a trapezoidal velocity profile only with linear acceleration. AS used with Smoothing profiling will be inaccurate.*

### Examples
```dmc
'Galil DMC Code Example
#SPEED;'        Program
PR 100000;'     Specify position
SP 10000;'      Specify speed
BG A;'          Begin A
AS A;'          After speed is reached
MG "At Speed";' Print Message
EN;'            End programm 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `AT` — At Time
*Category: TRIPPOINT*


**Syntax:**
```
AT n0,n1
```

### Description
The AT command is a trippoint which is used to hold up execution of the next command until after the specified time has elapsed. The time is measuredwith respect to a defined reference time. AT 0 establishes the initial reference.AT n,1 specifies n samples from the reference. This is useful when TM is lowered and faster application loop times are required.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 |  |  |  |  |  |  |
|  | -2,147,483,648 2,147,483,647 0 |  |  | 2 | Specify a wait time for AT trippoint See Remarks |  |
| n1 | 0 | 1 | 0 | 1 | Specify time in samples or msecs | n1=0 for msecs. n1=1 for samples |

### Remarks
n0 = 0 sets the reference time for AT to the current time.n0 > 0 specifies the wait time as the absolute value of n0 from the reference timen0 < 0 specified the wait time as the absolute value of n0 from the reference time, and resets the reference time when the trippoint is complete to thecurrent time.
AT -n0 is equivalent to AT n0; AT (old reference +n0)

### Examples
```dmc
'Galil DMC Code Example
'The following commands are sent sequentially
AT 0;' Establishes reference time 0 as current time
AT 50;' Waits 50 msec from reference 0
AT 100;' Waits 100 msec from reference 0
AT -150;' Waits 150 msec from reference 0 and sets new reference at 150
AT 80;' Waits 80 msec from new reference (total elapsed time is 230 msec) 
```
```dmc
'Galil DMC Code Example
' jog propotional to analog input example with AT in ms
'AT -n
#main0
AT0;'                set time reference for AT command
JG0;BGX;'            start Jog mode
gain=1
#atloop
 jgspd=gain*@AN[1]
 JG jgspd
 AT-100;'           wait 100 ms from last time reference (last AT-n or AT0)
REM same functionality would be:
REM AT -100,0
REM -or-
REM AT 100,0;AT0
JP#atloop
```
```dmc
'Galil DMC Code Example
' jog propotional to analog input example with AT in samples
' AT n,1
#main1
AT0;'                set time reference for AT command
JG0;BGX;'            start Jog mode
gain=1
#atloop
 jgspd=gain*@AN[1]
 JG jgspd
 AT -100,1;'         wait 100 samples from last time reference (AT0)
JP#atloop
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `AU` — Set amplifier current loop
*Category: FILTER/CONTROL*


**Syntax:**
```
AUm= n
AU n,n,n,n,n,n,n,n
```

### Operands
- `_AUm`
- `Operand holds the value last set by the command`

### Description
The AU command sets the amplifier current loop gain for internal amplifiers.For Galil trapezoidal amplifiers, the current loop is available in one of two settings. AU also sets the switching mode where available, Chopper vs. Inverter.For Galil sinusoidal amplifiers, AU sets the current loop gain as well as enables or disables the current loop integrator.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
nAmplifierSpecific
AmplifierSpecific
AmplifierSpecific
AmplifierSpecific
Current Loop GainSetting
See tables below for setting the n parameter byamplifier.
D3040
| Argument | Value | Description | (24VDC Bus) Current loop |
| --- | --- | --- | --- |
setting
(48VDC Bus) Current loop
setting

### Notes
n0Inverter mode, Normal current loopgain0.5mH < L <5mH0.5mH < L <10mHDefault.
0.5Chopper mode, Normal current loopgain0.2mH < L < 0.5mH0.2mH < L < 0.5mH
1Inverter mode, Higher current loopgain5mH < L10mH < L
1.5Chopper mode, Higher current loopgain5mH < L10mH < L
D3240
| Argument | Value | Description | (24VDC Bus) Current loop |
| --- | --- | --- | --- |
setting
(48VDC Bus) Current loop
setting

### Notes
n0Chopper mode, Normal current loopgain0.5mH < L <5mH0.5mH < L <10mHDefault.
1Chopper mode, Higher current loopgain5mH < L10mH < L
D3540
| Argument | Value | (24VDC Bus) Current loop setting   (48VDC Bus) Current loop setting | Notes |
| --- | --- | --- | --- |
| n | 1 | L < 1mH L < 2.4mH |  |
|  |  |  | Default 1 |
|  | 9 | L < 1mH L < 2.4mH |  |
|  | 10 | 1mH < L < 2.3mH 2.4mH < L < 4.2mH |  |
|  | 11 | 2.3mH < L < 4.2mH 4.2mH< L < 7mH |  |
|  | 12 | 4.2mH < L 7mH < L |  |
| 1. AU1 is default for backwards compatibility. AU 9 through 12 should be used for new applications. |  |  |  |
D3547
| Argument | Value | (24VDC Bus) Current loop setting   (48VDC Bus) Current loop setting | Notes |
| --- | --- | --- | --- |
| n | 9 | L < 1mH L < 2.4mH | Default |
|  | 10 | 1mH < L < 2.3mH 2.4mH < L < 4.2mH |  |
|  | 11 | 2.3mH < L < 4.2mH 4.2mH < L < 7mH |  |
|  | 12 | 4.2mH < L 7mH < L |  |

### Remarks
The axis must be in the motor off state (MO) before setting AUThe AU settings for Galil sinusoidal amplifiers are only recommended values for the given bus voltages. For other bus voltages and their recommendedsettings, contact Galil.

---

## TA - Tell Amplifier ErrorTK - Peak Torque LimitTL - Torque Limit

### Examples
```dmc
'Galil DMC Code Example
'Example setting for Galil trapezoidal amplifier
:AU1,0;' Sets A-axis to higher loop gain and B-axis to normal loop gain
:AUB=?;' Query B-axis current loop gain
 0 
:MG_AUA;' Query A axis current loop gain
 1 
```
```dmc
'Galil DMC Code Example
'Example setting for Galil sinusoidal amplifier
'inductance = 2.6mH
:AU11;' Sets A-axis for motor inductance 2.6mH at 24V, current loop enabled
:MG_AUA;' Query A axis current loop gain
 11
```

*Applies to: DMC50000,DMC4000,DMC4103,DMC30010,DMC2103,EDD37010,DMC2105*

---

## `AV` — After Vector Distance
*Category: VECTOR/LINEAR, TRIPPOINT*


**Syntax:**
```
AV n0,n1
```
Operands_AVS_AVTOperand has special meaning, see

### Remarks

### Description
The AV command is used to hold up execution of the next command during coordinated moves such as VP,CR or LI. This trippoint occurs when the pathdistance of a sequence reaches the specified value. The distance is measured from the start of a coordinated move sequence or from the last AVcommand.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 |  |  |  |  |  |  |
|  | 0 | 2,147,483,647 0 |  | 1 Vector distance to be executed in the S coordinate system |  |  |
| n1 | 0 | 2,147,483,647 0 |  | 1 Vector distance to be executed in the T coordinate system |  |  |

### Remarks
The units of the command are quadrature counts._AVS contains the vector distance from the start of the sequence in the S coordinate system
_AVT contains the vector distance from the start of the sequence in the T coordinate system.

### Examples
```dmc
'Galil DMC Code Example
#MOVE;'        Label to desginate start of program
DP 0,0;'       Define the A and B axis positions as 0
CAT;'          Specify the T coordinate system
LMAB;'         Linear move for A,B
LI 1000,2000;' Specify distance
LI 2000,3000;' Specify distance
LE
BGT;'          Begin motion in the T coordinate system
AV ,500;'      After path distance = 500,
TPAB;'         Print position of A and B axes
EN;'           End Program
'Vector Distance is calculated as the square root of the sum of the 
'squared distance for each axis in the linear or vector mode. 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `AZ` — Clear Latched Amplifier Errors

**Syntax:**
```
AZ n
```
Operands_AZ2Operand has special meaning, see Remarks

### Description
The AZ command is used to enable enhanced error reporting and clear any latched amplifier errors. When using certain amplifiers, error conditions will stayactive until cleared. This persistent error state is defined as a latched error.

### Arguments
| Argument | Value | Details |
| --- | --- | --- |
| n | 1 Clear latched amplifier errors. |  |
|  | 2 Enable Enhanced Error Clearing. |  |
| Issue AZ2 to enable enhanced error reporting. |  |  |
When all axes are in a motor off state (MO) and there are no latched errors, amplifier errors will be reported live by the TA command.
While an axis is in a servo here state (SH), the following amplifier errors will latch:
Over-CurrentOver-TemperatureUnder-VoltageELO
NOTE: The Over-Voltage amplifier error does not latch. While the amplifier is in an Over-Voltage condition, the amplifier will short the motor phasesresulting in a drag being felt on the motor.
To clear latched amplifier errors, issue MO followed by AZ1.

### Remarks
_AZ2 contains a 0 if the amplifier is in normal error reporting._AZ2 contains a 1 if the amplifier is in enhanced error reportingRefer to the controller User Manual for more information on clearing amplifier errors.
AmplifierEnhanced Error Clearing ModeD3540Disabled by defaultD3547Always enabled

### Related Commands
#AMPERR - Amplifier error automatic subroutineAG - Amplifier GainAU - Set amplifier current loopMT - Motor TypeTA - Tell Amplifier ErrorTK - Peak Torque LimitTL - Torque Limit

### Examples
```dmc
'Galil DMC Code Example
#AMPERR
ST;' stop motion on all axes
AM;' wait until motion is halted
MO;WT2;' disable all axes
```
```dmc
IF((_TA0&1)|(_TA0&16));' check if an Over-Current error occurred
MG "Over-Current amplifier error"
ENDIF
```
```dmc
IF((_TA0&2)|(_TA0&32));' check if an Over-Voltage error occurred
MG "Over-Voltage amplifier error"
ENDIF
```
```dmc
IF((_TA0&4)|(_TA0&64));' check if an Over-Temperature error occurred
MG "Over-Temperature amplifier error"
ENDIF
```
```dmc
IF((_TA0&8)|(_TA0&128));' check if an Under-Voltage error occurred
MG "Under-Voltage amplifier error"
ENDIF
```

---

## AZ1;WT2;' clear latched amplifier errorsENDIF
```dmc
RE
```

---

## `BA` — Brushless Axis
*Category: SINE COMMUTATION*


**Syntax:**
```
BA mm
```

### Operands
- `_BAm`
- `Operand has special meaning, see Remarks`

### Description
For axes equipped with a Galil sinusoidal amplifier, BA is used to configure the axis for sinusoidal commutation. In addition to BA, the BM command as wellas either BX, BZ or BI/BC, must be used to initialize the axis for sinusoidal commutation.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | ABCDEFGH | N/A | Multi-Axis Mask Axes to configure for sinusoidal commutation. |  |  |
|  | N | N | N/A | Multi-Axis Mask Disable sine commutation for all axes. |  |  |

### Remarks
_BAm will contain a 1 if the BA command has been issued for the speciifed axis, or a 0 if it has not.
There are several methods to initialize Galil's internal amplifiers for sinusoidal commutation. They are listed below:
Initialization of a Galil Sinusoidal Amplifier
CommandDescription

### Notes
BI/BCUses hall sensors to estimate the commutation angle until a hall transitioncan be used to set the commutation angle precisely.This is the recommended method if hall sensors are present.
BZCommands the axis to a specific commutation angle.This is the recommended method if hall sensors are notpresent.
BXUses an algorithm to determine the commutation angle with minimalmotion.
Should only be used if minimal motion is required duringintialization and no hall sensors are present.

### Examples
```dmc
'Galil DMC Code Example
REM Example BZ initialization procedure
BA A;'           Designate sinusoidal commutation
BM 2000;'        Length of electrical cycle in counts--required setting for commutation
BZ <1000>1500;'  Set the first BZ time to 1500 msec, and second B time to 1000 msec.
BZ 3;'           Commutate motor using 3 V and timeout after 1000 msec
SH A;'           Enable motor, ready for commands
EN
```
```dmc
'Galil DMC Code Example
REM Example BI/BC initialization procedure
BAA;'            Configure the A Axis for sinusoidal commutation.
BMA=2000
BIA=-1;'         Set estimated commutation based on current hall state
BCA;'            Enable brushless calibration
hall=_QHA;'      Store hall state
SHA;'            Enable amplifier
JGA=500;'        Slow jog so that the commutation angle is set precisely at
'                the next hall transition.
BGA;'            Begin jog
#hall;WT2;JP#hall,_QHA=hall;' Wait for a hall transition
'                At this point, a precise commutation angle is set
'                and the axis is fully configured for sinusoidal commutation
STA
AMA
EN
```

*Applies to: DMC4000,DMC4103,DMC30010,DMC50000,EDD37010,DMC1802,DMC1806,DMC2103*

---

## `BC` — Brushless Calibration
*Category: SINE COMMUTATION*


**Syntax:**
```
BC mm
```

### Operands
- `_BCm`
- `Operand has special meaning, see Remarks`

### Description
The BC command is used along with the BI command to initialize an axis for sinusoidal commutation using hall sensors. BC monitors the status of the hallsensors, and precisely sets the commutation angle upon detecting a hall sensor transition. In addition to BI and BC, the BA and BM commands must beused to initialize the axis for sinusoidal commutation.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | ABCDEFGH | Multi-Axis Mask Axes to initialize using hall sensors. |  |  |

### Remarks
GDK's Step-By-Step tool can be utilized for automatic setup and configuration of brushless motor with Galil internal sinusoidal amplifiers.When performing the BI/BC initialization method, the axis should be moved at a low speed until the first hall transition occurs. This ensures thecommutation angle is accurately set.BI/BC initialization is valid with Galil internal sinusoidal amplifiers.There are several methods to initialize Galil's internal amplifiers for sinusoidal commutation. They are listed below:
Initialization of a Galil Sinusoidal Amplifier
CommandDescription

### Notes
BI/BCUses hall sensors to estimate the commutation angle until a hall transitioncan be used to set the commutation angle precisely.This is the recommended method if hall sensors are present.
BZCommands the axis to a specific commutation angle.This is the recommended method if hall sensors are notpresent.
BXUses an algorithm to determine the commutation angle with minimalmotion.
Should only be used if minimal motion is required duringintialization and no hall sensors are present.
Steps for BI/BC sinusoidal initialization
1. Specify the axis/axes for sinusoidal initialization with the BA command.2. Specify the number of encoder counts per magnetic cycle of the motor with the BM command.3. Issue BI to set an approximate commutation angle based on the current hall state.4. Issue the BC command.5. Enable the axis and issue a low speed jog until a hall transition occurs.6. The motor is now fully initialized for sinusoidal commutation.
Operand

### Usage
_BCm contains the state of the Hall sensor inputs. This value should be between 1 and 6. 0 and 7 are invalid hall states.

### Examples
```dmc
'Galil DMC Code Example
REM Example BI/BC initialization procedure
BAA;' Configure the A Axis for sinusoidal commutation.
BMA=2000
BIA=-1;' Set estimated commutation based on current hall state
BCA;'     enable brushless calibration
hall=_QHA;' store hall state
SHA;'     enable amplifier
JGA=500;' slow jog so that the commutation angle is set precisely at
' the next hall transition.
BGA;' begin jog
#hall;WT2;JP#hall,_QHA=hall;' wait for a hall transition
' At this point, a precise commutation angle is set
' and the axis is fully configured for sinusoidal commutation
STA
AMA
EN
EN
```

*Applies to: DMC4000,DMC4103,DMC30010,DMC50000,EDD37010,DMC1802,DMC1806,DMC2103*

---

## `BD` — Brushless Degrees
*Category: SINE COMMUTATION*


**Syntax:**
```
BDm= n
BD n,n,n,n,n,n,n,n
```

### Operands
- `_BDm`
- `Operand has special meaning, see Remarks`

### Description
The BD command sets the commutation angle of a sinusoidally commutated axis. This command should not be used except when the user is creating aspecialized sinusoidal initialization procedure. The commutation angle is set automatically when using Galil's built-in sinusoidal initialization methods - BX, BZand BI/BC.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 360 | 6 | 1/32 | Commutation angle in degrees |  |

### Remarks
Using BD to set a commutation angle overrides the current value set by the BX, BZ, or BI/BC initialization methods.Once initialized, BD is updated by the controller automatically based on the encoder position and the value of the brushless modulus, BM.n = ? queries the current commutation angle_BDm contains the commutation angle of the specified axis.

### Examples
```dmc
'Galil DMC Code Example
BDA=100;'     Set the commutation angle for A axis to 100
MG_BDA;'      Report the commutation angle for A axis 
```

*Applies to: DMC4000,DMC4103,DMC30010,DMC50000,EDD37010,DMC1802,DMC1806,DMC2103*

---

## `BG` — Begin
*Category: INDEPENDENT MOTION*


**Syntax:**
```
BG mm
```

### Operands
- `_BGm`
- `Operand has special meaning, see Remarks`

### Description
The BG command starts a motion on the specified axis or sequence.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
mmAABCDEFGHABCDEFGHMulti-AxisMaskAxes to begin motionAny combination of axes is acceptable. BG with noarguments begins motion on all axes
STN/AMulti-AxisMask
Vector plane axes tobegin motionAny combination of axes is acceptable
MNN/AMulti-AxisMask
Virtual axis to beginmotionAny combination of axes is acceptable

### Remarks
Any combination of Axes, Vector Planes, and Virtual Axes may be mixed to begin motion.A BG command cannot be executed for any axis in which motion has not completed.
Slaving to a master in gearing mode is an exception. Gearing does not require the axis to profile a motion and therefore Independent movesmay be superimposed on top of gearing.Use the AM trippoint to wait for motion complete between moves from embedded code.From host code, use one of the following methods to determine if motion is complete:
Poll MG_BGm.Use the data record (DR/QR).Use interrupts (EI), if available.

### Operands
_BGm contains a '0' if motion complete on the specified axis or coordinate system, otherwise contains a '1'
_BGm can be used from host programs to determine if motion is complete by polling the axes of interest

### Examples
```dmc
'Galil DMC Code Example
PR 2000,3000,,5000;'  Set up for a relative move
BG ;'                 Start the A,B and D motors moving 
```
```dmc
'Galil DMC Code Example
HM ;'   Set up for the homing
BG A;'  Start only the A-axis moving 
```
```dmc
'Galil DMC Code Example
JG 1000,4000;'   Set up for jog
BG B;'           Start only the B-axis moving 
```
```dmc
'Galil DMC Code Example
bstate= _BGB;'   Assign a 1 to bstate if the B-axis is performing a move 
```
```dmc
'Galil DMC Code Example
VM AB;'         Vector Mode
VP 1000,2000;'  Specify vector position
VS 20000;'      Specify vector velocity
BG S;'          Begin coordinated sequence
VP 4000,-1000;' Specify vector position
VE;'            Vector End 
```

*Applies to: DMC4000,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC4200,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `BI` — Brushless Inputs
*Category: SINE COMMUTATION*


**Syntax:**
```
BIm= n
BI n,n,n,n,n,n,n,n
```

### Operands
- `_BIm`
- `Operand holds the value last set by the command`

### Description
The BI command is used along with the BC command to initialize an axis for sinusoidal commutation using hall sensors. When this command is issued, BIsets an approximate commutation angle based on the current hall state. In addition to BI and BC, the BA and BM commands must be used to initialize theaxis for sinusoidal commutation.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
mAHN/AAxisAxis to initialize using hallsensors.
n-1001n = -1 uses dedicated hall inputs. n = 0 clearsconfiguration.

### Remarks
GDK's Step-By-Step tool can be utilized for automatic setup and configuration of brushless motor with Galil internal sinusoidal amplifiers.
There are several methods to initialize Galil's internal amplifiers for sinusoidal commutation. They are listed below:
Initialization of a Galil Sinusoidal Amplifier
CommandDescription

### Notes
BI/BCUses hall sensors to estimate the commutation angle until a hall transitioncan be used to set the commutation angle precisely.This is the recommended method if hall sensors are present.
BXUses an algorithm to determine the commutation angle with minimalmotion.
Should only be used if minimal motion is required duringintialization and no hall sensors are present.
BZCommands the axis to a specific commutation angle.This is the recommended method if hall sensors are notpresent.
Steps for BI/BC sinusoidal initialization
1. Specify the axis/axes for sinusoidal initialization with the BA command.2. Specify the number of encoder counts per magnetic cycle of the motor with the BM command.3. Issue BI to set an approximate commutation angle based on the current hall state.4. Issue the BC command.5. Enable the axis and issue a low speed jog until a hall transition occurs.6. The motor is now fully initialized for sinusoidal commutation.

### Examples
```dmc
'Galil DMC Code Example
REM Example BI/BC initialization procedure
REM Example BI/BC initialization procedure
BAA;' Configure the A Axis for sinusoidal commutation.
BMA=2000
BIA=-1;' Set estimated commutation based on current hall state
BCA;'     enable brushless calibration
hall=_QHA;' store hall state
SHA;'     enable amplifier
JGA=500;' slow jog so that the commutation angle is set precisely at
' the next hall transition.
BGA;' begin jog
#hall;WT2;JP#hall,_QHA=hall;' wait for a hall transition
' At this point, a precise commutation angle is set
' and the axis is fully configured for sinusoidal commutation
STA
AMA
EN
```

*Applies to: DMC4000,DMC4103,DMC30010,DMC50000,EDD37010,DMC1802,DMC1806,DMC2103*

---

## `BK` — Breakpoint
*Category: PROGRAMMING*


**Syntax:**
```
BK n0,n1
```

### Operands
- `_BK`
- `Operand has special meaning, see Remarks`

### Description
The BK command causes the controller to pause execution of the given thread at the given program line number. When that line is reached, programexecution halts before the line is executed, while all other threads continue running. After a breakpoint is encountered, a new breakpoint can be armed (tocontinue execution to the new breakpoint) or BK will resume program execution. The SL command can be used to single step from the breakpoint.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n003,999N/A1Line number to setbreakpoint
Firmware Rev 1.2a and later. n = null resumesexecution
n001,999N/A1Line number to setbreakpointn = null resumes execution
n10701Thread number to setbreakpointIf n omitted, default value used.

### Remarks
Only one breakpoint may be armed at any time.BK can be armed before or during thread execution.
Operand

### Usage
_BK will tell whether a breakpoint has been armed, whether it has been encountered, and the program line number of the breakpoint:
= -LineNumber: breakpoint armed= LineNumber: breakpoint encountered= -2147483648: breakpoint not armed

### Examples
```dmc
'Galil DMC Code Example
:BK 3;'    Pause at line 3 (the 4th line) in thread 0
:BK 5;'    Continue to line 5
:SL;'      Execute the next line
:SL 3;'    Execute the next 3 lines
:BK;'      Resume normal execution 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `BL` — Reverse Software Limit
*Category: ERROR CONTROL*


**Syntax:**
```
BLm= n
BL n,n,n,n,n,n,n,n
```

### Operands
- `_BLm`
- `Operand holds the value last set by the command`

### Description
The BL command sets the reverse software limit. If this limit is exceeded during motion, motion on that axis will decelerate to a stop. Reverse motionbeyond this limit is not permitted.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | -2,147,483,648 2,147,483,647 -2,147,483,648 1 |  |  |  | Position for reverse soft limit |  |

### Remarks
The reverse limit is activated at the position n-1. n = -2147483648 effectively disables the reverse soft limitThe software limit is specified in counts for a servo system or in microsteps for a stepper system.When the reverse software limit is activated, the automatic subroutine #LIMSWI will be executed if it is included in the program.If motion is commanded when the axis is already passed the BL value, the controller will return error code 22. See TC for details.

### Examples
```dmc
'Galil DMC Code Example
#TEST;'  Test Program
AC 1000000;' Acceleration Rate
DC 1000000;' Deceleration Rate
BL -15000;' Set Reverse Limit
JG  -5000;' Jog Reverse
BGA;'    Begin Motion
AMA;'    After Motion (limit occurred)
TPA;'    Tell Position
EN;'     End Program
'
'Galil Controllers also provide hardware limits. 
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `BM` — Brushless Modulo
*Category: SINE COMMUTATION*


**Syntax:**
```
BMm= n
BM n,n,n,n,n,n,n,n
```

### Operands
- `_BMm`
- `Operand holds the value last set by the command`

### Description
The BM command defines the length of the motors magnetic cycle in encoder counts. This value must be specified correctly for sinusidal commutation. Inaddition to BM, the BA command as well as either BX, BZ or BI/BC, must be used to initialize the axis for sinusoidal commutation.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value. |  |
| n | 1 | 10,000,000 | 2,000 | 1/65,536 | Encoder counts per magnetic cycle. |  |

### Remarks
For rotary motors, the magnetic cycle (BM value) is calculated by:
BM = encoder counts per revolution / # of pole pairsWhen calculating BM, always use the controller to do the math. For example, "BMA=5000/3".

### Examples
```dmc
'Galil DMC Code Example
REM Example BZ initialization procedure
BA A;'          Designate sinusoidal commutation
BM 4000;'     Length of electrical cycle in counts--required setting for commutation
BZ <1000>1500;' Set the first BZ time to 1500 msec, and second B time to 1000 msec.
BZ 3;'          Commutate motor using 3 V and timeout after 1000 msec
SH A;'          Enable motor, ready for commands
EN
```
```dmc
'Galil DMC Code Example
REM Example BI/BC initialization procedure
BAA;'           Configure the A Axis for sinusoidal commutation.
BMA=6000;'    Length of electrical cycle in counts--required setting for commutation
BIA=-1;'        Set estimated commutation based on current hall state
BCA;'           Enable brushless calibration
hall=_QHA;'     Store hall state
SHA;'           Enable amplifier
JGA=500;'       Slow jog so that the commutation angle is set precisely at
'               the next hall transition.
BGA;'           Begin jog
#hall;WT2;JP#hall,_QHA=hall;' Wait for a hall transition
' At this point, a precise commutation angle is set
' and the axis is fully configured for sinusoidal commutation
STA;'           Stop motion on axis A
AMA;'           Pause code execution until after motion A is complete
EN
```

*Applies to: DMC4000,DMC4103,DMC30010,DMC50000,EDD37010,DMC1802,DMC1806,DMC2103*

---

## `BN` — Burn
*Category: SYSTEM CONFIG*


**Syntax:**
```
BN
```

### Operands
- `_BN`
- `Operand has special meaning, see Remarks`

### Description
The BN command saves certain board parameters in non-volatile EEPROM memory. Once written to the memory, all parameters which can be burned willpersist through a software reset (RS command), hardware reset (reset button) or power cycle. This command typically takes 1 second to execute andmust not be interrupted. The controller returns a colon (:) when the Burn is complete. All parameters which have been burned into memory can berestored to their factory defaults through a master reset.This command reference will denote comands that can and cannot be burned with BN with the following usage icons.
Burnable with BN icon
Not burnable with BN icon

### Arguments
The BN command has no arguments

### Remarks
Issuing this command will pause the output of the Data Record until the command is completed.The following table shows the commands that have their parameters saved with the BN command:
Parameters saved during burn
ACBOEOIKMOOTTMAFBRERILMTOVTRAGBWFAITMUPFVAAQCBFLKDNBPLVDAUCEFVKINFPWVFBACNGAKPNZSBVSBBCWGMKSOASMYABIDCGRLCOESPYBBLDHHVLDOFTKYCBMDVIALZOPTL
Operand

### Usage
_BN contains the serial number of the processor board.

### Examples
```dmc
'Galil DMC Code Example
SB1;'   Set bit 1
CB2;'   Clear bit 2
CW1;'   Set data adjustment bit
BN;' Burn all parameter states 
```
BN applies toDMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,RIO57400,DMC52000,EDD37010,DMC2105

---

## `BP` — Burn Program
*Category: SYSTEM CONFIG*


**Syntax:**
```
BP
```

### Description
The BP command saves the application program in non-volatile EEPROM memory. This command may take several seconds to execute and must not beinterrupted. The controller returns a : when the Burn is complete.

### Arguments
The BP command has no arguments

### Remarks
Issuing this command will pause the output of the Data Record until the command is completed.
Legacy Software Note: This command may cause the Galil software to issue the following warning "A time-out occurred while waiting for a responsefrom the controller". This warning is normal and is designed to warn the user when the controller does not respond to a command within the timeoutperiod.The timeout can be changed in the Galil software but this warning does not affect the operation of the controller or software.

### Examples
```dmc
'Galil DMC Code Example
:BP;'    Burn in program to controller
:'       Get colon response when done 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `BR` — Brush Axis
*Category: SYSTEM CONFIG*


**Syntax:**
```
BRm= n
BR n,n,n,n,n,n,n,n,n
```

### Operands
- `_BRm`
- `Operand holds the value last set by the command`

### Description
The BR command configures the motor configuration and type for an axis.The BR command is used with internal Galil amplifiers to enable which axes will be set as brush-type servos or to configure the firmware to use externaldrives instead of the internal channel.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | -1 | Configured for external drive Use for external drives with internal sine amps -D3640, -D3540 and -D3520 |  |
|  | 0 | Configured for Brushless servo Default |  |
|  | 1 | Configured for Brush-type servo Use for axes with external drives on -D3040 and -D3020 to avoid hall errors |  |

### Remarks
If an axis has Off-On-Error(OE) set to 1, an amplifier error will occur on an axis if there are no halls and BR is set to 0. Set BR to 1 to avoid an amplifiererror state.
The hall error bits cannot cause #AMPERR events if an axis is configured as brush-type.
On axes with an internal amplifier present, when BR1 is set the hall inputs are available for general use via the QH command.
Note: If the controller has been previously configured with the BA command for sinusoidal commutation with a Galil internal amplifier, the command"BA N" must be issued prior to setting the axis to brushed mode.

### Examples
```dmc
'Galil DMC Code Example
BR 1,0,0;'     Sets X-axis to brush-type, Y and Z to brushless 
```
```dmc
'Galil DMC Code Example
BR 1;'       Set to brush type, ignore hall errors
BR -1;'      Set to external amp 
```

*Applies to: DMC50000,DMC4000,DMC4103,DMC30010,DMC2103,EDD37010,DMC2105*

---

## `BT` — Begin PVT Motion
*Category: PVT MODE*


**Syntax:**
```
BT mm
```

### Operands
- `_BTm`
- `Operand has special meaning, see Remarks`

### Description
The BT command begins PVT motion on the specified axes. All axes specified will begin at the same time. For more details on PVT mode see the usermanual.

### Arguments
MinMaxDefaultResolutionDescriptionNotesAABCDEFGHABCDEFGHMulti-Axis Mask Axes to begin PVT motion

### Remarks
For more details on PVT mode see the user manual._BTm contains the number of PV segments that have executed.

### Examples
```dmc
'Galil DMC Code Example
:MG _BTA;'           Query number of PVT segments executed
0.0000 
:PVA= 100,200,100;'  Command X axis to move 100 counts reaching an ending speed of 200c/s in 100 samples
:PVA= 100,0,100;'    Command X axis to move another 100 counts reaching an ending speed of 0c/s in 100 samples
:PVA= ,,0;'          Command X axis to exit PVT mode
:BT A;'              Begin PVT mode
:MG _BTA;'           Query number of PVT segments executed
3.0000
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010*

---

## `BV` — Burn Variables and Array
*Category: SYSTEM CONFIG*


**Syntax:**
```
BV
```

### Operands
- `_BV`
- `Operand has special meaning, see Remarks`

### Description
The BV command saves the controller variables and arrays in non-volatile EEPROM memory. This command typically takes up to 2 seconds to executeand must not be interrupted. The controller returns a : when the Burn is complete.

### Arguments
The BV command has no arguments

### Remarks
_BV returns the number of controller axes.This command will store the ECAM table values in non-volatile EEPROM memory.
This command may cause the Galil software to timeout. This warning is normal and is designed to warn the user when the controller does not respondto a command within the timeout period. This occurs because this command takes more time than the default timeout period. The timeout can bechanged in the Galil software. This warning does not affect the operation of the board or software.
Issuing this command will pause the output of the Data Record until the command is completed.

### Examples
```dmc
'Galil DMC Code Example
:BV;'  burn in variables
:'     colon response returned 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `BW` — Brake Wait
*Category: SYSTEM CONFIG, IO*


**Syntax:**
```
BWm= n
BW n,n,n,n,n,n,n,n
```

### Operands
- `_BWm`
- `Operand holds the value last set by the command`

### Description
The BW command sets the delay between when the brake is turned on (1) and when the amp is turned off (2). When the controller goes into a motor-off(MO) state, this is the time (in samples) between when the brake digital output changes state and when the amp enable digital output changes state. Thebrake is actuated immediately upon MO and the delay is to account for the time it takes for the brake to engage mechanically once it is energizedelectrically. The brake is released immediately upon SH.
Brake Wait Timing
Brake Wait Timing Diagram

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 4,096 | 0 | 1 | Specify brake wait time, in samples. 0 = Turn brake function off |  |

### Remarks
The Brake Wait does not apply when the motor is shut off due to OE1 (Off on Error). In this case (position error exceeded or Abort triggered) themotor off and brake output will be applied simultaneously.SB,CB and OP have no effect on outputs mapped to BW. In order to toggle brake outputs without engaging the servo (e.g. for maintenance), setBWm=0 and then use SB and CB as necessary.The state of the output configured as a brake cannot be querried with the @OUT[] command.
Outputs 1-8 are used for Axes A-H, where output 1 is the brake for axis A and output 2 is the brake for axis B and so on.
When using the brake outputs, it is recommended to order the controller with 500mA sourcing output option (HSRC).

### Examples
```dmc
'Galil DMC Code Example
BW 100;' Set brake delay to 100 ms (TM1000) for the A axis 
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,DMC52000,EDD37010*

---

## `BX` — Sine Amp Initialization
*Category: SINE COMMUTATION*


**Syntax:**
```
BXm= n
BX< o
```

### Operands
- `_BXm`
- `Operand has special meaning, see Remarks`

### Description
The BX command uses a method to initialize an axis with limited movement of the motor. It is expected to move no more than 10 degrees of themagnetic cycle. The last stage of the BX command will lock the motor into the nearest 15 degree increment. In addition to BX , the BA and BM commandsmust be used to initialize the axis for sinusoidal commutation.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis Axis to initialize |  |  |
n-4.9984.998020/65,536Torque command voltage to be appliedduring initialization
-n = end BX with SH. +n = endBX with MO
o1005,0001,0001Number of samples for BX to hold final torquepulse.See

### Remarks
Calculating the 'n' parameter
Use equation below to determine the maximum n parameter where Im (in Amps) is the continuous current rating of the motor and G is the currentgain of the amplifier (in Amps/Volt).
A conservative starting point for the BX command is 0.5* n max but may be increased up to n max as needed.
Equation for maximum 'n' value

### Remarks
GDK's Step-By-Step tool can be utilized for automatic setup and configuration of brushless motor with Galil internal sinusoidal amplifiers._BXm contains 0 if axis m is not a sinusoidal axis, contains 1 if axis m is an uninitialized sinusoidal axis, and contains 3 if axis m is an initialized sinusoidalaxisThe BX command may be given while the motor is off.While the BX command is executing, DMC code, data records, and communication from the controller will pause until completion.
BX initialization is only valid with Galil internal sinusoidal amplifiers.
There are several methods to initialize Galil's internal amplifiers for sinusoidal commutation. They are listed below:
Initialization of a Galil Sinusoidal Amplifier
CommandDescription

### Notes
BI/BCUses hall sensors to estimate the commutation angle until a hall transitioncan be used to set the commutation angle precisely.This is the recommended method if hall sensors are present.
BZCommands the axis to a specific commutation angle.This is the recommended method if hall sensors are notpresent.
BXUses an algorithm to determine the commutation angle with minimalmotion.
Should only be used if minimal motion is required duringintialization and no hall sensors are present.
BX Initialization Steps
1. Specify the axis/axes for sinusoidal initialization with the BA command.2. Specify the number of encoder counts per magnetic cycle of the motor with the BM command.3. Set the desired hold time BX<o.4. Initialize using BX command with n <= n max .5. The motor is now fully initialized for sinusoidal commutation.

### Examples
```dmc
'Galil DMC Code Example
REM Initialize A axis for internal sine commutation.
BA A;'          Configure axis A for sine amp
BMA = 2000;'    Length of electrical cycle in counts
BX <1000;'      Set hold time to 1000 ms
BXA = 3;'       Initialize the motor with 3V torque command.
SH A;'          Enable motor, ready for commands
EN
```

---

## `BZ` — Brushless Zero
*Category: SINE COMMUTATION*


**Syntax:**
```
BZm= n
BZ <o>p
```

### Operands
- `_BZm`
- `Operand has special meaning, see Remarks`

### Description
The BZ command is used to initialize axes which are configured for sinusoidal commutation. To do this, BZ drives the motor to two different magneticpositions and then sets an appropriate commutation angle. In addition to BZ , the BA and BM commands must be used to initialize the axis for sinusoidalcommutation.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis Axis to initialize. |  |  |
n-4.9984.998020/65,536Torque command voltage to be applied duringinitialization.
-n = end BZ with SH. +n = endBZ with MO.
o10032,7672001Time in milliseconds for BZ to hold at secondmagnetic position.See Remarks.
p10032,7671001Time in milliseconds for BZ to hold at firstmagnetic position.See Remarks.

### Remarks
GDK's Step-By-Step tool can be utilized for automatic setup and configuration of brushless motor with Galil internal sinusoidal amplifiers.The BZ hold times should be lengthened to ensure that any oscillations introduced by the BZ command fully settle in order to accurately set thecommutation angle.
The o and p parameters can be interrogated with BZ <? and BZ >? respectively.The BZ command may be given when the motor is off._BZm contains the un-signed distance in encoder counts from the motor's current position to the position of magnetic zero for the specified axis.
The value is only vaild after succesfully initializing with BZ.While the BZ command is executing, DMC code, data records, and communication from the controller will pause until completion.Use equation below to determine the maximum n paramete where Im (in Amps) is the continuous current rating of the motor and G is the currentgain of the amplifier (in Amps/Volt).
A conservative starting point for the BX command is 0.5* n max but may be increased up to n max as needed.
Equation for maximum 'n' value
BZ initialization is only valid with Galil internal sinusoidal amplifiers.
There are several methods to initialize Galil's internal amplifiers for sinusoidal commutation. They are listed below:
Initialization of a Galil Sinusoidal Amplifier
CommandDescription

### Notes
BI/BCUses hall sensors to estimate the commutation angle until a hall transitioncan be used to set the commutation angle precisely.This is the recommended method if hall sensors are present.
BZCommands the axis to a specific commutation angle.This is the recommended method if hall sensors are notpresent.
BXUses an algorithm to determine the commutation angle with minimalmotion.
Should only be used if minimal motion is required duringintialization and no hall sensors are present.
BZ Initialization Steps
1. Specify the axis/axes for sinusoidal initialization with the BA command.2. Specify the number of encoder counts per magnetic cycle of the motor with the BM command.3. Set the desired hold times BZ<o>p.4. Initialize using BZ command with n <= n max .5. The motor is now fully initialized for sinusoidal commutation.

### Examples
```dmc
'Galil DMC Code Example
REM Initialize A axis for internal sine commutation.
BA A;'          Configure axis A for sine amp
BMA = 2000;'    Length of electrical cycle in counts
BZ <1000>1500;' Set the first BZ time to 1500 msec, and second B time to 1000 msec.
BZA = 3;'       Initialize the motor with 3V motor command.
SH A;'          Enable motor, ready for commands
EN
```

---

## BZ applies to DMC4000,DMC4103,DMC30010,DMC50000,EDD37010,DMC1802,DMC1806,DMC2103

---

## VECTOR/LINEARCA   Coordinate Axes
CA m
UsageCA mmArgument is an axis maskOperands_CAmOperand has special meaning, see Remarks

### Description
The CA command specifies the coordinate system (S or T) which will be used by proceeding vector commands. The following commands apply to theactive coordinate system as set by the CA command:
CRESLELILMTNVEVMVP

### Arguments
ArgumentMinMaxDefaultResolutionDescriptionNotesmSTSAxisCoordinate plane to specify

### Remarks
CA ? returns a 0 if the S coordinate system is active and a 1 if the T coordinate system is active._CA contains a 0 if the S coordinate system is active and a 1 if the T coordinate system is active.

### Examples
'Galil DMC Code ExampleCAT;' Specify T coordinate systemVMAB;' Specify vector motion in the A and B planeVST= 10000;' Specify vector speedCR 1000,0,360;' Generate circle with radius of 1000 counts, start at 0 degrees and complete one circle in counterclockwise direction.VE;' End SequenceBGT;' Start motion of T coordinate system

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC50000,DMC52000,DMC2105*

---

## `CB` — Clear Bit
*Category: IO*


**Syntax:**
```
CB n
```

### Description
The CB command clears a particular digital output. The SB and CB (Clear Bit) instructions can be used to control the state of output lines.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | 1 | 16 | N/A | 1 | General output bit to be cleared Max value is 8 for 1-4 axis controllers |  |
| n | 1,000 | 8,999 | N/A | 1 | Clear Modbus slave bit | See "CB via Modbus Slave" in Remarks |

### Remarks
The state of the output can be read with the @OUT[] command
Using CB with a Modbus Slave
n = (SlaveAddress*10000) + (HandleNum*1000) + ((Module-1)*4) + (Bitnum-1)
Slave Address is used when the ModBus device has slave devices connected to it and specified as Addresses 0 to 255. Please note that the useof slave devices for modbus are very rare and this number will usually be 0.HandleNum is the handle specifier where A is 1, B is 2 and so on.Module is the position of the module in the rack from 1 to 16.BitNum is the I/O point in the module from 1 to 4For detailed information on connecting to a Modbus slave, see:
https://www.galil.com/news/dmc-programming-io-control/setting-rio-pocket-plc-or-generic-modbus-slave-extended-io

### Examples
```dmc
'Galil DMC Code Example
#main
SB 5;'     Set digital output 5
SB 1;'     Set digital output 1
CB 5;'     Clear digital output 5
CB 1;'     Clear digital output 1
EN
```
```dmc
'Galil DMC Code Example
#modbus
REM connect to modbus slave at IP address 192.168.42.50
IHH=192,168,42,50<502>2
WT100
SB 8001;'set bit 1 on modbus slave
WT 10
CB 8003;'clear bit 3 on modbus slave
EN
```
```dmc
'Galil DMC Code Example
:SB 18;'     Set digital output 18
:SB 21;'     Set digital output 21
:CB 18;'     Clear digital output 18
:CB 21;'     Clear digital output 21 
```
For detailed information on connecting to a Modbus slave, see:https://www.galil.com/news/dmc-programming-io-control/setting-rio-pocket-plc-or-generic-modbus-slave-extended-io
CB applies toDMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,RIO57400,DMC52000,EDD37010,DMC2105

---

## `CC` — Configure Communications Port 2
*Category: SYSTEM CONFIG*


**Syntax:**
```
CC n0,n1,n2,n3
```

### Description
The CC command configures baud rate, handshake, mode, and echo for the AUX SERIAL PORT, referred to as Port 2. This command must be givenbefore using the MG, or CI commands with Port 2.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 | 9,600 | 19,200 | N/A | 9,600 | Baud rate 9600 and 19200 are valid baud rates |  |
| n1 |  |  |  |  | n1=0 turns off handshaking. n1=1 turns handshaking on |  |
|  | 0 | 1 | N/A | 1 | Handshake setting |  |
| n2 | 0 | 1 | N/A | 1 | Enable aux serial port n2=0 disables port. n2=1 enables port |  |
| n3 | 0 | 1 | N/A | 1 | Echo setting n3=0 for echo off. n3=1 for echo on |  |

### Remarks
The Aux port is not an interpreted port. It cannot receive Galil commands directly. Instead, use CI, #COMINT, and the P2 operands to handle receiveddata.

### Examples
```dmc
'Galil DMC Code Example
:CC 9600,0,1,0;' 9600 baud, no handshake, enable, echo off.
:'         Typical setting with TERM-P or TERM-H. 
```

---

CONTOUR MODE
CD   Contour Distance
CDm= n
CD n,n,n,n,n,n,n,n=t
Usage
CDm= n
Arguments specified with a single axis mask and an assignment (=)
CD n ...
Arguments specified with an implicit, comma-separated order
Description
The CD command specifies the incremental position on contour axes. This command is used only in the Contour Mode (CM). The incremental position will
be executed over the time period specified by the command DT (ranging from 2 to 256 servo updates)
Arguments
Argument
Min
Max
Default
Resolution
Description
Notes
m
A
H
N/A
Axis
Axis to assign
value
n
-32,768
32,767
Contour position
segment
Incremental position move
t
Time override
option
t = 1-8 specifies 2^n samples for the given interval.
Time override
option
t=0 with n=0 disables Contour mode. See Remarks
-1
-1
Time override
option
Pauses contour buffer at the segment with t=-1. Reissue DT
to re-engage contour mode.
Remarks
The units of the command are in encoder counts.
The = operator can be used to override the global DT time by transmitting the time in a CD with the position data.
n=t=0 terminates Contour mode similar to VE or LE for vector mode and linear interpolation mode.
Example. CMBC is terminated with CD 0,0=0.
The user must have a space after CD in order to terminate the Contour Mode correctly.
The command CD0=0 (no space) will assign a variable CD0 the value of 0 rather than terminate Contour mode.
Examples
'Galil DMC Code Example
#contour;'                Program Label
CMAB;'                    Enter Contour Mode
DT 4;'                    Set time interval
CD 1000,2000;'            Specify data
CD 2000,4000;'            Next data
CD 0,0=0;'                End of Contour Buffer
#wait;'                   Wait for all segments to process (buffer to empty)
WT 16,1;'                 wait for 1 DT time segment (2^4)
JP#Wait,(_CM<>511)
EN;'                      End Program
'Galil DMC Code Example
#contour;'                Program Label
CMA;'                    Enter Contour Mode
DT 4;'                    Set time interval
CD 1000;'                Specify data
CD 2000;'               Next data
CD 0=0;'                End of Contour Buffer
#wait;'                   Wait for all segments to process (buffer to empty)
WT 16,1;'                 wait for 1 DT time segment (2^4)
JP#Wait,(_CM<>31)
EN;'                      End Program
CD applies to DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105
CD
## `CE` — Configure Encoder
*Category: SYSTEM CONFIG*


**Syntax:**
```
CEm= n
CE n,n,n,n,n,n,n,n
```

### Operands
- `_CEm`
- `Operand holds the value last set by the command`

### Description
The CE command configures the encoder to quadrature type or pulse and direction type. It also allows inverting the polarity of the encoders whichreverses the direction of the feedback. The configuration applies independently to the main axes encoders and the auxiliary encoders.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
mAHN/AAxisAxis to assignvalue
n01501
Encoderconfigurationsetting
n is the sum of 2 integers M and N which configure main andauxiliary encoders. See table below for configuration description.
Configure Encoder Types. Add value from Column 1 and Column 2 to make n
Column 1Main Encoder TypeColumn 2Auxiliary Encoder Type0Normal quadrature0Normal quadrature1Normal pulse and direction4Normal pulse and direction2Reversed quadrature8Reversed quadrature3Reversed pulse and direction 12Reversed pulse and directionFor example: n = 10 implies 2 + 8, thus both encoders are reversed quadrature.

### Remarks
When using a servo motor, changing the CE type can cause the motor to run away.When the MT command is configured for a stepper motor, the auxiliary encoder (used to count stepper pulses) will be forced to pulse and direction.When using pulse and direction encoders, the pulse signal is connected to CHA and the direction signal is connected to CHB.

### Examples
```dmc
'Galil DMC Code Example
:CE 0, 3, 6, 2;' Configure encoders
:CE ?,?,?,?;'     Interrogate configuration
0,3,6,2 
:V = _CEB;'       Assign configuration to a variable
:V = ?
 3 
:
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `CF` — Configure Unsolicited Messages Handle
*Category: SYSTEM CONFIG*


**Syntax:**
```
CF m
```

### Operands
- `_CF`
- `Operand has special meaning, see Remarks`

### Description
The CF command sets the port for unsolicited messages. The CF command directs the controller to send unsolicited responses to the Main or Aux SerialPort (If equipped), or to an Ethernet handle. An unsolicited message is data generated by the controller which is not in response to a command sent bythe host.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
mAHSHandleEthernet Handle to assign as unsolicitedmessage portSee

### Remarks
IISHandleSet the port that sent the command as theunsolicited message portNot valid in program
STSHandleSet serial port as unsolicited message portm=S is Main serial port. m=T isAux Serial port

### Remarks
Examples of application code commands that will generate unsolicited messages follow.
```dmc
'Galil DMC Code Example
MG"Hello";'      A message (MG)
TC1;'            A command that returns a response
TP;'             "
RPA;'            "
var=?;'          A variable interogation
var=;'           "
thisIsAnError;'  A dmc error will generate an error message 
```
Ethernet Handle as Unsolicited Message Port
When communicating over Ethernet, two Ethernet handles should be used:
1.) The first handle should be used for command-and-response traffic. This is the primary handle that the host uses to communicate to thecontroller.2.) The second handle should be used for unsolicited traffic. This is the primary handle that the controller uses to asynchronously communicateto the host. Use CF to point unsolicited traffic to this handle.It is NOT recommended to use one Ethernet handle for both command-and-response, and unsolicited messages.
Operand

### Usage
_CF contains the decimal value of the ASCII letter where unsolicited messages are currently routed.

### Examples
```dmc
'Galil DMC Code Example
:CFI;' send unsolicited traffic to the terminal that sent the command 
```
```dmc
'Galil DMC Code Example
'main handle is seperate from the unsolicited handle
'Note the connection indicators IHA and IHB in the following:
'192.168.1.3, RIO47102 Rev 1.0c, 1480, IHA IHB
:TH
CONTROLLER IP ADDRESS 192,168,1,3 ETHERNET ADDRESS 00-50-4C-28-05-C8
IHA TCP PORT 23 TO IP ADDRESS 192,168,1,100 PORT 2420
IHB UDP PORT 60007 TO IP ADDRESS 192,168,1,100 PORT 2421
IHC AVAILABLE 
IHD AVAILABLE 
IHE AVAILABLE 
:WH
IHA
:'Main handle is A
:MG_CF
 66.0000
:'Unsolicited handle. 66 is ASCII for "B"
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC2105*

---

## `CI` — Configure Communication Interrupt
*Category: SYSTEM CONFIG*


**Syntax:**
```
CI n
```

### Description
The CI command configures program interrupts based on input of characters over the communication port.The command configures a program interrupt based on characters received on communications port 2, the AUX serial port. An interrupt causes programflow to jump to the #COMINT subroutine. If multiple program threads are used, the #COMINT subroutine runs in thread 0 and the remaining threadscontinue to run without interruption. The characters received can be accessed via the operands P2CH, P2ST, P2NM, P2CD.

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | -1 | Clear interrupt data buffer |  |
|  | 0 | Do not interrupt | Default |
|  | 1 | Interrupt on carriage return |  |
|  | 2 | Interrupt on any character |  |

### Remarks
For more, see Operator Data Entry Mode in the user manual.It is the user's responsiblity to ensure the communication buffer is not filled when in this mode, otherwise the controller will report error code 5 "InputBuffer Full". The buffer on the controller is cleared when either of the two following conditions are met:
A carriage return is recieved on the communication port.CI -1 is called.

### Examples
```dmc
'Galil DMC Code Example
:CI 1;'     Interrupt when the  key is received on port 2
:CI 2;'     Interrupt on a single character received on Port 2
:
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC2105*

---

## `CM` — Contour Mode
*Category: CONTOUR MODE*


**Syntax:**
```
CM mm
```

### Operands
- `_CM`
- `Operand has special meaning, see Remarks`

### Description
Contour Mode is initiated by the instruction CM. This mode allows the generation of an arbitrary motion trajectory with any of the axes. The CD commandspecifies the position interval between subsequent contour segments. The DT command specifies the time interval between subsequent contoursegments.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | N/A | Multi-Axis Mask Axes to initialize to Contour mode Disabled by default |  |  |

### Remarks
CM? Returns the number of available contour seqments (0 means the buffer is full)._CM contains the number of available contour segments (0 means the buffer is full).Issuing the CM command will clear the contour buffer when contour mode is not running.

### Examples
```dmc
'Galil DMC Code Example
#cont0;'                 Define label #cont0
CM ABCD;'                Specify Contour Mode Axes ABCD
DT 4;'                   Specify time increment for contour (2^4 servo loops, 16ms at TM1000)
CD 200,350,-150,500;'    Specify incremental positions on A,B,C and D axes
'                        A-axis moves 200 counts B-axis moves 350 counts C-
'                        axis moves -150 counts D-axis moves 500 counts
'
CD 100,200,300,400;'     Next position data
CD 0,0,0,0=0;'           Special syntax to terminate Contour mode  
#Wait;JP#Wait,_CM<>511;' Spin on #Wait label until buffer is empty
'                        End of Contour Buffer/Sequence
EN;'                     End program
'
'
#cont1;'                  Define label #cont1
CM ABC;'                  Specify Contour Mode
DT 8;'                    Specify time increment for contour (2^8 servo loops, 256ms at TM1000)
CD 100,100,100;'          New position data
CD 100,100,100;'          New position data
CD 0,0,0 =-1;'            Pause contour buffer set DT to resume
CD 100,100,100;'          New position data
CD 100,100,100;'          New position data
CD 0,0,0,0=0;'            Special syntax to terminate Contour mode  
#wait2;JP#wait2,_CM<>511;'Spin on #wait2 label until buffer is empty
'End of Contour Buffer/Sequence
EN
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `CN` — Configure
*Category: SYSTEM CONFIG, IO*


**Syntax:**
```
CN n0,n1,n2,n3,n4
```

### Operands
_CN0_CN1_CN2_CN3_CN4
Operand holds the value last set by the command

### Description
The CN command configures the polarity of the limit switches, home switches, latch inputs, the selective abort function, and the program terminationbehavior of the abort input.

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n0 | -1 Limit switches active low |  | Default |
|  | 1 Limit switches active high |  |  |
n1-1_HM is 0 when grounded (or active-opto), and 1 when pull-up (non-activeopto). Affects direction of travel for HM and FEDefault
1_HM is 1 when grounded (or active-opto), and 0 when pull-up (non-activeopto). Affects direction of travel for HM and FESee HM and FE commands
n2-1Latch input triggers on falling edgeDefault1Latch input triggers on rising edgen30Inputs 5,6,7,8,13,14,15,16 are configured as general use inputsDefault
1Configures inputs 5,6,7,8,13,14,15,16 as selective abort inputs for axesA,B,C,D,E,F,G,and H respectively
Will also trigger #POSERR automaticsubroutine if program is running.n40Abort input will terminate program executionDefault1Abort input will not terminate program execution

### Remarks
n0 is useful for testing the operation of the #LIMSWI automatic subroutine. See example below.

### Examples
```dmc
'Galil DMC Code Example
CN 1,1;'   Sets limit and home switches to active high
CN ,, -1;' Sets input latch active low 
```
```dmc
'Galil DMC Code Example
REM n0 is useful for testing the operation of the #LIMSWI automatic subroutine
#test
CN -1;'     Switches are active low
JGA= 100
BG A;'      Start a slow jog move
WT1000
CN 1;'      Cause a limit fault by inverting the limit polarity
EN
'
#LIMSWI;'   Automatic sub will automatically launch on limit detection
MG "Limit Switch Routine"
WT100
CN -1;'     Return to correct polarity
RE
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `CP` — Dead band within which the motor is shut off (MO)
*Category: FILTER/CONTROL*


**Syntax:**
```
CPm= n
CP n,n,n,n,n,n,n,n
```

### Operands
- `_CPm`
- `Operand holds the value last set by the command`

### Description
The CP command sets the deadband within which the motor is shut off. After a move is complete (_BGn = 0) and the absolute value of the position errorTE becomes less than the dead band CP, the motor is turned off. SH must be issued before further motion can be commanded. CT can be used toincrement the integrator limit to ensure that the motor reaches the dead band.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis Axis to assign value |  |  |
| n | -1 | 32,767 | -1 | 1 Set the position deadband for motor off. n=-1 disables the feature |  |  |

### Remarks
Valid for -NAN or -CER firmware

### Examples
```dmc
'Galil DMC Code Example
:^R^V
DMC1842 Rev 1.0n-CM-F
:^R^S
:ED
0 #L
1 MG _RPX, _TEX, _ILX, _MOX
2 WT100
3 JP#L
4
:IL0
:CP100
:KI0.01
:PR1000
:BG
:XQ
:
0.0000 19.0000 0.0000 0.0000
934.0000 669.0000 0.0000 0.0000
1000.0000 684.0000 2.0406 0.0000
1000.0000 656.0000 4.6783 0.0000
1000.0000 429.0000 7.2166 0.0000
1000.0000 340.0000 9.8544 0.0000
1000.0000 83.0000 9.9982 1.0000
1000.0000 82.0000 9.9982 1.0000 
```

---

## `CR` — Circle
*Category: VECTOR/LINEAR*


**Syntax:**
```
CR n0, n1, n2 < o > p
```

### Description
When using the vector mode (VM), the CR command specifies a 2-dimensional arc segment. The VE command must be used to denote the end of themotion sequence after all CR and VP segments are specified. The BG (Begin Sequence) command is used to start the motion sequence. Parameters forradius, starting angle and traverse angle must all be entered for each CR command.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 | 10 | 6,000,000 | N/A | 1 Radius of circle segment |  |  |
| n1 |  |  |  |  |  |  |
|  | -32,000 | 32,000 | N/A | 1/65,536 Starting angle of circle segment |  |  |
| n2 | -32,000 | 32,000 | N/A | 1/65,536 Degrees to traverse for circle segment |  |  |
o215,000,000N/A2
Specifies the vector speed to be commanded at the beginning ofthe segment. The controller will start accelerating or decelerating atthe start of the sequence to this speed.
For MT 1,-1
23,000,000N/A2
Specifies the vector speed to be commanded at the beginning ofthe segment. The controller will start accelerating or decelerating atthe start of the sequence to this speed.
For MT 2,-2,2.5,-2.5
p215,000,000N/A2
Specifies the vector speed to be achieved at the end of thesegment. The controller will decelerate or accelerate during thesegment and will reach the specified speed at the end of thesegment.
For MT 1,-1
23,000,000N/A2
Specifies the vector speed to be achieved at the end of thesegment. The controller will decelerate or accelerate during thesegment and will reach the specified speed at the end of thesegment.
For MT 2,-2,2.5,-2.5
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| o | -1 Specifies vector speed to be set by Vector Speed Variable (VV command) See VV command |  |  |

### Remarks
The product of n0 * n2 must be less than 450,000,000A positive n2 denotes counterclockwise traverse, -n2 denotes clockwise.n0 units are in quadrature counts.n1 and n2 have units of degrees.

### Examples
```dmc
'Galil DMC Code Example
'A starting position of zero degrees denotes that the radius lies along
'a vector following the positive X axis, on a 2D Cartesian space:
```
```dmc
VMXY
CR 1000,0,270
VE
BGS
EN
```

---

## 'Galil DMC Code ExampleVMAB;'                Specify vector motion in the A and B planeVS 1000;'             Specify vector speedCR 1000,0,360;'       Generate circle with radius of 1000 counts, start at '                     0 degrees and complete one circle in counterclockwise '                     direction.CR 1000,0,360 < 40000;' Generate circle with radius of 1000 counts, start '                at 0 degrees and complete one circle in counterclockwise '                direction and use a vector speed of 40000.VE;'             End SequenceBGS;'            Start motion
```dmc
'Galil DMC Code Example
'Generate a sine wave output on the A axis
VMAN;'           Specify vector motion in the A and N plane
VS 1000;'        Specify vector speed
CR 1000,0,360;'  Generate sine wave with amplitude of 1000 counts  
'                start at 0 degrees and complete one cycle
CR 1000,0,360<40000;' Generate same sine wave with same amplitude 
'                but run at faster speed (higher frequency)
'  
VE;'             End Sequence
BGS;'            Start motion 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `CS` — Clear Sequence
*Category: VECTOR/LINEAR*


**Syntax:**
```
CS mm
```

### Operands
- `_CSm`
- `Operand has special meaning, see Remarks`

### Description
The CS command will remove VP, CR or LI commands stored in a motion sequence for a coordinated axis. After a sequence has been executed, the CScommand is not necessary to put in a new sequence. This command is useful when you have incorrectly specified VP, CR or LI commands.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | S | T | N/A | Axis Coordinate plane specified to clear buffer |  |  |

### Remarks
_CSm contains the segment number in the sequence specified by m= S or T.This operand is valid in the Linear mode, LM, and Vector mode, VM.

### Examples
```dmc
'Galil DMC Code Example
#CLEAR;' Label
CAT;' Specify the T coordinate system vector points
VP 1000,2000;' Vector Position
VP 4000,8000;' Vector Position
CST;' Clear vectors specified in T coordinate system
CAS;' Specify the T coordinate system vector points
VP 1000,5000;' New vector
VP 8000,9000;' New vector
CSS;' Clear vectors specified in S coordinate system 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `CW` — Copyright information and Data Adjustment bit on/off
*Category: SYSTEM CONFIG*


**Syntax:**
```
CW n0,n1
```

### Description
The CW command will return the copyright information when the argument, n, is 0 or is omitted. Otherwise, the CW command is used as acommunications enhancement for use by the Galil terminal software programs. When turned on, the most significant bit of unsolicited ASCII characters isset to 1. Unsolicited ASCII characters are characters that are returned from a program running on the controller (usually from the MG command). Thiscommand does not affect solicited characters, which are characters that are returned as a response to a command sent from a host PC (e.g. TP).

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n0 | 0 Causes controller to return a copyright information string |  | Equivalent to n0 = ? |
|  | 1 Controller will set the MSB of unsolicited message characters |  |  |
2Controller will not set the MSB of unsolicited messagecharacters
Default. Must be set when viewing unsolicited messagesfrom non-Galil software
n10Controller will set error code 131 when hardwarehandshaking disables character transmissionsSerial timeout will cause long code execution time.
1Controller will not set error code 131 when hardwarehandshaking disables character transmissions
Default. Data will be lost if the receiving hardware doesn'tservice the hardware handshaking lines.

### Remarks
Galil software packages automatically sends CW 1 during connection to a controller.
If reading unsolicited data through a non-Galil software (eg. Hyperterminal), issue CW 2
Operand

### Usage
_CW contains the value set for n0_CW4 contains the value set for n1

### Examples
```dmc
'Galil DMC Code Example
CW1;'     Set CW to Galil Driver mode (MSB set on unsolicited characters)
```
```dmc
'         The CW command can cause garbled (non-ASCII) characters to be returned 
'         by the controller when using third-party software. Use CW2.
CW2;'     Set CW to third-party device mode (normal ASCII on unsoliticed characters) 
```
CW applies toDMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,RIO47000,EDD37010,DMC2105

---

## `DA` — Deallocate Variables and Arrays
*Category: PROGRAMMING*


**Syntax:**
```
DA str,str,...
```

### Operands
- `_DAm`
- `Operand has special meaning, see Remarks`

### Description
The DA command frees the array and/or variable memory space. In this command, more than one array or variable can be specified for memory de-allocation. Different arrays and variables are separated by comma when specified in one command.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| str | 1 char | 8 chars | N/A | String | Array name to deallocate | If str = *, deallocate all arrays |
|  | 1 char | 8 chars | N/A | String | Variable name to deallocate If str = *, deallocate all variables |  |
| where |  |  |  |  |  |  |
| str[] - Defined array name |  |  |  |  |  |  |
| str - Defined variable name |  |  |  |  |  |  |
| str = * deallocates all the variables |  |  |  |  |  |  |
| str = *[] - Deallocates all the arrays |  |  |  |  |  |  |

### Remarks
_DA contains the total number of arrays available.DA ? returns the total number of arrays available.Since this command deallocates the spaces and compacts the array spaces in the memory it is possible that execution of this command may takelonger time than a standard command.Variables and arrays that are deallocated are not set to zero. A routine that writes zeros to the array and/or variables should be created if this isdesired.

### Examples
```dmc
'Galil DMC Code Example
'Cars' and 'Salesmen' are arrays, and 'Total' is a variable.
DM Cars[40],Salesmen[50];'        Dimension 2 arrays
Total=70;'                        Assign 70 to the variable Total
DA Cars[0],Salesmen[0],Total;'    Deallocate the 2 arrays & variable
DA*[0];'                          Deallocate all arrays
DA *,*[0];'                       Deallocate all variables and all arrays 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `DB` — Range in which PID and antifriction bias are turned on (on band)
*Category: FILTER/CONTROL*


**Syntax:**
```
DBm= n
DB n,n,n,n,n,n,n,n
```

### Operands
- `_DBm`
- `Operand holds the value last set by the command`

### Description
When the controller is holding position, and the absolute value of the error TE is greater than DB, the PID control loop, as well as anti-friction biases ZPand ZN, will be enabled. This is used in combination with the DS command to avoid oscillation when holding position. DS and DB are disabled duringmotion, and only apply when holding position.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 32,767 | 0 | 1 | Position setpoint for PID deadband |  |

### Remarks
DB should be set greater than or equal to DS.

### Examples
```dmc
'Galil DMC Code Example
DSA=100;'   set off band on A axis to +/-100 counts
DBA=200;'   set on band on A axis to +/-200 counts 
```

---

## `DC` — Deceleration
*Category: INDEPENDENT MOTION*


**Syntax:**
```
DC m= n
DC n,n,n,n,n,n,n,n
```

### Operands
- `_DC m`
- `Operand holds the value last set by the command`

### Description
The Deceleration command (DC) sets the linear deceleration of the motors for independent moves such as PR, PA, and JG moves. The parameters will berounded down to the nearest factor of 1024 and have units of counts per second squared.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
|  | M | N | N/A | Axis | Virtual axis to assign value |  |
| n | 1,024 | 1,073,740,800 256,000 |  | 1,024 | Deceleration rate | At TM 1000. See Remarks for resolution details. |

### Remarks
The AC command is used to designate accelerationSpecify realistic deceleration rates based on physical system parameters such as:
motor torque ratingloadsamplifier current ratingSpecifying an excessive deceleration will cause a large following error during deceleration and the motor will not follow the commanded profileDC may be changed during a move in Jog mode, but not in a PA or PR move
However, directly following an axis stop (i.e. ST m or a limit switch), the DC value of a PA or PR move may be changed while the axis is stilldecelerating
Resolution
The resolution of the DC command is dependent on the sampling period of the control loop (TM). With the default rate of TM 1000 the resolution is1024 counts/second^2. The equation to calculate the resolution of the DC command is:
resolution = min = 1024*(1000/TM)^2Example:
With TM 500 the minimum DC setting and resolution is 4096 counts/second^2.resolution = 1024*(1000/500)^2 = 4096

### Examples
```dmc
'Galil DMC Code Example
PR 10000;' Specify position
AC 2000000;' Specify acceleration rate
DC 1000000;' Specify deceleration rate
SP 5000;' Specify slew speed
BG;'     Begin motion 
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `DE` — Dual (Auxiliary) Encoder Position
*Category: SYSTEM CONFIG*


**Syntax:**
```
DEm= n
DE n,n,n,n,n,n,n,n
```

### Operands
- `_DEm`
- `Operand has special meaning, see Remarks`

### Description
The DE command defines the position of the auxiliary (dual) encoders.Dual encoders are useful when you need an encoder on the motor and on the load. The encoder on the load is typically the auxiliary encoder and is usedto verify the true load position. Any error in load position is used to correct the motor position.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | -2,147,483,648 2,147,483,647 0 |  |  | 1 | Position set for auxiliary encoders For MT 1,-1,1.5,-1.5 |  |
|  | -2,147,483,648 2,147,483,647 0 |  |  | 1 | Position set for main encoders | For MT 2,-2,2.5,-2.5 |

### Remarks
When using stepper motors, the DE command defines the main encoder position.The auxiliary encoders are not available for the stepper axis or for any axis where output compare is active.The operand _DEm, as well as _TDm, holds the current aux encoder position.n=? will return the encoder position, as returned by TD.

### Examples
```dmc
'Galil DMC Code Example
DE 0,100,200,400;' Set the current auxiliary encoder position to 0,100,200,400 on A,B,C and D axes
DE ?,?,?,?;'      Return auxiliary encoder positions
duala= _DEA;'     Assign auxiliary encoder position of A-axis to the variable duala 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `DF` — Dual Feedback (DV feedback swap)
*Category: SYSTEM CONFIG*


**Syntax:**
```
DFm= n
DF n,n,n,n,n,n,n,n
```

### Operands
- `_DFm`
- `Operand holds the value last set by the command`

### Description
The DF command allows configuration of BiSS or SSI feedback in Dual Loop mode as the load encoder. Issuing the DF command will swap the main andauxiliary position registers, such that the encoder wired into the main encoder terminals will report its position in TD and the encoder wired into theauxiliary encoder terminals will report in TP.

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | 0 | Disable feedback swap Default |  |
|  | 1 | Enable feedback swap |  |

### Remarks
When using this command, wire the motor's incremental encoder into the main encoder terminals. The load encoder should be wired to the auxiliaryencoder terminals.
Once wired, configure the serial encoder as an auxiliary encoder.
See SI or SS for configuration information.

### Examples
```dmc
'Galil DMC Code Example
MOA;'                 Disable motor on X
SIA= 2,25,0,0<9>1;'   Setup SSI encoder to fill the Aux encoder register
DF1;'                 Enable Dual Feedback Swap
DV1;'                 Enable Dual Loop mode
SHA;'                 Enable servo with new configuration 
```

---

## `DH` — DHCP Client Enable
*Category: ETHERNET*


**Syntax:**
```
DH n
```

### Description
The DH command configures the DHCP or BOOT-P functionality on the controller for Server IP addressing.

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | 0 | Enable BOOT-P and disable DHCP Allows IP assignment through IA command. |  |
|  | 1 | Disable BOOT-P and enable DHCP Default. Allows IP assignment through DHCP server. |  |

### Remarks
DH 0 must be set to manually assign and burn in an IP address. With DH 1 set, the IA command will return an error if used to set the IP address.

### Related Commands
IA - IP AddressIH - Open IP HandleTH - Tell Ethernet HandleWH - Which Handle

### Examples
```dmc
'Galil DMC Code Example
DH 1;' Sets the DHCP function on.  IA assignment will no longer work.
DH 0;' Sets the DHCP function off, and the Boot-P function on. 
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,DMC52000,RIO47000,DMC2105*

---

## `DL` — Download
*Category: PROGRAMMING*


**Syntax:**
```
DL n
DL #str
DL s
```

### Description
The DL command transfers a data file from the host computer to the controller. Instructions in the file will be accepted as a data stream without linenumbers. The file is terminated using <control> Z, <control> Q, <control> D, or \.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n03,99901Line number to begin programdownloadFirmware Rev 1.2a and later
n01,99901Line number to begin programdownload
str1 char8 chars""StringName of label in RAM to begindownload from.
If str = "", download begins at the end of thecurrent program in RAM
s##N/ASymbolBegins download at end ofprogram in RAM

### Remarks
Do not insert spaces before label declarations._DL gives the number of available labels.Issuing this command will pause the output of the Data Record until the command is completed.This command will be rejected by Galil software if sent via the terminal. In order to download a program using a Galil software package, use thatpackage's prescribed programming interface (I.E. GDK's Editor Tool).

### Examples
```dmc
'Galil DMC Code Example
:DL;'      Begin Download
#A;PR 4000;BGA
AMA;MG DONE
EN
\
:'End download 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `DM` — Dimension Array
*Category: PROGRAMMING*

DM str[n],str[n],...

### Description
The DM command defines a single-dimensional array with a name and n total elements. The first element of the defined array starts with element number0 and the last element is at n-1.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| str | 1 char | 8 chars | N/A | String Name of array to dimension |  |  |
n124,000N/A1Number of array elements to assign to dimensionedarray
Firmware Rev 1.2a andlater
n116,000N/A1Number of array elements to assign to dimensionedarray

### Remarks
Typing in array name with [-1] element marked reports the number of elements for that array.
The first character of str must be alphabetic. The rest can be any alphanumeric characters.When assigning array elements, the number specified must be less than the current available array space_DM contains the available array space.DM ? returns the available array space.The DM command can allocate any number of array in a single command up to the maximum command line length of the controller being used.

### Examples
```dmc
'Galil DMC Code Example
DM Pets[5],Dogs[2],Cats[3];' Define dimension of arrays, Pets with 5 elements, Dogs with 2 elements, Cats with 3 elements
DM Tests[100];' Define dimension of array Tests with 100 elements 
```
```dmc
'Galil DMC Code Example
:DM?
16000
:DM MyArray[1000]
:DM?
15000
:'DMC-4000 and 30010 provide length of array with array[-1]
:MG "MyArray contains",MyArray[-1]," elements"
MyArray contains 1000.0000 elements
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## SYSTEM CONFIGDP   Define Position
DPm= nDP n,n,n,n,n,n,n,n

### Operands
- `_DPm`
- `Operand has special meaning, see Remarks`

### Description
The DP command sets the current motor position and current command positions to a user specified value. The units are in quadrature counts. Thiscommand will set both the TP and RP values.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis Axis to assign value |  |  |
|  | M | N | N/A | Axis Virtual axis to assign value |  |  |
n-2,147,483,648 2,147,483,647 01Value assigned to motor/commanded position (RP andTP registers)
For MT 1,-1,1.5,-1.5-2,147,483,648 2,147,483,647 01Value assigned to step/commanded position (RP and TDregisters)
For MT 2,-2,2.5,-2.5

### Remarks
The DP command sets the commanded reference position for axes configured as steppers. The units are in steps.
Example: "DP 0" This will set the registers for TD and RP to zero, but will not effect the TP register value. When equipped with an encoder, usethe DE command to set the encoder position for stepper mode.The DP command is useful to redefine the absolute position.
For example, you can manually position the motor by hand using the Motor Off command, MO. Turn the servo motors back on with SH andthen use DP0 to redefine the new position as your absolute zero.The operand _DPm, as well as _TPm, holds the current main encoder position.n=? will return the encoder position, as returned by TP.

### Examples
'Galil DMC Code Example:DP 0,100,200,400;' Sets the current position of the A-axis to 0, the B-axis to 100, the C-axis to 200, and the D-axis to 400:DP ,-50000;' Sets the current position of B-axis to -50000. The A, C and D axes remain unchanged.:DP ?,?,?,?;' Interrogate the position of A, B, C and D axis.0, -50000, 200, 400 :DP ?;' Interrogate the position of A axis0 :
'Galil DMC Code Example:DP 0;' Sets the current position of the A-axis to 0:DP -50000;' Sets the current position of A-axis to -50000. :DP ?;' Interrogate the position of A-50000

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,DMC52000,EDD37010,DMC1802,DMC1806,DMC2103,DMC2105*

---

## `DR` — Configures I O Data Record Update Rate
*Category: SYSTEM CONFIG*


**Syntax:**
```
DR n0, n1
```
Operands_DR0_DR1Operand has special meaning, see

### Remarks

### Description
DR specifies and enables the rate for the controller to output its data record.For ethernet-based controllers, the controller creates a QR record and sends it to the unsolicited UDP Ethernet Handle at the specified rate. See the UserManual for the data record map.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n0830,00002Data update rate specified in samplesbetween packets.0000Turn off data record output
n107see Notes1Ethernet handle to output data recordpacket0=A,1=B,2=C,3=D,4=E,5=F,6=G,7=H.

### Remarks
If a small sample period and a small update rate is used, the controller may become noticeably slower as a result of maintaining a high update rate.
If n1 is omitted, then the CF unsolicited message port is used by default.The DR port specified with n1 must be a UDP handle._DR0 contains the data record update rate (n0)._DR1 contains the specified handle (n1). Will return an integer 0-7 for handles A-H.
Issuing any of the following commands will pause the output of the data record until the command is complete: BN, BP, BV, BX, BZ, DL, LS, LV, QD,QU, UL

### Examples
```dmc
'Galil DMC Code Example
:WH
 IHA
:DR1000,0
G​x​~​P
_​`​@~​P
_​H​`~​P
_​0​~​P
:DR0
```
```dmc
'Note:  The data record is in a binary, non-printable format 
'(the output above is normal when printing to the terminal) 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC2105*

---

## `DS` — Range in which PID and antifriction bias are turned off (off band)
*Category: FILTER/CONTROL*


**Syntax:**
```
DSm= n
DS n,n,n,n,n,n,n,n
```

### Operands
- `_DSm`
- `Operand holds the value last set by the command`

### Description
When the controller is holding position, and the absolute value of the error TE is less than DS, the PID control loop, as well as anti-friction biases ZP andZN, will be disabled. This is used in combination with DB to avoid oscillation when holding position. DS and DB are disabled during motion, and only applywhen holding position.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 32,767 | 0 | 1 | Position setpoint for PID deadband |  |

### Remarks
DB should be set greater than or equal to DS.

### Examples
```dmc
'Galil DMC Code Example
DSA=100;'   set off band on the A axis to +/-100 counts
DBA=200;'   set on band on the A axis to +/-200 counts 
```

---

## `DT` — Delta Time
*Category: CONTOUR MODE*


**Syntax:**
```
DT n
```

### Description
The DT command sets the time interval for Contour Mode. The time interval is 2N samples. With TM 1000, there are 1024 samples per second.Sending the DT command once will set the time interval for all contour data until a new DT command (or CDm=n) is sent.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | 1 | 8 | 0 | 1 Set time interval for contour mode in 2^n samples. |  |  |
|  | -1 | -1 | N/A | 0 n=-1 to pause the contour mode |  | See Remarks. |

### Remarks
By default the sample period is 1 msec (set by the TM command); with n=1, the time interval would be 2 msec
n = -1 allows a pre-load of the contour buffer or to asynchronously pause the contour buffer. DT-1 during contour mode will pause the contourbuffer (and commanded movement).A positive DT will resume contour mode from paused position of buffer.DT can be overridden with the =t parameter within a CD segment.

### Examples
```dmc
'Galil DMC Code Example
:DT 4;'              Specifies time interval to be 16 msec (TM1000)
:DT 7;'              Specifies time interval to be 128 msec
:
```
```dmc
'Galil DMC Code Example
REM basic contour example
#Cont0;'                Define label #Cont0
CM ABCD;'               Specify Contour Mode
DT 4;'                  Specify time increment for contour
CD 200,350,-150,500;'   Specify incremental positions on A,B,C and C axes
'                       A-axis moves 200 counts B-axis moves 350 counts C-
'                       axis moves -150 counts C-axis moves 500 counts
CD 100,200,300,400 ;'   New position data
CD 0,0,0,0=0;'          End of Contour Buffer/Sequence
#Wait;'                 Wait for all segments to process (buffer to empty)
WT 16,1;'               wait for 1 DT time segment (2^4)
JP#Wait,(_CM<>511)
EN;'                    End program 
```
```dmc
'Galil DMC Code Example
REM contour example for pre-loading of contour buffer
#Cont1;'                Define label #Cont1
CM AB;'                 Specify Contour Mode
DT -1;'                 Pause Contour Mode to allow pre-load of buffer
CD 100,200;'            Countour Data pre-loaded in buffer
CD 400,200;'            Countour Data pre-loaded in buffer
CD 200,100;'            Countour Data pre-loaded in buffer
CD 300,50;'             Countour Data pre-loaded in buffer
AI -1;'                 Wait for Analog input 1 to go low
DT 8;'                  Set positive DT to start contour mode
CD 0,0,0,0=0;'          End of Contour Buffer/Sequence
#Wait;'                 Wait for all segments to process (buffer to empty)
WT 16,1;'               wait for 1 DT time segment (2^4)
JP#Wait,(_CM<>511)
EN;'                    End program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `DV` — Dual Velocity (Dual Loop)
*Category: FILTER/CONTROL*


**Syntax:**
```
DVm= n
DV n,n,n,n,n,n,n,n
```

### Operands
- `_DVm`
- `Operand holds the value last set by the command`

### Description
The DV function changes the operation of the PID filter. When DV is enabled the KD (derivative) term operates on the auxiliary encoder instead of themain encoder.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 1 | 0 | 1 | State of dual loop mode n = 0 disables Dual loop. n = 1 enables Dual loop |  |

### Remarks
The DV command is useful in backlash and resonance compensation.
DV must be set properly for commutation to be successful with internal sine drives.
When DVm=0, the controller will use the main encoder for sine drive commutation.When DVm=1, the controller will use the aux encoder for sine drive commutation.
Correcting for Positive Feedback
With motor off (MO) check the motor encoder with TD and load encoder with TP. Manually move the motor/load and reissue the TD and TPcommands to confirm both encoders count in the same direction.If the encoders count in opposing directions, change the polarity of one encoder using the CE command or by changing the wiring. Consult usermanual.If positive feedback still persists, switch the motor polarity or reverse the direction of both encoders.
Off on error (OE) and error limits (ER) can be used to shut down the motor in the event of a runaway.
Using DV with Large motor/load encoder ratio
When using Dual Loop mode with a large motor:load ratio and/or running at high velocities where low position error at speed is required, FV should beused to compensate for the derivative contribution from the higher resolution motor encoder.
The estimated FV setting required to compensate for the derivative contribution can be calculated by the equation:
FV = (KD/4)*(motor/load)motor/load = effective motor to load ratioFor example: KD = 200, motor encoder changes 5000 counts per 1000 counts of load encoder (motor/load = 5/1)
FV = (200/4)*(5/1) = 250

### Examples
```dmc
'Galil DMC Code Example
DV 1,1,1,1;' Enables dual loop on all axes
DV 0;' Disables DV on A axis
DV,,1,1;' Enables dual loop on C axis and D axis.  Other axes remain unchanged.
DV 1,0,1,0;' Enables dual loop on A and C axis.  Disables dual loop on B and D axis.
MG_DVA;' Returns state of dual velocity mode for A axis 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,EDD37010,DMC2105*

---

## `EA` — Choose ECAM master
*Category: ECAM/GEARING*


**Syntax:**
```
EA m
```

### Description
The EA command selects the master axis for the electronic cam mode. Any axis may be chosen.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign as ECAM master |  |
|  | M | N | N/A | Axis | Virtual axis to assign as ECAM master N is default |  |

### Remarks
The ECAM mode runs off of the master's main encoder (TP) even when the axis is running in stepper mode.When using the M or N imaginary axes, the commanded position is used.

### Examples
```dmc
'Galil DMC Code Example
REM example using A axis as ECAM master and B axis as ECAM slave
#CAMONE
master=400
slave=8192
EB0; 'Disable ECAM Mode
EA A; 'Set Master Axis as A
EM master,slave
EP master/4,0
ET[0]=,0
ET[1]=,2048
ET[2]=,4096
ET[3]=,6144
ET[4]=,8192
DP0,0
SHAB
'NOTE - (EP Value)*(# of Cam Points) must be >= to Master Modulus
JG100;BGA
EB1
EG,0; 'Start ECAM profile
EN
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `EB` — Enable ECAM
*Category: ECAM/GEARING*


**Syntax:**
```
EB n
```

### Operands
- `_EB`
- `Operand has special meaning, see Remarks`

### Description
The EB function enables or disables the cam mode. In this mode, the starting position of the master axis is specified within the cycle.

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | 0 | Stop ECAM mode Default |  |
|  | 1 | Start ECAM mode |  |

### Remarks
When the EB command is given, the master axis position is modularized._EB holds the enabled state, 1 or 0

### Examples
```dmc
'Galil DMC Code Example
EB1;'  Starts ECAM mode
EB0;' Stops ECAM mode
var = _EB;' Return status of cam mode 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `EC` — ECAM Counter
*Category: ECAM/GEARING*


**Syntax:**
```
EC n
```

### Operands
- `_EC`
- `Operand has special meaning, see Remarks`

### Description
The EC function sets the index into the ECAM table. This command is only useful when entering ECAM table values without index values. See thecommand, ET.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | 0 | 256 | 0 | 1 | Set the ECAM table index |  |

### Remarks
_EC contains the current value of the index into the ECAM table.

### Examples
```dmc
'Galil DMC Code Example
EC0;'  Set ECAM index to 0
ET 200,400;' Set first ECAM table entries to 200,400
ET 400,800;' Set second ECAM table entries to 400,800
var=_EC;'    Set the ECAM index value to a variable 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `ED` — Edit
*Category: PROGRAMMING*


**Syntax:**
```
ED n
```

### Operands
_ED_ED1_ED4
Operand has special meaning, see

### Remarks

### Description
The ED command puts the controller into the Edit subsystem. The ED command is used when using Telnet style interface (not Galil Software). In the Editsubsystem, programs can be created, changed, or destroyed.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n03,999see Notes1Line number tobegin editing
Firmware Rev 1.2a and later. Default n is the last line ofprogram space with commands.
n01,999see Notes1Line number tobegin editingDefault n is the last line of program space with commands.

### Remarks
This command will be rejected by Galil software if sent to via the terminal. In order to edit a program using a Galil software package, use thatpackage's prescribed programming interface (I.E. GDK's Editor Tool).The commands in the Edit subsystem are the following.
ED Commands
Key CombinationFunction<ctrl>DDeletes a Line<ctrl>IInserts a line before the current<ctrl>PDisplays the previous line<ctrl>QExits the ED subsystemEnterSaves a line and moves cursor to next
Operand

### Usage
_ED0 contains the line number of the last line to have an error._ED1 contains the number of the thread where the error occurred (for multitasking)._ED0 returns 0 if no error has occurred._ED1 returns -1 if no error has occurred.
_ED4 when evaluated in an embedded code thread, this operand will contain the thread id of the calling thread. This is useful for DMC code todetermine which thread it is running in. See example below.

### Examples
```dmc
'Galil DMC Code Example
:ED
#START 
PR 2000 
BGA 
xx;' bad command line
EN 
#CMDERR Routine which occurs upon a command error
V=_ED0
MG "An error has occurred" {n} 
MG "In line", V{F3.0} 
ST 
ZS0 
EN 
ctrl-Q
:'Hint:  Remember to quit the Edit Mode prior to executing or listing a program. 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `EG` — ECAM go (engage)
*Category: ECAM/GEARING*


**Syntax:**
```
EGm= n
EG n,n,n,n,n,n,n,n
```

### Operands
- `_EGm`
- `Operand has special meaning, see Remarks`

### Description
The EG command engages an ECAM slave axis at a specified position of the master. Once a slave motor is engaged, its position is redefined to fit within thecycle.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
n-2,147,483,648 2,147,483,647 01Master position toengage ECAM slave
n = outside of master axis position range causesslave to engage immediately.

### Remarks
_EGm contains ECAM status for specified slave axis. 0 = axis is not engaged, 1 = axis is engaged.n = ? Returns 1 if specified axis is engaged and 0 if disengaged.This command is not a trippoint. This command will not hold the execution of the program flow. If the execution needs to be held until master positionis reached, use MF or MR command.

### Examples
```dmc
'Galil DMC Code Example
EG 700,1300;' Engages the A and B axes at the master position 700 and 1300 respectively.
B = _EGB;' Return the status of B axis, 1 if engaged 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `EI` — Event Interrupts
*Category: SYSTEM CONFIG*


**Syntax:**
```
EI n1,n2,n3
```

### Operands
- `_EI`
- `Operand has special meaning, see Remarks`

### Description
The EI command is used to enable interrupts on events. EI enables interrupts for the predefined event conditions in the table below. When a condition(e.g. Axis A profiled motion complete) occurs after EI is armed, a particular status byte value (e.g. $D0 or 208) is delivered to the host PC along with theinterrupt.Interrupts are issued as automatically dispatched UDP packets.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n1 | 0 | 65,535 | 0 | 1 | 16-bit interrupt mask 0 turns off interrupts. See Remarks for bit mask |  |
n20255018-bit input maskUsed to select the specific digital input trigger. Bit 15of n1 must be set for the n2 mask to be used.
n3-17-11Preconfigured UDP handlefor interrupt transmission-1 disabled, 0-7 indicate Handles A-H, respectively

### Remarks
_EI contains the interrupt mask n1n1 = 0 means "don't interrupt" and clears the queue when issuedThe interrupts marked with * in the table below must be re-enabled with EI after each occurrenceBit 15 of n1 must be set for the n2 input mask to be used
If the handle specified by n3 is not UDP or is not initialized, an error will occur
n1 Bit Mask
Interrupt Bits
bitn1=2^bit Hex
(decimal)
Status Byte Hex
(decimal)Condition
0$0001 (1)$D0 (208)Axis A profiled motion complete _BGA = 01$0002 (2)$D1 (209)Axis B profiled motion complete _BGB = 02$0004 (4)$D2 (210)Axis C profiled motion complete _BGC = 03$0008 (8)$D3 (211)Axis D profiled motion complete _BGD = 04$0010 (16)$D4 (212)Axis E profiled motion complete _BGE = 05$0020 (32)$D5 (213)Axis F profiled motion complete _BGF = 06$0040 (64)$D6 (214)Axis G profiled motion complete _BGG = 07$0080 (128)$D7 (215)Axis H profiled motion complete _BGH = 08$0100 (256)$D8 (216)All axes profiled motion complete9$0200 (512)$C8 (200)* Excess position error _TEm >= _ERm
10$0400 (1024)$C0 (192)* Limit switch _LFm=0 /_LRm=0 Must be profiling motion in direction of activated limitswitch for interrupt to occur.11$0800 (2048)$D9 (217)Reserved12$1000 (4096)Reserved13$2000 (8192)$DB (219)Application program stopped _XQn = -114$4000 (16384)$DA (218)Reserved15$8000 (32768)$E1-$E8 (225-232)* Digital input(s) 1-8 low (use n2 for mask)UI, user interruptcommand$F0-$FF (240-255)User Interrupt, See UI command
n2 Bit Mask
Input Interrupts
bitn2 = 2^bit hex (decimal) Status Byte hex (decimal)Condition0$01 (1)$E1 (225)* Digital input 1 is low @IN[1] = 01$02 (2)$E2 (226)* Digital input 2 is low @IN[2] = 02$04 (4)$E3 (227)* Digital input 3 is low @IN[3] = 03$08 (8)$E4 (228)* Digital input 4 is low @IN[4] = 04$10 (16)$E5 (229)* Digital input 5 is low @IN[5] = 05$20 (32)$E6 (230)* Digital input 6 is low @IN[6] = 06$40 (64)$E7 (231)* Digital input 7 is low @IN[7] = 07$80 (128)$E8 (232)* Digital input 8 is low @IN[8] = 0Galil Motion ControlEI143/326

---

## UDP Interrupts Framing
The UDP packet can contain up to 16 individual status bytes and is framed as follows
FormatHeader (Fixed
Byte)Status Byte (1-16 bytes)Payload Byte Count (0003 - 0x12) [Includes
header and footer in count]Example00010xD0F1DBE10006
ExampleDecoded
InterruptPacketIndicator
Axis A Profiled Motion Complete; User Interrupt 1; ApplicationProgram Stopped; Digital Input 1 is low6 bytes in payload

### Examples
```dmc
'Galil DMC Code Example
'Interrupt when motion is complete on all axes OR if a limit switch is hit:
'From the table, enable bits 8 and 10.  n1 = 256 + 1024 = 1280
EI  1280
'
'Interrupt when digital input 3 is low.
'Enable bit 15 of n1 and bit 2 of n2.
EI 32768,4
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC1806,DMC1802*

---

## `ELSE` — Else function for use with IF conditional statement
*Category: PROGRAMMING*


**Syntax:**
```
ELSE
```

### Description
The ELSE command is an optional part of an IF conditional statement. The ELSE command must occur after an IF command and it has no arguments. Itallows for the execution of a command only when the argument of the IF command evaluates False. If the argument of the IF command evaluates false,the controller will skip commands until the ELSE command. If the argument for the IF command evaluates true, the controller will execute the commandsbetween the IF and ELSE command.

### Arguments
ELSE is a command with no parameters

### Remarks
None

### Examples
```dmc
'Galil DMC Code Example
IF (@IN[1]=0);'                 IF conditional statement based on input 1
 IF (@IN[2]=0);'                2nd IF conditional statement executed if 1st IF conditional true
  MG "IN1 AND IN2 ARE ACTIVE";' Message to be executed if 2nd IF conditional is true
 ELSE;'                         ELSE command for 2nd IF conditional statement
  MG "ONLY IN1 IS ACTIVE";'     Message to be executed if 2nd IF conditional is false
 ENDIF;'                        End of 2nd conditional statement
ELSE;'                          ELSE command for 1st IF conditional statement
 IF (@IN[2]=0);'             3rd IF conditional statement executed if 1st IF conditional false
  MG "ONLY IN2 IS ACTIVE";'  Message to be executed if 3rd IF conditional statement is true
 ELSE;'                      ELSE command for 3rd conditional statement
  MG "IN1 AND IN2 INACTIVE";'Message to be executed if 3rd IF conditional statement is false
 ENDIF;'                     End of 3rd conditional statement
ENDIF;'                      End of 1st conditional statement 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `EM` — Ecam modulus
*Category: ECAM/GEARING*


**Syntax:**
```
EMm= n
EM n,n,n,n,n,n,n,n
```

### Operands
- `_EMm`
- `Operand holds the value last set by the command`

### Description
The EM command defines the change in position over one complete cycle of the master.The field for the master axis is the cycle of the master position. For the slaves, the field defines the net change in one cycle.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
MNN/AAxisVirtual axis to assign valueVirtual axes are only valid as ECAMmasters
n28,388,607N/A1Position change over one full ECAMcycleFor defining master axis
02,147,483,647 N/A1Position change over one full ECAMcycleFor defining slave axis

### Remarks
If a slave will return to its original position at the end of the cycle, then n=0.If the change is negative, specify the absolute value for n.

### Examples
```dmc
'Galil DMC Code Example
REM example using A axis main encoder as master B axis main encoder as the slave
#cam
REM define A axis encoder as master for ECAM
EA A
REM
REM EM command options
REM ----
REM define slave modulus as 0 (returns to original position)
REM and define master modulus as 4000
EM 4000,0
REM 
REM another valid EM settings for this configuration
REM ----
'EMA= 4000;' define A axis master modulus as 0
'EMB= 0;'    define B axis slave modulus as 0
REM
REM ----
REM define master increment as 1000 counts/table entry
EP 1000
ET[0]= , 0
ET[1]= , 1000
ET[2]= , 2000
ET[3]= , 1000
ET[4]= , 0
REM enable ECAM mode
EB 1
REM engage when master is at 0 position
EG 0,0
EN
```
```dmc
'Galil DMC Code Example
EAC;' Select C axis as master for ECAM.
EM 0,3000,2000;' Define the changes in A and B to be 0 and 3000 respectively.  Define master cycle as 2000.
V = _EMA;' Return cycle of A 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `EN` — End
*Category: PROGRAMMING*


**Syntax:**
```
EN n0,n1,n2
```

### Description
The EN command is used to designate the end of a program or subroutine. If a subroutine was called by the JS command, the EN command ends thesubroutine and returns program flow to the point just after the JS command.A return parameter can be specified to EN from a subroutine to return a value from the subroutine to the calling stack.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n00101Specify trippoint status whenreturning from subroutine
n0=1 restores trippoints. n0=0 does notrestore trippoints
n10101Set status of CI interrupt whenreturning from #COMINT
n1=1 restores CI interrupt. n1=0 doesnot restore CI interrupt
n2-2,147,483,648 2,147,483,647 01Return a value from asubroutine.
Accesible from the calling program with_JS. See JS for more information

### Remarks
The EN command is used to end the automatic subroutines #MCTIME #COMINT and #CMDERR.
Use the RE command to end the #POSERR and #LIMSWI subroutines.Use the RI command to end the #ININT subroutine

### Examples
```dmc
'Galil DMC Code Example
#A;'     Program A
PR 500;' Move A axis forward 500 counts
BGA;'    Begin motion
AMA;'    Pause the program until the A axis completes the motion
EN;'     End of Program 
```
```dmc
'Galil DMC Code Example
#example
'test program showing restoring trippoints with EN
XQ#err,1;'   Execute thread to generate error
AI1;'        Wait for input 1 to trigger
MG"hello";'  After input, message out
EN
```
```dmc
#err
'dummy thread that runs to cause an error
XX123;'      Invalid command
'causes CMDERR to be called, interrupting thread 0
EN
```
```dmc
#CMDERR
'error subroutine running on thread 0
tc=_TC;'     Save error code
EN1;'        End routine, restore AI trippoint. 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `ENDIF` — End of IF conditional statement
*Category: PROGRAMMING*


**Syntax:**
```
ENDIF
```

### Description
The ENDIF command is used to designate the end of an IF conditional statement. An IF conditional statement is formed by the combination of an IF andENDIF command. An ENDIF command must always be executed for every IF command that has been executed. It is recommended that the user notinclude jump commands inside IF conditional statements since this causes re-direction of command execution. In this case, the command interpreter maynot execute an ENDIF command.

### Arguments
ENDIF is a command with no parameters

### Remarks
None

### Examples
```dmc
'Galil DMC Code Example
IF (@IN[1]=0);'                 IF conditional statement based on input 1
 IF (@IN[2]=0);'                2nd IF conditional statement executed if 1st IF conditional true
  MG "IN1 AND IN2 ARE ACTIVE";' Message to be executed if 2nd IF conditional is true
 ELSE;'                         ELSE command for 2nd IF conditional statement
  MG "ONLY IN1 IS ACTIVE";'     Message to be executed if 2nd IF conditional is false
 ENDIF;'                        End of 2nd conditional statement
ELSE;'                          ELSE command for 1st IF conditional statement
 IF (@IN[2]=0);'             3rd IF conditional statement executed if 1st IF conditional false
  MG "ONLY IN2 IS ACTIVE";'  Message to be executed if 3rd IF conditional statement is true
 ELSE;'                      ELSE command for 3rd conditional statement
  MG "IN1 AND IN2 INACTIVE";'Message to be executed if 3rd IF conditional statement is false
 ENDIF;'                     End of 3rd conditional statement
ENDIF;'                      End of 1st conditional statement 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `EO` — Echo
*Category: SYSTEM CONFIG*


**Syntax:**
```
EO n
```

### Operands
- `_EO`
- `Operand holds the value last set by the command`

### Description
The EO command turns the echo on or off. If the echo is off, characters input over the bus will not be echoed back.

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | 0 | Echo Off |  |
|  | 1 | Echo On | Default |

### Remarks
This command is defaulted to EO1. Galil software upon connection will set EO0
The EO command is accepted over the serial port only.
The ethernet port will not echo commands

### Examples
```dmc
'Galil DMC Code Example
EO 0;' Turns echo off
EO 1;' Turns echo on 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `EP` — Cam table master interval and phase shift
*Category: ECAM/GEARING*


**Syntax:**
```
EP n0,n1
```

### Operands
- `_EP`
- `Operand holds the value last set by the command`

### Description
The EP command defines the ECAM table intervals and offset. The offset is the master position of the first ECAM table entry. The interval is the differenceof the master position between 2 consecutive table entries. This command effectively defines the size of the ECAM table. Up to 257 points may bespecified.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 |  |  |  |  |  |  |
|  | 1 | 32,767 | 256 | 1 | Master position interval Cannot be changed while ECAM is running |  |
| n1 | -2,147,483,648 2,147,483,647 0 |  |  | 1 | ECAM table phase shift Can be modified during ECAM |  |

### Remarks
_EP contains the value of the interval n0.The offset parameter 'n1' can also be used to instantaneously phase shift the graph of the slave position verses the master position. This can be usedto make on-the-fly corrections to the slaves.
See application note #2502 for more details. http://www.galil.com/download/application-note/note2502.pdf

### Examples
```dmc
'Galil DMC Code Example
EP 20;'           Sets the cam master points to 0,20,40 . . .
d =  _EP;'        Set the variable d equal to the ECAM internal master interval
EP,100;'          Phase shift all slaves by 100 master counts 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `EQ` — ECAM quit (disengage)
*Category: ECAM/GEARING*


**Syntax:**
```
EQm= n
EQ n,n,n,n,n,n,n,n
```

### Operands
- `_EQm`
- `Operand has special meaning, see Remarks`

### Description
The EQ command disengages an electronic cam slave axis at the specified master position. Separate points can be specified for each axis. If a value isspecified outside of the master's range, the slave will disengage immediately.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
n-2,147,483,648 2,147,483,647 N/A1Master position to disengagethe slave axis specified.
If n = outside of master position range,disengage slave axis immediately.

### Remarks
_EQn contains 1 if engage command issued and axis is waiting to engage, 2 if disengage command issued and axis is waiting to disengage, and 0 ifECAM engaged or disengaged.n = ? Returns 1 if engage command issued and axis is waiting to engage, 2 if disengage command issued and axis is waiting to disengage, and 0 ifECAM engaged or disengaged.This command is not a trippoint. This command will not hold the execution of the program flow.
If the execution needs to be held until master position is reached, use MF or MR command.

### Examples
```dmc
'Galil DMC Code Example
EQ 300,700;' Disengages the A and B motors at master positions 300 and 700 respectively. 
```
```dmc
'Galil DMC Code Example
EQ 300;' Disengages the A motor at master position 300. 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## ERROR CONTROLER   Error Limit
ERm= nER n,n,n,n,n,n,n,n
UsageERm= nArguments specified with a single axis mask and an assignment (=)ER n ...Arguments specified with an implicit, comma-separated orderOperands_ERmOperand holds the value last set by the command

### Description
The ER command sets the magnitude of the position errors for each axis that will trigger an error condition. When the limit is exceeded, the Error outputwill go low (true) and the controller's red light will be turned on. If the Off On Error (OE1) command is active, the motors will be disabled.

### Arguments
ArgumentMinMaxDefaultResolutionDescriptionNotesmAHN/AAxisAxis to assign value
n-12,147,483,647 16,3841Set the position error limit incounts
n=0 enables Error output. n=-1 disables Erroroutput.

### Remarks
The error limit specified by ER should be high enough as not to be reached during normal operation.
Examples of exceeding the error limit would be a mechanical jam, or a fault in a system component such as encoder or amplifierFor debugging purposes, ER0 and ER-1 can be used to turn the red LED on and off.

### Examples
'Galil DMC Code Example:ER 200,300,400,600;' Set the A-axis error limit to 200, the B-axis error limit to 300, the C-axis error limit to 400, and the D-axis error limit to 600.:ER ,1000;' Sets the B-axis error limit to 1000, leave the A-axis error limit unchanged.:ER ?,?,?,?;' Return A,B,C and D values200,1000,400,600 :ER ?;' Return A value200 :V1=_ERA;' Assigns V1 value of ERA:MG V1;' Returns V1200

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `ES` — Ellipse Scale
*Category: VECTOR/LINEAR*


**Syntax:**
```
ES n0,n1
```

### Description
The ES command divides the resolution of one of the axes in a vector mode (VM). This function allows for the generation of circular motion when encoderresolutions differ. It also allows for the generation of an ellipse instead of a circle. The resolution change applies for the purpose of generating the VP andCR commands, effectively changing the axis with the higher resolution to match the coarser resolution.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 | 1 | 65,535 | 1 | 1 | First value used for resolution scaling | See Remarks for usage |
| n1 |  |  |  |  |  |  |
|  | 1 | 65,535 | 1 | 1 | Second value used for resolution scaling See Remarks for usage |  |

### Remarks
For VM xy
When n0 > n1, the resolution of x will be multiplied by n0/n1When n0 < n1, the resolution of y will be multiplied by n1/n0
The ES command will apply to the selected coordinate system, S or T. To select the coordinate system, use the command CAS or CAT.

### Examples
```dmc
'Galil DMC Code Example
VMAB;ES 3,4;' Divide B resolution by 4/3
VMCA;ES 2,3;' Divide A resolution by 3/2
VMAC;ES 3,2;' Divide A Resolution by 3/2
'Note:  ES must be issued after VM. 
```
```dmc
'Galil DMC Code Example
VMAN;ES 3,2;' Divide A Resolution by 3/2
'Note:  ES must be issued after VM. 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## ECAM/GEARINGET   Electronic cam table
ET n,n,n,n,n,n,n,nET[n0] = n,n,n,n,n,n,n,n

### Description
The ET command sets the ECAM table entries for the slave axes. The values of the master axes are not required. The slave entry (n) is the position of theslave axes when the master is at the point (m i) + o, where i is the interval and o is the offset as determined by the EP command.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 | 0 | 256 | N/A | 1 Index of the ECAM table entry |  |  |
| n | -2,147,483,648 2,147,483,647 0 |  |  | 1 Position of the slave axis at the specified table point. |  |  |

### Remarks
[n0] can be omitted only if EC has initialized the index count. In this case, each ET command will increment the index counter by 1.n=? Returns the slave position for the specified point.

### Examples
'Galil DMC Code ExampleET[0]= 0,,0;' Specifies the position of the slave axes A and C to be synchronized with the starting point of the master.ET[1]= 1200,,400;' Specifies the position of the slave axes A and C to be synchronized with the second point of the masterEC 0;' Set the table index value to 0, the first element in the tableET 0,,0;' Specifies the position of the slave axes A and C to be synchronized with the starting point of the master.ET 1200,,400;' Specifies the position of the slave axes A and C to be synchronized with the second point of the master

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `EW` — ECAM Widen Segment
*Category: ECAM/GEARING*


**Syntax:**
```
EW n0,n1,n2,n3
```

### Operands
_EW0_EW1_EW2_EW3
Operand has special meaning, see

### Remarks

### Description
The EW command allows widening the length of one or two ECAM segments beyond the width specified by EP. For ECAM tables with one or two longlinear sections, this allows placing more points in the curved sections of the table. There are only two widened segments, and if used they are common forall ECAM axes.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 | 1 | 255 | -1 | 1 | Index of first widened segment If n0 = -1, no segment is widened |  |
n112,147,483,647 01Length of first widenedsegmentIn master counts
n23255-11Index of second widenedsegment
If n2 = -1, no segment is widened. n2 mustbe > n0
n312,147,483,647 01Length of second widenedsegmentIn master counts

### Remarks
Remember that the widened segment lengths must be taken into account when determining the modulus (EM) for the master.The second widened segment cannot be used unless the first widened segment is also being used.The segments chosen should not be the first or last segments, or consecutive segments.
Operand

### Usage
_EW0 contains n0, the index of the first widened segment._EW1 contains n1, the length of the first widened segment._EW2 contains n2, the index of the second widened segment_EW3 contains n3, the length of the second widened segment.

### Examples
```dmc
'Galil DMC Code Example
EW 41, 688;'            Widen segment 41 to 688 master counts
EW 41, 688, 124, 688;'   Widen segments 41 and 124 to 688 master counts 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `EY` — ECAM Cycle Count
*Category: ECAM/GEARING*


**Syntax:**
```
EY n
```

### Operands
- `_EY`
- `Operand holds the value last set by the command`

### Description
The EY command sets or gets the ECAM cycle count. This is the number of times that the ECAM axes have exceeded their modulus as defined by the EMcommand. EY will increment by one each time the master exceeds its modulus in the positive direction, and EY will decrement by one each time themaster exceeds its modulus in the negative direction.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | -2,147,483,648 2,147,483,647 0 |  |  | 1 | Current ECAM cycle count |  |

### Remarks
_EY returns the current cycle countEY can be used to calculate the absolute position of an axis with the following equation:
Absolute position = EY * EM + TP

### Examples
```dmc
'Galil DMC Code Example
MG _EY * _EMY + _TPY;'         print absolute position of master (Y) 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC1806*

---

## `FA` — Acceleration Feedforward
*Category: FILTER/CONTROL*


**Syntax:**
```
FAm= n
FA n,n,n,n,n,n,n,n
```

### Operands
- `_FAm`
- `Operand holds the value last set by the command`

### Description
The FA command sets the acceleration feedforward coefficient. This coefficient is scaled by the set acceleration and adds a torque bias voltage during theacceleration phase and subtracts the bias during the deceleration phase of a motion.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 8,191 | 0 | 1/4 | Value of proportional term |  |

### Remarks
The Feedforward Bias product is limited to 10 Volts.If the feedforward coefficient is changed during a move, then the change will not take effect until the next move.FA operates on PA, PR, IP, JG and PVT mode.FA does not operate in:
Contour Mode (CM)Axis is Gearing or ECAM slaveCoordinated motion (LM, VM)
Acceleration Feedforward Bias = FA * AC * (1.5 10-7) * ((TM/1000)^2)Deceleration Feedforward Bias = FA * DC * (1.5 10-7) * ((TM/1000)^2)

### Examples
```dmc
'Galil DMC Code Example
'Set feedforward coefficient to 10 for the A-axis 
'and 15 for the B-axis.  The effective bias will 
'be 0.75V for A and 2.25V for B.
```
```dmc
:AC 500000,1000000
:FA 10,15
:MG _FAA,_FAB
 10 15 
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,EDD37010,DMC1802,DMC1806,DMC2103,DMC2105*

---

## `FC` — Distance-selectable feedforward gain
*Category: FILTER/CONTROL*


**Syntax:**
```
FCm= n
FC n,n,n,n,n,n,n,n
```

### Operands
- `_FCm`
- `Operand holds the value last set by the command`

### Description
Adds a bias to the torque output TT proportional to the commanded velocity if the distance from the end of the move is less than FN. FC is the same asFV but activated FN counts from the end of the move and both positive and negative values are allowed.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis Axis to assign value |  |  |
| n | -8,191 | 8,191 | 0 | 1 Value of distance selectable feedforward gain |  |  |

### Remarks
Valid only in -NAN and -CER firmwareBias in volts = 1.22 E-6 * FC . (commanded Velocity in counts/s)

### Examples
```dmc
'Galil DMC Code Example
SPA=100000;'set speed to 100,000 cnts/second
FCA=10;'    set distance-selectable velocity feedforward gain to 10
FNA=50000;'  set distance from end of move when FC is engaged to 5000 counts
PRA=100000;' command move of 10,000 counts
BGA;'       begin move
EN
' Move shown below with KP 0,KD 0,KI 0,K1 0,K2 0,K3 0 
```

---

## `FE` — Find Edge
*Category: INDEPENDENT MOTION*


**Syntax:**
```
FE mm
```

### Description
The FE command moves a motor until a transition is seen on the home input for that axis. The direction of motion depends on the initial state of thehoming input (use the CN command to configure the polarity of the home input). Once the transition is detected, the motor decelerates to a stop.This command is useful for creating custom homing sequences.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | N/A | Multi-Axis Mask Axes to Find Edge |  |  |

### Remarks
Find Edge only searches for a change in state on the Home Input. Use FI (Find Index) to search for the encoder index. Use HM (Home) to search forboth the Home input and the Index.Remember to specify BG after each of these commandsSpeed of Find Edge is set with the SP command and should be low enough to allow for a minimum of a 2 sample period pulse width on the homesignal. With TM 1000, the pulse width must be at least 2ms.
Direction of Travel
_CN1 value Home input digital state _HMn state Direction of travel if FE begun in this state-1pull-up or non-active opto1Backward-1grounded or active opto0Forward1pull-up or non-active opto0Forward1grounded or active opto1Backward

### Examples
```dmc
'Galil DMC Code Example
:FEB;' Only find edge on B
:BGB;
:FECD;' Find edge on C and D
:BGCD;
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,DMC52000,DMC1802,DMC1806,DMC2103,DMC2105*

---

## `FI` — Find Index
*Category: INDEPENDENT MOTION*


**Syntax:**
```
FI mm
```

### Description
The FI and BG commands move the motor until an encoder index pulse is detected.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | N/A | Multi-Axis Mask Axes to Find Index |  |  |

### Remarks
The controller looks for a transition from low to high. There are 2 stages to the FI command. The first stage jogs the motor at the speed and directionof the JG command until a transition is detected on the index line. When the transition is detected, the position is latched and the motor will decelerateto a stop. In the second stage, the motor will reverse direction and move to the latched position of the index pulse at the speed set by the HVcommand. At the conclusion of FI, the position is defined as zero.
Find Index only searches for a change in state on the Index. Use FE to search for the Home. Use HM (Home) to search for both the Home input andthe Index. Remember to specify BG after each of these commands.

### Examples
```dmc
'Galil DMC Code Example
#HOME;'          Home Routine
JG 1000,-2000;'  Set the speed and direction for the first phase of the FI move
HV 500,500;'     Set the speed for the second phase of the FI move
FI AB;'          Queue up a find edge move on the A and B axes
'                Direction of phase 2 is opposite of phase 1.
BG B;'           Begin FI move on B axis
AM B;'           After the move has finished on axis B,
BG A;'           Begin FI move on the A axis
AM A;'           After the move has finished on axis A,
MG "FI done";'   Output a message indicating the FI move is complete.
EN
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `FL` — Forward Software Limit
*Category: ERROR CONTROL*


**Syntax:**
```
FLm= n
FL n,n,n,n,n,n,n,n
```

### Operands
- `_FLm`
- `Operand has special meaning, see Remarks`

### Description
The FL command sets the forward software position limit. If this limit is exceeded during motion, motion on that axis will decelerate to a stop. Forwardmotion beyond this limit is not permitted.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | -2,147,483,648 2,147,483,647 2,147,483,647 1 |  |  |  | Value of software forward limit 2147483647 turns off forward limit |  |

### Remarks
The forward limit is activated at n+1. n = 2147483647 effectively disables the forward soft limit.The software limit is specified in counts for a servo system or in microsteps for a stepper system.When the forward software limit is activated, the automatic subroutine #LIMSWI will be executed if it is included in the program.If motion is commanded when the axis is already passed the FL value, the controller will return error code 22. See TC for details.

### Examples
```dmc
'Galil DMC Code Example
#TEST;'  Test Program
AC 1000000;' Acceleration Rate
DC 1000000;' Deceleration Rate
FL 15000;' Forward Limit
JG  5000;' Jog Forward
BGA;'    Begin
AMA;'    After Limit
RPA;'    Tell Position
EN;'     End
```
```dmc
'Hint:  Galil controllers also provide hardware limits. 
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `FN` — Distance from end of move when FC is engaged
*Category: FILTER/CONTROL*


**Syntax:**
```
FNm= n
FN n,n,n,n,n,n,n,n
```

### Operands
- `_FNm`
- `Operand holds the value last set by the command`

### Description
Adds a bias to the torque output TT proportional to the commanded velocity if the distance from the end of the move is less than FN. FC is the same asFV but activated FN counts from the end of the move and both positive and negative values are allowed.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis Axis to assign value |  |  |
| n | 0 | 2,147,483,647 0 |  | 1 Distance from end of move for FC to engage |  |  |

### Remarks
Valid only in -NAN and -CER firmwareBias in volts = 1.22 . E-6 . FC . (commanded Velocity in counts/s)

### Examples
```dmc
'Galil DMC Code Example
SPA=100000;'set speed to 100,000 cnts/second
FCA=10;'    set distance-selectable velocity feedforward gain to 10
FNA=50000;'  set distance from end of move when FC is engaged to 5000 counts
PRA=100000;' command move of 10,000 counts
BGA;'       begin move
EN
'Move shown below with KP 0,KD 0,KI 0,K1 0,K2 0,K3 0 
```

---

## `FV` — Velocity Feedforward
*Category: FILTER/CONTROL*


**Syntax:**
```
FVm= n
FV n,n,n,n,n,n,n,n
```

### Operands
- `_FVm`
- `Operand has special meaning, see Remarks`

### Description
The FV command sets the velocity feedforward coefficient. This coefficient generates an output bias signal in proportions to the sample to sample changein reference position (RP).

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 8,191.75 | 0 | 0.25 | Value of proportional term |  |
|  | 0 | 8,191 | 0 | 1 | Value of proportional term -CER firmware only. |  |

### Remarks

*Applies to: Contour Mode (CM) and in gearing when an axis is a slave*
Velocity feedforward bias = FV * (Velocity [cts/s]) * (1.20 10-6) * (TM/1000)
With FVA=10, TM 1000 and the velocity is 200,000 count/s, the velocity feedforward bias equals 2.40 volts

### Examples
```dmc
'Galil DMC Code Example
'Set feedforward coefficients to 10 and 20 for A and B respectively.
'This effective bias will be 0.366 volts for A and 1.95 volts for B.
```
```dmc
:FV 10,20
:JG 30000,80000
:MG _FVA,_FVB
 10 20 
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,EDD37010,DMC1802,DMC1806,DMC2103,DMC2105*

---

## `GA` — Master Axis for Gearing
*Category: ECAM/GEARING*

GAm0= mGA m,m,m,m,m,m,m,m

### Description
The GA command specifies the master axes for electronic gearing. Multiple masters for gearing may be specified. A slave axis may have only one master.The masters may be the main encoder input, auxiliary encoder input, or the commanded position of any axis. The master may also be the commandedvector move in a coordinated motion of LM or VM type. When the master is a simple axis, it may move in any direction and the slave follows. When themaster is a commanded vector move, the vector move is considered positive and the slave will move forward if the gear ratio is positive, and backward ifthe gear ratio is negative. The slave axes and ratios are specified with the GR command and gearing is turned off by the command GR0.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m0 | A | H | N/A | Axis Slave axis to assign master |  | m0<>m |
mAHN/AAxisMaster axis main encoder as the slave'smaster
CACHN/AAxisMaster axis commanded position as theslave's master
Valid arguments:CA,CB,CC,CD,CE,CF,CG,CH
DADHN/AAxisMaster axis aux encoder as the slave'smaster
Valid arguments:DA,DB,DC,DD,DE,DF,DG,DHSTN/AAxisVector plane as the slave's masterMNN/AAxisVirtual axis as the slave's master

### Remarks
m=? returns the GA settingWhen gearing is used in a gantry application, gearing off of the commanded position is recommendedWhen an axis is geared to a master axis, the slave's geared profile will be superimposed to the slave's commanded profileGearing is disabled in the following conditions:
The gear ratio is set to 0A limit switch is reachedThe axis is commanded to stop with the ST commandIf it is desired that gearing is not disabled when a limit switch is reached or an ST command is issued, enable Gantry Mode (GM command).

### Examples
'Galil DMC Code ExampleREM setup gearing where B axis is master for A and C axes.#gearMO B;' Turn off servo to B motorGA B,,B;' Specify master axis as B on A and CGR .25,,-5;' Specify A and C gear ratiosSH B;' Enable B axisPRB= 1000;BG B;' Move B axis 1000 counts' A axis will be commanded to move 250 counts positive' C axis will be commanded to move -5000 countsEN;' End program
'Galil DMC Code ExampleREM imaginary axis example#imagGAA= N;' set the imaginary N axis as the master of the A axisGRA= 2.5;' set the gear ratio for the A axis as 2.5PRN= 1000;' Move N axis 1000 countsPRA= 1000;' Move A axis 1000 counts (will be superimposed to the profiled position due to gearing)BG AN' (A axis will be commanded to move 3500 counts positive >> 2500 due to gearing + 1000 due to commanded move)EN;' End Program

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `GD` — Gear Distance
*Category: ECAM/GEARING*


**Syntax:**
```
GD n,n,n,n,n,n,n,n
GDm= n
```

### Operands
- `_GDm`
- `Operand holds the value last set by the command`

### Description
The GD command sets the distance of the master axis over which the specified slave will be engaged, disengaged or changed to a new gear setting. Usingthis command will cause the master axis and the slave axis positions to differ due to the gradual gear shift. To correct for this, see the _GP operand

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Slave axis to assign value |  |
| n | 0 | 32,767 | 0 | 1 | Absolute Value of Gearing Distance 0 engages gearing instantly |  |

### Remarks
The distance is entered as an absolute value, the motion of the master may be in either direction.If the distance is set to 0, then the gearing will engage instantly.

### Examples
```dmc
'Galil DMC Code Example
#A
GA ,A;'   Sets the A axis as the gearing master for the B axis
GD,5000;' Set distance over which gearing is engaged to 5000 counts of the master axis.
JG 5000;' Set the A axis jog speed to 5000 cts/sec
BG A;'    Begin motion on the A axis
AS A;'    Wait until A axis reaches the set speed of 5000 counts/sec
GR ,1;'   Engage gearing on the B axis with a ratio of 1:1, the 
'distance to fully engage gearing will be 5000 counts of the master axis
WT 1000;' Wait 1 second
GR ,3;'   Set the gear ratio to three.  The ratio will be changed 
'over the distance set by the GD command
WT 1000;' Wait 1 second
GR ,0;'   Disengage the gearing between the B axis slave and the 
'master.  The gearing will be disengaged over the number of 
'counts of the master specified with the GD command above
EN;'      End program 
```
```dmc
'Galil DMC Code Example
#A
GA DA;'   Set the aux encoder input as the gearing master
GD 5000;' Set distance over which gearing is engaged to 5000 counts of the master axis.
GR 1;'    Set a gear ratio of 1:1, the distance to fully 
'engage gearing will be 5000 counts of the master axis
WT 1000;' Wait 1 second
GR 3;'    Set the gear ratio to three.  The ratio will be changed 
'over the distance set by the GD command
WT 1000;' Wait 1 second
GR 0;'    Disengage the gearing between the axis aux encoder 
'The gearing will be disengaged over the number of 
'counts of the master specified with the GD command above
EN;'      End program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `GM` — Gantry mode
*Category: ECAM/GEARING*


**Syntax:**
```
GMm= n
GM n,n,n,n,n,n,n,n
```

### Operands
- `_GMm`
- `Operand holds the value last set by the command`

### Description
The GM command specifies the axes in which the gearing function is performed in the Gantry mode. In this mode, the geared slaves will not be stoppedby the ST command or by limit switches.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 1 | 0 | 1 | Value of GM command 1 Enables Gantry Mode, 0 disables Gantry Mode |  |

### Remarks
Only setting Gantry Mode of the slave to 0 (GMm= 0) will disable Gantry Mode

### Examples
```dmc
'Galil DMC Code Example
GM 1,1,1,1;'     Enable GM on all axes
GM 0;'           Disable GM on A-axis, other axes remain unchanged
GM ,,1,1;'       Enable GM on C-axis and D-axis, other axes remain unchanged
GM 1,0,1,0;'     Enable GM on A and C-axis, disable GM on B and D axis 
```
```dmc
'Galil DMC Code Example
GA DA;' Set master for A axis to the A axis Aux encoder input
GM 1;'  Enable Gantry Mode on A axis
GR 1;'  Set Gear Ratio to 1
WT 1000
ST;'    Axis will still be in gearing Mode
WT 1000
GM 0;'  Disable Gantry Mode (Axis still gearing)
WT 1000
ST;'    Will clear gearing mode
EN
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `GR` — Gear Ratio
*Category: ECAM/GEARING*


**Syntax:**
```
GRm= n
GR n,n,n,n,n,n,n,n
```

### Operands
- `_GRm`
- `Operand holds the value last set by the command`

### Description
GR specifies the Gear Ratios for the geared axes in the electronic gearing mode. The master axis is defined by the GA command.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Slave axis to assign gear ratio |  |
| n | -127 | 127 | 0 | 1/65,536 | Value of Gear Ratio of Slave | n = 0 disables gearing |

### Remarks
The gear ratio may be different for each geared axis.The master can go in both directions.Gearing is disabled in the following conditions:
The gear ratio is set to 0A limit switch is reachedThe axis is commanded to stop with the ST commandIf it it is desired that gearing is not disabled when a limit switch is reached or an ST command is issued, enable Gantry Mode (GM command).

### Examples
```dmc
'Galil DMC Code Example
REM setup gearing where B axis is master for A and C axes.
#gear
MOB;'          Turn off servo to B motor
GAB,,B;'       Specify master axis as B
GR .25,,-5;'   Specify A and C gear ratios
SHB;'          Enable B axis
PRB=1000;BGB;' Move B axis 1000 counts
'              A axis will be commanded to move 250 counts positive
'              C axis will be commanded to move 5000 counts negative (-5000)
EN;'           End program 
```
```dmc
'Galil DMC Code Example
REM setup gearing where virtual axis, N, is master for axis A.
#gear
GA N;'   Specify master axis as N (imaginary Axis)
GR -2;'  Specify gear ratio or -2
PRN=1000;BGN;' Move N axis 1000 counts
WT 1000
MG _RPA,_RPN;' will indicate -2000 on A and 1000 on N
EN;'           End program
```
```dmc
:'execution of gearing example
:XQ
:
-2000.0000 1000.0000 
```
```dmc
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `HM` — Home
*Category: INDEPENDENT MOTION*


**Syntax:**
```
HM mm
```

### Operands
- `_HMm`
- `Operand has special meaning, see Remarks`

### Description
The HM command performs a three stage homing sequence for servo systems and a two stage sequence for stepper motors.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | ABCDEFGH | Multi-Axis Mask Axis to perform Homing Routine No argument homes all axes |  |  |

### Remarks
The HM command is derived of FE and FI commands. Custom homing sequences can be created by using the FE (Find Edge) and FI (Find Index)commands.
The sequence of FE and FI commands varies depending upon if the axis is configured for a stepper or servo
Step One. Servos and Steppers
During the first stage of the homing sequence, the motor moves at the user-programmed speed until detecting a transition on the homing input forthat axis. The speed for step one is set with the SP command.The direction for this first stage is determined by the initial state of the homing input. The state of the homing input can be configured using thesecond field of the CN command.Once the homing input changes state, the motor decelerates to a stop.
Step Two. Servos and Steppers
At the second stage, the motor changes directions and approaches the transition again at the speed set with the HV command. When the transition isdetected, the motor is stopped instantaneously.
Step Three. Servos only
At the third stage, the motor moves in the positive direction at the speed set with the HV command until it detects an index pulse via latch from theencoder. It returns to the latched position and defines it as position 0.
Operand
_HMm state as a function of CN,n and Home digital input
_CN1 value Home input digital state _HMn state Direction of travel if HM begun in this state-1pull-up or non-active opto1Backward-1grounded or active opto0Forward1pull-up or non-active opto0Forward1grounded or active opto1Backward

### Examples
```dmc
'Galil DMC Code Example
:HM;'     Set Homing Mode for all axes
:BG;'     Home all axes
:HMA;'     Set Homing Mode for axis A
:BGA;'     Home only the A-axis 
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,DMC52000,DMC1802,DMC1806,DMC2103,DMC2105*

---

## `HS` — Handle Assignment Switch
*Category: ETHERNET*


**Syntax:**
```
HSm0= m
```

### Description
The HS command is used to switch the ethernet handle assignments between two handles. Handles are opened when a connection is established by anexternal client (TCP or UDP), or when a handle is assigned explicitly with the IH command. Should those assignments need modifications, the HScommand allows the handles to be reassigned.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m0 | A | H | N/A | Handle | First handle to switch |  |
SSN/AHandleFirst handle to switchS = current handle sending command. Not valid inprogram
mAHN/AHandleSecond handle toswitch
SSN/AHandleSecond handle toswitch
S = current handle sending command. Not valid inprogram

### Remarks
A handle encapsulates the following 4 pieces of information:
1. Local IP address (same for all handles)2. Remote IP address3. Local Port4. Remote PortHandles are used as a pointer to the network socket in commands such as SAh, MBh, {Eh}, and IHh where h is the handle letter

### Examples
```dmc
'Galil DMC Code Example
:HSC= D;' Connection for handle C is assigned to handle D.  Connection for handle D is assigned to handle C.
:HSS= E;' Executing handle connection is assigned to handle E.  Connection for handle E is assigned to executing handle. 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC2105*

---

## `HV` — Homing Velocity
*Category: INDEPENDENT MOTION*


**Syntax:**
```
HVm= n
HV n,n,n,n,n,n,n,n
```

### Operands
- `_HVm`
- `Operand holds the value last set by the command`

### Description
Sets the slew speed for the FI final move to the index and all but the first stage of HM.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
n015,000,0002562Value of Homing Velocity incnts/second
For MT settings of 1,-1,1.5 and -1.5(Servos)
03,000,0002562Value of Homing Velocity incnts/second
For MT settings of 2,-2,2.5 and -2.5(Steppers)

### Remarks
None

### Examples
```dmc
'Galil DMC Code Example
HVA=1000;'  set homing speed
HMA;'       home to home switch then index
BGA;'       begin motion
AMA;'       wait for motion complete
EN;'        end program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC1806*

---

## `HX` — Halt Execution
*Category: PROGRAMMING*


**Syntax:**
```
HX n
```

### Operands
_HX0_HX1_HX2_HX3_HX4_HX5_HX6_HX7
Operand has special meaning, see

### Remarks

### Description
The HX command halts the execution of any program that is running.The parameter n specifies the thread to be halted.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | 0 | 7 | N/A | 1 | Thread number to halt If n omitted, all threads are halted. |  |

### Remarks
When used as an operand, _HXn contains the running status of thread n with:
0 Thread not running1 Thread is running2 Thread has stopped at trippoint

### Examples
```dmc
'Galil DMC Code Example
XQ #A;'    Execute program #A, thread zero
XQ #B,3;' Execute program #B, thread three
HX0;'     Halt thread zero
HX3;'    Halt thread three 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `IA` — IP Address
*Category: ETHERNET*


**Syntax:**
```
IA n0, n1, n2, n3
IA n4
IA < o
```

### Operands
_IA0_IA1_IA2_IA3_IA4_IA5
Operand has special meaning, see

### Remarks

### Description
The IA command assigns the controller IP address and the TCP time out. The IP address can also be assigned via Galil software or from an external server.The controller defaults to DHCP and will receive an IP address from a DHCP server if present. To manually set an IP address over the serial connection,send DH0 to disable DHCP prior to setting the new IP address with IA.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 | 0 | 255 | 0 | 1 Byte 3 of the IP address |  |  |
| n1 | 0 | 255 | 0 | 1 Byte 2 of the IP address |  |  |
| n2 |  |  |  |  |  |  |
|  | 0 | 255 | 0 | 1 Byte 1 of the IP address |  |  |
| n3 | 0 | 255 | 0 | 1 Byte 0 of the IP address |  |  |
n4-2,147,483,648 2,147,483,647 01The full IP address specified as a signed 32 bit two'scomplement integer
o12,147,483,647 2501The time in update samples between TCP retriesUp to 5 retriesoccur

### Remarks
When specifying the IP address with IA, remember to use commas as delimeters instead of periods.n4 = ? will return the IP address of the controller in comma seperated format.Setting the IP address over Ethernet to a new value will cause an immediate disconnect/timeout. Reconnect to the controller on the new IP addressand issue a BN to save the new value to flash.
To change the IP address manually over Ethernet on a controller which was initially assigned via DHCP, send "DH 0;IA n0,n1,n2,n3" as one commandline. Reconnect on the new IP and issue BN to save.

### Operands
_IA0 contains the IP address representing a 32 bit signed number (Two's complement). See the example below._IA1 contains the value for o (retry time)._IA2 contains the number of available handles._IA3 contains the number of the handle using this operand where the number is 0 to 7. 0 represents handle A, 1 handle B, etc. This is used by aremote device to detect its outgoing handle (see WH)._IA4 contains the number of the handle that lost communication last, contains a -1 on reset to indicate no handles lost.
_IA5 returns autonegotiation Ethernet speed. Returns 10 for 10-Base T and returns 100 for 100-Base T, it will return -1 if there is no physical link.

### Related Commands
DH - DHCP Client EnableIH - Open IP HandleTH - Tell Ethernet HandleWH - Which Handle

### Examples
```dmc
'Galil DMC Code Example
IA 151,12,53,89;' Assigns the controller with the address 151.12.53.89
IA 2534159705;'   Assigns the controller with the address 151.12.53.89
IA < 500;'        Sets the timeout value to 500 msec 
```
```dmc
'Galil DMC Code Example
REM The individual IP address bytes can be derived within embedded code using _IA0
a=@INT[(_IA0&($FF000000))/$1000000]&$FF
b=@INT[(_IA0&($00FF0000))/$10000]
c=@INT[(_IA0&($0000FF00))/$100]
d=@INT[(_IA0&($000000FF))]
REM IP address = a.b.c.d 
```

---

## IA applies to DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC2105

---

## `ID` — Identify
*Category: INTERROGATION*


**Syntax:**
```
ID
```

### Description
The ID command is used to query the controller for the hardware configuration and factory programming.

### Arguments
ID is a command with no arguments

### Remarks
Refer to the Examples section for actual controller responsesThe following are descriptions of the ID response
The ID command follows this pattern:
:IDFW, firmware revisionDMC, 4103, options, Rev #, nre #AMP1, Amplifier model # for axes A-D, options, Rev #, nre #AMP2, Amplifier model # for axes E-H, options, Rev #, nre #:
Where the firmware revision is the string returned by the ^R^V command,options are any ordered options associated with that hardware component,model # refers to the Galil part number for that product,Rev # is the hardware revision for that component,nre # is the NRE number for that component. This field will not be present if there is no NRE number, and can appear on any component after the Revfield.
If a particular component is not present - i.e. the second amplifier on a one axis controller, it will not be listed in ID.

### Examples
```dmc
'Galil DMC Code Example
'Part Number: DMC-4143-BOX4-D3040
:ID
FW, DMC4143 Rev 1.3a
DMC, 4103, Rev 11
AMP1, 43040, Rev 6
:
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,DMC52000,EDD37010,RIO47000,RIO57400*

---

## `IF` — IF conditional statement
*Category: PROGRAMMING*


**Syntax:**
```
IF (ex)
```

### Description
The IF command is used in conjunction with an ENDIF command to form an IF conditional statement. The arguments consist of one or more conditionalstatements and each condition must be enclosed with parenthesis (). If the conditional statement(s) evaluates true, the command interpreter will continueexecuting commands which follow the IF command. If the conditional statement evaluates false, the controller will ignore commands until the associatedENDIF command or an ELSE command occurs in the program.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| ex | N/A | N/A | N/A | Expression | Conditional statement for IF statement See Remarks |  |

### Remarks
Conditions are tested with the following logical operators:
< less than or equal to> greater than= equal to<= less than or equal to>= greater than or equal to<> not equalBit wise operators | and & can be used to evaluate multiple conditions.A true condition = 1 and a false condition = 0.Each condition must be placed in parenthesis for proper evaluation by the controller.
```dmc
'Galil DMC Code Example
IF((var0=1)&(var1=2));' valid IF statement
```
```dmc
IF var0=1&var1=2;'      invalid IF statement
```
```dmc
IF (var0=1&var1=2);'    invalid IF statement 
```

### Examples
```dmc
'Galil DMC Code Example
#A
IF (_TEA<1000);'  IF conditional statement based on a motor position
 MG "Motor is within 1000 counts of zero";' Message to be executed for true
ENDIF;'           End of IF conditional statement
EN;'              End Program 
```
```dmc
'Galil DMC Code Example
#input
IF (@IN[1]=0);'          IF conditional statement based on input 1
 MG "Input 1 is Low";'   Message to be executed if "IF" statement is true
ENDIF;'                  End of IF conditional statement
EN
```
```dmc
'Galil DMC Code Example
#var
v1=@AN[1]*5;'            some calculation for variable v1
IF((v1>25)&(@IN[4]=1));' Conditions based on V1 variable and input 4 status
 MG "Conditions met";'   Message to be executed if "IF" statement is true
ENDIF;'                  End of IF statement
EN
```
```dmc
'Galil DMC Code Example
REM The conditions of an if statement can be simplied with the fact that 
REM a true condition = 1 and a false condition = 0.
#true
v1=1
IF (v1)
 MG "True v1=",v1
ENDIF
#false
v1=0
IF (v1)
 'if statement evaluates false
ELSE
 MG "False v1=",0
ENDIF
EN
```

---

## `IH` — Open IP Handle
*Category: ETHERNET*


**Syntax:**
```
IHm= n0,n1,n2,n3 <o >p
IHm= n <o >p
IHm= >p
```

### Operands
_IHm0_IHm1_IHm2_IHm3_IHm4
Operand has special meaning, see

### Remarks

### Description
The IH command is used when the controller is operated as a master (client) to open a handle and connect to a slave (server).

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Handle | Handle to assign connection |  |
STN/AHandleSpecial handle designator usedwhen closing handlesSee

### Remarks
n0025501Byte 3 of the slave IP addressn1025501Byte 2 of the slave IP addressn2025501Byte 1 of the slave IP addressn3025501Byte 0 of the slave IP address
n4-2,147,483,648 2,147,483,647 01Slave IP address as a 32 bit value
o065,535see Notes1Specify the slave port to connectover
If o is omitted, the controller selectsthe port starting at 1000
p1221Specify the connection type toopenn = 2 is TCP. n = 1 is UDP.
-3-1N/A1Specify the connection type toclose when closing a handleSee

### Remarks

### Remarks
All 4 bytes must be assigned for an IP address to be valid.IHm=? returns the IP address as 4, 1-byte numbers.Use the following equation to change the 4 byte IP (n0,n1,n2,n3) to a single 32 bit number, n.
n = (n0*2^24) + (n1*2^16) + (n2*2^8) + n3.
When using Modbus, port 502, note that Galil Modbus supports one master per slave.
Opening a Handle
To open a handle, the user must specify:
The IP address of the slave.(optional) The port number of the slave. If not specified, the firmware will choose a port.(optional)The connection type as TCP/IP or UDP/IP. If not specified, the controller will make a TCP connection.Issue the IH command on an available handle with the correct settings for IP (n0-n3), port (o) and connection type (p).
See TH to list handle status.
Modbus connections must always be specified as port 502.
Closing a Handle
Closing multiple handles is done with the T handle identifier along with a connection type p selector.
IHT => p closes all handles matching the p type selector, where p = -1 closes UDP handles, p = -2 closes TCP handles and p = -3 closes allhandle types.Closing individual handles, other than the handle being used to send the IH command, is done with IHN => -1 where n is the handle to close (A-H).Closing the handle that sent the command is done with the S handle identifier, along with connection type p selector.
IHS => p closes the handle that sent the command if its type matches the p selector,where p = -1 closes UDP handles, p = -2 closes TCPhandles and p = -3 closes all handle types.
Operand

### Usage

---

## 1Handle connected as UDP slave2Handle connected as TCP slave-1Handle connected as UDP master-2Handle connected as TCP master-5Attempting to establish UDP handle-6Attempting to establish TCP handle_IHm30ARP was successful1ARP failed or still in progress_IHm41Waiting for ACK from slave controller after issuing a command2Received ":" as response to a command3Received "?" as response to a command4Connection timed-out waiting for a response to a commandRelated Commands
DH - DHCP Client EnableIA - IP AddressTH - Tell Ethernet HandleWH - Which Handle

### Examples
```dmc
'Galil DMC Code Example
IHA=251,29,51,1;'     Open handle A at IP address 251.29.51.1
'TCP is used as default
IHA= -2095238399;'    Open handle A at IP address 251.29.51.1
'When the IH command is given, 
'the controller initializes an ARP
'on the slave device before opening a handle.  
'This operation can cause a small time delay 
'before the controller responds 
```
```dmc
'Galil DMC Code Example
'setting up a modbus handle
MW1;'                        setup modbus wait
IHE= 192,168,100,200<502>2;' setup a modbus handle to slave
#wt;'                        wait for handle to be connected
WT2;'                        before issuing a command
JP#wt,_IHE2<>-2;'
SB5003;'                     Set output 3 on slave
WT1000;'                     1 second wait
MBE= ,5,3,0;'                Clear output 3 using MB command
EN
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC2105*

---

## `II` — Input Interrupt
*Category: IO*


**Syntax:**
```
II n0,n1,n2,n3
```

### Description
The II command enables the input interrupt function for the specified inputs.The II command is used along with the #ININT subroutine to execute specific code when inputs specified by II are in the desired state.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 |  |  |  |  |  | n0=0 disables input interrupt |
|  | 0 | 8 | 0 | 1 Lowest input to use for interrupt trigger |  |  |
| n1 | 1 | 8 | N/A | 1 Highest input to use for interrupt trigger |  | n1 must be >= n0, If omitted n1=n0 |
n21255N/A1Use bitmask as alternative selection ofinput interrupt triggers
If n0 and n1 are used, n2 is ignored,see

### Remarks
n3025501Bitmask specifying required input state forinterrupt trigger
Default=interrupt triggers on lowinputs, see Remarks

### Remarks
The argument n2 is a bitmask for the inputs selected for the input interrupt function. This field is ignored if n0 and n1 are used.
For example, if n2 = 15, the binary equivalent is 00001111. This means that inputs 1-4 would be selectd by the II function, and 5-8 would notbe.This argument n3 is bistmask showing which state the input must be in for the II function to trigger.
For example, if n0=1 and n1=4, the inputs 1,2,3 and 4 have been activated. If the value for n3 is 2 (the binary equivalent of 2 is 00000010),then input 2 must be a '1' and inputs 1,3, and 4 must be a "0", for II to trigger the #ININT subroutine.The RI command is used to return from the #ININT routine.

### Examples
```dmc
'Galil DMC Code Example
II 1,1,,0;'                 Specify interrupt on input 1 only, and triggers when input 1 = 0.
EN;'                        End Program
#ININT;'                   Interrupt subroutine
'                           The code the user wants to run when II triggers goes here.
WT100;'                     Debounce the input.                       
RI 1;'                      Return to main program, re-enabling trip point.
'                           Specify RI 0 if it is not desired to re-enable trip points. 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `IK` — Block Ethernet ports
*Category: ETHERNET*


**Syntax:**
```
IK n
```

### Description
The IK command blocks client connections to the controller on most ports below port number 1000. Specific port numbers and ports above 1000 areunaffected.

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | 0 Allow controller to receive Ethernet packets on any port |  |  |
|  | 1 Blocks Ethernet packets on ports lower than 1000. |  | Default. Ports 0,23,68, and 502 are unaffected. |

### Remarks
A Galil Ethernet controller simultaneusly operates as a server (listening for Ethernet connections from a client) and a client (able to create connectionsto a server).Ports 0, 23, 68 and 502 are used for standard client connections to the controller.

### Examples
```dmc
'Galil DMC Code Example
:IK1;' Blocks undesirable port communication
:IK0;' Allows all Ethernet ports to be used
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC2105*

---

## `IL` — Integrator Limit
*Category: FILTER/CONTROL*


**Syntax:**
```
ILm= n
IL n,n,n,n,n,n,n,n
```

### Operands
- `_ILm`
- `Operand holds the value last set by the command`

### Description
The IL command limits the effect of the integrator gain in the filter to a certain voltage.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
n-9.99829.99829.998220/65,536Value of Integrator limitin volts
n< 0 (negative value) freezes the effect of theintegrator during the move

### Remarks
IL is the absolute value of the integrator limit. For example:
ILA= 2 limits the output of the integrator of the A-axis to the +/-2 Volt range.KD and KP terms remain active in any case. The output from the KD and KP terms is not affected.
A negative parameter will freeze the effect of the integrator during the move. For Example:
ILA= -3 limits the integrator output of the A axis to +/-3V but freezes the contribution of the Integrator loop during motion.If, at the start of the motion, the integrator output is 1.6 Volts, that level will be maintained through the move and the integrator will not accumulateduring the move.Once the profiled move has completed (RP has reached final commanded position), the integrator loop will be enabled.
When using the -CER firmware, the default value of IL is -9.9982.

### Examples
```dmc
'Galil DMC Code Example
KI 2,3,5,8;' Integrator constants
IL 3,2,7,2;' Integrator limits
IL ?;'   Returns the A-axis limit 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `IP` — Increment Position
*Category: INDEPENDENT MOTION*


**Syntax:**
```
IPm= n
IP n,n,n,n,n,n,n,n
```

### Description
The IP command allows for a change in the command position while the motor is moving. This command does not require a BG.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | -2,147,483,648 2,147,483,647 N/A |  |  | 1 | Value of incremental move |  |

### Remarks
_IPm contains the current position of the motorThe IP command has four effects depending on the mode of motion being executed.
IP operation based upon modes of motion
CaseEquivalent CommandsDescriptionMotor isstanding still
IPm=n Equivalent toPRm=n;BGmMotor will move to specified position with the predefined AC,DC,SP values.
Motor ismovingtowardposition n
PRm=n0; BGm;IPm=n1Equivalent to PRm=(n0+n1); BGm
Motor will move a relative move of (n0+n1).
Motor is inJog Mode
JGm=n0;BGm;IPm=n1Equivalent to Continuing jogfrom (current position + n1)
The motor will instantly try to servo to a position which is the current instantaneous position plus thespecified IP position. SP and AC parameters have no effect. This command is useful when synchronizing 2axes in which one of the axis' speed is indeterminate due to a variable diameter pulley.
Motor is aslave ingearingmode
GAm= m0; GRm=n0;IPm=n1 Equivalent to GAm=m0; GRm=n0; PRm=n1;BGm
The motor will move with the predefined AC,DC,SP values superimposed on top of the existing gearingmotion.

### Examples
```dmc
'Galil DMC Code Example
IP 50;'  50 counts with set acceleration and speed
#CORRECT;' Label
AC 100000;' Set acceleration
JG 10000;BGA;' Jog at 10000 counts/sec rate
WT 1000;' Wait 1000 msec
IP 10;'   Move the motor 10 counts instantaneously
STA;'    Stop Motion
EN
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `IT` — Independent Time Constant - Smoothing Function
*Category: INDEPENDENT MOTION, SYSTEM CONFIG*


**Syntax:**
```
ITm= n
IT n,n,n,n,n,n,n,n
```

### Operands
- `_ITm`
- `Operand holds the value last set by the command`

### Description
The IT command filters the acceleration and deceleration functions of independent moves such as JG, PR, PA to produce a smooth velocity profile. Theresulting profile, known as smoothing, has continuous acceleration and results in reduced mechanical vibrations. IT sets the bandwidth of the filter where 1means no filtering and 0.004 means maximum filtering.The IT command also filters the individual axes during Vector Mode (VM) and Linear Interpolation Mode (LM).

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
n0.004111/256Value of independent smoothingfunction
1 = no filtering, 0.004 = maximumfiltering

### Remarks
The IT filtering results in longer motion time.The use of IT will not effect the trippoints AR and AD.
The trippoints AR & AD monitor the profile prior to the IT filter and therefore can be satisfied before the actual distance has been reached if IT isNOT 1.Details on the IT filtering can be found in Application Note #3412
https://www.galil.com/download/application-note/note3412.pdf

### Examples
```dmc
'Galil DMC Code Example
:IT 0.8, 0.6, 0.9, 0.1;' Set independent time constants for a,b,c,d axes
:IT ?;' Return independent time constant for A-axis
0.8000 
```
```dmc
'Galil DMC Code Example
REM example showing increased time due to IT filtering
#move
IT 1
t=TIME;'store time reference
PR 1000
BGA;AMA
MG TIME-t;'display move time
IT 0.01
t=TIME;'store time reference
PR 1000
BGA;AMA
MG TIME-t;'display move time
EN
```
```dmc
:'program execution output
:XQ
:
508.0000 
1112.0000 
```
```dmc
:
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `JG` — Jog
*Category: INDEPENDENT MOTION*


**Syntax:**
```
JGm= n
JG n,n,n,n,n,n,n,n
```

### Operands
- `_JGm`
- `Operand has special meaning, see Remarks`

### Description
The JG command sets the jog mode and the jog slew speed of the axes.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
|  | N | N | N/A | Axis | Virtual axis to assign value |  |
n-15,000,00015,000,00025,0002Value of jog speed incnts/secondFor MT settings of 1,-1,1.5 and -1.5 (Servos)
-3,000,0003,000,00025,0002Value of jog speed incnts/second
For MT settings of 2,-2,2.5 and -2.5(Steppers)

### Remarks
When jogging, the motion controller profiles a continuous move at the commanded speed.To stop the motion, use the ST command.JG 2 is the minimum non-zero speed_JGm contains the absolute value of the jog speed for the specified axis.The JG command will set the SP register with the absolute value of the 'n' value.
Resolution
The resolution of the JG command is dependent upon the update rate setting (TM).
With the default rate of TM 1000 the resolution is 2 cnts/second.The equation to calculate the resolution of the JG command is:
resolution = 2*(1000/TM)example:
With TM 250 the resolution of the JG command is 8 cnts/secondresolution = 2*(1000/250) = 8

### Examples
```dmc
'Galil DMC Code Example
#jg
JG 100,500,2000,5000
'                      Sets for jog mode with a slew speed of 100 counts/sec for the A-axis,
'                      500 counts/sec for the B-axis,
'                      2000 counts/sec for the C-axis,
'                      and 5000 counts/sec for D-axis.
BG;'                   Begin Motion
WT 1000;'              Wait one second
JG ,,-2000;'        Change the C-axis to slew in the negative direction at -2000 counts/sec.
EN
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `JP` — Jump to Program Location
*Category: PROGRAMMING*


**Syntax:**
```
JP #str,(ex)
JP n,(ex)
```

### Description
The JP command causes a jump to a program location on a specified condition. The program location may be any program line number or label. A jumpis taken if the specified condition is true. Multiple conditions can be used in a single jump statement.
JP can be used for relative jumps and for jump tables, see Examples.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
str1 char7 charsN/AStringLabel name for jump destinationMust be a valid label in applicationcode
n0see NotesN/A1Line number for jump destinationMaximum is number of lines ofcontroller program memory - 1
exN/AN/AN/AExpressionConditional statement/s that mustevaluate true for jump to occur
If omitted, JP automatically evaluatesas true

### Remarks
The logical operators that can be used in the conditional statement are:
< less than> greater than= equal to<= less than or equal to>= greater than or equal to<> not equal toThe conditional statements are combined in pairs using the operands "&" and "|".
The "&" operand between any two conditions requires that both statements must be true for the combined statement to be true.The "|" operand between any two conditions requires that only one statement be true for the combined statement to be true.Each condition must be placed in parentheses for proper evaluation by the controller.
```dmc
'Galil DMC Code Example
REM Use of parentheses
JP#a,((var0=1)&(var1=2));' valid conditional jump
JP#a,var0=1&var1=2;'       invalid conditional jump 
```

### Examples
```dmc
'Galil DMC Code Example
JP #POS1,(V1<5);'   Jump to label #POS1 if variable V1 is less than 5
JP #A,((V7*V8)=0);' Jump to #A if V7 times V8 equals 0
JP #B,(@IN[1]=1);'  Jump to #B if input 1 = 1
JP #C;'             Jump to #C unconditionally 
```
Jump Table
```dmc
'Galil DMC Code Example
REM Example of jumping to a label plus an offset
REM #error is a subroutine that prints an error
REM  message based on the value of an error
REM  variable, ecode
#a
REM Set error code and then JS to sub
ecode = 1
JS #error
ecode = 3
JS #error
ecode = 56;' bad error code
JS #error
EN
'
'***************
'Example of a Jump table
#error
REM First check that ecode is valid
IF (ecode < 0)
 ecode = 4
ENDIF
IF (ecode > 4)
 ecode = 4
ENDIF
REM Call the helper label with an offset
JP#error_h + ecode
```

---

## 'CRITICAL! Do not change line' spacing in following text#error_h;MG "No error, zero";ENMG "Error code 1, foo";ENMG "Error code 2, bar";ENMG "Error code 3, baz";ENMG "Invalid error code";ENREM ecode indexes the line to executeREM  above, relative to #error_hREMREM Returned messages:REM Error code 1, fooREM Error code 3, bazREM Invalid error code
Relative Jump
```dmc
'Galil DMC Code Example
REM A loop for delaying 1000 samples (~ 1 sec)
REM sample time
MG "Relative jump"
t=TIME
REM print sampled time
MG t
REM loop until TIME increments 1000 samples
REM _XQ0-1 points back to the beginning of the line
JP _XQ0-1,(TIME < (t+1000))
REM print current time
MG TIME
REM This is NOT thread safe as 
REM _XQ0 refers to thread 0 only
REM For easier readability and stability, use labels
REM wherever possible
MG "Label-based jump"
t=TIME
MG t
#wait
JP#wait, (TIME < (t+1000))
MG TIME
REM Also, where possible use trippoints
MG "Trippoint"
t=TIME
MG t
WT 1000;' see WT for units
MG TIME
EN
```
```dmc
REM Relative jump
REM  3459.0000
REM  4459.0000
REM Label-based jump
REM  4461.0000
REM  5461.0000
REM Trippoint
REM  5463.0000
REM  6464.0000 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `JS` — Jump to Subroutine
*Category: PROGRAMMING*


**Syntax:**
```
JS #str(arg,arg,arg,arg,arg,arg,arg,arg), (ex)
JS n(arg,arg,arg,arg,arg,arg,arg,arg), (ex)
```

### Operands
- `_JS`
- `Operand has special meaning, see Remarks`

### Description
Allows the program to jump to a subroutine and return back after completion. This command is often used to call reusable code.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
str1 char7 charsN/AStringLabel Name for jumpdestinationMust be a valid label in application code
n03,999N/A1Line number for jumpdestination
Firmware Rev 1.2a and later. May be a value or avariable, but not an evaluated statement withparenthesis
n01,999N/A1Line number for jumpdestination
May be a value or a variable, but not anevaluated statement with parenthesis
exN/AN/AN/AN/A
Conditional statement/s thatmust evaluate true for jumpto occur
If omitted, the jump is taken
argN/AN/AN/AN/A
A value, variable, or array topass to the subroutine beingcalled
referenced from within the subroutine as ^a-^h,respectively. See Remarks for a table of validargs

### Remarks
JS can be nested, called up to 16 deep
When used after JS is called, the _JS operand contains the returned value of the subroutine called by JS
Basic

### Usage
The JS command will change the sequential order of execution of commands in a programIf the jump is taken, program execution will continue at the line specified by the destination parameter, which can be either a line number or label. Avariable holding a line number or an expression resulting in the calculation of a line number can also be usedThe line number of the calling JS command is saved and after an EN command is encountered (End of subroutine), program execution will continuewith the instruction following the calling JS command.A jump is taken if the specified condition is true. Each condition must be placed in parenthesis for proper evaluation by the controller.Code flexibility/reuse. A single subroutine can be written and called many times and from various locations in code. The stack "remembers" where toreturn when completed. This is opposite from a "blind jump" (JP).
Conditional Syntax
ConditionValidityJS#A,(var1=0)&(var2=1) This conditional statement is validJS#A,var1=0&var2=1This conditional statement is not valid
Passing Values on the Stack
Parameters can be passed on the subroutine stackPassing parameters in a subroutine has many advantages including the following
Variable Scope/ Local variables. A subroutine can run with a protected variable space. Local variables exist only in the extent of the subroutine,and no external thread or stack level can access local variables. Local variables can be used for counters, indices, and other helper variablesEach thread has its own stack, therefore subroutines are reentrant. In other words, multiple threads can be running the same subroutinesimultaneously at various stack depths.Support for recursion. Although the subroutine stack is only 16 deep, recursion is possible. A stack depth of 16 is sufficient for many recursivetasks. E.G. recursing axes, handles, and thread status.Parameter passing. A calling command can explicitly specify the inputs to a subroutine. The subroutine can pass one value back to the callingcommand. More returns are possible with pass by reference and array passing.Constants, Variables, and Arrays may be passed up a subroutine stack.Variables may be passed by value or by reference. If passed by value, a copy is made in the subroutine stack, leaving the original variable immutable.If passed by reference, the original variable's value will be changed when the subroutine writes to its local variable. This is similar, but not exactlyanalogous to a C pointer.A variable passed by reference is automatically dereferenced; the variable pointer is not exposed to the user. Following the C syntax, a by-referencepass is accomplished with the ampersand (&) in the invoking call.

---

## To return a value on the stack, write the value in the EN command upon ending the subroutine. The parent stack can access this value via _JS.
Examples of valid args (see examples for demo of each concept)
What to passargExampleValuethe valueJS #square(7)Variable's valuevariable nameJS #sub(var)Variable by reference ampersand + variable name JS #sub(&var)Array by referencearray name in quotesJS#sub("array")

### Examples
```dmc
'Galil DMC Code Example
REM Example of pulsing an output
pulse=0
JS#pulse,(pulse > 0);'JS not taken
WT 2000
pulse=3
JS#pulse,(pulse > 0);'JS taken
WT 2000
pulse=5
JS#pulse;'unconditionally take jump
EN
'
'
REM Subroutine called after 
REM  setting pulse variable
#pulse
SB 1;' set bit 1
WT 500;' delay 500 ms
CB 1;' clear bit 1
WT 500;' delay 500 ms
pulse=pulse-1;' decrement pulse
JP#pulse,pulse>0;' continue till zero
EN;' return to calling JS
```
Advanced Usage

### Examples
```dmc
'Galil DMC Code Example
REM Run all examples
#all
JS#val
JS#var
JS#varref
JS#array
EN
REM Example for each way to pass to a subroutine
REM ********************************************
REM Pass a Value
#val
JS #square(3)
MG _JS
EN
#square
REM Return the passed value squared
EN ,,(^a*^a)
REM ********************************************
REM Pass a variable's value
#var
val= 7
REM call the same sub above
JS #square(val)
MG _JS
EN
REM ********************************************
REM Pass a variable by reference
#varref
val= 9
JS #square2(&val)
MG val
EN
#square2
REM  change the value of the variable
^a= ^a*^a
REM don't return anything
EN
REM ********************************************
REM Pass an array by reference
#array
DM array[100]
array[42]= 11
JS #square3("array")
MG array[42]
EN
#square3
REM change the array element
^a[42]= ^a[42]*^a[42]
REM don't return anything
EN
Galil Motion Control
JS
188/326
```

---

## REM ********************************************REM Controller ResponseREM :XQ#allREM :REM 9.0000 REM 49.0000 REM 81.0000 REM 121.0000
```dmc
'Galil DMC Code Example
#ADD
JS#SUM(1,2,3,4,5,6,7,8);'      Call subroutine, pass values
MG_JS;'                        Print return value, will print 36.0000
EN
```
```dmc
#SUM;'                         Sums values passed to it. Expects 8 numbers
EN,,^a+^b+^c+^d+^e+^f+^g+^h;'  Return the sum 
```
```dmc
'Galil DMC Code Example
'Dimension two arrays
DM array1[10]
DM array2[100]
'Zero the contents of each array
JS#ZeroAry("array1", 0)
JS#ZeroAry("array2", 0)
EN
```
```dmc
'Zero the contents of an array
#ZeroAry;'(^a array,^b starting index)
^a[^b]=0
^b=(^b+1)
JP#ZeroAry,(^b < ^a[-1])
EN
```
```dmc
'Galil DMC Code Example
REM Using dynamic destinations in a jump table
i=1;'               Counter
#loop
 offset=#spell+i;'  Calculate offset 
 JS offset;'        Jump to offset
 i=i+1;'            Increment Counter
JP#loop,i<=3;'      Loop through 3 states
EN
'
#spell;'            Subroutine containing various words
MG"One";EN;'        Prints "One" if this line is called (i=1)
MG"Two";EN;'        Prints "Two" if this line is called (i=2)
MG"Three";EN;'      Prints "Three" if this line is called (i=3)
```
```dmc
REM Controller responds with:
REM One
REM Two
REM Three 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `K1` — Proportional gain during motion
*Category: FILTER/CONTROL*


**Syntax:**
```
K1m= n
K1 n,n,n,n,n,n,n,n
```

### Operands
- `_K1m`
- `Operand holds the value last set by the command`

### Description
K1 is the proportional gain in effect when the profiler is commanding motion (RP is changing). When no motion is commanded (RP constant), KP is ineffect. Some systems will oscillate when holding position unless the gains are lowered.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 1,023.875 | 6 | 1/8 | Value of proportional term |  |

### Remarks
Valid only in -NANO and -CER firmware

### Examples
```dmc
'Galil DMC Code Example
K1X=10;' set X axis P gain in effect during motion
K2X=1;'  set X axis I gain in effect during motion
K3X=100;'set X axis D gain in effect during motion
KPX=6;'  set X axis P gain in effect when holding position
KIX=0;'  set X axis I gain in effect when holding position
KDX=64;' set X axis D gain in effect when holding position 
```

---

## `K2` — Integrator gain during motion
*Category: FILTER/CONTROL*


**Syntax:**
```
K2m= n
K2 n,n,n,n,n,n,n,n
```

### Operands
- `_K2m`
- `Operand holds the value last set by the command`

### Description
K2 is the integral gain in effect when the profiler is commanding motion (RP is changing). When no motion is commanded (RP constant), KI is in effect.Some systems will oscillate when holding position unless the gains are lowered.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 255.999 | 0 | 1/1,024 | Value of integrator term |  |

### Remarks
Valid only in -NANO and -CER firmware

### Examples
```dmc
'Galil DMC Code Example
K1X=10;' set X axis P gain in effect during motion
K2X=1;'  set X axis I gain in effect during motion
K3X=100;'set X axis D gain in effect during motion
KPX=6;'  set X axis P gain in effect when holding position
KIX=0;'  set X axis I gain in effect when holding position
KDX=64;' set X axis D gain in effect when holding position 
```

---

## `K3` — Derivative gain during motion
*Category: FILTER/CONTROL*


**Syntax:**
```
K3m= n
K3 n,n,n,n,n,n,n,n
```

### Operands
- `_K3m`
- `Operand holds the value last set by the command`

### Description
K3 is the derivative gain in effect when the profiler is commanding motion (RP is changing). When no motion is commanded (RP constant), KD is in effect.Some systems will oscillate when holding position unless the gains are lowered.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 4,095.875 | 64 | 1/8 | Value of derivative term |  |

### Remarks
Valid only in -NAN and -CER firmware

### Examples
```dmc
'Galil DMC Code Example
K1X=10;' set X axis P gain in effect during motion
K2X=1;'  set X axis I gain in effect during motion
K3X=100;'set X axis D gain in effect during motion
KPX=6;'  set X axis P gain in effect when holding position
KIX=0;'  set X axis I gain in effect when holding position
KDX=64;' set X axis D gain in effect when holding position 
```

---

## `KD` — Derivative Constant
*Category: FILTER/CONTROL*


**Syntax:**
```
KDm= n
KD n,n,n,n,n,n,n,n
```

### Operands
- `_KDm`
- `Operand holds the value last set by the command`

### Description
KD designates the derivative constant in the control filter. The derivative gain outputs a voltage based on the rate of change of the error. The filtertransfer function follows:

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 4,095.875 | 64 | 1/8 | Value of derivative term |  |

### Remarks
n=? will return the currently set value of KDm=* will set the KD value for all axes/channels
For further details see the section "Theory of Operation" in the controller user manual.

### Examples
```dmc
'Galil DMC Code Example
:KD 12,14,16,20;' Implicit notation to set A,B,C,D axis derivative term
:KDC= 8;'         Explicit notation to set C
:KD ,,8;'         Implicit notation to set C
:KD ?,?,?,?; '    Return A,B,C,D values
 12, 14, 8, 20
:KDC= ?;'         Return C value
 8
:MG _KDA;'        Message the operand for the A axis
 12
:
```
```dmc
'Galil DMC Code Example
REM Zeroing the PID filter allows the
REM motor command signal to be 
REM used as a programmable DAC
KI*= 0;'                 Zero KI
KP*= 0;'                 Zero KP
KD*= 0;'                 Zero KD
ER -1,-1;'               Rurn off position error limit
OF 1,2;'                 Set one volt on A and two volts on B
EN
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `KI` — Integrator
*Category: FILTER/CONTROL*


**Syntax:**
```
KIm= n
KI n,n,n,n,n,n,n,n
```

### Operands
- `_KIm`
- `Operand holds the value last set by the command`

### Description
The KI command sets the integral gain of the control loop. The integrator term will reduce the position error at rest to zero. It fits in the control equationas follows:

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 255.999 | 0 | 1/1,024 | Value of Integral term |  |

### Remarks
n=? will return the currently set value of KIm=* will set the KI value for all axes/channels
For further details see the section "Theory of Operation" in the controller user manual.

### Examples
```dmc
'Galil DMC Code Example
:KIC= 8;'         Explicit notation to set C
:KI ,,8;'         Implicit notation to set C
:KI ?,?,?,?; '    Return A,B,C,D values
 7, 14, 8, 20
:KIC= ?;'         Return C value
 8
:MG _KIA;'        Message the operand for the A axis
 7
:
```
```dmc
'Galil DMC Code Example
REM Zeroing the PID filter allows the
REM motor command signal to be 
REM used as a programmable DAC
KI*= 0;'               Zero KI
KP*= 0;'               Zero KP
KD*= 0;'               Zero KD
OF 1,2;'               Set one volt on A and two volts on B
EN
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,EDD37010,RIO47000,DMC1802,DMC1806,DMC2103,DMC2105*

---

## `KP` — Proportional Constant
*Category: FILTER/CONTROL*


**Syntax:**
```
KPm= n
KP n,n,n,n,n,n,n,n
```

### Operands
- `_KPm`
- `Operand holds the value last set by the command`

### Description
KP designates the proportional constant in the controller filter. The proportional gain outputs a control signal proportional to the amount of error. The filtertransfer function follows.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 1,023.875 | 6 | 1/8 | Value of proportional term |  |

### Remarks
n=? will return the currently set value of KP
For further details see the section "Theory of Operation" in the controller user manual.

### Examples
```dmc
'Galil DMC Code Example
:KP 12,14,16,20;' Implicit notation to set a,b,c,d axis proportional term
:KPC= 8;'         Explicit notation to set C
:KP ,,8;'         Implicit notation to set C
:KP ?,?,?,?; '    Return A,B,C,D values
 7, 14, 8, 20
:KPC= ?;'         Return C value
 8
:MG _KPA;'        Message the operand for the A axis
 12
:
```
```dmc
'Galil DMC Code Example
REM Zeroing the PID filter allows the
REM motor command signal to be 
REM used as a programmable DAC
KI*= 0;' Zero KI
KP*= 0;' Zero KP
KD*= 0;' Zero KD
OF 1,2;' Set one volt on A and two volts on B
EN
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,EDD37010,RIO47000,DMC1802,DMC1806,DMC2103,DMC2105*

---

## `KS` — Step Motor Smoothing
*Category: STEPPER MOTOR*


**Syntax:**
```
KSm= n
KS n,n,n,n,n,n,n,n
```

### Operands
- `_KSm`
- `Operand holds the value last set by the command`

### Description
The KS parameter sets the amount of smoothing of stepper motor pulses. Larger values of KS provide greater smoothness. KS adds a single pole low passfilter onto the output of the motion profiler.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0.5 | 64 | 2 | 1/32 | Value of smoothing constant |  |

### Remarks
This is most useful when operating in full or half step mode.KS effect on timing:
This parameter will increase the time to complete a motion time by 3KS sampling periods.KS will cause an overall delay in the generation of output steps.

### Examples
```dmc
'Galil DMC Code Example
:KSC= 8;'         Explicit notation to set C
:KS ,,8;'         Implicit notation to set C
:KS ?,?,?,?; '    Return A,B,C,D values
 7, 14, 8, 20
:KSC= ?;'         Return C value
 8
:MG _KSA;'        Message the operand for the A axis
 7
:
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## PROGRAMMING, INTERROGATIONLA   List Arrays
LA

### Description
The LA command returns a list of all arrays in memory. The size of each array will be included next to each array name in square brackets.

### Arguments
LA is an interrogation command with no parameters

### Remarks
The listing will be in alphabetical order.

### Examples
'Galil DMC Code Example:DM gold[100],silver[50],plat[200];' Dimensions arrays with given name and the number of array elements in square brackets:LA;' Commands the controller to list arrays in alphabetical ordergold[100]plat[200]silver[50]:DA *[];' Dialocates all arrays:LA;' List arrays now returns with no arrays:

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

STEPPER MOTOR
LC   Low Current Stepper Mode
LCm= n
LC n,n,n,n,n,n,n,n
Usage
LCm= n
Arguments specified with a single axis mask and an assignment (=)
LC n ...
Arguments specified with an implicit, comma-separated order
Operands
_LCm
Operand holds the value last set by the command
Description
The LC command enables low current mode for stepper motors. Low current mode reduces the holding current of the stepper motors while at rest.
Arguments
Argument
Min
Max
Default
Resolution
Description
Notes
m
A
H
N/A
Axis
Axis to assign value
See Timing Diagram Below for
behavior based on value of n
n
32,767
Waits for n samples after a move is
completed, then provides 0% current
Provides 25% current immediately after a
move is completed
Always provides 100% current
-1
-32,767
Waits for n samples after a move is
completed, then provides 25% current
Low Current Mode Timing
Low Current Mode Timing Diagram
Remarks
The MT command must be issued prior to the LC command.
Using LC with an internal Galil Stepper drive (SDM).
A setting of LC 0 is required to to shut off all current to the motor in the "motor off" (MO) state.
Using LC will reduce current consumption, but there will be a reduction of holding torque at rest.
Consult the user manual for more details regarding your specific amplifier.
Using LC with external amplifiers.
When using external amplifiers low current mode will simply disable the motors by toggling the amplifier enable line during rest.
Related Commands
AG - Amplifier Gain
BG - Begin
MT - Motor Type
LC
## SH - Servo Here

### Examples
```dmc
'Galil DMC Code Example
#ex
MTA=-2;'specify stepper mode for A axis
LCA=15;'specify motor to go to low current
' 15 samples after motion has completed
EN
```

*Applies to: DMC50000,DMC4000,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `LD` — Limit Disable
*Category: ERROR CONTROL*


**Syntax:**
```
LDm= n
LD n,n,n,n,n,n,n,n
```

### Operands
- `_LDm`
- `Operand holds the value last set by the command`

### Description
Allows user to disable forward and/or reverse limit switches.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 3 | 0 | 1 | Sets limit disable state See table below for details |  |
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | 0 | Both limit switches are enabled Default |  |
|  | 1 | Forward limit switch disabled |  |
|  | 2 | Reverse limit switch disabled |  |
|  | 3 | Both limit switches disabled |  |

### Remarks
n = ? will return the current setting of LDWhen this feature should be used:
To gain additional digital inputs if limit switches are not being utilized.To prevent noise from causing the limit switchs conditions even though no limit switches are connected.LD does not disable software limits set by BL and FL.

### Examples
```dmc
'Galil DMC Code Example
:LD 3,1,2;           'Implicit notation to set channel A, B, and C
:MG _LDA;'           'Message the operand for the A channel
 3.0000
:LDC= 3;'            'Explicit notation to set channel C-only
:LD*= ?;'            'Queries the value of LD for all channels
 3, 1, 3, 0
:
```
```dmc
'Galil DMC Code Example
REM use forward limit switch as an extra I/O point
#io
LDA=1;'disable forward limit switch
io=_LFA;'set state of limit switch to variable "io"
'Use "io" in an IF statement
IF io=1
 MG "Input On"
ELSE
 MG "Input Off"
ENDIF
EN
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC1806,DMC30010,DMC50000,DMC52000,EDD37010*

---

## `LE` — Linear Interpolation End
*Category: VECTOR/LINEAR*


**Syntax:**
```
LE
LE?
```

### Operands
- `_LEm`
- `Operand has special meaning, see Remarks`

### Description
The LE command indicates to the controller that the end of the sequence is coming up. This allows the controller to slow down through multiplesegments, if required. LE is required to exit the linear interpolation mode gracefully (stop code, SC, 101).

### Arguments
The LE command has no arguments. See the ? Remark below.

### Remarks
_LEm will return the total move length in encoder counts for the selected coordinate system, where m is S or T.If not spcified, the LE command will apply to the last selected coordinate system, S or T.To select the coordinate system, use the command CA S or CA T.The VE command is interchangeable with the LE command.LE ? Returns the total vector move length in encoder counts for the current coordinate system

### Examples
```dmc
'Galil DMC Code Example
CA S;          'Specify S coordinated motion system
LM CD;         'Specify linear interpolation mode for C and D axes
LI ,,100,200;  'Specify linear distance
LE;            'Ends linear interpolation distance
BG S;          'Begin motion of the S-coodrinate system 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `LI` — Linear Interpolation Distance
*Category: VECTOR/LINEAR*

LIm= n <o >pLI n,n,n,n,n,n,n,n <o >p

### Description
The LI command specifies the incremental distance of travel for each axis in the Linear Interpolation (LM) mode. LI parameters are relative distances givenwith respect to the current axis positions.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis Axis to assign value |  |  |
| n | -8,388,607 | 8,388,607 | 0 | 1 Assigns linear interpolation point for that axis |  |  |
o215,000,000N/A2
Specifies the vector speed to be commanded at the beginning ofthe linear segment. The controller will start accelerating ordecelerating at the start of the sequence to this speed.
For MT 1,-1,1.5, and -1.5.
23,000,000N/A2
Specifies the vector speed to be commanded at the beginning ofthe linear segment. The controller will start accelerating ordecelerating at the start of the sequence to this speed.
For MT 2,-2,2.5, and -2.5.
p215,000,000N/A2
Specifies the vector speed to be achieved at the end of the linearsegment. The controller will decelerate or accelerate during thesegment and will reach the specified speed at the end of thesegment.
For MT 1,-1,1.5, and -1.5.
23,000,000N/A2
Specifies the vector speed to be achieved at the end of the linearsegment. The controller will decelerate or accelerate during thesegment and will reach the specified speed at the end of thesegment.
For MT 2,-2,2.5, and -2.5.
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| o | -1 Specifies vector speed to be set by Vector Speed Variable (VV command) See VV command |  |  |

### Remarks
The CA command is used to set the coordinated system (S or T) for which an LI segment is executed. The default is the S coordinate system (CAS).
The controller always uses the axis specifications from LM, not LI, to compute the speed.
For example: if LM specfies that A-, B-, and C-axis are to be used in linear interpolation mode, but LI only specifies positions for B- and C-, the A-axis will still be used in calculating the overall vector speed.The maximum independent speed of any axis configured as a stepper must not exceed the maximum value allowable via the SP setting.The slew speed, set by VS, 'o' or 'p' for linear interpolation mode, is the vector speed based on the axes specified in the LM mode. For example, if LMABC designates linear interpolation for the A,B and C axes the speed of these axes (Va, Vb, and Vc respectively) will be computed from:
The Linear End (LE) command must be given after the last LI segment in a sequence. LE tells the controller to decelerate to a stop at the last LIcommand.
The BG S or BG T command should be issued before the total LI distance reaches 1,073,741,824 (2^30) encoder counts.
Linear Interpolation Mode Buffer
1. Up to 511 LI segments may be given ahead of the begin sequence (BG S or BG T) command.2. Additional LI commands may be sent during motion when the controller sequence buffer frees additional space for new vector segments.3. It is the responsibility of the user to keep enough LI segments in the controller's sequence buffer to ensure continuous motion.4. _LMm (_LMS and _LMT) contains the available spaces for LI segments that can be sent to the buffer.
1. 511 returned means the buffer is empty and 511 LI segments can be sent.2. A 0 returned means the buffer is full and no additional segments can be sent.3. See the LM command for full details.

---

## Examples
```dmc
'Galil DMC Code Example
LM ABC;             'Specify linear interpolation mode between A-, B-, and C- axis
LI 500,,400;        'Specifies linear interpolation point, B-axis remains stationary but is still part of the interpolation.
LI 1000,2000,3000;  'Specify  linear interpolation point
LE;                 'Last segment of sequence
BG S;               'Begin sequence 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `LL` — List Labels
*Category: INTERROGATION*


**Syntax:**
```
LL
```

### Description
The LL command returns a listing of all of the program labels in memory.

### Arguments
LL is an interrogation command with no arguments

### Remarks
The LL command label listing will be in alphabetical order.
The LL command returns all of the program labels in memory and their associated line numbers

### Examples
```dmc
'Galil DMC Code Example
:LL
#FIVE=5 
#FOUR=4 
#ONE=1 
#THREE=3 
#TWO=2 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `LM` — Linear Interpolation Mode
*Category: VECTOR/LINEAR*


**Syntax:**
```
LM mm
```

### Operands
- `_LMm`
- `Operand has special meaning, see Remarks`

### Description
The LM command specifies the linear interpolation mode and specifies the axes for linear interpolation.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | N/A | Multi-Axis Mask Axes to use for linear interpolation mode |  |  |

### Remarks
Any set of axis may be used for linear interpolation.LI commands are used to specify the travel distances between various linear interpolation moves.Several LI commands may be given as long as the controller sequence buffer has room for additional segments
See the LI command for more information regarding the Linear Inerpolation BufferThe LE command specifies the end of the linear interpolation sequence.Once the LM command has been given, it does not need to be given again unless the VM command has been used
Operand/Queries
_LMm contains the number of spaces available in the sequence buffer for the 'm' coordinate system, S or T.The LM command will apply to the selected coordinate system, S or T. To select the coordinate system, use the command CA S or CA T.

### Examples
```dmc
'Galil DMC Code Example
LM ABCD;                         'Specify linear interpolation mode
VS 10000;VA 100000;VD 1000000;   'Specify vector speed, acceleration and deceleration
LI 100,200,300,400;              'Specify linear distance
LI 200,300,400,500;              'Specify linear distance
LE; BG S;                        'Last vector, then begin motion 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `LS` — List
*Category: INTERROGATION*


**Syntax:**
```
LS n0,n1
```

### Description
The LS command returns a listing of the programs in memory.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n003,99801Firmware Rev 1.2a and later. Specifies the line in the program forwhich the listing will startn001,99801Specifies the line in the program for which the listing will startn111,9991,9991Specifies the line at which the listing will end

### Remarks
n0 < n1 must always be trueIf n0 or n1 is omitted, default values are usedn0 and n1 can also specify a label, for example:
"LS #label,20" would print out program lines from #label to line 20.Issuing this command will pause the output of the Data Record until the command is completed.

### Examples
```dmc
'Galil DMC Code Example
:LS #a,6;        ' List program starting at #A through line 6
2 #a 
3 PR 500 
4 BG A 
5 AM 
6 WT 200 
'Hint:  Remember to quit the Edit Mode  Q prior to giving the LS command. (DOS) 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `LV` — List Variables
*Category: INTERROGATION*


**Syntax:**
```
LV
```

### Description
The LV command returns a listing of all of the program variables in memory. The listing will be in alphabetical order.

### Arguments
LV is an interrogation command with no parameters

### Remarks
Use the _UL operand for total number of variables available for your controller.
See the UL command for more details.Issuing this command will pause the output of the Data Record until the command is completed.

### Examples
```dmc
'Galil DMC Code Example
:LV
apple = 60.0000 
banana = 25.0000 
zebra = 37.0000
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `LZ` — Omit leading zeros
*Category: SYSTEM CONFIG*


**Syntax:**
```
LZ n
```

### Operands
- `_LZ`
- `Operand has special meaning, see Remarks`

### Description
The LZ command is used for formatting the values returned from interrogation commands, variables, and arrays. By enabling the LZ function, all leadingzeros of returned values will be removed.

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | 0 Does not remove leading zeros from interrogated values |  |  |
|  | 1 Removes leading zeros from interrogated values |  | Default |

### Remarks
_LZ contains the state of the LZ function. '0' is disabled and '1' is enabled.

### Examples
```dmc
'Galil DMC Code Example
:LZ 0;               'Disable the LZ function
:var1= 10;           'Sets variable var1 to the value of 10.
:TP A;               'Interrogate the controller for current position of A-axis
 0000021645.0000
:var1=?;             'Request value of variable var1
 0000000010.0000
:LZ 1;               'Enable LZ function
:TP A;               'Interrogate the controller for current position of A-axis
 21645.0000
:var1= ?;            'Request value of variable var1
 10.0000 
```
```dmc
'Galil DMC Code Example
:LZ 0;     'Disable the LZ function
:TB;       'Tell status bits
001
:LZ 1;     'Inhibit leading zeros
:TB;       'Tell status
1 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `MB` — Modbus
*Category: ETHERNET*


**Syntax:**
```
MBm= n0, n1, n2, n3, str[]
```

### Description
The MB command is used to communicate with I/O devices using the Modbus TCP/IP protocol. The MB command supports the first two levels of Modbuscommands. The function code -1 designates that the first level of Modbus is used (creates raw packets and receives raw data). The other codes are the10 major function codes of the second level. The format of the command varies depending on each function code.
Galil Modbus supports one master per slave.

### Arguments
Level 2 Modbus Function Codes
Function Code, n1Modbus DefinitionSlaved Galil Description (RIO only)01Read Coil Status (Read Bits)Read Digital Outputs (RIO only)02Read Input Status (Read Bits)Read Digital Inputs (RIO only)03Read Holding Registers (Read Words)Read Analog Inputs (RIO only)04Read Input Registers (Read Words)Read Analog Outputs (RIO only)05Force Single Coil (Write One Bit)Write Digital Output (RIO only)06Preset Single Register (Write One Word)Write Digital Outputs (RIO only)07Read Exception Status (Read Error Code) Read Digital Outputs (RIO only)15Force Multiple Coils (Write Multiple Bits)Write Digital Outputs (RIO only)16Preset Multiple Registers (Write Words)Write Analog Outputs (RIO only)17Report Slave ID
01: MBm= n0, 1, n2, n3, str[]
Read Coil Status (Read Bits)
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Handle | Handle to send Modbus command |  |
| n0 |  |  |  |  |  |  |
|  | 0 | 255 | 1 | see Notes | Unit ID | Default to Handle number (A=1, B=2, etc.) |
| n2 | 0 | 9,999 | N/A | 1 | Address of first coil |  |
| n3 | 0 | 99 | N/A | 1 | Quantity of coils | Or, number of IO points to read |
| str | 1 char | 8 chars | N/A | String | Name of array to store values | str[0] holds the first value. |
```dmc
'Galil DMC Code Example
MBC=,1,2,8,example[];'  Read inputs 2-9 from handle C, save to example[]
'equivalent to reading Digital Outputs or registers mapped to 100000 
```
02: MBm= n0, 2, n2, n3, str[]
Read Input Status (Read Bits)
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Handle | Handle to send Modbus command |  |
| n0 |  |  |  |  |  |  |
|  | 0 | 255 | 1 | see Notes | Unit ID | Default to Handle number (A=1, B=2, etc.) |
| n2 | 0 | 9,999 | N/A | 1 | Address of first input |  |
| n3 | 0 | 99 | N/A | 1 | Quantity of inputs | Or, number of IO points to read |
| str | 1 char | 8 chars | N/A | String | Name of array to store values | str[0] holds the first value. |
```dmc
'Galil DMC Code Example
MBC=,2,4,3,example[];'  Read inputs 4,5 and 6 from handle C, save to example[]
'equivalent to reading Digital Inputs or registers mapped to 000000 
```
03: MBm= n0, 3, n2, n3, str[]
Read Holding Registers (Read Words)
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
mAHN/AHandleHandle to sendModbus commandn00255see Notes1Unit IDDefault to Handle number (A=1, B=2, etc.)
n209,999N/A1Address of firstregister

---

## 'Galil DMC Code ExampleMBB=,3,1,4,example[];'  Read registers 1 through 4 from handle B, save to example[]'equivalent to reading Analog Outputs, or registers mapped to 400000
04: MBm= n0, 4, n2, n3, str[]
Read Input Registers (Read Words)
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
mAHN/AHandleHandle to sendModbus commandn00255see Notes1Unit IDDefault to Handle number (A=1, B=2, etc.)
n209,999N/A1Address of firstregister
n3199N/A1Quantity of registersto read
str1 char8 charsN/AStringName of array tostore values
str[0] holds the first value. 2 bytes per element. Arraymust be as large as the value for n3
```dmc
'Galil DMC Code Example
MBB=,4,1,2,example[];'  Read registers 1 through 2 from handle B, save to example[]
'equivalent to reading Analog Inputs, or registers mapped to 300000 
```
05: MBm= n0, 5, n2, n3
Force Single Coil (Write One Bit)
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Handle | Handle to send Modbus command |  |
| n0 | 0 | 255 | see Notes | 1 | Unit ID | Default to Handle number (A=1, B=2, etc.) |
| n2 |  |  |  |  |  |  |
|  | 0 | 9,999 | N/A | 1 | Address of coil |  |
| n3 | 0 | 1 | 0 | 1 | Set coil status | 0 = turn off coil. 1 = turn on coil |
```dmc
'Galil DMC Code Example
MBB=,5,11,1;'  Set coil 11 high
'equivalent to setting a Digital Output (SB/CB) 
```
06: MBm= n0, 6, n2, n3
Preset Single Register (Write One Word)
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Handle | Handle to send Modbus command |  |
| n0 | 0 | 255 | see Notes | 1 | Unit ID | Default to Handle number (A=1, B=2, etc.) |
| n2 | 0 | 9,999 | N/A | 1 | Address of holding register |  |
| n3 |  |  |  |  |  |  |
|  | 0 | 65,535 | 0 | 1 | Set register value |  |
```dmc
'Galil DMC Code Example
MBC=,6,10,128;'        Write 128 to holding register 10 on handle C
'equivalent to setting digital outputs on the RIO, or setting registers addressed 400000 
```
07: MBm= n0, 7, str[]
Read Exception Status (Read Error Code)
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
mAHN/AHandleHandle to send Modbuscommandn00255see Notes1Unit IDDefault to Handle number (A=1, B=2, etc.)
str1 char8 charsN/AStringName of array to store valuestr[0] holds the received value, one byteonly.When using function code 7 with a Galil slave, array element zero will be set to the byte value of the combined first 8 digital outputs.Only one byte in the array will be populated, element zero of array str[].
```dmc
'Galil DMC Code Example
MBE=,7,example[];'   Read register and store in example[0] 
```
15: MBm= n0, 15, n2, n3, str[]
Force Multiple Coils (Write Multiple Bits)
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
mAHN/AHandleHandle to send Modbuscommandn00255see Notes1Unit IDDefault to Handle number (A=1, B=2, etc.)n209,999N/A1Address of first coiln3116N/A1Quantity of coils

---

## 'Galil DMC Code Exampleexample[0]=255;'           MBC=,15,0,16,example[];'   Set 1st byte of coils high and 2nd byte of coils low'equivalent to setting digital outputs on RIO, or setting coils addressed 000000
16: MBm= n0, 16, n2, n3, str[]
Preset Multiple Registers (Write Words)
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
mAHN/AHandleHandle to send Modbuscommandn00255see Notes1Unit IDDefault to Handle number (A=1, B=2, etc.)n209,999N/A1Address of first registern3099N/A1Quantity of registers
str1 char8 charsN/AStringArray containing modbusdata
str[0] holds the first value. 2 bytes per element. Arraysize must be > n3
```dmc
'Galil DMC Code Example
example[0]=$AEAE
MBD=,16,2,1,example[];'     Set $AEAE to holding register 2 on handle D
'equivalent to setting analog outputs, or writing to holding registers addressed 400000 
```
17: MBm= n0,17,str[]
Report Slave ID
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Handle | Handle to send Modbus command |  |
| n0 | 0 | 255 | see Notes | 1 | Unit ID | Default to Handle number (A=1, B=2, etc.) |
| str | 1 char | 8 chars | N/A | String | Name of array to receive data | str[0] holds the value. |
```dmc
'Galil DMC Code Example
MBB=,17,example[];'   store slave ID of device on handle B to example[] 
```
Raw Modbus Packet Send
MBm= n0,-1,n2,str[]
Raw Modbus Send
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Handle | Handle to send Modbus command |  |
n002551see NotesUnit IDDefault to Handle number (A=1, B=2,etc.)n20999N/A1Number of array bytes to send
str1 char8 charsN/AStringName of array containing outgoingdataArray size >= n2. See

### Remarks
Raw Modbus Packet Send/Receive
MBm= n0,-1,n2,str0[],n3,n4,str1[]
Raw Modbus Send/Receive
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Handle Handle to send Modbus command |  |  |
n002551see NotesUnit IDDefault to Handle number (A=1,B=2, etc.)n21999N/A1Number of array bytes to sendstr01 char8 charsN/AStringName of array containing outgoing dataArray size >= n2. See

### Remarks
n31999N/A1Number of bytes of incoming data todiscard
n41999N/A1Number of bytes of incoming data to storein str1[]str11 char8 charsN/AStringName of array storing incoming data.Array size >= n4. See

### Remarks

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,RIO47000,DMC2103*

---

## `MC` — Motion Complete
*Category: TRIPPOINT*


**Syntax:**
```
MC mm
```

### Description
The MC command is a trippoint command that holds up execution until motion is complete on the specified axes. The MC command, unlike the AM (aftermotion command) requires that both the motion profiler has completed motion AND that the motor encoder has reached the specified position beforecontinuing execution.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
mmAABCDEFGHABCDEFGHMulti-AxisMask
Axis to assignvalue

*Applies to: all axis.Remarks*
Motion must be actively profiling on an axis for the MC command to take affect. If the MC command is issued for an axis which is not profiling motion,the trippoint will immediately clear.
Using MC with Stepper Motors
With stepper motors, the MC trippoint will clear once the controller has generated the number of step pulses required to complete the move.The MC command is recommended when operating with stepper motors in lieu of AM since the generation of step pulses can be delayed due to thestepper motor smoothing function, KS. In this case, the MC command would only be satisfied after all steps are generated.
Using MC as part of the #MCTIME error routine
The command TW can be used to set an acceptable amount of time between when the motion profiler has completed and the encoder is in position;if this condition is not satisfied, a timeout error occurs.
1. When a timeout occurs, the trippoint will clear and the stop code will be set to 99.2. Thread 0 of the DMC program will also jump to the special label #MCTIME, if present.
See the #MCTIME automatic subroutine, TW and SC commands for more information

### Examples
```dmc
'Galil DMC Code Example
#move;                    'Label #move
TW 1000,1000;             'Set motion complete timeout to 1000 milliseconds per axis
PR 2000,4000;             'Position relative Move on A- and B-axis
BG AB;                    'Start the motion on A- and B-axis 
MC AB;                    'After the move is complete on A and B axes
MG "DONE";                'Print message
EN;                       'End of Program
'
'
#MCTIME;                  'Motion Complete timeout Subroutine
 MG "Motion Timeout";     'Print failure message
 SC;                      'Print stop codes
EN;                       'End subroutine 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

ETHERNET
ME   Modbus array write enable
ME n
Usage
ME n ...
Arguments specified with an implicit, comma-separated order
Description
The ME command enables the ability for Modbus masters to write to array locations in the hardware's array table. When enabled, array locations can be
written to as 16 bit integers or as 32 bit floating point by a modbus master by specifying different address ranges. ME is not required to read array
locations, reads are always supported.
Arguments
Argument
Value
Description
Notes
n
Disables the ability for Modbus masters to write to the array table Default
Enables ability for Modbus masters to write to the array table
Remarks
Array writes when enabled by ME are done using function code 16
Galil Modbus supports one master per slave.
DMC-4103 requires firmware revision 1.2c or newer for use as Modbus slave.
Modbus Register Map
Each element is accessible as a 16 bit unsigned integer (Modbus registers 10xx) -OR- as a 32 bit floating point number (Modbus registers 2000).
The table below shows the mapping for a Modbus master writing to the controller with ME 1 set.
1000 (0-999) elements are available for read/write on the DMC-4103. Other array elements are not exposed to Modbus.
Modbus Register Map to Galil Array A[]
Modbus Registers:
1000-1999
2000-2999
Available Modbus function codes 3 (read) and 16 (write)
3 (read) and 16 (write)
Number Type
16 bit unsigned integer
32 bit floating point
References in A[] array
A[0]-A[999]
A[0]-A[999]
Number written to A[]
Integer only, fraction not changed Galil 4.2 format (internal from float conversion)
Number read from A[]
Integer only, fraction not read
32 bit float (internal to float conversion)
Example Modbus Master Write
MBH=0,16,1000,1,write[]
MBH=0,16,2001,2,write[]
Example Modbus Master Read
MBH=0,3,1000,1,read[]
MBH=0,3,2001,2,read[]
Embedded Array Mapping
Once enabled, the entire array table can be written remotely. These writes can span across dimensioned user arrays. It is the user's responsibility to
partition the array table and to read/write remotely to the correct location.
When using multiple array names, the array table is partitioned alphabetically (all captital letters first).
For example, a partioned array of Grape[600] and Orange[200] would place the first 600 registers in Grape[], and the next 200 registers in
Orange[]. The last 200 elements would be inaccesible from embedded code. If the user then dimensioned the array Apple[200], the register
mapping would change. The first 200 registers would read/write from Apple[], the next 600 from Grape[], and finally the last 200 from
Orange[].
Additionally, all captial letters come before lowercase letters. For example, a partioned array of Banana[100] and apple[200] would place the first
100 registers in Banana[] and the next 200 registers in apple[].
For simplicity, Galil recommends that a single array be dimensioned with the array name "A".
Examples
'Galil DMC Code Example
:DA *[];'       Deallocates all arrays
:DM A[400];'    Allocates array for Modbus Read/Write
:ME0;'          Disables write access
:ME1;'          Enables write access
:ME?;'          Interrogate current value
:
'Galil DMC Code Example
'This example is written for a Galil modbus master to a DMC-4000, DMC-4103, DMC-4200, DMC-30010, or RIO-47000 (with expanded memory)
'Master is E.G. DMC-2103, RIO, DMC-4000
'This code runs on the master.
'Assumes a Modbus handle is available at H,
' and that ME1 has been set on the remote device
MW1;'                                 Turn on modbus wait
DM write[2];'                         Dimension an array for holding data to transmit
write[0]=1234;'                       Assign an integer to element 0
MBH=0,16,1000,1,write[];'             Send the integer to register 1000 on the remote
write[0]=$42F6;'                      Set the 32 bit float in two steps, the value is 123.456
write[1]=$E978
MBH=0,16,2001,2,write[];'             Send the float to register 2001 on the remote
'note that register 2000 would have stepped on the integer memory written at 1000
DM read[2];'                          Dimension an array for holding read data
MBH=0,3,1000,1,read[];'               Read the integer at register 1000
MG"Integer=",read[0];'                Print the read integer
MBH=0,3,2001,2,read[];'               Read the float at register 1000
ME
## float=(read[0]*$10000) + read[1];'    Construct the float. Shifting necesary for high bytesMG"Float=", float{$8.0};'             Print the float in hex

---

## `MF` — Forward Motion to Position
*Category: TRIPPOINT*


**Syntax:**
```
MFm= n
MF n,n,n,n,n,n,n,n
```

### Description
This command will hold up the execution of the following command until the specified motor moves forward and crosses the position specified.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis Axis to assign value |  |  |
n-2,147,483,648 2,147,483,647 N/A1Position required to be crossed before subsequentcommands will be executed.

### Remarks
Although multiple positions can be specified, only one of the MF conditions must be satisfied for subsequent code execution.MF command references absolute position.The MF command only requires an encoder and does not require that the axis be under servo control.The accuracy of the MF command is the number of counts that occur in 2*TM sec. Multiply the speed by 2*TM sec to obtain the maximum error.
Example with speed of 20,000 counts/second and TM of 1000 (1000 us).
Maximum error = 2 * 1000 E-6 seconds * 20,000 counts/second = 40 countsWhen using a stepper motor:
This condition is satisfied when the stepper position (as determined by the output buffer - TD) has crossed the specified Forward MotionPosition.

### Examples
```dmc
'Galil DMC Code Example
#test;                   'Program Test 
DP 0;                    'Define zero 
JG 1000;                 'Jog mode (speed of 1000 counts/sec) 
BG A;                    'Begin move 
MF 2000;                 'After passing the position 2000 
v1= _TPA;                'Assign V1 A position 
MG "Position is",v1;     'Print Message 
ST A;                    'Stop
EN;                      'End of Program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## INTERROGATIONMG   Message
MG "str", {^n0}, n1
```dmc
Usage
MG n ...
Arguments specified with an implicit, comma-separated order
Description
```
```dmc
The MG command is used to send strings, operands, variables, and array values to a specified destination.
Arguments
```
```dmc
Argument
Value
Description
Notes
str
String
A string including alphanumeric characters to be displayed Limited to 76 characters
n0
ASCII character in decimal Allows users to print ASCII characters
Range of 0-255
n1
Numeric value
Prints the numeric value specified
See Examples for valid uses of n1.
Variable name
Prints the numeric value stored by the variable
Operand
Prints the numeric value stored by the operand
Array element
Prints the numeric value stored by the array element
Mathematical expression
Prints the numeric value of the solved equation
```
```dmc
Argument
Value
Description
Notes
n
Operand
Prints the numeric value stored by the operand
Remarks
```
```dmc
Multiple strings, variables, and ASCII characters may be used; each must be separated by a comma.
Solicited Messages
```
```dmc
From a host terminal, application code, or device, sending the MG command will return with the requested information. This is known as a
solicited command, because the host sends the command and expects a response.
Unsolicited Messages
```
```dmc
From embedded DMC code, the MG command will send an unsolicited, asynchronous message from the controller to the host. This can be
used to alert an operator, send instructions, or return a variable value. This is known as an unsolicited command because the host is not
explicitly requesting it.
The CW command controls the ASCII format of all unsolicited messages.
```
```dmc
Unsolicited messages can go to any of the Ethernet handles or serial ports.
The CF command sets the default communication port for routing unsolicited messages.
```
```dmc
Formatting
```
```dmc
Formatters can be placed after each argument in to modify how it is printed.
```
```dmc
{Fm.n} Display variable in decimal format with m digits to left of decimal and n to the right.
{Zm.n} Same as {Fm.n} but suppresses leading zeros.
{$m.n} Display variable in hexadecimal format with m digits to left of decimal and n to the right.
{Sn} Display variable as a string of length n, where n is 1 through 6. If n is greater than the length of the string stored in the variable, null chars
(0000) will be inserted at the end of the string.
{N} Suppress carriage return at the end of the message.
```
```dmc
Message Routing
MG can override the default CF setting by using the following modifiers at the beginning of the message, right after MG.
```
```dmc
{Pn} Sends the message out the Serial port n, where n is 1 or 2 denoting Main or Auxilary (where equipped).
```
```dmc
{Ex} Sends the message out the Ethernet handle x, where x is A,B,C,D,E,F,G, or H
```

### Examples
```dmc
Valid uses of n1 argument
```
'Galil DMC Code Example:'Values:MG 1234.5678 1234.5678:':'Variables:var= 12345678.9101:MG var 12345678.9101:':'Operands:MG @AN[1] 0.0121:':'Array Elements:DM arr[3]:arr[0]=0:arr[1]=1:arr[2]=2:MG arr[0],arr[1],arr[2] 0.0000 1.0000 2.0000:':'Mathematical Expressions:MG 1+2 3.0000:MG arr[2]+var 12345680.9101:
```dmc
General Use
```
'Galil DMC Code Example:MG "Good Morning"; 'Message command displays ASCII stringGood Morning:total= 1234.5322; 'Assigns variable total with the value 1234.5322 :MG "The answer is...",total{F4.2}; 'Will print the message and the value of variable total formatted with 4 integer digits and 2 fractional digits The answer is... 1234.53 :MG {^13}, {^10}, {^48}, {^055}; 'Specifies carriage return, line feed, and the characters 0 and 7 in ASCII decimal values

---

## :MG variable+5;                      'Messages out variable + 5 15.0000:MG _TI0;                            'Messages the value stored in the operand _TI0 255.0000
'Galil DMC Code ExampleCF A; 'Messages configured to go out Ethernet handle AMG {EB}var; 'Override CF and send the value of variable var to B handle
```dmc
MG applies to
DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,RIO57400,EDD37010,DMC2105
```

---

## `MO` — Motor Off
*Category: SYSTEM CONFIG*


**Syntax:**
```
MO mm
```

### Operands
- `_MOm`
- `Operand has special meaning, see Remarks`

### Description
The MO command turns off the motor command line and toggles the amplifier enable signal.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | ABCDEFGH | Multi-Axis Mask Specifies axis to turn off |  |  |

### Remarks
The controller will continue to monitor the motor position
See the TP command for more detailsTo turn the motor back on use the SH (Servo Here) command.The MO command is useful for positioning the motors by hand._MOm contains 1.000 if the axis is in the motor off state or 0.000 if the axes is in the servo here state.

### Examples
```dmc
'Galil DMC Code Example
MO;         'Turns off all motors
MO A;       'Turns off the A motor.  
MO B;       'Turns off the B motor.  
MO CA;      'Turns off the C and A motors.   
SH;         'Turns all motors on
axis= _MOA; 'Sets variable axis equal to the A-axis servo status 
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,DMC52000,EDD37010,DMC1802,DMC1806,DMC2103,DMC2105*

---

## `MR` — Reverse Motion to Position
*Category: TRIPPOINT*


**Syntax:**
```
MRm= n
MR n,n,n,n,n,n,n,n
```

### Description
This command will hold up the execution of subsequent DMC code until the specified axis moves backwards and crosses the position specified.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis Axis to assign value |  |  |
n-2,147,483,6482,147,483,647 N/A1Value of position that must be crossed in the reversedirection

### Remarks
MR command references absolute position.Although multiple positions can be specified, only one of the MR conditions must be satisfied for subsequent code execution.The MR command only requires an encoder and does not require that the axis be under servo control.The accuracy of the MR command is the number of counts that occur in 2*TM usec. Multiply the speed by 2*TM usec to obtain the maximum error.
Example with speed of 20,000 counts/second and TM of 1000 (1000 us).
Maximum error = 2 * 1000 E-6 seconds * 20,000 counts/second = 40 counts
When using a stepper motor, this condition is satisfied when the stepper position (as determined by the output buffer - TD) has crossed the specifiedreverse motion position.

### Examples
```dmc
'Galil DMC Code Example
#TEST;'                 Program Test 
 DP0;'                  Define zero 
 JG -1000;'             Jog mode (speed of 1000 counts/sec) 
 BG A;'                 Begin move 
 MR -3000;'             After passing the position -3000 
 V1=_TPA;'              Assign V1 A position 
 MG "Position is", V1;' Print Message 
 ST;'                   Stop
EN;'                    End of Program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `MT` — Motor Type
*Category: SYSTEM CONFIG*


**Syntax:**
```
MTm= n
MT n,n,n,n,n,n,n,n
```

### Operands
- `_MTm`
- `Operand holds the value last set by the command`

### Description
The MT command selects the type of the motor and the polarity of the drive signal. Motor types include standard servomotors, which require a voltage inthe range of +/- 10 Volts, and stepper motors, which require step and direction signals. The polarity reversal inverts the analog signals for servomotors, orinverts logic level of the pulse train for step motors.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | 1 Servo motor (3-phased brushless) |  | Default |
|  | -1 Servo motor (3-phased brushless), reversed direction |  |  |
|  | 2 Stepper motor with active low step pulses |  |  |
|  | 2.5 Stepper motor with active low step pulses, reversed direction |  |  |
|  | -2 Stepper motor with active high step pulses |  |  |
|  | -2.5 Stepper motor with active high step pulses, reversed direction |  |  |
|  | 4 Servo motor (2PB) |  | Only valid for D3547 |
|  | -4 Servo motor (2PB), reversed direction |  | Only valid for D3547 |

### Remarks
The axis must be in the motor off state (MO) before setting MTn = ? will return the value of the motor type for the specified axis.
For stepper motor configuration (n=2,-2,2.5,-2.5), the auxiliary encoder input for the axis is no longer available.

### Related Commands
#AMPERR - Amplifier error automatic subroutineAG - Amplifier GainAU - Set amplifier current loopAZ - Clear Amplifier ErrorsTA - Tell Amplifier ErrorTK - Peak Torque LimitTL - Torque Limit

### Examples
```dmc
'Galil DMC Code Example
MO
MT 1,-1,2,2;   'Configure A as servo, B as reverse servo, C and D as steppers
MT ?,?;        'Interrogate motor type for A- and B-axis 
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,DMC52000,EDD37010,DMC1802,DMC1806,DMC2103,DMC2105*

---

## `MU` — Multicast Address
*Category: ETHERNET*


**Syntax:**
```
MU n0,n1,n2,n3
```

### Operands
- `_MU`
- `Operand has special meaning, see Remarks`

### Description
MU sets the controller's multicast address. This address is used by Galil software to detect an available Ethernet controller on the network.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 | 0 | 255 | 239 | 1 | First field of the multicast address |  |
| n1 |  |  |  |  |  |  |
|  | 0 | 255 | 255 | 1 | Second field of the multicast address |  |
| n2 | 0 | 255 | 19 | 1 | Third field of the multicast address |  |
| n3 | 0 | 255 | 56 | 1 | Last field of the multicast address |  |

### Remarks
Supported on DMC-4103 firmware rev 1.1b and above.
MU ? returns the current multicast address setting in 4 byte format_MU contains the 32-bit multicast address number in two's complement.

### Examples
```dmc
'Galil DMC Code Example
:MU 239,255,19,57
:MU?
 239, 255, 019, 057
:MG_MU
 -268496071.0000
:MG_MU{$8.0}
$EFFF1339
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010*

---

## `MW` — Modbus Wait
*Category: ETHERNET*


**Syntax:**
```
MW n
```
Operands_MW0_MW1Operand has special meaning, see

### Remarks

### Description
Enabling the MW command causes the controller to hold up execution of the program after sending a Modbus command until a response from theModbus device has been received. The MW command ensures that the command that was sent to the Modbus device was successfully received beforecontinuing program execution.

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | 0 | Disables Modbus wait |  |
|  | 1 | Enables Modbus wait Default |  |

### Remarks
n = ? returns the state of the Modbus wait, either 1 or 0If a Modbus response is never received, then thread 0 will jump to the #TCPERR subroutine, if it exists, and TC will report an error code of 123.MW prevents the controller from sending multiple commands to the same Modbus device before it has a chance to execute them.

### Operands
_MW0 returns last function code received_MW1 returns Modbus error code
_MWn operands
```dmc
'Galil DMC Code Example
:MG_MW0{$8.0};' $ is the hex formatter
$00000001
:'above is an expected response to function code 1
:MG_MW1{$8.0}
$00000000
:'no error
```
_MW0 Responses
Function Code Sent Normal _MW0 Response _MW0 Exception Response1$01$812$02$823$03$834$04$845$05$856$06$867$07$8715$0F$8F16$10$90_MW1 Responses
_MW1 returnsException description$00Normal response$01The request referenced an illegal function code$02The request referenced an illegal data address

### Examples
```dmc
'Galil DMC Code Example
MW1;      'Enables Modbus Wait
SB1001;   'Set Bit 1 on Modbus Handle A
CB1001;   'Clear Bit 1 on Modbus Handle A 
```
```dmc
'Galil DMC Code Example
REM Example on Modbus master, DMC-4000
REM Using _MW operands
:IHH=192,168,42,43<502>2;' connect to RIO
:MW1
:SB 8001;' set bit one on RIO
::MBH=,5,1,0;' clear it with MB
::'CB 8001 would also work
:MG_MW0
 5.0000
:'funct code 5 confirmed
:MG_MW1
```

---

## 0.0000:'no errors:MBH=,5,100,1;' invalid output point::TC1 0:MG_MW0{$8.0}$00000085:'Exception on funct code 5:MG_MW1{$8.0}$00000002:'illegal data address

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,RIO47000,DMC2103*

---

## `NB` — Notch Bandwidth
*Category: FILTER/CONTROL*


**Syntax:**
```
NBm= n
NB n,n,n,n,n,n,n,n
```

### Operands
- `_NBm`
- `Operand holds the value last set by the command`

### Description
The NB command sets real part of the notch poles. In other words, the NB controls the range of frequencies that will be attenuated.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
n062.50.51/2Value of the notch bandwidthin Hz
Max value dependent upon TM setting, seeRemarks

### Remarks
_NBm contains the value of the notch bandwidth for the specified axis.NB also determines the ratio of NB/NZ which controls the attenuation, or depth, of the notch. See NZ for more details.See the NF command for recommendations on choosing NZ, NB, and NF values.
See Application note #2431 for additional information on setting the NF, NB and NZ commands
http://www.galil.com/download/application-note/note2431.pdf
Maximum Range
The maximum n argument is specified in Hz and is calculated by the equation below:
where TM is specified in microseconds.The default TM is 1000, therefore default maximum NB value = 1/(16x1000E-6) = 62.5 Hz

### Examples
```dmc
'Galil DMC Code Example
NBA= 10;          'Sets the real part of the notch pole to 10/2 Hz
notch = _NBA;     'Sets the variable "notch" equal to the notch bandwidth value for the A axis 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `NF` — Notch Frequency
*Category: FILTER/CONTROL*


**Syntax:**
```
NFm= n
NF n,n,n,n,n,n,n,n
```

### Operands
- `_NFm`
- `Operand holds the value last set by the command`

### Description
The NF command sets the frequency of the notch filter, which is placed in series with the PID compensation.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | -250 | 250 | 0 | 1 | Sets the frequency of the notch filter See Remarks |  |

### Remarks
n = 0 disables the notch.n > 0 applies the notch filter in series with the PID compensation. The value of n is the frequency of the notch filter.n < 0 applies the notch filter to the profiler. The absolute value of n is the frequency of the notch filter.

*Applies to: firmware rev 1.3b and later.*
n = 0 disables the notch.
_NFm contains the value of notch filter for the specified axis.n = ? Returns the value of the Notch filter for the specified axis.
See Application note #2431 for additonal information on setting the NF, NB and NZ commands
http://www.galil.com/download/application-note/note2431.pdf
Chosing NF, NB, and NZ
1. A simple way for attaining NF, NB, and NZ parameters is to follow these simple rules:
1. Estimate the resonance frequency2. Set NF equal to the resonance frequency3. Set NB = 1/2NF4. Set NZ between 0 and 52. The ratio of NB/NF is extremly important. See the NB command for more details.
Maximum Range
The maximum n argument is specified in Hz and is calculated by the equation below:
Where TM is in microseconds.
Default TM is 1000, therefore default maximum value = 1E6/(4*1000) = 250 Hz

### Examples
```dmc
'Galil DMC Code Example
NF, 20;' Sets the notch frequency of B axis to 20 Hz 
```

*Applies to: EDD37010,DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `NO` — No Operation
*Category: PROGRAMMING*


**Syntax:**
```
NO str
```
Operands_NOOperand has special meaning, see Remarks

### Description
The NO command performs no action in a sequence and can be used as a comment in a program.

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
strStringA no action sequence used to document aprogram
Comments are limited to the maximum row size in a program. This will varyby controller.

### Remarks
_NO returns a bit mask indicating which threads are running.
For example:
0 means no threads are running1 means only thread 0 is running3 means threads 0 and 1 are running

### Examples
```dmc
'Galil DMC Code Example
#a;                    'Program A
NO;                    'No Operation
NO This Program ;      'No Operation
NO Does Absolutely;    'No Operation
NO Nothing;            'No Operation
EN;                    'End of Program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `NZ` — Notch Zero
*Category: FILTER/CONTROL*


**Syntax:**
```
NZm= n
NZ n,n,n,n,n,n,n,n
```

### Operands
- `_NZm`
- `Operand holds the value last set by the command`

### Description
The NZ command sets the real part of the notch zero. In other words, the NB/NZ ratio controls the amount of attenuation, or depth, of the notch filter.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
n0.562.500.5Value of Notch Frequency inHz
Max value dependent upon TM setting, seeRemarks

### Remarks
See the NF command for recommendations on chosing NZ, NB, and NF values.The maximum n argument is determiend by the following equation
Where TM is in microseconds, the default TM is 1000.
See Application note #2431 for additonal information on setting the NF, NB and NZ commands
http://www.galil.com/download/application-note/note2431.pdf
The NB/NZ Ratio
The ratio, NB/NZ controls the amount of attenuation, or depth of the notch.
The larger the ratio of NB/NZ, the larger the attenuation, and vice versa.If NB/NZ > 1 the signal will amplifiy the output signal causing a resonance.NB = NZ essentially eliminates the notch

### Examples
```dmc
'Galil DMC Code Example
NZA = 10;' Sets the real part of the notch pole to 10/2 Hz 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `OA` — Off on encoder failure
*Category: ERROR CONTROL*


**Syntax:**
```
OAm= n
OA n,n,n,n,n,n,n,n
```

### Operands
- `_OAm`
- `Operand holds the value last set by the command`

### Description
The OA command turns on or off encoder failure detection. The controller can detect a failure on either or both channels of the encoder. This isaccomplished by checking on whether motion of less than 4 counts is detected whenever the torque exceeds a preset level (OV) for a specified time (OT).

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 1 | 0 | 1 | Status of encoder failure detection 1 = enabled, 0 = disabled |  |

### Remarks
The OA command works like the OE command: if OA is set to 1 and an encoder failure occurs, the axis goes into the motor off (MO) state and thestop code (SC) is set to 12 if detected during motion.The encoder failure detection will shut the motor off regardless of profiling status, but the stop code is not updated unless the axis is executing aprofiled move at the time of the detection of the encoder failure.If included in the application program and OA is set to 1, #POSERR will run when an encoder failure is detected for the axis.
Note that for this function to work properly it is recommended to have a non-zero value for KI.

### Examples
```dmc
'Galil DMC Code Example
OAA= 1;' enable A axis encoder error detection
MG_OAA;'query OA value for A axis 
```
```dmc
'Galil DMC Code Example
OA ,1;'  enable B axis encoder error detection 
```
```dmc
'Galil DMC Code Example
#setup
'setup the encoder error detection
OTA=10;'  Set time to 10 milliseconds
OVA=5;'   Set voltage to 5
OAA=1;'   Enable encoder detection feature
EN
```
```dmc
'Galil DMC Code Example
REM #POSERR example for checking to see if encoder failure occured
REM This procedure is needed because the stop code will only update if 
REM the profilier is running at the time the encoder failure is detected.
#POSERR
~a=0
#loop
IF _MO~a=1
 IF ((_TE~a<_ER~a)&(_OE~a)&(_OA~a))
  MG "possible encoder failure on ",~a{Z1.0}," axis"
 ENDIF
ENDIF
~a=~a+1
JP#loop,~a<_BV
AI1;'              wait for input 1 to go high
SH;'               enable all axes
RE
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC1806,EDD37010*

---

## `OB` — Output Bit
*Category: IO*


**Syntax:**
```
OB n,(ex)
```

### Description
The OB command allows variable control of an output bit based on logical expressions. The OB command defines output bit n as either 0 or 1 dependingon the result from the logical expression.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | 1 | 16 | 0 | 1 | Output bit specified | Outputs 9-16 only valid on 5-8 axis controller |
| n | 1,000 | 8,999 | N/A | 1 | Modbus output bit specified | See Remarks |
exN/AN/AN/AExpressionExpression that definesstatus of output
If ex is true/non-zero, set output to 1. If ex isfalse/zero, set output to 0

### Remarks
An expression is any valid logical expression, variable or array element.Any non-zero value of the expression results in a one set to the output bit.
Using OB with a Modbus Slave
n = (SlaveAddress*10000) + (HandleNum*1000) + ((Module-1)*4) + (Bitnum-1)
Slave Address is used when the ModBus device has slave devices connected to it and specified as Addresses 0 to 255. Please note that the useof slave devices for modbus are very rare and this number will usually be 0.HandleNum is the handle specifier where A is 1, B is 2 and so on.Module is the position of the module in the rack from 1 to 16.BitNum is the I/O point in the module from 1 to 4

### Examples
```dmc
'Galil DMC Code Example
OB 1, pos;'          If pos<>0, Bit 1 is high.
'                    If pos=0, Bit 1 is low
OB 2, @IN[1]&@IN[2];' If Input 1 and Input 2 are both high, then
'                    Output 2 is set high
OB 3, count[1];' If the element 1 in the array is zero, clear bit 3
OB n, count[1];' If element 1 in the array is zero, clear bit n 
```
OB applies toDMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,RIO47000,EDD37010,DMC2105

---

## `OC` — Output Compare
*Category: IO*


**Syntax:**
```
OCm = n0, n1
```

### Operands
- `_OC`
- `Operand has special meaning, see Remarks`

### Description
The OC command sets up the Output Compare feature, also known as Pulse on Position. The controller has a special digital output which can beconfigured to pulse on a specified absolute encoder position, and optionally on a delta encoder change after that. These operations are known as one-shot and circular compare, respectively.Each set of 4 axes, ABCD and EFGH, has one digital output which can be configured to this mode of operation

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
mAHN/AAxisAxis to enableoutput compare
Axes A-D share one output compare, axes E-H sharea second output compare output
n0-2,147,483,648 2,147,483,647 N/A1Absolute encoderposition of first pulse n0 must be within 65535 counts of current position
n1-65,53665,535N/A1
Incrementalencoder distancebetween pulses
0 indicates single-shot pulse in positive direction, -65536 indicates single shot when moving in thenegative direction

### Remarks
For controllers with 5-8 axes, two output compares are available. One for the A-D axes, the other for the E-H axesThis command is only valid when both n0 and n1 are specified.
One shot Compare Mode:
The output compare signal will go low, and stay low at a specified absolute encoder position.This is done by specifying n1 as 0 for positive motion, and -65536 for negative motion.
Circular Compare Mode:
After the absolute position of the first pulse (n0), the circular compare can be configured to pulse low at a relative distance thereafter (n1).This is done by specifying n1 to a non-zero delta position (range of -65535 to 65535).
OCA = 0 will disable the Circular Compare function on axes A-D.OCE = 0 will disable the Circular Compare function on axes E-H.
The circular compare output is a low-going pulse with a duration of approximately 510 nanoseconds.
Limitations
The Output Compare function is only valid with incremental encoders.
The Output Compare function is not valid with SIN/COS (AF settings of 5-12), standard analog (AF setting of 1), BiSS or SSI feedback (SS or SIcommands).
The OC function cannot work for an axis configured as a stepper.The auxiliary encoder of the corresponding axis cannot be used when in this mode.
Dual loop mode (which uses the aux encoder input) will not operate when the OC command is enabled.
The OC function requires that the main encoder and auxiliary encoders be configured exactly the same (see the command, CE). For example: CE 0,CE 5, CE 10, CE 15.OC only requires an encoder, and is independent of axis tuning, and motion profiling.
Operand

### Usage
_OC contains the state of the OC function.
_OC = 0 : OC function has been enabled but not generated any pulses._OC = 1: OC function not enabled or has generated the first output pulse.
On a 5-8 axis controller, _OC is a logical AND of axes A-D and E-H.

### Examples
```dmc
'Galil DMC Code Example
OCA=300,100;' Select A encoder as position sensor.
REM First pulse at 300. Following pulses at 400, 500, 600 ... 
```

---

## OC applies to DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105

---

ERROR CONTROL
OE   Off-on-Error
OEm= n
OE n,n,n,n,n,n,n,n
Usage
OEm= n
Arguments specified with a single axis mask and an assignment (=)
OE n ...
Arguments specified with an implicit, comma-separated order
Operands
_OEm
Operand holds the value last set by the command
Description
The OE command sets the Off On Error function for the controller. The OE command causes the controller to shut off the motor command if a position
error exceeds the limit specified by the ER command, an abort occurs from either the abort input or on AB command, or an amplifier error occurs based
on the description of the TA command.
Arguments
Argument
Min
Max
Default
Resolution
Description
Notes
m
A
H
N/A
Axis
Axis to assign value
n
Disables the Off On Error Function
Default
Motor shut off by position error, amplifier error or abort input
Motor shut off by hardware limit switch
Motor shut off by position error, amplifier error, abort input or by
hardware limit switch
Remarks
For any value of OE <> 0, the axis will be shut off due to amplifier faults on any amplifier axis. See the TA command for conditions of an amplifier fault.
BR1 must be enabled when internal brushless servo amplifiers are installed but the axis is driven with an external amplifier. BR1 disables hall error
checking when OE <> 0
Examples of brushless servo amps that require this consideration include the AMP-43040 (-D3040) or the AMP-20540
Motion Behavior:
If an error or axis-specific abort is detected, and the motion was executing an independent move, only that axis will be shut off.
If the motion is a part of coordinated mode of the types GM, VM, LM or CM, all participating axes will be stopped.
Examples
'Galil DMC Code Example
:OE 1,1,1,1;'   Enable OE on all axes
:OE 0;'         Disable OE on A-axis, other axes remain unchanged
:OE ,,1,1;'     Enable OE on C-axis and D-axis, other axes remain unchanged
:OE 1,0,1,0;'   Enable OE on A and C-axis, Disable OE on B and D axis
:MG _OEA;' Query A axis OE setting
1.0000
'Galil DMC Code Example
#main
'code to enable the OE command for all error conditions
'and setup the corresponding automatic subroutines
'to display relevent data
'no loop for abort input, as that stops code operation
OE 3,3,3,3
SHABCD
JG*=1000;' all jog at 1000
BGABCD
#loop
'endless loop
WT1000
JP#loop
EN
#AMPERR
MG "amplifier fault"
MG _TA0,_TA1,_TA2,_TA3
EN
#POSERR
MG "position error fault"
MG _TEA,_TEB,_TEC,_TED
EN
#LIMSWI
MG "limit switch fault"
MG _TSA,_TSB,_TSC,_TSD
EN
OE applies to DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,DMC52000,EDD37010,DMC1802,DMC1806,DMC2103,DMC2105
OE
## `OF` — Offset
*Category: FILTER/CONTROL*


**Syntax:**
```
OFm= n
OF n,n,n,n,n,n,n,n
```

### Operands
- `_OFm`
- `Operand holds the value last set by the command`

### Description
The OF command sets a bias voltage in the command output or returns a previously set value.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | -9.9982 | 9.9982 | 0 | 20/65,536 | Offset voltage applied to MCMD |  |

### Remarks
This can be used to counteract gravity or an offset in an amplifier.

### Examples
```dmc
'Galil DMC Code Example
:OF 1,-2,3,5;' Set A-axis offset to 1, the B-axis offset to -2, the C-axis to 3, and the D-axis to 5
:OF -3;'  Set A-axis offset to -3  Leave other axes unchanged
:OF ,0;'  Set B-axis offset to 0  Leave other axes unchanged
:OF ?,?,?,?;' Return offsets
-3.0000,0.0000,3.0000,5.0000 
:OF ?;'  Return A offset
-3.0000 
:OF ,?;' Return B offset
0.0000 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `OP` — Output Port
*Category: IO*


**Syntax:**
```
OP n
```

### Operands
- `_OP0`
- `Operand holds the value last set by the command`

### Description
The OP command sets the output ports of the controller in a bank using bitmasks. Arguments to the OP command are bit patterns (decimal or hex) toset entire banks (bytes) of digital outputs. Use SB, CB or OB to set bits individually.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n065,53501Decimal representation: GeneralOutputs 1-16
On a 1-4 axis controller, max is 255 ($FF) foroutputs 1-8 only.

### Remarks
Output Mapping

### Examples
ExampleCommand Issued (Hex version)Bits SetBits Cleared1-4 axis Set all outputs OP255 (OP$FF)1-8-5-8 axis Set all outputs OP65535 (OP$FFFF)1-16-Clear all outputsOP0 (OP$0000)-1-16Alternating on/offOP43690 (OP$AAAA)2,4,6,8,10,12,14,16 1,3,5,7,9,11,13,15Set High ByteOP65280 (OP$FF00)9-161-8Set Low ByteOP255 (OP$00FF)1-89-16

### Examples
```dmc
'Galil DMC Code Example
OP 0;'   Clear Output Port -- all bits
OP $85;' Set outputs 1,3,8 and clear the others
MG _OP0;' Returns the parameter "n0" 
```
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n065,53501Decimal representation: GeneralOutputs 1-16
On a 1-4 axis controller, max is 255 ($FF) foroutputs 1-8 only.

### Remarks
Output Mapping

### Examples
ExampleCommand Issued (Hex version)Bits SetBits Cleared1-4 axis Set all outputs OP255 (OP$FF)1-8-5-8 axis Set all outputs OP65535 (OP$FFFF)1-16-Clear all outputsOP0 (OP$0000)-1-16Alternating on/offOP43690 (OP$AAAA)2,4,6,8,10,12,14,16 1,3,5,7,9,11,13,15Set High ByteOP65280 (OP$FF00)9-161-8Set Low ByteOP255 (OP$00FF)1-89-16

### Examples
```dmc
'Galil DMC Code Example
OP 0;'   Clear Output Port -- all bits
OP $85;' Set outputs 1,3,8 and clear the others
MG _OP0;' Returns the parameter "n0" 
```
OP applies toDMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,RIO57400,DMC52000,EDD37010,DMC2105

---

## `OT` — Off on encoder failure time
*Category: ERROR CONTROL*


**Syntax:**
```
OTm= n
OT n,n,n,n,n,n,n,n
```

### Operands
- `_OTm`
- `Operand holds the value last set by the command`

### Description
The OT command sets the timeout time for the encoder failure routine. The command sets the time in samples that the encoder failure will wait for motionafter the OV threshold has been exceeded. The controller can detect a failure on either or both channels of the encoder.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 1 | 32,000 | 30 | 1 | Number of samples for error detection |  |

### Remarks
Encoder error detection is based on whether motion of at least 4 counts is detected whenever the torque exceeds a preset level (OV) for a specifiedtime (OT).
Note that for this function to work properly it is necessary to have a non-zero value for KI.See the OA command for more details on this error detection mode

### Examples
```dmc
'Galil DMC Code Example
OTD= 400;'   Set D axis encoder error timeout to 400 samples
OT 100,200;' Set A axis to 100 and B axis to 200 sample timeouts 
```
```dmc
'Galil DMC Code Example
#setup
OTA= 10;'  Set time to 10 milliseconds
OVA= 5;'   Set voltage to 5
OAA= 1;'   Enable encoder detection feature
EN
```
```dmc
'Galil DMC Code Example
REM #POSERR example for checking to see if encoder failure occured
REM This procedure is needed because the stop code will only update if 
REM the profilier is running at the time the encoder failure is detected.
#POSERR
~a=0
#loop
IF _MO~a=1
 IF ((_TE~a<_ER~a)&(_OE~a)&(_OA~a))
  MG "possible encoder failure on ",~a{Z1.0}," axis"
 ENDIF
ENDIF
~a=~a+1
JP#loop,~a<_BV
AI1;'              wait for input 1 to go high
SH;'               enable all axes
RE
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC1806,EDD37010*

---

## `OV` — Off on encoder failure voltage
*Category: ERROR CONTROL*


**Syntax:**
```
OVm= n
OV n,n,n,n,n,n,n,n
```

### Operands
- `_OVm`
- `Operand holds the value last set by the command`

### Description
The OV command sets the threshold voltage for detecting an encoder failure. The controller can detect a failure on either or both channels of theencoder.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis Axis to assign value |  |  |
| n | 0 | 9.9982 | 0.9438 | 20/65,536 Torque voltage to trigger encoder error detection |  |  |

### Remarks
Encoder error detection is accomplished by checking on whether motion of at least 4 counts is detected whenever the torque exceeds a preset level(OV) for a specified time (OT).
Note that for this function to work properly it is recommended to have a non-zero value for KI.The value of OV should be high enough to guarantee that the motor would overcome any static friction in the system. If it is too low, there will befalse triggering of the error condition.The OV value may not be higher than the TL value.See the OA command for more details on this error detection mode

### Examples
```dmc
'Galil DMC Code Example
OVB= 1.2;' Set B axis encoder detection torque value to 1.2V
OV 0.54;'  Set A axis encoder detection torque value to 0.54V 
```
```dmc
'Galil DMC Code Example
#setup
'setup the encoder error detection
OTA= 10;'  Set time to 10 milliseconds
OVA= 5;'   Set voltage to 5
OAA= 1;'   Enable encoder detection feature
EN
```
```dmc
'Galil DMC Code Example
REM #POSERR example for checking to see if encoder failure occured
REM This procedure is needed because the stop code will only update if 
REM the profilier is running at the time the encoder failure is detected.
#POSERR
~a=0
#loop
IF _MO~a=1
 IF ((_TE~a<_ER~a)&(_OE~a)&(_OA~a))
  MG "possible encoder failure on ",~a{Z1.0}," axis"
 ENDIF
ENDIF
~a=~a+1
JP#loop,~a<_BV
AI1;'              wait for input 1 to go high
SH;'               enable all axes
RE
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC1806,EDD37010*

---

## `P2CD` — Serial port 2 code
*Category: OPERAND ONLY*


**Syntax:**
```
P2CD
```

### Operands
- `P2CD`
- `Operand has special meaning, see Remarks`

### Description
P2CD returns the status of the auxiliary serial port (port 2). The value of P2CD returns zero after the corresponding string or number is read.

### Arguments
P2CD is an operand that holds a value cooresponding to status. See Examples for use in code.

### Remarks
P2CD contains the following status codes
P2CD Status Codes
Status CodeMeaning-1Mode disabled0Nothing received1Received character, but not carriage return2received a string, not a number3received a number

### Examples
```dmc
'Galil DMC Code Example
:^R^V
DMC2240 Rev 1.0o
:^R^S
:CC 9600,0,1,0
:MG "TEST" {P2};'    send a message to the hand terminal
:MG P2CD;'           no characters entered on hand terminal
0.0000
:MG P2CD;'           the number 6 was pushed on the hand terminal
1.0000
:MG P2CD;'           enter key pushed on hand terminal
3.0000
:MG P2CD;'           the character B was pushed (shift f2) then enter
2.0000 
```

---

## `P2CH` — Serial port 2 character
*Category: OPERAND ONLY*


**Syntax:**
```
P2CH
```

### Operands
- `P2CH`
- `Operand has special meaning, see Remarks`

### Description
P2CH returns the last character received by the controller's auxiliary serial port (port 2)

### Arguments
P2CH is an operand that holds a value cooresponding to ASCII characters received by the serial port. See Examples for use in code.

### Remarks
None

### Examples
```dmc
'Galil DMC Code Example
:^R^V
DMC2240 Rev 1.0o
:^R^S
:CC 9600,0,1,0
:MG "TEST" {P2} ;'send a message to the hand terminal
:MG P2CH {S1} ;'the 6 button was pushed on the hand terminal
6
:
```

---

## `P2NM` — Serial port 2 number
*Category: OPERAND ONLY*


**Syntax:**
```
P2NM
```

### Operands
- `P2NM`
- `Operand has special meaning, see Remarks`

### Description
P2NM returns the last number (followed by carriage return) sent to auxiliary serial port (port 2).

### Arguments
P2NM is an operand that holds a numerical value received by the controller's serial port. See Examples for use in code.

### Remarks
Converts from ASCII (e.g. "1234") to binary so that a number can be stored into a variable and math can be performed on it.
Numbers from -2147483648 to 2147483647 can be processed.

### Examples
```dmc
'Galil DMC Code Example
:^R^V
DMC2240 Rev 1.0o
:^R^S
:CC 9600,0,1,0
:MG "TEST" {P2} ;'send a message to the hand terminal
:x = P2NM ;'the 1, 2, 3,  buttons were pushed
:MG x
123.0000
:
```

---

## `P2ST` — Serial port 2 string
*Category: OPERAND ONLY*


**Syntax:**
```
P2ST
```

### Operands
- `P2ST`
- `Operand has special meaning, see Remarks`

### Description
P2ST returns the last string (followed by carriage return) sent to auxiliary serial port (port 2)

### Arguments
P2ST is an operand that contains a string. See Examples for usage.

### Remarks
No more than 6 characters can be assessed by this operand

### Examples
```dmc
'Galil DMC Code Example
:CC 9600,0,1,0
:MG "TEST" {P2} ;'send a message to the hand terminal
:MG P2ST {S3} ;'the characters ABC were entered
ABC 
```

---

## `PA` — Position Absolute
*Category: INDEPENDENT MOTION*


**Syntax:**
```
PAm= n
PA n,n,n,n,n,n,n,n
```

### Operands
- `_PAm`
- `Operand has special meaning, see Remarks`

### Description
The PA command sets the end target of the Position Absolute Mode of Motion.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
|  | M | N | N/A | Axis | Virtual axis to assign value |  |
n-2,147,483,648 2,147,483,647 01Absolute position target forindependant move
n=? returns the commanded position atwhich motion last stopped

### Remarks
The position is referenced to the absolute zero position, defined as position 0.By default a new PA command may not be issued before the previous PA command has finished executing. This operation may be changed byrunning in Position Tracking Mode - See the PT command for more information.
Operand

### Usage
_PAm contains the last commanded position at which motion stopped.

### Examples
```dmc
'Galil DMC Code Example
:PA 400,-600,500,200;'     A-axis will go to 400 counts B-axis will go to -600 counts 
:'                          C-axis will go to 500 counts D-axis will go to 200 counts
:BG;'                  Execute Motion
:PA ?,?,?,?;'          Returns the current commanded position after motion has completed
400, -600, 500, 200 
:PA 700;'                 A-axis will go to 700 on the next move while the
:BG;'                  B,C and D-axis will travel the previously set relative distance 
:'                         if the preceding move was a PR move, or will not move if the 
:'                         preceding move was a PA move. 
```
```dmc
'Galil DMC Code Example
DP10000;'   set current position to 10000
PA3000;'    move to absolute position 3000, which is a -7000 count move
BGA;'       begin -7000 count move
EN
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `PF` — Position Format
*Category: SYSTEM CONFIG*


**Syntax:**
```
PF n0.n1
```

### Operands
- `_PF`
- `Operand holds the value last set by the command`

### Description
The PF command allows the user to format the position numbers such as those returned by TP. The number of digits of integers and the number of digitsof decimal can be selected with this command. An extra digit for sign and a digit for decimal point will be added to the total number of digits.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n0-810101Number of places displayedpreceding the decimal point
Negative numbers force data to display inhexadecimal format
n10401Number of places displayed after thedecimal point

### Remarks
If PF is minus, the format will be hexadecimal and a dollar sign will precede the characters. Hex numbers are displayed as 2's complement with the firstbit used to signify the sign.If a number exceeds the format, the number will be displayed as the maximum possible positive or negative number (i.e. 999.99, -999, $8000 or$7FF).The PF command formats the values returned from the following commands:
BL?IP ?TDDE ?LE ?TEDP ?PA ?TNEM ?PR ?TPFL ?RLVEGPRP

### Examples
```dmc
'Galil DMC Code Example
:DP 2l;'  Set position of A axis for example
:TP A;'   Tell position of A in default format
 21
:PF 5.2;' Change format to 5 digits of integers and 2 of decimal
:TP A
 21.00 
:PF-5.2;' Change format to hexadecimal
:TP A
$00015.00 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `PL` — Pole
*Category: FILTER/CONTROL*


**Syntax:**
```
PLm= n
PL n,n,n,n,n,n,n,n
```

### Operands
- `_PLm`
- `Operand holds the value last set by the command`

### Description
The PL command adds a low-pass filter in series with the PID compensation.The crossover frequency is entered directly as an argument to PL. To maintain compatibility with earlier versions, a value less than 1 may also be specified.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
n025001Crossover frequency created bythe PL command
'Max' is a function of TM. See Remarks. n =0 disables the Pole filter.
00.999902/65,536Value used to generate pole filtercrossover frequency
See Remarks for the equation used. n = 0disables the Pole filter

### Remarks
At lower TM settings, the maximum pole frequency is increased. The maximum value of the PL command is determined by the value of TM accordingto the following equation
Max = (1/4 * 10^6) * (1/TM)
The digital transfer function of the filter is (1 - n) / (Z - n) and the equivalent continuous filter is A/(S+A) where A is the filter cutoff frequency: A=(1/T)ln (1 / n) rad/sec and T is the sample time.
Calculated Pole
To convert from the desired crossover (-3 dB) frequency in Hertz to the value given to PL, use the following formula
where
n is the argument given to PL (less than 1)T is the controller's servo loop sample time in seconds (TM divided by 1,000,000)Fc is the crossover frequency in HertzExample: Fc=36Hz TM=1000 n=e^(-0.001*36*2*pi) =0.8The following shows several example crossover frequencies achieved with various values of PL
nFc (Hz)0Infinite (off)0.22560.41450.6810.8360.9990

### Examples
```dmc
'Galil DMC Code Example
'Set A-axis Pole to 0.95, B-axis to 0.9, C-axis to 0.8, D-axis pole to 0.822
:PL .95,.9,.8,.822
Query all Pole values
:PL ?,?,?,?
0.9527,0.8997,0.7994,0.8244
Return A Pole only
:PL?
0.9527 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `PR` — Position Relative
*Category: INDEPENDENT MOTION*


**Syntax:**
```
PRm= n
PR n,n,n,n,n,n,n,n
```

### Operands
- `_PRm`
- `Operand holds the value last set by the command`

### Description
The PR command sets the incremental distance and direction of the next move. The move is referenced with respect to the current position. .

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
|  | M | N | N/A | Axis | Virtual axis to assign value |  |
n-2,147,483,648 2,147,483,647 N/A1Incremental distance forindependent move
n = ? returns the current incrementaldistance specified

### Remarks
_PRm contains the current incremental distance for the specified axis.

### Examples
```dmc
'Galil DMC Code Example
:PR 100,200,300,400;' On the next move the A-axis will go 100 counts,
:BG;' the B-axis will go to 200 counts forward, C-axis will go 300 counts and the D-axis will go 400 counts.
:PR ?,?,?;' Return relative distances
100,200,300 
:PR 500;' Set the relative distance for the A axis to 500
:BG;' The A-axis will go 500 counts on the next move while the B-axis will go its previously set relative distance. 
```
```dmc
'Galil DMC Code Example
'using PA/PR, you can query PR for the incremental distance
:DP 10000
:PA 8000
:PR ?
-2000 
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `PT` — Position Tracking
*Category: INDEPENDENT MOTION*


**Syntax:**
```
PTm= n
PT n,n,n,n,n,n,n,n
```

### Operands
- `_PTm`
- `Operand holds the value last set by the command`

### Description
The PT command will place the controller in the position tracking mode. In this mode, the controller will allow the user to issue absolute position commandsthat begin motion immediately without requiring a BG command. The absolute position may be specified such that the axis will begin motion, continue inthe same direction, reverse directions, or decelerate to a stop

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
n0101Setting for position tracking mode ofmotion
n = 1 enables PT mode, n = 0 disablesPT mode

### Remarks
The PA command is used to give the controller an absolute position target. Motion commands other than PA are not supported in this mode.The motion profile is trapezoidal with the parameters controlled by acceleration, deceleration, and speed (AD, DC, SP).When in the PT mode the ST command will exit the mode.The AM and MC trip points are not valid in this mode.
MF and MR are recommended with this mode as they allow the user to specify both the absolute position, and the direction. The AP trip pointmay also be used.Position Tracking is not valid on virtual axes

### Examples
```dmc
'Galil DMC Code Example
DPA= 0;'   Start position at absolute zero
PTA= 1;'   Start PT mode on A axis
PA 1000;'  Move to position 1000, motion starts right away
MF 500;'   Wait till position 500 reached
PA -1000;' Reverse direction to move to position -1000
EN
```
```dmc
'Galil DMC Code Example
#A
 PT 1,1,1,1;'        Enable the position tracking mode for axes A, B, C, and D
'                    NOTE: The BG command is not used to start the PT mode.
#LOOP;'              Create label #LOOP in a program.  This small program will 
'                    update the absolute position at 100 Hz.  Note that the
'                    user must update the variables v1, v2, v3 and v4 from the 
'                    host PC, or another thread operating on the controller.
'
 PA v1,v2,v3,v4;'    Command ABCD axes to move to absolute positions.  Motion 
'                    begins when the command is processed.  BG is not used
'                    to begin motion in this mode.  In this example, it is
'                    assumed that the user is updating the variable at a 
'                    specified rate.  The controller will update the new
'                    target position every 10 milliseconds (WT10).
 WT10;'             Wait 10 milliseconds
JP#LOOP;'           Repeat by jumping back to label LOOP 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `PV` — PVT Data
*Category: PVT MODE*


**Syntax:**
```
PVm= n0,n1,n2
```

### Operands
- `_PVm`
- `Operand has special meaning, see Remarks`

### Description
The PV command is used to enter PVT data into the PVT buffer. Data is entered by specifying the target delta position, target velocity, and delta time forthe segment duration.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
n0-30,000,00030,000,00001Position target for PVTsegment
n1-15,000,00015,000,00002Velocity target for PVTsegment
n202,04802Number of samples for PVTsegment
n2 = -1 clears the PVT buffer, n2 = 0 exits PVTmode. See Remarks

### Remarks
n2 is in samples and sample time is defined by TM
With TM 1000 set, n2 = 1024 is equal to 1 second
If t is omitted from the PVT command, the previous n2 value is usedFor more details on PVT mode of motion see the user manual.
Operand

### Usage
_PVm contains the number of spaces available in the PV buffer for the specified axis. Each axis has a 255 segment PVT buffer

### Examples
```dmc
'Galil DMC Code Example
PVA= 100,2000,256;'   Move 100 counts over 256 samples, end at 2000 cnts per sec
PVA= 500,1000,128;'   Move 500 counts over 128 samples, end at 1000 cnts per sec
PVA= 1000,2500;'      Move 1000 counts over 128 samples, end at 2500 cnts per sec
PVA= 0,0,0;'          End PVT mode 
```
Desired X/Y Trajectory
X Position(relative/absolute)
X Speed at end of
time period (c/s)
Time (ms at TM1000)(relative/time from start)
Y Position(relative/absolute)
Y Speed at end of
time period (c/s)
Time (ms at TM1000)
(relative/time from
start)0/000/00/000/0100/100200256/256-50/-50500100/100200/30020050/306-100/-150-100510/610300/600050/356300/150050/660
```dmc
'Galil DMC Code Example
DP0,0;'              Define zero position
PVA=100,200,256;'    Command X axis to move 100 counts reaching an ending speed of 200c/s in 256 samples
PVB=-50,500,100;'    Command Y axis to move -50 counts reaching an ending speed of 500c/s in 100 samples
PVB=-100,-100,510;'  Command Y axis to move -100 counts reaching an ending speed of -100c/s in 510 samples
PVA=200,200,50;'     Command X axis to move 200 counts reaching an ending speed of 200c/s in 50 samples
PVA=300,0,50;'       Command X axis to move 300 counts reaching an ending speed of 0c/s in 50 samples
PVB=300,0,50;'       Command Y axis to move 300 counts reaching an ending speed of 0c/s in 50 samples
PVB=,,0;'            Exit PVT mode on Y axis
PVA=,,0;'            Exit PVT mode on X axis
'                    When the PVT mode is exited, the axis will be in the "SH" state
'                     (assuming position error is not exceeded, etc)
BTAB;'               Begin PVT on X and Y axis
AMAB;'               Trip point will block until PVT motion on X AND Y is complete
EN;'                 End program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010*

---

## `PW` — Password
*Category: SYSTEM CONFIG*


**Syntax:**
```
PW str,str
```

### Description
The PW command sets the password used to lock the controller. Locking the controller prevents interrogation of the controller program space.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
str0 chars8 chars""StringString to be used forpassword
Both parameters must match for the PW commandto succeed.

### Remarks
The password can only be changed when the controller is in the unlocked state. See the ^L^K for more details.The password is burnable but cannot be interrogated. If you forget the password and the controller is locked you must master reset the controller togain access.Quotes are not used to frame the password string. If quotes are used, they are part of the password.

### Examples
```dmc
'Galil DMC Code Example
:PWapple,orange
?
:TC1
138 Passwords not identical
:PWapple,apple
:^L^K apple,1
```
```dmc
'Galil DMC Code Example
:PWtest,test;'            Set password to "test"
:^L^K test,1;'            Lock the program
:ED;'                     Attempt to edit program
? 
:TC1
106 Privilege violation 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,RIO47000,DMC1806*

---

## `QD` — Download Array
*Category: SYSTEM CONFIG*


**Syntax:**
```
QD str[],n0,n1
```

### Description
The QD command transfers array data from the host computer to the controller. QD array[], start, end requires that the array name be specified alongwith the index of the first element of the array and the index of the last element of the array.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
str1 char7 charsN/AStringName of array to receive datavia download.n00see Notes01Index of the first array element. Value cannot exceed size of array - 2
n11see Notessee Notes1Index of the last array element.Value cannot exceed size of array - 1. Defaultsto size of array - 1.

### Remarks
Array name must be a valid, dimensioned array name followed by empty [] brackets.The array elements may be separated by a comma ( , ), a carriage return (\r), or a carriage return and line feed (\r\n). Do not use spaces.The downloaded array is terminated by a \ character.QD is not supported in the terminal of Galil software packages.
It is recommended to use the array download functions available through the Galil software and drivers rather than directly using the QDcommand.Issuing this command will pause the output of the Data Record until the command is completed.

### Examples
```dmc
'Galil DMC Code Example
:'From a character-buffered terminal such as Telnet or Hyperterm
:DM array[3]
:QD array[]
1,2,3\:LA
array[3]
:array[0]=?
 1.0000
:array[1]=?
 2.0000
:array[2]=?
 3.0000
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `QH` — Query Hall State
*Category: INTERROGATION*


**Syntax:**
```
QH mm
```

### Operands
- `_QHm`
- `Operand has special meaning, see Remarks`

### Description
The QH command transmits the state of the Hall sensor inputs. The value is decimal and represented by a 3 bit value (see Remarks).

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | ABCDEFGH | Multi-Axis Mask Axes to return Hall status |  |  |

### Remarks
The 3 bit value returned by QH is defined in the table below:
BitStatus07Undefined (set to 0)06Undefined (set to 0)05Undefined (set to 0)04Undefined (set to 0)03Undefined (set to 0)02Hall C State01Hall B State00Hall A StateQH should return a value from 1 through 6 as valid Hall combinations. A value of 0 or 7 is invalid when using Hall sensors and will generate a Hall errorwith OE set.
The valid sequence for Hall inputs is a greycode output (only one bit changes at a time):
1,3,2,6,4,5 (or 5,4,6,2,3,1)To disable Hall error checking, set the axis to brushed with a BR 1 command.When using an internal sine amplifier, the BA command must be issued before QH will report the Hall state status.
Operand

### Usage
_QHm Contains the state of the Hall sensor inputs for the specified axis

### Examples
```dmc
'Galil DMC Code Example
QHA;'       Query the A axis Hall state
var=_QHB;'  Set a variable var equal to the B axis Hall state 
```
```dmc
'Galil DMC Code Example
:QHA;'   Query A axis Hall status
7
:TA1;'   Check for Hall errors in the amp
1        
:'A 1 indicates Hall error on axis A 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,EDD37010,DMC2105*

---

## `QQ` — Clear Sample Time Overflow
*Category: OPERAND ONLY*


**Syntax:**
```
QQ
```

### Operands
- `_QQ`
- `Operand has special meaning, see Remarks`

### Description
QQ is used along with #FWERR to detect a sample overflow. Many features require that the controller perform an action every sample. Running many ofthese features simultaneously can lead to there not being enough time to complete every action. See remarks for a list of these features. In the event thata sample overflow occurs, the QQ command is used to report and clear this error. For the majority of applications, this will never occur. This behaviorshould only occur when running a low sample time (TM) and using absolute encoders with a high number of bits at a low clock frequency.

### Arguments
The QQ command has no arguments.

### Remarks
If the servo sample has not yet overflowed, the value of _QQ will be 0.If the servo sample has overflowed and not yet been cleared, _QQ will be 1.The following are features, and their associated DMC comands, which add a non-negligible amount of time to the servo sample calculations.
Serial Encoders (SI/SS)Analog Encoders (AF)Notch Filter (NF,NZ,NB)Low Sample Time setting (TM)

### Examples
```dmc
'Galil DMC Code Example
'Code detects a checksum error and notifies the user
#FWERR
MG "Interrupt overflow event occurred:" ,_QQ; 'printing the _QQ operand showing that the interrupt has overflown
QQ; 'returns the _QQ operand to 0
MG "Shutdown for diagnostics"
EN
```

---

## `QR` — I O Data Record
*Category: INTERROGATION*


**Syntax:**
```
QR mm
QR
```

### Description
The QR command causes the controller to return a record of information regarding controller status.This status information includes 4 bytes of header information and specific blocks of information as specified by the command arguments. The details ofthe status information is described in Chapter 4 of the user's manual.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
mmAABCDEFGHSTI ABCDEFGHSTI Multi-Axis
Mask
Axes/Coordinated/IO data specified todisplay in the data record
If no argument entered, mm ="ABCDEFGHSTI"
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| mm | A-H Output axes A-H data record block |  |  |
|  | S Output coordinated axis S data block |  |  |
|  | T Output coordinated axis T data block |  |  |
|  | I Output General IO data block |  |  |

### Remarks
The data returned by the QR command is in binary format
Galil API has specialized commands to parse the data record packet. See the API documentation for more details.

### Examples
```dmc
'Galil DMC Code Example
QR A;'   Return the data record with A axis block only
QR BI;'  Return the data record with B axis block and IO block
QR ST;'  Return the data record with S and T coordinated axis blocks
QR;'    Return the data record for all axes, including IO and S and T axis blocks 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `QS` — Error Magnitude
*Category: INTERROGATION, STEPPER MOTOR*


**Syntax:**
```
QS mm
```

### Operands
- `_QSm`
- `Operand has special meaning, see Remarks`

### Description
The QS command reports the magnitude of error, in drive step counts, for axes in Stepper Position Maintenance mode. A step count is directlyproportional to the micro-stepping resolution of the stepper drive.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
mmAABCDEFGHABCDEFGHMulti-AxisMask
Axes to query for step motor errormagnitude
Default value used if mm isundefined.mAHN/AAxisSingle Axis to query for error magnitude

### Remarks
The result of QS is modularized so that result is never greater than 1/2 the revolution of the stepper motor.
Largest possible QS result = 0.5*YA*YBIf present in embedded code, command execution will jump to #POSERR when QS is equal to 3 full motor steps (_YAm * 3)QSm=? will return the current error for axis m
Operand

### Usage
_QSm contains the error magnitude in drive step counts for the specified axis.

### Examples
```dmc
'Galil DMC Code Example
'For an SDM-20620 microstepping drive, query the error of B axis:
:QSB
 253
:' Above shows 253 step counts of error.
:' The SDM-20620 resolution is 64 microsteps per full motor step
:' nearly four full motor steps of error.
Query the value of all axes:
:QS
 0,253,0,0,0,0,0,0
:' Response shows all axes error values 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `QU` — Upload Array
*Category: INTERROGATION*


**Syntax:**
```
QU str[],n0,n1,n2
```

### Description
The QU command transfers array data from the controller to a host computer. The QU requires that the array name be specified along with the firstelement of the array and last element of the array.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| str | 1 char | 7 chars | N/A | String | Name of array to be uploaded |  |
| n0 | 0 | see Notes | 0 | 1 | Index of first array element | Value cannot exceed size of array - 2 |
n11see Notessee Notes1Index of last array elementDefaults to last element of array. Value cannotexceed size of array - 1
n20101Selects character delimiterbetween array elements
n2 = 0 selects CR delimiting. n2 = 1 selectcomma delimiting.

### Remarks
Array name must be a valid, dimensioned array name followed by empty [] brackets.The uploaded array will be followed by a <control>Z as an end of text marker.Issuing this command will pause the output of the Data Record until the command is completed.

### Examples
```dmc
'Galil DMC Code Example
DM test[10];'     Dimension a 10 element sized array
QU test[],0,1,1;' Upload first 2 elements
QU test[],8,9,1;' Upload last 2 elements (size-2 and size-1 used for n1,n2)
EN
```
```dmc
'Galil DMC Code Example
:DM array[5];'                            Dimension Array
:QU array[],0,4,1;'                       Upload Array
0.0000, 0.0000, 0.0000, 0.0000, 0.0000
:array[0]=9;'                             Set value
:array[1]=1
:QU array[],0,4,1
9.0000, 1.0000, 0.0000, 0.0000, 0.0000
:array[0]=?;'                             Alternative method to return just one array value
 9.0000 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `QZ` — Return Data Record information
*Category: INTERROGATION*


**Syntax:**
```
QZ
```

### Description
The QZ command is an interrogation command that returns information regarding the data record. The controller's response to this command will be thereturn of 4 integers separated by commas.

### Arguments
QZ is an interrogation command with no parameters.

### Remarks
The four fields returned by QZ represent the following:
1. First field returns the number of axes.2. Second field returns the number of bytes to be transferred for general status3. Third field returns the number of bytes to be transferred for coordinated move status4. Fourth field returns the number of bytes to be transferred for axis specific information
_QZ operands
OperandDescription_QZ0Holds the number of axes_QZ1Holds the number of bytes to be transferred for general status_QZ2Holds the number of bytes to be transferred for coordinated move status_QZ3Hold the number of bytes to be transferred for axis specific information

### Examples
```dmc
'Galil DMC Code Example
:QZ;'             standard DMC-4143 example response
 4, 52, 26, 36 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `RA` — Record Array
*Category: PROGRAMMING*


**Syntax:**
```
RA str[ ],str[ ],str[ ],str[ ],str[ ],str[ ],str[ ],str[ ]
```

### Description
The RA command selects the user arrays to be populated by the Record Array function. The data to be captured is specified by the RD command andtime interval by the RC command.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
str1 char7 charsN/AStringValid array name to use inrecord array function
The arrays listed correspond to the source listdefined by the RD command. See Remarks

### Remarks
The array name str must be followed by the [] brackets. Those brackets must be empty.The array name str must be a valid array defined by the DM command and reported by LA.

### Examples
```dmc
'Galil DMC Code Example
'  try to start record array without defining array[]
:RA array[]
?
:TC1
82 Undefined array
:DM array[100]
:RA array[]
```
```dmc
'Galil DMC Code Example
#record;'     Label
DM pos[100];' Define array
RA pos[];'    Specify Record Mode
RD _TPA;'     Specify data type for record
RC 1;'        Begin recording at 2 msec intervals
PR 1000;BG;'  Start motion
EN;'          End
```
```dmc
'The record array mode is useful for recording the real-time motor position during motion.  
'The data is automatically captured in the background and does not interrupt the program sequencer.  
'The record mode can also be used for a teach or learn of a motion path.  
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `RC` — Record
*Category: PROGRAMMING*


**Syntax:**
```
RC n0,n1
```

### Operands
- `_RC`
- `Operand has special meaning, see Remarks`

### Description
The RC command begins recording for the Automatic Record Array Mode. RC 0 stops recording. The record array mode loads source data specified bythe RD command into the arrays defined by the RA command. The address for the array element for the next recording can be interrogated with _RD.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n00801Specify the record array time intervalas 2^n samples.n0 = 0 stops recording.
n1see Notessee Notes01Specify the number of records toperform
n1 has special rules for the maximumsetting. See Remarks.

### Remarks
Do not allocate or deallocate arrays (DM,DA) while the Automatic Record Array Mode is running.Do not attempt to download arrays from a host application while automatic record array mode is running.
n0 = non zero number automatically starts record mode.n0 = ? returns status of recording. '1' if recording, '0' if not recording.
Second Parameter Rules
n1 specifies the last array element to use for record mode.If arrays specified by RA have different sizes, the smallest array size is the maximum value for n1If n1 = 0 or not specified, the maximum value is used.A negative value for n1 specifies circular (continuous) record over array addresses 0 to (n1-1).
The absolute value of the minimum n1 allowed = maximum n1 allowed
Operand

### Usage
_RC contains status of recording. '1' if recording, '0' if not recording.
Setting up the record array mode
1. Dimension an array/arrays for storing data. Make sure you dimension the array with the number of elements required to capture data for your
application.2. Set the RA command with the arrays to be used for recording.3. Set the RD command with the data sources to be applied to the arrays. The order of your arrays entered into RA will match the order of data sources
set by RD.4. Set the RC command to get the desired time between records and enable the recording.5. Monitor the _RC operand for a 0 to indicate recording is done.

### Examples
```dmc
'Galil DMC Code Example
#record;'             Record label
DM torque[1000];'     Define Array
RA torque[];'         Specify Array to record data
RD _TTA;'             Specify Data Type
RC 2;'                Begin recording and set 4 msec between records
JG 1000;BG;'          Begin motion
#A;JP #A,_RC=1;'      Loop until done
MG "DONE RECORDING";' Print message
EN;'                  End program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `RD` — Record Data
*Category: PROGRAMMING*


**Syntax:**
```
RD arg, arg, arg, arg, arg, arg, arg, arg
```

### Operands
- `_RD`
- `Operand has special meaning, see Remarks`

### Description
The RD command specifies the data type to be captured for the Record Array (RA) mode. The data defined in this command is stored in arrays definedby the RA command at the time interval specified with the RC command.

### Arguments
Valid arguments for RD command
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
argTIME
Time inservosamples
Value as read by the TIME command
_AFmAnalog inputdigital value
Data range is -32768 to 32767. The analog inputs are limited to those which correspond to an axis on thecontroller. Syntax Note: Unlike the operand _AFm, the symbol _AFm in the context of RD records the ADCvalue, not the AF setting.
_DEm
Auxiliaryencoderposition
_DEm and _TDm capture the same data
_OPOutputstatus
_RLmLatchedposition
_RPmCommandedposition_RPm and _SHm capture the same data
_SCmStop code
_SHmCommandedposition_RPm and _SHm capture the same data
_TDm
Auxiliaryencoderposition
_DEm and _TDm capture the same data
_TEmPositionerror_TIInput status
_TPmEncoderposition_TSmSwitchesOnly bits 0-4 valid
_TTmTorquecommand
The values recorded for torque are in the range of +/- 32767 where 0 is 0 torque, -32767 is -10 voltcommand output, and +32767 is +10 volt.
_TVmFilteredvelocityThis value will be 64 times greater than TV command

### Remarks
Arguments listed as _XXm are valid when m is a valid axis maskThe order of args specified in RD corresponds with the array order specified in the RA command.the operand _RD contains the address for the next array element for recording.When recording _AFm, the returned value is signed. This means that when AQ is used to set unipolar inputs, values on the upper half of the voltagerange are sign extended. Anding the value with $0000FFFF will return the expected unsigned value.

### Examples
```dmc
'Galil DMC Code Example
DM errora[50],errorb[50];'      Define arrays
RA errora[],errorb[];'          Specify arrays to be recorded
RD _TEA,_TEB;'                  Specify data source
RC 1;'                          Begin recording, period is once every other servo sample
JG 1000;BG;'                    Begin motion 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `RE` — Return from Error Routine
*Category: PROGRAMMING*


**Syntax:**
```
RE n
```

### Description
The RE command is used to end subroutines in application code. An RE at the end of these routines causes a return to the main program. Specificautomatic error subroutines require the use of the RE command to end the code correctly.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n0101
Determines state of interrupted trippointwhen returning from an automaticsubroutine.
n = 1 restores the interruptedtrippoint. n = 0 clears thetrippoint

### Remarks
The RE command is used to end the following error automatic subroutines.
Automatic Subroutines UsedNotes#AMPERROnly when using internal amps#LIMSWI#POSERR#SERERROnly when equipped with serial encoder firmware support#TCPERR
Care should be taken to ensure the error conditions are cleared when finishing the subroutine to avoid immediate re-entering of the error routine.To avoid returning to the main program on an interrupt, use the ZS command to zero the subroutine stack, then use JP to return to the desiredlocation in code.RE 1 restores the trippoint that was interrupted by an automatic subroutine (like WT)
A motion trippoint like MF or MR requires the axis to be actively profiling in order to be restored with the RE 1 command.

### Examples
```dmc
'Galil DMC Code Example
REM dummy loop
#A
JP #A
EN
```
```dmc
#POSERR;'       Begin Error Handling Subroutine
MG "ERROR";'    Print message
SB1;'           Set output bit 1
RE;'            Return to main program and clear trippoint 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `REM` — Remark
*Category: PROGRAMMING*


**Syntax:**
```
REM str
```

### Description
REM is used for comment lines. The REM statement is NOT a controller command. Rather, it is recognized by Galil PC software, which strips away the REMlines before downloading the DMC file to the controller.

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
strStringComment to be removed from code prior todownload
This comment is not limited by the character limit of the controller, as it isnever downloaded

### Remarks
REM differs from NO (or ') in the following ways:
NO (or ') comments are downloaded to the controller and REM comments are not.NO (or ') comments take up execution time and REM comments don't; therefore, REM should be used for code that needs to run fast.REM comments cannot be recovered when uploading a program but NO (or ') comments are recovered. Thus the uploaded program is lessreadable with REM.NO (or ') comments take up program line space and REM lines do not.REM comments must be the first and only thing on a line, whereas NO (or ') can be used to place comments to the right of code (after asemicolon) on the same line.

### Examples
```dmc
'Galil DMC Code Example
REM This comment will be stripped when downloaded to the controller
'This comment will be downloaded and takes some execution time
PRX=1000 ;'this comment is to the right of the code 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `RI` — Return from Interrupt Routine
*Category: PROGRAMMING*


**Syntax:**
```
RI n
```

### Description
The RI command is used to end the input interrupt subroutine.The input interrupt subroutine begins with the label #ININT. An RI at the end of this routine causes a return to the main program.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n0101
Determines state of interrupted trippointwhen returning from an automaticsubroutine.
n = 0 clears the trippoint. n = 1restores the interrupted trippoint.

### Remarks
To avoid returning to the main program on an interrupt, use the command ZS to zero the subroutine stack. This turns the jump subroutine into ajump only. Refer to Application Note 2418.
http://www.galil.com/download/application-note/note2418.pdfIf the program sequencer was interrupted while waiting for a trippoint, such as WT, RI 1 restores the trippoint on the return to the program. RI 0clears the trippoint.
A motion trippoint like MF or MR requires the axis to be actively profiling in order to be restored with the RI1 command.The RI command re-enables input interrupts.

### Examples
```dmc
'Galil DMC Code Example
#A;II1;JP #A;EN;' Program label
#ININT;' Begin interrupt subroutine
MG "INPUT INTERRUPT";' Print Message
SB 1;' Set output line 1
RI 1;' Return to the main program and restore trippoint 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `RL` — Report Latched Position
*Category: INTERROGATION*


**Syntax:**
```
RL mm
```

### Operands
- `_RLm`
- `Operand has special meaning, see Remarks`

### Description
The RL command will return the last position captured by the latch. The latch must first be armed by the AL command and then the appropriate inputmust be activated. Each axis uses a specific general input for the latch input; see the AL command for information on latch inputs.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | ABCDEFGH | Multi-Axis Mask Axes to query for latched position |  |  |

### Remarks
The armed state of the latch can be configured using the CN command.The Latch Function works with the main or auxiliary encoder.
Capturing Stepper Position using the Latch
When working with a stepper motor without an encoder, the latch can be used to capture the stepper position. Follow the steps below to achievethis.
1. Place a wire from the controller Step (PWM) output into the main encoder input, channel A+.2. Connect the Direction (sign) output into the channel B+ input.3. Configure the main encoder for Step/Direction using the CE command.4. The latch will now capture the stepper position based on the pulses generated by the controller.
Operand

### Usage
_RLm contains the latched position of the specified axis.

### Examples
```dmc
'Galil DMC Code Example
:JG ,5000;' Set up to jog the B-axis
:BG B;'    Begin jog
:AL B;'    Arm the B latch, assume that after about 2 seconds, input goes low
:RL B;'    Report the latch
10000 
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `RP` — Reference Position
*Category: INTERROGATION*


**Syntax:**
```
RP mm
```

### Operands
- `_RPm`
- `Operand has special meaning, see Remarks`

### Description
The RP command returns the commanded reference position of the motor(s). RP command is useful when operating step motors since it provides thecommanded position in steps when operating in stepper mode.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | ABCDEFGH | Multi-Axis Mask Axes to report commanded position |  |  |
|  | M | N | N/A | Multi-Axis Mask Virtual axes to report commanded position |  |  |

### Remarks
The relationship between RP, TP and TE: TE equals the difference between the reference position, RP, and the actual position, TP.
TE = RP - TP_RPm contains the commanded reference position for the specified axis.

### Examples
```dmc
'Galil DMC Code Example
'Assume that A axis is commanded to be at the position 200
'The returned units are in quadrature counts.
:PF 7;' Position format of 7
:RP
200 
:RPA
200 Return the A motor reference position
:PF-6.0;' Change to hex format
:RP
$0000C8
:position =_RPA;' Assign the variable, position, the value of RPA 
```
```dmc
'Galil DMC Code Example
'Assume that ABC and D axes are commanded to be at the positions 200, -10, 0, -110 
'respectively.  The returned units are in quadrature counts.
:PF 7;' Position format of 7
:RP;'   Return A,B,C,D reference positions
200,-10,0,-110
:RPA
200 'Return the A motor reference position
:RPB
-10 'Return the B motor reference position
:PF-6.0;' Change to hex format
:RP
$0000C8,$FFFFF6,$000000,$FFFF93 'Return A,B,C,D in hex 
:Position =_RPA;' Assign the variable, position, the value of RPA 
```
```dmc
'Galil DMC Code Example
:GAN;'     make A axis slave to N imaginary axis
:GR-1;'    1:-1 gearing
:SPN=10000
:PRN=10000
:BGN;'     Begin motion
:RPN;'     Get master position
 10000
:RPA;'     Get slave commanded position
-10000 
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,DMC52000,EDD37010,DMC1802,DMC1806,DMC2103,DMC2105*

---

## `RS` — Reset
*Category: SYSTEM CONFIG*


**Syntax:**
```
RS n
```

### Operands
- `_RS`
- `Operand has special meaning, see Remarks`

### Description
The RS command resets the state of the processor to its power-on condition. The previously saved state of the hardware, along with parameter valuesand saved program, are restored.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n-1001Set behavior of RScommand
n = 0 peforms normal reset. n = -1 performs soft masterreset. See Remarks.RS has no arguments.

### Remarks
A soft master reset performed by issuing RS -1 restores factory default settings without erasing the EEPROM. To restore saved EEPROM settings useRS with no arguments, or RS 0.
Operand

### Usage
_RS returns the state of the processor on its last power-up condition. The value returned is the decimal equivalent of the 4 bit binary value shownbelow.
Bit 3 For master reset errorBit 2 For program checksum errorBit 1 For parameter checksum errorBit 0 For variable checksum errorAt startup the controller operating system verifies the firmware sector. If there is a checksum error shown by _RS in firmware, it is not loaded and thecontroller will boot to monitor mode.
The #AUTOERR automatic subroutine will run if this error occurs and the subroutine is located in the program space.

### Examples
```dmc
'Galil DMC Code Example
:RS;'     Reset the hardware
```
```dmc
:RS-1;'   Perform a soft master reset
```
```dmc
:
```
RS applies toDMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,RIO57400,DMC52000,EDD37010,DMC2105

---

## `SB` — Set Bit
*Category: IO*


**Syntax:**
```
SB n
```

### Description
The SB command sets a particular digital output. The SB and CB (Clear Bit) instructions can be used to control the state of output lines.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | 1 | 16 | N/A | 1 | General output bit to be set Max value is 8 for 1-4 axis controllers |  |
| n | 1,000 | 8,999 | N/A | 1 | Set Modbus slave bit | See "SB via Modbus Slave" in Remarks |

### Remarks
The state of the output can be read with the @OUT[] command.
Using SB with a Modbus Slave
n = (SlaveAddress*10000) + (HandleNum*1000) + ((Module-1)*4) + (Bitnum-1)
Slave Address is used when the ModBus device has slave devices connected to it and specified as Addresses 0 to 255. Please note that the useof slave devices for modbus are very rare and this number will usually be 0.HandleNum is the handle specifier where A is 1, B is 2 and so on.Module is the position of the module in the rack from 1 to 16.BitNum is the I/O point in the module from 1 to 4

### Examples
```dmc
'Galil DMC Code Example
SB 5;'     Set digital output 5
SB 1;'     Set digital output 1
CB 5;'     Clear digital output 5
CB 1;'     Clear digital output 1
EN
```
```dmc
'Galil DMC Code Example
#modbus
REM connect to modbus slave at IP address 192.168.42.50
IHH=192,168,42,50<502>2
WT100
SB 8001;'set bit 1 on modbus slave
WT 10
CB 8003;'set bit 3 on modbus slave
EN
```
For detailed information on connecting to a Modbus slave, see:http://www.galil.com/news/dmc-programming-io-control/setting-rio-pocket-plc-or-generic-modbus-slave-extended-io
SB applies toDMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,RIO57400,DMC52000,EDD37010,DMC2105

---

## `SC` — Stop Code
*Category: INTERROGATION*


**Syntax:**
```
SC mm
```

### Operands
- `_SCm`
- `Operand has special meaning, see Remarks`

### Description
The Stop Code command returns a number indicating why a motor has stopped.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | N/A | Multi-Axis Mask Axis to query stop code Omitting argument shows stop code for all axes |  |  |

### Remarks
When SC is issued, the controller reponds with a number for the axis queried. The number is interpreted as follows:
Stop Code Table
Stop Code NumberMeaning0Motors are running, independent mode1Motors decelerating or stopped at commanded independent position2Decelerating or stopped by FWD limit switch or soft limit FL3Decelerating or stopped by REV limit switch or soft limit BL4Decelerating or stopped by Stop Command (ST)6Stopped by Abort input7Stopped by Abort command (AB)8Decelerating or stopped by Off on Error (OE1)9Stopped after finding edge (FE)10Stopped after homing (HM) or Find Index (FI)11Stopped by selective abort input12Decelerating or stopped by encoder failure (OA1) (For controllers supporting OA/OV/OT)15Amplifier Fault (For controllers with internal drives)16Stepper position maintenance error30Running in PVT mode31PVT mode completed normally32PVT mode exited because buffer is empty50Contour Running51Contour Stopped60ECAM Running61ECAM Stopped70Stopped due to EtherCAT communication failure71Stopped due to EtherCAT drive fault99MC timeout100Vector Sequence running101Vector Sequence stopped_SCm contains the value of the stop code for the specified axis.

### Examples
```dmc
'Galil DMC Code Example
tom =_SCA;'      Assign the Stop Code of A axis to variable tom 
```
```dmc
'Galil DMC Code Example
:JG10000
:BGA
:SCA
 0             //Axis is running in independent mode
:STA
:SCA
 4             //Axis is stopped by ST command
:
```

---

## `SD` — Limit Switch Deceleration
*Category: INDEPENDENT MOTION*


**Syntax:**
```
SDm= n
SD n,n,n,n,n,n,n,n
```

### Operands
- `_SDm`
- `Operand holds the value last set by the command`

### Description
The Limit Switch Deceleration command (SD) sets the linear deceleration rate of the motors when a limit switch has been reached.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 1,024 | 1,073,740,800 256,000 |  | 1,024 | Value of switch deceleration Resolution changes with TM, see Remarks |  |

### Remarks
The resolution of the SD command is dependent upon the update rate setting (TM). With the default rate of TM 1000 the resolution is 1024cnts/second^2. The equation to calculate the resolution of the AC command is:
Resolution = 1024*(1000/TM)^2Example:
With TM 500 the minimum AC setting and resolution is 4096 cnts/second^2resolution = 1024*(1000/500)^2 = 4096
The SD command may be changed during the move in JG move, but not in PR or PA move.

### Examples
```dmc
'Galil DMC Code Example
#main
PR 10000;' Specify position
AC 2000000;' Specify acceleration rate
DC 1000000;' Specify deceleration rate
SD 5000000;' Specify Limit Switch Deceleration Rate
SP 5000;' Specify slew speed
EN
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC1806*

---

## `SH` — Servo Here
*Category: FILTER/CONTROL*


**Syntax:**
```
SH mm
```

### Description
The SH commands tells the controller to use the current motor position as the command position and to enable servo control at the current position.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | ABCDEFGH | Multi-Axis Mask Axes to enable |  |  |

### Remarks

### Examples
```dmc
'Galil DMC Code Example
SH;' Servo A,B,C,D motors
SHA;' Only servo the A motor, the B,C and D motors remain in its previous state.
SHB;' Servo the B motor, leave the A,C and D motors unchanged
SHC;' Servo the C motor, leave the A,B and D motors unchanged
SHD;' Servo the D motor, leave the A,B and C motors unchanged 
```
```dmc
'Galil DMC Code Example
'show how issuing SH clears position error
'by resetting the coordinate system
:MOA;'  disable the A axis
:TEA;'  check error on A axis
-12435
:TPA;'  Check position
 12435
:SHA;'  enable A axis, doing so clears the error
:TEA;'  check error again
 0
:TPA;'  confirm position hasn't changed
 12435 
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,DMC52000,EDD37010,DMC1802,DMC1806,DMC2103,DMC2105*

---

## `SI` — Configure the special Galil SSI feature
*Category: SYSTEM CONFIG*


**Syntax:**
```
SIm = n0, n1, n2, n3 <o >p
```

### Operands
- `_SIm`
- `Operand has special meaning, see Remarks`

### Description
The SI command enables and configures the controller to read SSI encoder data. Synchronous Serial Interface (SSI) allows for serial transmission ofabsolute position data (either binary or Gray code) from the encoder based on a timed clock pulse train from the controller. Connection between thecontroller and encoder is based on two signal lines, clock and data, which are usually differential for increased noise immunity. For each sequential clockpulse of the controller, the encoder transmits one data bit from shift registers on the encoder.
SSI Timing

### Arguments
| Argument | Min | Max | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- |
| m | A | H | Axis | Axis to configure for SSI Each axis has a dedicated SSI port (1) |  |
| n0 | 0 | 2 | 1 | Position register to use 1 = TPA, 2 = TDA, 0 = Off |  |
n112311Number of Data andStatus BitsSign of n1 parameter sets the position mode (2)
n200N/AReserved
n3081Number of status bitsSign of n3 parameter sets location of status bits (see timingdiagram above)o4261Clock dividerDefines SSI Clock Frequency (3)p121Data Encoding1 = Binary, 2 = Gray Code(1) SSI encoder support requires the SER Option on the DMC and -SER Firmware(2) The firmware will use the position data in one of two modes:
Absolute Mode, n1 > 0. The controller will use the absolute position transmitted by the encoder. If the encoder exceeds its position limits, theencoder data will roll over from the maximum value to the minimum value. This discontinuity will be perceived by the controller as a large change inservo error. Absolute mode is typically used with linear encoders that have a limited range of travel.Continuous Mode, n1< 0. In this mode if the absolute position rolls over, the firmware will compensate by accounting for the roll over and countingpast it. This allows for a smooth transition, avoiding the large error that occurs in Absolute Mode. Continuous mode is typically used with rotaryabsolute encoders. When the SS command is issued, the data first loaded into firmware will the same as in Absolute mode.
(3) Galil recommends using the lowest clock divider (highest clock frequency) possible. This will mainly be dictated by the encoder specifications and thelength of the clock and data transmission lines. ** Clock frequencies (f) in MHz can be calculated from the clock divider ( o) as follows: f=10/(o+1)
o = 9 is a good starting value for most applications.

### Remarks
Axis must be in MO state prior to issuing the SI command.
SIm=? will return the configuration parameters for the specified axis.
Clocking in SSI data has a timing overhead which may be non-negligible. In the event that clocking in data will result in the controller being unable tocomplete all required operations, (e.g. using multiple encoders with a lowered TM sample rate) the controller will respond by turning of all serialencoders. See #FWERR and QQ for more information. This error mode is very rare, and is expected to occur only during development.
Operand

### Usage
_SIm returns the value of the SSI encoder's status bits as an 8 bit bitmask. SSI status bit placement and interpretation is manufacturer specific,consult the encoder documentation for further information.

### Related Commands
DF - Dual FeedbackDV - Dual Velocity (Dual Loop)TD - Tell Dual EncoderTP - Tell Position

---

## 'Galil DMC Code Example'SSI encoder data on the A axis sent to the _TPA register'25 total bits, 22 position data, 3 status, prepended'1 MHz clock frequency, binary encodingSIA= 1,25,0,-3<9>1'message status bits to the hostMG _SIAEN

---

## `SL` — Single Step
*Category: PROGRAMMING*


**Syntax:**
```
SL n
```

### Description
The SL command is used to single-step through a program for debugging purposes. SL can be used after execution has paused at a breakpoint (BK). Theargument n allows user to specify the number of lines to execute before pausing again.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | 1 | 255 | 1 | 1 Number of lines to execute before pausing If n is omitted, default value used. |  |  |

### Remarks
The BK command resumes normal program execution.

### Examples
```dmc
'Galil DMC Code Example
:BK 3;' Pause at line 3 (the 4th line) in thread 0
:BK 5;' Continue to line 5
:SL;' Execute the next line
:SL 3;' Execute the next 3 lines
:BK;' Resume normal execution 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `SM` — Subnet Mask
*Category: ETHERNET*


**Syntax:**
```
SM n0,n1,n2,n3
SM n
```

### Operands
- `_SM0`
- `Operand has special meaning, see Remarks`

### Description
The SM command assigns a subnet mask to the controller. All packets sent to the controller whose source IP address is not on the subnet will be ignoredby the controller. For example, for SM 255,255,0,0 and IA 10,0,51,1, only packets from IP addresses of the form 10.0.000.000 will be accepted.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 | 0 | 255 | 0 | 1 Byte 3 of the Subnet mask |  |  |
| n1 |  |  |  |  |  |  |
|  | 0 | 255 | 0 | 1 Byte 2 of the Subnet mask |  |  |
| n2 | 0 | 255 | 0 | 1 Byte 1 of the Subnet mask |  |  |
| n3 | 0 | 255 | 0 | 1 Byte 0 of the Subnet mask |  |  |
n-2,147,483,648 2,147,483,647 01The full subnet mask specified as a signed 32 bit two'scomplement integer

### Remarks
n = ? will return the subnet mask of the controller as n0,n1,n2,n3_SM0 contains the subnet mask representing a 32 bit signed number (Two's complement)Use the following equation to change the 4 byte subnet (n0,n1,n2,n3) to a single 32 bit number, n
n = (n0*2^24) + (n1*2^16) + (n2*2^8) + n3For more information, see http://www.galil.com/news/dmc-programming-software/blocking-unwanted-ethernet-devices-connecting

### Examples
```dmc
'Galil DMC Code Example
SM 255,255,255,255;' Ignore all incoming Ethernet packets
SM 0,0,0,0;' Process all incoming Ethernet packets 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,RIO47000*

---

## `SP` — Speed
*Category: INDEPENDENT MOTION*


**Syntax:**
```
SPm= n
SP n,n,n,n,n,n,n,n
```

### Operands
- `_SPm`
- `Operand holds the value last set by the command`

### Description
The SP command sets the slew speed of any or all axes for independent moves.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
MNN/AAxisVirtual axis to assignvalue
n015,000,00025,0002Value of jog speed incnts/second
For MT settings of 1,-1,1.5 and -1.5 (Servos) - SeeRemarks for Resolution details
03,000,00025,0002Value of jog speed incnts/second
For MT settings of 2,-2,2.5 and -2.5 (Steppers) - SeeRemarks for Resolution details

### Remarks
Negative values will be interpreted as the absolute value
Resolution
The resolution of the SP command is dependent upon the update rate setting (TM).
With the default rate of TM 1000 the resolution is 2 cnts/second.The equation to calculate the resolution of the SP command is:
resolution = 2*(1000/TM)example:
With TM 250 the resolution of the SP command is 8 cnts/secondresolution = 2*(1000/250) = 8

### Examples
```dmc
'Galil DMC Code Example
PR 2000,3000,4000,5000;'          Specify a,b,c,d parameter 
SP 5000,6000,7000,8000;'   Specify a,b,c,d speeds 
BG;'                              Begin motion of all axes
AM C;'                            After C motion is complete
'
'
'For vector moves, use the vector speed command (VS) to change the speed.
'SP is not a "mode" of motion like JOG (JG).
'Note:  2 is the minimum non-zero speed. 
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `SS` — Configure the special Galil BiSS feature
*Category: SYSTEM CONFIG*


**Syntax:**
```
SSm = n0,n1,n2,n3 < o
```

### Operands
- `_SSm`
- `Operand has special meaning, see Remarks`

### Description
The SS command enables and configures the controller to read BiSS encoder data. BiSS is an open-source, digital interface for encoders. BiSS is hardwarecompatible to the industrial standard SSI (Serial Synchronous Interface) but offers additional features and options.
BiSS Timing
During the controller's servo interrupt, a clock will be transmitted for encoders configured for BiSS. The BiSS encoder responds by transmitting a serialdata stream synchronized to the controllers's clock. The data stream has four important features as described below.
1. Data. Encoder position data and zero padding bits, set via n1 and n32. Error Bit. Shown above as E, BiSS defines an Error bit that is set by the encoder. Depending on the manufacturer, this bit can be active high or low.
Use the SY command to set the correct polarity for this bit. Once BiSS is enabled, the current state of the Error Bit can be checked via the _SSm0operand.3. Warning Bit. Shown above as W, BiSS also defines a Warning bit that is set by the encoder. Depending on the manufacturer, this bit can be active
high or low. Use the SY command to set the correct polarity for this bit. Once BiSS is enabled, the current state of the Error Bit can be checked viathe _SSm0 operand.4. CRC. The Data, Error and Warning bits are all included in the 6 bit CRC calculation. This CRC allows end to end transmission validity. In the event that
the CRC is not valid, the Galil will not update the encoder position information, and _SSm0 will show an invalid CRC. See the table in the Remarkssection for more details.

### Arguments
| Argument | Min | Max | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- |
| m | A | H | Axis Axis to configure for BiSS |  | Each axis has a dedicated BiSS port (1) |
| n0 | 0 | 2 | 1 Position register to use |  | 1 = TPA, 2 = TDA, 0 = Off |
n112381Number of Data bits, including zero paddingbits
Sign of n1 parameter sets the position mode(2)n2000Reservedn3071Number of zero padding bitsManufacturer specifico4261Clock dividerDefines BiSS Clock Frequency (3)(1) BiSS encoder support requires the SER option on the DMC and -SER Firmware(2) The firmware will interpret the encoder position data in one of two ways:
Absolute Mode, n1 > 0. The controller will use the absolute position transmitted by the encoder. If the encoder exceeds its position limits, theencoder data will roll over from the maximum value to the minimum value. This discontinuity will be perceived by the controller as a large change inservo error. Absolute mode is typically used with linear encoders that have a limited range of travel.Continuous Mode, n1 < 0. In this mode if the absolute position rolls over, the firmware will compensate by accounting for the roll over and countingpast it. This allows for a smooth transition, avoiding the large error that occurs in Absolute Mode. Continuous mode is typically used with rotaryabsolute encoders. When the SS command is issued, the data first loaded into firmware will be the same as in Absolute mode.
(3) Galil recommends using the lowest clock divider (highest clock frequency) possible. This will mainly be dictated by the encoder specifications and thelength of the clock and data transmission lines.
Clock frequencies (f) in MHz can be calculated from the clock divider ( o) as follows: f=10/(o+1)o = 9 is a good starting value for most applications.

### Remarks
Axis must be in MO state prior to issuing the SS command.SSm=? Returns the configuration parameters.Clocking in BiSS data has a timing overhead which may be non-negligible. In the event that clocking in data will result in the controller being unable tocomplete all required operations, (e.g. using multiple encoders with a lowered TM sample rate) the controller will respond by turning of all serialencoders. See #FWERR and QQ for more information. This error mode is very rare, and is expected to occur only during development.Axis must be in MO state prior to issuing the SS command.

---

## BitBit Meaning01Description
0TimeoutStatusNo timeoutTimeoutoccurred
Timeout bit will be set if the encoder doesn't set the start bit within 30us of receiving thefirst clock pulse.1CRC StatusCRC validCRC invalidCRC is calculated in hardware, only the validity of the CRC is sent to firmware.2Warning bitNo Warning WarningSet active level using the SY command.3Error bitNo ErrorErrorSet active level using the SY command.An _SSm0 value of 0 means that the encoder is functioning properly._SSm1 saves the initial position data returned from the encoder upon issuing the SS command.
Used for initial configuration steps, helpful when configuring the encoder if getting an error
Error HandlingSERERR is an automatic subroutine which runs when any of the bits in _SSm0 are active i.e.
Encoder TimeoutInvalid CRCError Bit ActiveWarning Bit Active

### Related Commands
#SERERR - Serial Encoder Error Automatic SubroutineDF - Dual FeedbackDV - Dual Velocity (Dual Loop)SY - Serial Encoder BiSS Active LevelTD - Tell Dual EncoderTP - Tell Position

### Examples
```dmc
'Galil DMC Code Example
'BiSS encoder data on the A axis sent to the TPA register
'24 total bits, 22 position data, 2 zero padding bits
'1 MHz clock frequency
SSA= 1,24,0,2<9
EN
```
```dmc
#SERERR
'Serial Error routine messages out to the host the type of error.
sercode=_SSA0
IF (sercode & 1)
 MG "BiSS Timeout"
ENDIF
IF (sercode & 2)
 MG "Invalid CRC"
ENDIF
IF (sercode & 4)
 MG "Warning Bit Set"
ENDIF
IF (sercode & 8)
 MG "Error Bit Set"
ENDIF
RE
```

---

## `ST` — Stop
*Category: INDEPENDENT MOTION, VECTOR/LINEAR*


**Syntax:**
```
ST mm
```

### Description
The ST command stops motion on the specified axis. Motors will come to a decelerated stop.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGHMNST ABCDEFGH |  | Multi-Axis Mask Axes to command to stop motion |  |  |

### Remarks
If ST is sent from the host without an axis specification, program execution will stop in addition to motion.

### Examples
```dmc
'Galil DMC Code Example
ST A;' Stop A-axis motion
ST S;' Stop coordinate plane S
ST ABCD;' Stop A,B,C,D motion
ST SCD;' Stop coordinate plane S, as well as axes C and D
ST;' Stop motion on all axes including any virtual axes and coordinate planes
'Use the after motion complete command, AM, to wait for motion to be stopped. 
```
```dmc
'Galil DMC Code Example
:ST A;'       Stop motion on the A axis
:SC A;'       Query A axis status
 4            Indicates stopped by ST command
:MG _NO;'     Check if code is running
 1            Thread 0 running
:ST ;'        General stop
:MG _NO;'     check code again
 0            Thread 0 stopped 
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `SY` — Serial encoder BiSS active level
*Category: SYSTEM CONFIG*


**Syntax:**
```
SYm= n
SY n,n,n,n,n,n,n,n
```

### Operands
- `_SYm`
- `Operand holds the value last set by the command`

### Description
This command is used to designate the active level of the Error and Warning bits when using the Galil BiSS feature. The BiSS protocol defines two bits,Error and Warning, which can be used by the encoder to signal various events. For more information, see the SS command.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | 0 Warning bit = Active Low; Error bit = Active Low |  |  |
|  | 1 Warning bit = Active High; Error bit = Active Low |  |  |
|  | 2 Warning bit = Active Low; Error bit = Active High |  |  |
|  | 3 Warning bit = Active High; Error bit = Active High Default |  |  |

### Remarks
The SY command should be appropriately configured to ensure that the #SERERR automatic subroutine will run when the error or warning bits areactive, and that the _SSm0 operand reports the fault state of the encoder correctly. Refer to the encoder's data sheet for information regarding theactive level of these bits.

### Examples
```dmc
'Galil DMC Code Example
SYA=1;' Waring bit is active low, Error is active high
SSA=1,32,0,0<9;' Set up a BiSS encoder on axis A, 32 bits of data, 0 padding, 1 MHz clock frequency.
EN
#SERERR
'Serial Error routine messages out to the host the type of error.
sercode=_SSA0
IF (sercode & 1)
 MG "BiSS Timeout"
ENDIF
IF (sercode & 2)
 MG "Invalid CRC"
ENDIF
IF (sercode & 4)
 MG "Warning Bit Set"
ENDIF
IF (sercode & 8)
 MG "Error Bit Set"
ENDIF
RE
```

---

## `TA` — Tell amplifier error status
*Category: INTERROGATION, ERROR CONTROL*


**Syntax:**
```
TA n
```

### Operands
_TA0_TA1_TA2_TA3
Operand has special meaning, see

### Remarks

### Description
The command returns the amplifier error status. The value is decimal and represents an 8 bit value. Bit 7 is the most significant bit. Bit 0 is the leastsignificant bit.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | 0 | 3 | N/A | 1 | Selects amp status byte to return |  |
D3040, D3240
Tell Amplifier Error Status Bit Definition
Bit #DecimalTA0TA1TA2TA37128Under-Voltage (E-H Axes)Hall Error H Axis Peak Current H Axis664Over-Temperature (E-H Axes) Hall Error G Axis Peak Current G Axis532Over-Voltage (E-H Axes)Hall Error F AxisPeak Current F Axis416Over-Current (E-H Axes)Hall Error E Axis Peak Current E Axis38Under-Voltage (A-D Axes)Hall Error D Axis Peak Current D Axis24Over-Temperature (A-D Axes) Hall Error C Axis Peak Current C Axis12Over-Voltage (A-D Axes)Hall Error B Axis Peak Current B Axis ELO Active (E-H Axes)01Over-Current (A-D Axes)Hall Error A Axis Peak Current A Axis ELO Active (A-D Axes)
D3140
Tell Amplifier Error Status Bit Definition
Bit #DecimalTA0TA1TA2TA37128Peak Current H Axis664Peak Current G Axis532Peak Current F Axis416Peak Current E Axis38Peak Current D Axis24Peak Current C Axis12Peak Current B Axis ELO Active (E-H Axes)01Peak Current A Axis ELO Active (A-D Axes)
D3540
Tell Amplifier Error Status Bit Definition
Bit #DecimalTA0TA1TA2TA37128Under-Voltage (E-H Axes)Hall Error H Axis Peak Current H Axis Error latched (E-H Axes)1
664Over-Temperature (E-H Axes) Hall Error G Axis Peak Current G Axis Error latched (A-D Axes)1532Over-Voltage (E-H Axes)Hall Error F AxisPeak Current F Axis416Over-Current (E-H Axes)Hall Error E Axis Peak Current E Axis38Under-Voltage (A-D Axes)Hall Error D Axis Peak Current D Axis24Over-Temperature (A-D Axes) Hall Error C Axis Peak Current C Axis12Over-Voltage (A-D Axes)Hall Error B Axis Peak Current B Axis ELO Active (E-H Axes)01Over-Current (A-D Axes)Hall Error A Axis Peak Current A Axis ELO Active (A-D Axes)1. Only available after AZ2 is issued to the controller.2. Amplifier errors for a bank of axes will begin reporting after the BA command is issued for an axis.
D3547
Tell Amplifier Error Status Bit Definition
Bit #DecimalTA0TA1TA2TA37128Under-Voltage (E-H Axes)Hall Error H Axis Peak Current H Axis Error latched (E-H Axes)664Over-Temperature (E-H Axes) Hall Error G Axis Peak Current G Axis Error latched (A-D Axes)532Over-Voltage (E-H Axes)Hall Error F AxisPeak Current F Axis416Over-Current (E-H Axes)Hall Error E Axis Peak Current E Axis38Under-Voltage (A-D Axes)Hall Error D Axis Peak Current D Axis

---

## 24Over-Temperature (A-D Axes) Hall Error C Axis Peak Current C Axis12Over-Voltage (A-D Axes)Hall Error B Axis Peak Current B Axis ELO Active (E-H Axes)01Over-Current (A-D Axes)Hall Error A Axis Peak Current A Axis ELO Active (A-D Axes)
D3640
Tell Amplifier Error Status Bit Definition
Bit #DecimalTA0TA1TA2TA37128Hall Error H Axis Peak Current H Axis664Over-Temperature (E-H Axes) Hall Error G Axis Peak Current G Axis532Hall Error F AxisPeak Current F Axis416Hall Error E Axis Peak Current E Axis38Hall Error D Axis Peak Current D Axis24Over-Temperature (A-D Axes) Hall Error C Axis Peak Current C Axis12Hall Error B Axis Peak Current B Axis ELO Active (E-H Axes)01Hall Error A Axis Peak Current A Axis ELO Active (A-D Axes)
D4040
Tell Amplifier Error Status Bit Definition
Bit #DecimalTA0TA1TA2TA37128664532416Over-Current (E-H Axes)1382412ELO Active (E-H Axes)01Over-Current (A-D Axes)1ELO Active (A-D Axes)
1. An Over-Current error will report if the D4040 is not powered
D4140
Tell Amplifier Error Status Bit Definition
Bit #DecimalTA0TA1TA2TA37128Under-Voltage (E-H Axes)664532416Over-Current (E-H Axes)38Under-Voltage (A-D Axes)2412ELO Active (E-H Axes)01Over-Current (A-D Axes)ELO Active (A-D Axes)1. This will also be reported in the case of Under-Voltage

### Remarks
Refer to the controller User Manual for more details on clearing amplifier errors.
_TAn Contains the amplifier error status. n = 0,1,2, or 3.If a brushed-type servo motor is disabling and TA1 shows a Hall error, use the BR command to set the axis as a brushed axis. This causes thecontroller to ignore invalid Hall states.

### Related Commands
#AMPERR - Amplifier error automatic subroutineAG - Amplifier GainAU - Set amplifier current loopAZ - Clear Amplifier ErrorsMT - Motor TypeTK - Peak Torque LimitTL - Torque Limit

### Examples
```dmc
'Galil DMC Code Example
#AMPERR
ST;' stop motion on all axes
AM;' wait until motion is halted
MO;WT2;' disable all axes
```

---

## ((_)|(_));gMG "Over-Voltage amplifier error"ENDIF
```dmc
IF((_TA0&4)|(_TA0&64));' check if an Over-Temperature error occured
MG "Over-Temperature amplifier error"
ENDIF
```
```dmc
IF((_TA0&8)|(_TA0&128));' check if an Under-Voltage error occured
MG "Under-Voltage amplifier error"
ENDIF
```
```dmc
IF((_TA3&1)|(_TA3&2));' check if the ELO input was asserted
MG "ELO input asserted"
ENDIF
```
```dmc
IF((_TA3&64)|(_TA3&128));' check if an amplifier error has latched
MG "Amplifier error has latched"
AZ1;' clear latched amplifier errors
ENDIF
```
```dmc
RE
```
```dmc
'Galil DMC Code Example
:TA1
1   'bit 0 means Hall error for A axis
:TA0
8   'bit 3 means under voltage error for amp 
```

*Applies to: DMC50000,DMC4000,DMC4103,DMC30010,DMC2103,EDD37010,DMC2105*

---

## `TB` — Tell Status Byte
*Category: INTERROGATION*


**Syntax:**
```
TB
```

### Operands
- `_TB`
- `Operand has special meaning, see Remarks`

### Description
The TB command returns status information from the controller as a decimal number. Each bit of the status byte denotes an active condition when thebit is set (high):

### Arguments
The following table describes the specific conditions reported with each bit of the TB report.
Tell Status Byte Response Bit

### Description
Bit #StatusBit 7Executing application programBit 6N/ABit 5ContouringBit 4Executing error or limit switch routineBit 3Input Interrupt enabledBit 2Executing input interrupt routineBit 1N/ABit 0Echo on

### Remarks
_TB Contains the status byte reported by the TB command

### Examples
```dmc
'Galil DMC Code Example
:TB
33'      Contouring on and Echo is on (2^5 + 2^0 = 32 + 1 = 33) 
```
```dmc
'Galil DMC Code Example
:TB;'      Tell status information
129'     Executing program and echo on (2^7 + 2^0 = 128 + 1 = 129) 
```
TB applies toDMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,RIO47000,EDD37010,DMC2105

---

## `TC` — Tell Error Code
*Category: INTERROGATION, ERROR CONTROL*


**Syntax:**
```
TC n
```

### Operands
- `_TC`
- `Operand has special meaning, see Remarks`

### Description
The TC command reports programming or command errors detected by the controller. The TC command returns a number between 1 and 255. Thisnumber is a code that reflects why a command was not accepted by the controller. This command is useful when the controller halts execution of aprogram or when the response to a command is a question mark.

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | 0 Return the numerical code only |  | Default |
|  | 1 Return the numerical code and human-readable message |  |  |
| TC Error Code List |  |  |  |
Tell Code NumberDescriptionNotes1Unrecognized command2Command only valid from program3Command not valid in program4Operand error5Input buffer full6Number out of range7Command not valid while running8Command not valid while not running9Variable error10Empty program line or undefined label11Invalid label or line number12Subroutine more than 16 deep13JG only valid when running in jog mode14EEPROM check sum error15EEPROM write error16IP incorrect sign during position move or IP given during forced deceleration17ED, BN and DL not valid while program running18Command not valid when contouring19Application strand already executing20Begin not valid with motor off21Begin not valid while running22Begin not possible due to Limit Switch24Begin not valid because no sequence defined28S operand not valid29Not valid during coordinated move30Sequence Segment Too Short31Total move distance in a sequence > 2 billion32Segment buffer full33VP or CR commands cannot be mixed with LI commands39No time specified41Contouring record range error42Contour data being sent too slowly46Gear axis both master and follower50Not enough fields51Question mark not valid52Missing " or string too long53Error in {}54Question mark part of string55Missing [ or []56Array index invalid or out of range57Bad function or array58Bad command responsei.e._GNX59Mismatched parentheses60Download error - line too long or too many lines61Duplicate or bad label

---

## 62Too many labels63IF statement without ENDIF66Array space full67Too many arrays or variables80Record mode already running81No array or source specified82Undefined Array83Not a valid number84Too many elements90Only A B C D valid operand97Bad Binary Command Format98Binary Commands not valid in application program99Bad binary command number100Not valid when running ECAM101Improper index into ET102No master axis defined for ECAM103Master axis modulus greater than 256 EP value104Not valid when axis performing ECAM105EB1 command must be given first106Privilege Violation110No hall effect sensors detected111Must be made brushless by BA command112BZ command timeout113No movement in BZ command114BZ command runaway118Controller has GL1600 not GL1800119Not valid for axis configured as stepper120Bad Ethernet transmitnot valid for PCI121Bad Ethernet packet receivednot valid for PCI123TCP lost syncnot valid for PCI124Ethernet handle already in usenot valid for PCI125No ARP response from IP addressnot valid for PCI126Closed Ethernet handlenot valid for PCI127Illegal Modbus function codenot valid for PCI128IP address not validnot valid for PCI130Remote IO command errornot valid for PCI131Serial Port Timeoutnot valid for PCI, See Remarks132Analog inputs not present133Command not valid when locked / Handle must be UDPnot valid for PCI134All motors must be in MO for this command135Motor must be in MO136Invalid Password137Invalid lock setting138Passwords not identical140Serial encoder errorValid for BiSS support141Feature not supported143TM timed outValid on SER firmware (SSI and BiSS)144Incompatible with encoder type160BX failure161Sine amp axis not initialized163IA command not valid when DHCP mode enabled164Exceeded maximum sequence length, BGS or BGT is required165Cannot have both SINE and SSI feedback enabled at onceDMC-30000 only166Unable to set analog output30000 Hardware, see AORemarks
TC command accepts ? as a query. This is equivalent to TC or TC 0After TC has been read, the error code is set to zero._TC contains the value of the error code. Use of the operand does not clear the error code.
Note: Error code 131 means that an RS232/USB timeout is being generated while trying to transmit data to the serial port.

---

## ?:TC1;'    Tell error code1       Unrecognized command:
TC applies toDMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC52000,RIO57400,EDD37010,DMC2105

---

## `TD` — Tell Dual Encoder
*Category: INTERROGATION*


**Syntax:**
```
TD mm
```

### Operands
- `_TDm`
- `Operand has special meaning, see Remarks`

### Description
The TD command returns the current position of the dual (auxiliary) encoder input. When operating with stepper motors, the TD command returns thenumber of counts that have been output by the controller.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | ABCDEFGH | Multi-Axis Mask Axes to report dual (auxiliary) encoder position. |  |  |

### Remarks
Auxiliary encoders are not available for a stepper axis or for the axis where output compare is used.
Operand

### Usage
_TDm reports the dual encoder position for the specified axis.

### Examples
```dmc
'Galil DMC Code Example
:TD;' Return A,B,C,D Dual encoders
 200, -10, 0, -110 
:TDA;' Return the A motor Dual encoder
 200 
:DUAL=_TDA;' Assign the variable, DUAL, the value of TDA 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `TE` — Tell Error
*Category: INTERROGATION*


**Syntax:**
```
TE mm
```

### Operands
- `_TEm`
- `Operand has special meaning, see Remarks`

### Description
The TE command returns the current error in the control loop.The command returns the position error of the motor(s), which is the difference between commanded (RP) and actual (TP) position.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | ABCDEFGH | Multi-Axis Mask Axes to report position error |  |  |

### Remarks
Under normal operating conditions with servo control, the position error should be small. The position error is typically largest during acceleration anddeceleration.
The Tell Error command is not valid for step motors since they operate open-loop.
Operand

### Usage
_TEm contains the current position error value for the specified axis.

### Examples
```dmc
'Galil DMC Code Example
:TE;' Return all position errors
 5, -2, 0, 6 
:TEA;' Return the A motor position error
 5 
:TEB;' Return the B motor position error
 -2 
:Error =_TEA;' Sets the variable, Error, with the A-axis position error 
```
TE applies toDMC4000,DMC4103,DMC4200,DMC30010,DMC50000,DMC52000,EDD37010,RIO47000,DMC1802,DMC1806,DMC2103,DMC2105

---

## `TH` — Tell Ethernet Handle
*Category: INTERROGATION*


**Syntax:**
```
TH
```

### Description
The TH command returns a list of data pertaining to the Galil's Ethernet connection. This list begins with the IP address and Ethernet address (physicaladdress), followed by the status of each handle indicating connection type and IP address.

### Arguments
TH is an interrogation command with no parameters

### Remarks
If no handles are shown as AVAILABLE, the controller will be unable to create or accept more Ethernet connections with TCP or UDP. Ping will stillfunction when all handles are taken.

### Related Commands
DH - DHCP Client EnableIA - IP AddressIH - Open IP HandleWH - Which Handle

### Examples
```dmc
'Galil DMC Code Example
:TH
CONTROLLER IP ADDRESS 10,51,0,87 ETHERNET ADDRESS 00-50-4C-08-01-1F
IHA TCP PORT 1050 TO IP ADDRESS 10,51,0,89 PORT 1000 
IHB TCP PORT 1061 TO IP ADDRESS 10,51,0,89 PORT 1001 
IHC TCP PORT 1012 TO IP ADDRESS 10,51,0,93 PORT 1002 
IHD TCP PORT 1023 TO IP ADDRESS 10,51,0,93 PORT 1003 
IHE TCP PORT 1034 TO IP ADDRESS 10,51,0,101 PORT 1004
IHF TCP PORT 1045 TO IP ADDRESS 10,51,0,101 PORT 1005
IHG AVAILABLE
IHH AVAILABLE 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC2105*

---

## `TI` — Tell Inputs
*Category: INTERROGATION, IO*


**Syntax:**
```
TI n
```

### Operands
_TI0_TI1_TI10_TI11
Operand has special meaning, see

### Remarks

### Description
The TI command returns the state of the inputs in banks of 8 bits, or 1 byte. The value returned by this command is decimal and represents an 8 bitvalue (decimal value ranges from 0 to 255). Each bit represents one input where the LSB is the lowest input number and the MSB is the highest input bit.

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | 0 | Report status of Inputs 1-8 Default |  |
|  | 1 | Report status of Inputs 9-16 Only valid for 5-8 axis controllers |  |
|  | 10 | Report status of Inputs 81-88 Auxiliary encoder inputs. See Remarks |  |
|  | 11 | Report status of Inputs 89-96 Auxiliary encoder inputs. Only valid for 5-8 axis controllers. See Remarks |  |

### Remarks
For n = 10 and n = 11, the auxiliary encoder channels A and B can be used as additional IO. Only 2 * the number of axes worth of inputs areavailable.
See the User manual for more details.
Operand

### Usage
_TIn contains the status byte of the input block specified by 'n'.
Note that the operand can be masked to return only specified bit information - see section on Bit-wise operations.

### Examples
```dmc
'Galil DMC Code Example
:TI1;'             Tell input state on bank 1
8                  Bit 3 is high, others low
:TI0
0                  All inputs on bank 0 low
:Input=_TI1;'     Sets the variable, Input, with the TI1 value
:Input=?
8.0000 
```
TI applies toDMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,RIO57400,DMC52000,EDD37010,DMC2105

---

## `TIME` — Time Operand
*Category: OPERAND ONLY*


**Syntax:**
```
TIME
```

### Operands
- `TIME`
- `Operand has special meaning, see Remarks`

### Description
The TIME operand returns the value of the internal free running, real time clock.The returned value represents the number of servo loop updates and is based on the TM command. The default value for the TM command is 1000. Withthis update rate, the operand TIME will increase by 1 count every update of approximately 1000usec. The clock is reset to 0 with a standard reset or amaster reset.

### Arguments
TIME is an operand and has no parameters

### Remarks
The keyword, TIME, does not require an underscore (_) as with the other operands.TIME will increment up to +2,147,483,647 before rolling over to -2,147,483,648 and continuing to count up.
TIME rollover occurs after ~24-25 days of on-time at TM 1000 with no reset.TM 1000 will actually set an update rate of 976 microseconds. Thus the value returned by the TIME operand will be off by 2.4% of the actual time.

### Examples
```dmc
'Galil DMC Code Example
MG TIME;'  Display the value of the internal clock
t1=TIME;'  Sets the variable t1 to the TIME value 
```
TIME applies toDMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,RIO47000,EDD37010,DMC2105

---

## `TK` — Peak Torque Limit
*Category: FILTER/CONTROL*


**Syntax:**
```
TKm= n
TK n,n,n,n,n,n,n,n
```

### Operands
- `_TKm`
- `Operand holds the value last set by the command`

### Description
The TK command sets the peak torque limit on the motor command output. This command works with the TL command which sets the continuoustorque limit. When the average torque is below TL, the motor command signal can go up to the TK (Peak Torque) limit for a short amount of time.
To convert motor command output (V) to actual motor current (A), use the following equation.
For Galil controllers with internal drives, refer to AG command for amplifier gain setting. For external drive control, consult drive documentation.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 9.9982 | 0 | 20/65,536 | Value of peak torque limit n = 0 disables the peak torque limit |  |

### Remarks
TK provides the absolute value of the peak torque limit for -/+ torque outputsPeak torque can be achieved for approximately 1000 samples upon initial command from 0V torqueIf TK is set lower than TL, then TL is the maximum command output under all circumstancesTK should be set after the amplifier gain is selected

### Related Commands
#AMPERR - Amplifier error automatic subroutineAG - Amplifier GainAU - Set amplifier current loopAZ - Clear Amplifier ErrorsMT - Motor TypeTA - Tell Amplifier ErrorTL - Torque Limit

### Examples
```dmc
'Galil DMC Code Example
TLA= 7;'   Limit A-axis to a 7 volt average torque output
TKA= 9.99;'  Limit A-axis to a 9.99 volt peak torque output 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `TL` — Torque Limit
*Category: FILTER/CONTROL*


**Syntax:**
```
TLm= n
TL n,n,n,n,n,n,n,n
```

### Operands
- `_TLm`
- `Operand holds the value last set by the command`

### Description
The TL command sets the limit on the motor command output. This limit is designed to prevent over current to motors with lower current rating than thedrive.
To convert motor command output (V) to actual motor current (A), use the following equation.
For Galil controllers with internal drives, refer to AG command for amplifier gain setting.TL works along with the TK (Peak torque) command to control output current to the motor.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 9.9982 | 9.9982 | 20/65,536 | Value of torque limit |  |
TL With Internal Drives
When using the maximum AG setting, the maximum torque limit will automatically be lowered to ensure the amplifier is limited to its rated continuouscurrent.The maximum torque limit is different for certain amplifiers when configured for its maximum AG setting.
AmplifierAG settingTL limitD304027D324025D354025D354725D3640N/A5

### Remarks
TL sets the absolute torque maximum for negative and positive torque.
For example, TL of 5 limits the motor command output to 5 volts maximum and -5 volts minimum.TL should be set after the amplifier gain is selected.

### Related Commands
#AMPERR - Amplifier error automatic subroutineAG - Amplifier GainAU - Set amplifier current loopAZ - Clear Amplifier ErrorsMT - Motor TypeTA - Tell Amplifier ErrorTK - Peak Torque Limit

### Examples
```dmc
'Galil DMC Code Example
:TL 1,5,9,7.5;' Limit A-axis to 1 volt. Limit B-axis to 5 volts. Limit C-axis to 9 volts. Limit D-axis to 7.5 volts.
:TL ?,?,?,?;' Return limits
1.0000,5.0000,9.0000,7.5000 
:TL ?;'  Return A-axis limit
1.0000 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `TM` — Update Time
*Category: FILTER/CONTROL*


**Syntax:**
```
TM n
```

### Operands
- `_TM`
- `Operand holds the value last set by the command`

### Description
The TM command sets the sampling period of the control loop. The units of this command are microseconds. A negative number turns off the servo loop.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n1255,0001,00031.25Set the sample timein usecs
The minimum value varies based on axis count andfirmware usage. See Remarks

### Remarks
TM 1000 will actually set an update rate of 976 microseconds. Thus the value returned by the TIME operand will be off by 2.4% of the actual time.If a higher sampling frequency is required, please contact Galil.The minimum allowed TM setting for the controller is listed in the tables below.
The following commands are automatically scaled to adjust for changes in sample time.
ACASATDCFAFVHVJGKPNBNFNZPLSDSPVAVDVSWTThe following commands are NOT automatically scaled to adjust for changes in sample time
BWDRDTITKDKITIMETKTVTWFor more infomation see:
[http://www.galil.com/news/dmc-programming-motion-controllers/time-based-commands-accelera-motion-controllers]
Axis Count Minimum TM1-21253-42505-63757-8500

### Examples
```dmc
'Galil DMC Code Example
:TM 2000;' Set sample rate to 2000 usec
:TM 1000;' Return to default sample rate
:
```

---

## `TN` — Vector Tangent
*Category: VECTOR/LINEAR*


**Syntax:**
```
TN n0,n1
```

### Operands
- `_TNm`
- `Operand has special meaning, see Remarks`

### Description
The TN command describes the tangent axis to the coordinated motion path. n0 is the scale factor in counts/degree of the tangent axis. n1 is theabsolute position of the tangent axis where the tangent axis is aligned with zero degrees in the coordinated motion plane. The tangent function is usefulfor cutting applications where a cutting tool must remain tangent to the part.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 |  |  |  |  |  |  |
|  | -127 | 127 | 0 | 0.004 Scale factor in counts/degree of the tangent axis |  |  |
| n1 | -8,388,608 | 8,388,607 | 0 | 1 Absolute position of tangent axis where the tangent angle is 0 |  |  |

### Remarks
When operating with stepper motors, n0 is the scale factor in steps / degreeThe tangent axis is specified with the VMm0m1m2 command where m2 is the tangent axis.
For example, VMABD specifies the D axis as the tangent axis
Operand

### Usage
_TNm (where m = S or T) contains the first position value for the tangent axis in the specified vector plane. This allows the user to correctly positionthe tangent axis before the motion begins.
_TNm will change based upon the vector path described in the VM declaration. See the example below.n0 = ? also reports this value

### Examples
Use a 2D table with a tangent cutting blade to cut a half circle. Ensure that the blade is oriented before turning on the saw. The saw is activated withoutput 1.
```dmc
'Galil DMC Code Example
#EXAMPLE
VM XYZ;'           Z axis is tangent
VSS=500;'          Set vector speed
m=1000/360;'       Z axis encoder is 1000 counts per full revolution
n=0;'              When TPZ=0, blade is oriented to cut along X axis
TN m,n;'           Set these tangent characteristics
CR 1000,0,180;'    Profile a circle with radius 1000 counts, 
'                   starting at 0 degrees
'                   and spanning 180 degrees
VE;'               End the vector path
MG_TNS;'            Print the calculated initial tangent entry point (250)
PAZ=_TNS;'          Profile a move to orient the Z axis to begin
BGZ;'              Move the blade into place
AMZ;'              Wait until the blade motion is done
SB1;'              Turn on the saw
WT1000;'           Wait for saw to spin up
BGS;'              Begin vector motion, saw will stay tangent
AMS;'              Wait for the cut to complete
CB0;'              Turn off the saw
MG "ALL DONE";'    Print a message
EN
```

---

## `TP` — Tell Position
*Category: INTERROGATION*

TP mm

### Operands
- `_TPm`
- `Operand has special meaning, see Remarks`

### Description
The TP command returns the current position of the motor.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | ABCDEFGH | Multi-Axis Mask Axes to report motor position |  |  |

### Remarks
_TPm contains the current position value for the specified axis.Omitting mm returns the position of all axes.

### Examples
```dmc
'Galil DMC Code Example
'Assume the A-axis is at the position 200 (decimal), the B-axis is at the position -10 (decimal)
'the C-axis is at position 0, and the D-axis is at -110 (decimal).  The returned parameter units are in quadrature counts.
:PF 7;' Position format of 7
:TP;' Return A,B,C,D positions
 200, -10, 0, -110 
:TPA;' Return the A motor position
 200 
:TPB;' Return the B motor position
 -10 
:PF-6.0;' Change to hex format
:TP;' Return A,B,C,D in hex
$0000C8,$FFFFF6,$000000,$FFFF93 
:Position =_TPA;' Assign the variable, Position, the value of TPA 
```

*Applies to: DMC4000,DMC4103,DMC4200,DMC30010,DMC50000,DMC52000,EDD37010,DMC1802,DMC1806,DMC2103,DMC2105*

---

## `TR` — Trace
*Category: INTERROGATION*


**Syntax:**
```
TR n0, n1
```

### Description
The TR command causes each instruction in a program to be sent out the communications port prior to execution. The trace command is useful indebugging programs.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n00101Set status of trace functionn0 = 0 or null disables Trace. n0 = 1 enablestrace.
n102552551Set threads to trace bybitmaskSee

### Remarks

### Remarks
n1 sets a 1-byte bitmask which determines which threads will run. Bit n set corresponds to thread n traced.
For example, setting bit 2 and 3 sets TR to trace threads 2 and 3. (2^2 + 2^3 = 4 + 8 = 12. TR 1,12 is issued)Omitting n1 sets it to the default maximum value to enable trace on all threads.

### Examples
```dmc
'Galil DMC Code Example
:'Turn on trace during a program execution
:LS
0 MGTIME
1 WT1000
2 JP0
3 
:XQ
:
18003461.0000 
18004461.0000 
18005461.0000 
```
```dmc
:TR1
:
2 JP0 
0 MGTIME 
18006461.0000 
1 WT1000 
2 JP0 
0 MGTIME 
18007461.0000 
1 WT1000 
```
```dmc
:TR0
:
18008461.0000 
18009461.0000 
```
```dmc
:ST
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `TS` — Tell Switches
*Category: INTERROGATION*


**Syntax:**
```
TS mm
```

### Operands
- `_TSm`
- `Operand has special meaning, see Remarks`

### Description
The TS command returns information including axis-specific IO status, error conditions, motor condition and state. The value returned by this command isdecimal and represents an 8 bit value (decimal value ranges from 0 to 255).

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | ABCDEFGH | Multi-Axis Mask Axes to report axis switches |  |  |

### Remarks
Each bit of the TS response represents the following status information when the bit is set (1).
Bit #StatusBit 7Axis in motionBit 6Position error exceeds error limitBit 5Motor offBit 4Reserved (0)Bit 3Forward Limit switch inactiveBit 2Reverse Limit switch inactiveBit 1Home switch statusBit 0Position Latch has occurredFor active high or active low configuration (CN command), the limit switch bits are '1' when the switch is inactive and '0' when active.
Operand

### Usage
_TSm contains the current status of the switches for the specified axis.

### Examples
```dmc
'Galil DMC Code Example
:V1=_TSB;' Assigns value of TSB to the variable V1
:V1=?;' Interrogate value of variable V1
15 (returned value) Decimal value corresponding to bit pattern 00001111
Y axis not in motion (bit 7 - has a value of 0)
Y axis error limit not exceeded (bit 6 has a value of 0)
Y axis motor is on (bit 5 has a value of 0)
Y axis forward limit is inactive (bit 3 has a value of 1)
Y axis reverse limit is inactive (bit 2 has a value of 1)
Y axis home switch is high (bit 1 has a value of 1)
Y axis latch is not armed (bit 0 has a value of 1) 
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `TT` — Tell Torque
*Category: INTERROGATION*


**Syntax:**
```
TT mm
```

### Operands
- `_TTm`
- `Operand has special meaning, see Remarks`

### Description
The TT command reports the value of the analog output signal, which is a number between -9.9982 and 9.9982 volts.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | ABCDEFGH | Multi-Axis Mask Axes to report output torque command |  |  |

### Remarks
Torque output is limited by the value set for the TL command._TTm contains the value of the torque for the specified axis.

### Examples
```dmc
'Galil DMC Code Example
:v1=_TTA;' Assigns value of TTA to variable, v1
:TTA;'   Report torque on A
-0.2843 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `TV` — Tell Velocity
*Category: INTERROGATION*


**Syntax:**
```
TV mm
```

### Operands
- `_TVm`
- `Operand has special meaning, see Remarks`

### Description
The TV command returns the actual velocity of the axes in units of encoder count/s. The value returned includes the sign bit for direction.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| mm | A | ABCDEFGH | ABCDEFGH | Multi-Axis Mask Axes to report velocity |  |  |

### Remarks
The TV command is computed using a special averaging filter (over approximately 0.25 sec for TM1000). Therefore, TV will return average velocity,not instantaneous velocity._TVm contains the value of the velocity for the specified axis.

### Examples
```dmc
'Galil DMC Code Example
:vela=_TVA;'       Assigns value of A-axis velocity to the variable VELA
:TVA;'             Returns the A-axis velocity
 3420 
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,DMC1806,DMC1802,DMC30010,DMC50000,DMC52000,EDD37010,DMC2105*

---

## `TW` — Timeout for MC trippoint
*Category: ERROR CONTROL*


**Syntax:**
```
TWm= n
TW n,n,n,n,n,n,n,n
```

### Operands
- `_TWm`
- `Operand holds the value last set by the command`

### Description
The TW command sets the timeout time for the MC trippoint. The TW command sets the timeout to declare an error if the MC command is active andthe motor is not at or beyond the actual position within the specified time after the completion of the motion profile. If a timeout occurs, then the MCtrippoint will clear and the stopcode will be set to 99. A running program will jump to the special label #MCTIME, if located in the application code.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis Axis to assign value |  |  |
| n | -1 | 32,767 | 32,766 | 1 Set the timeout in msec for the MC command n = -1 disables the timeout |  |  |

### Remarks
The EN command should be used to return from the #MCTIME subroutine.

### Examples
```dmc
'Galil DMC Code Example
TWA= 1000;' set timeout time for MC to 1000 for A axis
var= _TWA;' set value of TW for A axis to variable, var 
```
```dmc
'Galil DMC Code Example
TWA= 5000;'     set MC timeout to 5 seconds
PRA= 10000;'    set move length
BGA
MCA
MG"Move done";' message when move completes
EN
'
#MCTIME
'code when motor doesn't reach final pos in time
MG"Move didn't finish"
MG"Longer than ",_TWA," msecs"
STA
AMA
MOA;'            shut off axis
EN
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `TZ` — Tell I O Configuration
*Category: INTERROGATION*


**Syntax:**
```
TZ
```

### Description
The TZ command is used to request the I/O status of the controller. This is returned to the user as a human-readable text string.

### Arguments
TZ is an interrogation command with no parameters

### Remarks
The data reported by TZ is also accessible through the TI (inputs) and OP (outputs) command

### Examples
```dmc
'Galil DMC Code Example
:TZ
Block 0 (8-1) dedicated as input - value 255 (1111_1111)
Block 0 (8-1) dedicated as output - value 0 (0000_0000)
Block 1 (16-9) dedicated as input - value 255 (1111_1111)
Block 1 (16-9) dedicated as output - value 0 (0000_0000)
Block 10 (88-81) dedicated as input - value 255 (1111_1111)
Block 11 (96-89) dedicated as input - value 191 (1011_1111)
:
```

*Applies to: DMC4000,DMC4200,DMC4103,DMC2103,RIO47000,DMC50000,DMC52000,DMC2105*

---

## `UI` — User Interrupt
*Category: SYSTEM CONFIG*


**Syntax:**
```
UI n
```

### Description
The UI command allows user-defined interrupts to be created. UI can generate 16 different status bytes, $F0 to $FF (240-255), corresponding to UI0 toUI15.UI pushes a user-defined status byte into the EI queue. When the UI command (e.g. UI5) is executed, the status byte value (e.g. $F5 or 245) is queuedup for transmission to the host, along with any other interrupts.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n | 0 | 15 | 0 | 1 | Set the status byte for the interrupt |  |
Status Byte (dec)ConditionStatus Byte (dec)Condition$F0 (240)UI0 was executed$F8 (248)UI8 was executed$F1 (241)UI1 was executed$F9 (249)UI9 was executed$F2 (242)UI2 was executed$FA (250)UI10 was executed$F3 (243)UI3 was executed$FB (251)UI11 was executed$F4 (244)UI4 was executed$FC (252)UI12 was executed$F5 (245)UI5 was executed$FD (253)UI13 was executed$F6 (246)UI6 was executed$FE (254)UI14 was executed$F7 (247)UI7 was executed$FF (255)UI15 was executed

### Remarks
The UDP interrupt packet dispatch may be delayed depending on the number of interrupts in the queue
If immediate packet dispatch is required, use the message command (MG) to send a unique message to the host software.EI,,h must be set to a valid UDP port (set by the host, not the DMC code, is recommended) before any interrupt packet will be dispatched.

### Examples
```dmc
'Galil DMC Code Example
JG 5000;' Jog at 5000 counts/s
BGA;' Begin motion
ASA;' Wait for at speed
UI 1;' Cause an interrupt with status byte $F1 (241)
'The program above interrupts the host PC with status byte $F1 (241) 
'when the motor has reach its target speed of 5000 counts/s 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC1806,DMC1802*

---

## `UL` — Upload
*Category: PROGRAMMING*


**Syntax:**
```
UL
```

### Operands
- `_UL`
- `Operand has special meaning, see Remarks`

### Description
The UL command transfers the program from the controller to a host computer. Programs are sent without line numbers. The uploaded program will befollowed by a <control>Z or a '\' as an end of text marker.

### Arguments
UL is a command with no parameters

### Remarks
In a Galil software, the UL command is not necessary because the UL command is handled by the graphical interface (Upload Program).In a terminal utility such as HyperTerminal or Telnet, the UL command will bring the uploaded program to screen.From there, the user can copy it and save it to a file.Issuing this command will pause the output of the Data Record until the command is completed.
Operand

### Usage
When used as an operand, _UL responds with the number of spaces left in memory to assign new variables.

### Examples
```dmc
'Galil DMC Code Example
:UL;' Begin upload
#A Line 0
NO This is an Example Line 1
NO Program Line 2
EN Line 3
{cntrl}Z Terminator
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `US` — USB port configuration

**Syntax:**
```
US n
```

### Operands
- `_US`
- `Operand holds the value last set by the command`

### Description
Configures the operation of the USB port on the DMC-4103 series controller.

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | 0 USB is main, interpreted port |  | Default |
|  | 1 Swap USB and Aux DB9 port. USB is not interpreted. DB9 is the main, interpreted port Null modem cable required for DB9 |  |  |

### Remarks
To take effect, US state must be burned with BN and the controller must be power cycled, or a push button reset performed. RS is not sufficient.See CC, CI, and #COMINT for using the USB port in swap mode, US 1.A null modem cable is required for DB9 port.To load firmware, use Ethernet or USB. Do not attempt to load firmware over the DB9
If firmware loading fails, perform an upgrade with the following
1. install UG jumper and MR jumper2. power cycle the controller3. connect via USB with baud rate set by jumpers4. load firmware over USB connection5. remove UG jumper and MR jumper6. power cycle7. connect via USB or Ethernet. Assigning the IP address will be required. Issue US as needed.After issuing the US1 command, the CC command is used to set the speed of the USB while the baud rate jumper is used to set the speed of the DB9.If desired, Galil can provide a more permanent USB and DB9 swap; contact the factory for more informationn=? returns the currently set value

### Examples
```dmc
'Galil DMC Code Example
:MG _US
 0.0000
:US 1;' swap the ports
:BN
:'power cycle to swap ports
```

---

## `VA` — Vector Acceleration
*Category: VECTOR/LINEAR*


**Syntax:**
```
VAm= n
VA n,n
```

### Operands
- `_VAm`
- `Operand holds the value last set by the command`

### Description
The VA command sets the acceleration of the vector in a coordinated motion sequence.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | S | T | S | Axis Coordinate plane to be specified |  |  |
| n | 1,024 | 1,073,740,800 256,000 |  | 1,024 Vector acceleration for the coordinate system |  |  |

### Remarks
_VAm contains the value of the vector acceleration for the specified coordinate systemWhen issuing VA implicitly, the first argument refers to the "S" plane and the second refers to the "T" plane.

### Examples
```dmc
'Galil DMC Code Example
:VA 1024;' Set vector acceleration to 1024 counts/sec2
:VA ?;'   Return vector acceleration
1024 
:VA 20000;' Set vector acceleration
:VA ?;'         Return vector acceleration 
19456 
:accel=_VAS;' Assign variable, accel, the value of VA 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `VD` — Vector Deceleration
*Category: VECTOR/LINEAR*


**Syntax:**
```
VDm= n
VD n,n
```

### Operands
- `_VDm`
- `Operand has special meaning, see Remarks`

### Description
The VD command sets the deceleration of the vector in a coordinated motion sequence.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | S | T | S | Axis Coordinate plane to be specified |  |  |
| n | 1,024 | 1,073,740,800 256,000 |  | 1,024 Vector deceleration for the coordinate system |  |  |

### Remarks
_VDm contains the value of the vector deceleration for the specified coordinate system.When issuing VD implicitly, the first argument refers to the "S" plane and the second refers to the "T" plane.

### Examples
```dmc
'Galil DMC Code Example
#vector;'      Vector Program Label
VMAB;'         Specify plane of motion
VA 1000000;'   Vector Acceleration
VD 5000000;'   Vector Deceleration
VS 2000;'      Vector Speed
VP 1000,2000;' Vector Position
VE;'           End Vector
BG S;'         Begin Sequence
AM S;'         Wait for Vector sequence to complete
EN;'           End Program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `VE` — Vector Sequence End
*Category: VECTOR/LINEAR*


**Syntax:**
```
VE n
```

### Operands
- `_VEm`
- `Operand has special meaning, see Remarks`

### Description
The VE command indicates to the controller that the end of the vector is coming up. This allows the controller to slow down through multiple segments, ifrequired. VE is required to exit the vector mode gracefully (stop code, SC, 101).

### Arguments
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| n | 0 Specify the end of a vector segment |  | Also occurs when n = 'null' |
|  | ? Returns the length of the vector in counts |  |  |

### Remarks
The VE command will apply to the selected coordinate system, S or T. To select the coordinate system, use the command CAS or CAT._VEm contains the length of the vector in counts for the specified coordinate system, S or T

### Examples
```dmc
'Galil DMC Code Example
#vector;'      Vector Program Label
VM AB;'        Specify plane of motion
VA 1000000;'   Vector Acceleration
VD 5000000;'   Vector Deceleration
VS 2000;'      Vector Speed
VP 1000,2000;' Vector Position
VE;'           End Vector
BG S;'         Begin Sequence
AM S;'         Wait for Vector sequence to complete
EN;'           End Program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `VF` — Variable Format
*Category: SYSTEM CONFIG*


**Syntax:**
```
VF n0.n1
```

### Operands
- `_VF`
- `Operand has special meaning, see Remarks`

### Description
The VF command formats the number of digits to be displayed when interrogating the controller. If a number exceeds the format, the number will bedisplayed as the maximum possible positive or negative number (i.e. 999.99, -999, $8000 or $7FF).

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n0-810101Specify the number of digits displayedbefore the decimal point
A negative value specifies hexadecimalformat, see

### Remarks
n10441Specify the number of digits displayedafter the decimal point

### Remarks
A negative n0 specifies hexadecimal format. When in hexadecimal, the string will be preceded by a $ and Hex numbers are displayed as 2'scomplement with the first bit used to signify the sign.A positive n0 specifies standard decimal format.A ? is only valid for querying n0. When queried, the value reported will be the value of the format for variables and arrrays specified by n0 and n1
eg. VF 10,4 would respond to VF ? with 10.4_VF contains the value of the format for variables and arraysIf the number of digits set by n0 is insufficient for representing the integer portion of a variable, the returned value will be the greatest numberrepresentable by n0.n1. For example, if var=123, and VF is 2.4, var=? will return 99.9999.

### Examples
```dmc
'Galil DMC Code Example
VF 5.3;' Sets 5 digits of integers and 3 digits after the decimal point
VF 8.0;' Sets 8 digits of integers and no fractions
VF -4.0;' Specify hexadecimal format with 4 bytes to the left of the decimal 
```
```dmc
'Galil DMC Code Example
:VF8,4;'  set vf to 8 digits of integers and 4 digits of fraction
:VF?;'    query the value of VF
8.4
:MG_VF;'  query again
8.4 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `VM` — Vector Mode
*Category: VECTOR/LINEAR*


**Syntax:**
```
VM m0m1m2
```

### Operands
- `_VMm`
- `Operand has special meaning, see Remarks`

### Description
The VM command enables the coordinated motion mode and specifies the plane of motion. This mode may be specified for motion on any set of twoaxes, including a combination of real and virtual axes for single-axis operation. The motion is specified by the instructions VP and CR, which specify linearand circular segments.Up to 511 segments may be given before the Begin Sequence (BGS or BGT) command. The number of available segments is queriable via the _LMmoperand.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
m0AHAAxisFirst axis specified forvector motion
m1AHN/AAxisSecond axis specified forvector motion
MNN/AAxisVirtual axis specified forvector mode
Used when performing vector mode for a single realaxis
m2AHN/AAxisTangent axis specified forvector mode.m2 = null if tangent mode is not desired.
MNN/AAxisVirtual axis specified forvector mode.
Used to disable the tangent function if alreadyenabled. Otherwise, use m2 = null.

### Remarks
Specifying one axis for vector mode is useful for obtaining sinusoidal motion on 1 axis using the CR command.The Vector End (VE) command must be given after the last segment. This allows the controller to properly decelerate.Additional segments may be given during the motion when the buffer frees additional spaces for new segments.It is the responsibility of the user to keep enough motion segments in the buffer to ensure continuous motion.The first vector in a coordinated motion sequence defines the origin for that sequence. All other vectors in the sequence are defined by theirendpoints with respect to the start of the move sequence.
The VM command will apply to the selected coordinate system, S or T. To select the coordinate system, use the command CAS or CAT._VMm contains instantaneous commanded vector velocity for the specified coordinate system, S or T.
Enabling Vector Mode
1. Specify the desired coordinate system to use with the CA command. S is default.2. Specify the vector plane to be used with the VMm0m1 command. If using tangent axis include that as the m2 parameter
1. EG. for a AB vector plane with the D axis used as a tangent axis, issue VM ABD2. If only the vector plane is desired for the above example, then issue VM AB3. Specify vector speed with VS, vector acceleration with VA, and vector deceleration with VD4. Specify vector segments with the VP command, or circular segments with the CR command5. When finished with the sequence of moves, issue VE6. Issue BGS to begin motion for the S coordinate system7. You can now wait for motion to complete, issue additional segments as buffer space is cleared, or start a new move on the T coordinate plane by
specifying CAT and starting from step 2.

### Examples
```dmc
'Galil DMC Code Example
#A;'            Program Label
VM AB;'         Specify motion plane
VP 1000,2000;'  Specify vector position 1000,2000
VP 2000,4000;'  Specify vector position 2000,4000
CR 1000,0,360;' Specify arc
VE;'            Vector end
BG S;'          Begin motion sequence
AM S;'          Wait for vector motion to complete
EN;'            End Program 
```
```dmc
'Galil DMC Code Example
#A;'            Program Label
VM AN;'         Specify motion plane
VP 1000,2000;'  Specify vector position 1000,2000
VP 2000,4000;'  Specify vector position 2000,4000
CR 1000,0,360;' Specify arc
VE;'            Vector end
BG S;'          Begin motion sequence
AM S;'          Wait for vector motion to complete
EN;'            End Program 
```

---

## VM applies to DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105

---

## `VP` — Vector Position
*Category: VECTOR/LINEAR*


**Syntax:**
```
VP n0,n1 < o > p
```

### Operands
- `_VPm`
- `Operand has special meaning, see Remarks`

### Description
The VP command defines a vector move segment for the VM mode of motion. The VP command defines the target coordinates of a straight line segmentin a 2 axis motion sequence. The units are in quadrature counts, and are a function of the elliptical scale factor set using the command ES. For three ormore axes in linear interpolation mode, use the LI command.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n0-2,147,483,648 2,147,483,647 01Specify the target position for the first vector axisSee

### Remarks
n1-2,147,483,648 2,147,483,647 01Specify the target postion for the second vector axisSee

### Remarks
o215,000,000N/A2
Specifies the vector speed to be commanded at thebeginning of the linear segment. The controller will startaccelerating or decelerating at the start of the sequence tothis speed.
For MT 1,-1
23,000,000N/A2
Specifies the vector speed to be commanded at thebeginning of the linear segment. The controller will startaccelerating or decelerating at the start of the sequence tothis speed.
For MT 2,-2,2.5, and -2.5.
p215,000,000N/A2
Specifies the vector speed to be achieved at the end of thelinear segment. The controller will decelerate or accelerateduring the segment and will reach the specified speed at theend of the segment.
For MT 1,-1
23,000,000N/A2
Specifies the vector speed to be achieved at the end of thelinear segment. The controller will decelerate or accelerateduring the segment and will reach the specified speed at theend of the segment.
For MT 2,-2,2.5, and -2.5.
| Argument | Value | Description | Notes |
| --- | --- | --- | --- |
| o | -1 Specifies vector speed to be set by Vector Speed Variable (VV command) See VV command |  |  |

### Remarks
The first vector in a coordinated motion sequence defines the origin for that sequence. All other vectors in the sequence are defined by theirendpoints with respect to the start of the move sequence.Vector moves are defined as absolute positions from the origin of the sequence.The length of each vector segment must be limited to 8,388,607.
The VM command will apply to the selected coordinate system, S or T. To select the coordinate system, use the command CAS or CAT._VPm where m = axis designator A,B,C,D,E,F,G or H and contains the absolute coordinate of the axes at the last intersection along the sequence.
For example, during the first motion segment, this instruction returns the coordinate at the start of the sequence.The use of _VPm as an operand is valid in the linear mode, LM, and in the Vector mode, VM.

---

## VP 2000,4000;' Specify vector position 2000,4000CR 1000,0,360;'Specify arcVE;'           Vector endBGS;'          Begin motion sequenceAMS;'          Wait for vector motion to completeEN;'           End Program
```dmc
'Galil DMC Code Example
REM VP n,m  p 
REM 'o' and 'p' are in counts/sample rather than counts/second as the VS command.
REM This means that when TM <> 1000, commanded speed for VS will be different than
REM values for 'o' and 'p'
REM To get counts/second for 'o' and 'p', divide them by a ratio of 1000/_TM
REM
REM #vs and #vsop result in the same profile
#vs
TM 250
VMAN
VS 100000
VA 2560000
VD 2560000
VP 20000,20000
VE
BGS
AMS
EN
'
#vsop
TM 250
VMAN
n=1000/_TM
'VS 100000
VA 2560000
VD 2560000
VP 20000,20000<(100000/n)
VE
BGS
AMS
EN
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `VR` — Vector Speed Ratio
*Category: VECTOR/LINEAR*


**Syntax:**
```
VR n0,n1
```

### Operands
- `_VRm`
- `Operand holds the value last set by the command`

### Description
The VR sets a ratio to be used as a multiplier of the current vector speed. The vector speed can be set by the command VS or the operators < and >used with CR, VP and LI commands. VR takes effect immediately and will ratio all the previous vector speed commands.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| n0 | 0 | 10 | 1 | 1/65,536 Vector ratio specified for the S coordinate plane |  |  |
| n1 | 0 | 10 | 1 | 1/65,536 Vector ratio specified for the T coordinate plane |  |  |

### Remarks
VR doesn't ratio acceleration or deceleration, but the change in speed is accomplished by accelerating or decelerating at the rate specified by VA andVD.VR is useful for feedrate override, particularly when specifying the speed of individual segments using the operator '<' and '>'.
_VRm contains the vector speed ratio of the specified coordinate system - where m = S or T.
_VRS contains the vector speed ratio of the specified coordinate system

### Examples
```dmc
'Galil DMC Code Example
#A;'            Vector Program 
VM AB;'         Vector Mode
VP 1000,2000;'  Vector Position  
CR 1000,0,360;' Specify Arc
VE;'            End Sequence 
VS 2000;'       Vector Speed  
BG S;'          Begin Sequence
AM S;'          After Motion
JP#A;'          Repeat Move
#SPEED;'        Speed Override
VR(@AN[1]*.1);' Read analog input compute ratio
vr=_VRS;'       Store vector ratio in variable 'vr'
JP#SPEED;'      Loop
XQ#A,0
XQ#SPEED,1;'    Execute task 0 and 1 simultaneously 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `VS` — Vector Speed
*Category: VECTOR/LINEAR*


**Syntax:**
```
VSm= n
VS n,n
```

### Description
The VS command specifies the speed of the vector in a coordinated motion sequence in either the LM or VM modes. This speed is in place when individualsegment speeds for VP, LI and CR are not specified.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | S | T | S | Axis Coordinate plane to be specified |  |  |
| n | 2 | 15,000,000 | 25,000 | 2 Vector speed applied to the coordinate system |  |  |

### Remarks
Vector speed can be attached to individual vector segments using the operators '<' and '>'. For more information, see description of VP, CR, and LIcommands. The VV command allows for variables to be specified during vector segments.Vector Speed can be calculated by taking the square root of the sum of the squared values of speed for each axis specified for vector or linearinterpolated motion._VSm contains the vector speed of the specified coordinate systemWhen issuing VS implicitly, the first argument refers to the "S" plane and the second refers to the "T" plane.

### Examples
```dmc
'Galil DMC Code Example
:VS 2000;'    Define vector speed of S coordinate system
:VS ?;'       Return vector speed of S coordinate system
2000
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,DMC2105*

---

## `VV` — Vector Speed Variable
*Category: VECTOR/LINEAR*


**Syntax:**
```
VVm= n
VV n,n
```

### Operands
- `_VVm`
- `Operand has special meaning, see Remarks`

### Description
The VV command sets the speed of the vector variable in a coordinated motion sequence in either the LM or VM modes. The VV command is used to setthe "o" vector speed argument for segments that exist in the vector buffer for LI, CR and VP commands. By defining a vector segment begin speed as anegative 1 (i.e. "<-1"), the controller will utilize the current vector variable speed as the segment is profiled from the buffer.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | S | T | S | Axis | Coordinate plane to assign value |  |
| n | 0 | 15,000,000 | 0 | 2 | Variable vector speed | For MT 1,-1,1.5 and -1.5 |
|  | 0 | 3,000,000 | 0 | 2 | Variable vector speed | For MT 2,-2,2.5 and -2.5 |

### Remarks
VV command is useful when vector segments exist in the buffer that use the "<" and ">" speed indicators for specific segment and corner speedcontrol and the host needs to be able to dynamically change the nominal return operating speed._VVm contains the vector speed variable of the specified coordinate system

### Examples
```dmc
'Galil DMC Code Example
:VVS= 20000;'          Define vector speed variable to 20000 for the S coordinate system
:VP1000,2000<-1>100;'  Define vector speed variable for specific segment.
:VVS=?
20000
:
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC1806*

---

## `WH` — Which Handle
*Category: INTERROGATION*


**Syntax:**
```
WH
```

### Operands
- `_WH`
- `Operand has special meaning, see Remarks`

### Description
The WH command is used to identify the handle from which the command was received. This is useful for determining what interface or handle you areconnected to.

### Arguments
WH is an interrogation command with no parameters

### Remarks
_WH contains the numeric representation of the handle from which the command was received.The following table lists the possible string returned by WH, and the numerical value returned by _WH
Communication ChannelWH_WHMain USB PortUSB-1Ethernet Handle AIHA0Ethernet Handle BIHB1Ethernet Handle CIHC2Ethernet Handle DIHD3Ethernet Handle EIHE4Ethernet Handle FIHF5Ethernet Handle GIHG6Ethernet Handle HIHH7

### Related Commands
DH - DHCP Client EnableIA - IP AddressIH - Open IP HandleTH - Tell Ethernet Handle

### Examples
```dmc
'Galil DMC Code Example
:WH;' Request incoming handle identification
IHC
:MG_WH
2 
```
```dmc
'Galil DMC Code Example
:WH;'     Request incoming handle identification
USB Command received from USB port
:MG_WH
-1 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC2105*

---

## `WT` — Wait
*Category: PROGRAMMING, TRIPPOINT*


**Syntax:**
```
WT n0,n1
```

### Description
The WT command is a trippoint used to time events.When this command is executed, the controller will wait for the amout of time specified beforeexecuting the next command.The amount of time in the WT command is specified to be either samples or milliseconds, depending on the second argument of WT

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n022,147,483,646 N/A2Specify amount of time to holdexecution of code
n10101Specify the type of WTn = 0 or null specifies WT in msecs. n = 1specifies WT in samples

### Remarks
If n1=1 for WTn0,n1 then the controller will wait for the number of samples specified before executing the next command.By default, WT is specified in milliseconds. If n1 is omitted, then n1 = 0 is used and WT is timed in milliseconds

### Examples
```dmc
'Galil DMC Code Example
'10 seconds after a move is complete, turn on a relay for 2 seconds
#A;'         Program A
PR 50000;'   Position relative move
BGA;'        Begin the move
AMA;'        After the move is over
WT 10000;'   Wait 10 seconds
SB 1;'       Turn on relay (set output 1)
WT 2000;'    Wait 2 seconds
CB1;'        Turn off relay (clear output 1)
EN;'         End Program 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

## `XQ` — Execute Program
*Category: PROGRAMMING*


**Syntax:**
```
XQ #str,n1
XQ n0,n1
```

### Operands
_XQ0_XQ1_XQ2_XQ3_XQ4_XQ5_XQ6_XQ7
Operand has special meaning, see

### Remarks

### Description
The XQ command begins execution of a program residing in the program memory of the controller. Execution will start at the label or line numberspecified.Up to 8 programs may be executed simultaneously to perform multitasking.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| str | 1 char | 7 chars | See Notes | String | Label to begin code execution | If omitted, start from line 0 (n0=0) |
| n0 |  |  |  |  |  |  |
|  | 0 | 3,999 | 0 | 1 | Line number to begin code execution Firmware Rev 1.2a and later |  |
| n0 | 0 | 1,999 | 0 | 1 | Line number to begin code execution |  |
| n1 | 0 | 7 | 0 | 1 | Thread number to execute code |  |

### Remarks
_XQn contains the current line number of execution for thread n, and -1 if thread t is not running.If using ED to add code, you must exit ED mode before executing code.

### Examples
```dmc
'Galil DMC Code Example
XQ #apple,0;'  Start execution at label apple, thread zero
XQ #data,2;'   Start execution at label data, thread two
XQ ;'          Start execution at line 0 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---

STEPPER MOTOR
YA   Step Drive Resolution
YAm= n
YA n,n,n,n,n,n,n,n
Usage
YAm= n
Arguments specified with a single axis mask and an assignment (=)
YA n ...
Arguments specified with an implicit, comma-separated order
Operands
_YAm
Operand holds the value last set by the command
Description
Specifies the microstepping resolution of the step drive in microsteps per full motor step. Consult your drive documentation to determine its microstepping
setting. See the table below for internal Galil stepper drives.
Arguments
Argument
Min
Max
Default
Resolution
Description
Notes
m
A
H
N/A
Axis
Axis to assign
value
n
9,999
Drive
resolution in
step
counts/motor
step for SPM
mode
YA has special functionality for certain hardware configurations.
See the rest of the notes in this table.
see Notes
Valid settings
for SDM-
44040 (-
D4040)
1,2,4 and 16 set the step resolution of the SDM-44040 to full,
half, 1/4th and 1/16th microstepping respectively. When full
stepping (n=1) on the SDM-44040, the max gain will be 70% of
value set with AG. Max current is available for any microstepping
mode.
Valid setting
for SDM-
44140 (-
D4140)
The SDM-44140 is always configured for 64th microstepping, YA
must be set to 64 for SPM mode
Remarks
YA Settings for Galil Stepper Drives
Stepper Drive Hardware YA Setting
Notes
AMP-43547
Drive fixed at 1/256 step
SDM-44040
Drive set to single step (70% current max)
SDM-44040
Drive set to 1/2 step
SDM-44040
Drive set to 1/4 step
SDM-44040
Drive set to 1/16 step
SDM-44140
Drive fixed at 1/64 step
Examples
'Galil DMC Code Example
'Set the step drive resolution for a 1/64 Microstepping Drive:
:YA 64,64,64,64
:'Query the D axis value
:MG_YAD;'Response shows D axis step drive resolution
64.0000
::
'Galil DMC Code Example
'Set the step drive resolution for a 1/256 Microstepping Drive:
:YA 256
:'Query the A axis value
:MG_YAA;' Response shows A axis step drive resolution
256.0000
::
YA applies to DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105
YA
## `YB` — Step Motor Resolution
*Category: STEPPER MOTOR*


**Syntax:**
```
YBm= n
YB n,n,n,n,n,n,n,n
```

### Operands
- `_YBm`
- `Operand holds the value last set by the command`

### Description
The YB command specifies the resolution of the step motor, in full steps per full revolution, for Stepper Position Maintenance (SPM) mode.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 9,999 | 200 | 1 | Motor resolution in full steps/revolution |  |

### Remarks
This command is only required if using SPM mode with stepper motors with an attached encoder.A 1.8 degree step motor is 200 steps/revolution.

### Examples
```dmc
'Galil DMC Code Example
'Set the step motor resolution of the A axis for a 1.8 degree step motor:
:YBA=200
:'Query the A axis value
:YBA=?
 200 Response shows A axis step motor resolution 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `YC` — Encoder Resolution
*Category: STEPPER MOTOR*


**Syntax:**
```
YCm= n
YC n,n,n,n,n,n,n,n
```

### Operands
- `_YCm`
- `Operand holds the value last set by the command`

### Description
The YC command specifies the resolution of the encoder, in counts per revolution, for Stepper Position Maintenance (SPM) mode.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 32,766 | 4,000 | 1 | Encoder resolution in counts/revolution |  |

### Remarks
This command is only required if using SPM mode with stepper motors with an attached encoder.

### Examples
```dmc
'Galil DMC Code Example
'Set the encoder resolution of the A axis
:YCA=2000
:'Query the A axis value
:YCA=?
 2000 
:'Response shows A axis encoder resolution 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `YR` — Error Correction
*Category: STEPPER MOTOR*


**Syntax:**
```
YRm= n
YR n,n,n,n,n,n,n,n
```

### Description
The YR command allows the user to correct for position error in Stepper Position Maintenance mode. This correction acts like an IP command, moving theaxis or axes the specified quantity of step counts. YR will typically be used in conjunction with QS.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis Axis to assign value |  |  |
| n | -2,147,483,648 2,147,483,647 0 |  |  | 1 Number of step pulses to increment position by |  |  |

### Remarks
Users will typically use the value of QS to increment motor by the number of step pulses of error.
EG. YRm = _QSm increments the specified axis by the error magnitude.The sign of YR depends on the polarity of the position encoder
If the encoder increments when the stepper moves forward (increasing TD), the correction is YRm=_QSm. This is typical.If the encoder decrements when the stepper moves forward, the correction is YRm= -_QSm. See CE to invert the polarity of the positionencoder, if desired.

### Examples
```dmc
'Galil DMC Code Example
'Query the error of the B axis:
:QSB
 253
:'This shows 253 step counts of error
:'Correct for the error:
:YRB=_QSB;' The motor moves _QS step counts to correct for the error
:'and YS is set back to 1 
```
```dmc
'Galil DMC Code Example
'Query the error of the A axis:
:QSA
 253
:' This shows 253 step counts of error
:'Correct for the error:
:YRA=_QSA;' The motor moves _QS step counts to correct for the error
'and YS is set back to 1 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `YS` — Stepper Position Maintenance Mode Enable, Status
*Category: STEPPER MOTOR*


**Syntax:**
```
YSm= n
YS n,n,n,n,n,n,n,n
```

### Operands
- `_YSm`
- `Operand has special meaning, see Remarks`

### Description
The YS command enables and disables the Stepper Position Maintenance Mode function. YS also reacts to excessive position error condition as defined bythe QS command.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
n0101Setting of the SPMmode
n = 0 disables SPM mode, n = 1 Enables SPM mode. SeeRemarks

### Remarks
Both YSm = ? and _YSm contain the value of n. n is 1 when SPM mode is enabled and no error has occurred. If a position error has occured, nbecomes 2.
If n = 2, this indicates a position error condition defined as more than 3 full motor steps of position error.Issuing an n = 1 will clear the error
Position Error Limit
Microstep Setting (YA) Error (QS) Limit1326164864192256768

### Examples
```dmc
'Galil DMC Code Example
'Enable the mode:
:YSH=1
:'Query the value:
:YS*=?
 0,0,0,0,0,0,0,1 Response shows H axis is enabled 
```
```dmc
'Galil DMC Code Example
'Enable the mode:
:YSA=1
:'Query the value:
:YSA=?
 1 Response shows A axis is enabled 
```

*Applies to: DMC50000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,DMC1806,DMC1802,EDD37010,DMC2105*

---

## `ZA` — User Data Record Variables
*Category: PROGRAMMING*


**Syntax:**
```
ZAm= n
ZA n,n,n,n,n,n,n,n
```

### Operands
- `_ZAm`
- `Operand holds the value last set by the command`

### Description
ZA sets the user variables in the data record. The user variables (one per axis) are automatically sent as part of the status record from the controller to thehost computer. These variables provide a method for specific controller information to be passed to the host automatically.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | -2,147,483,648 2,147,483,647 0 |  |  | 1 | Value of user variable for data record |  |

### Remarks
n is an integer and can be a number, controller operand, variable, mathematical function, or string.Only 4 bytes are available for n. Fractional values are not stored or sent via the data record

### Examples
```dmc
'Galil DMC Code Example
#thread
ZAA= myVar;'   constantly update ZA with variable myVar
WT 10
JP#thread;'    run in an infinite loop 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC1806*

---

## `ZN` — Negative Antifriction Bias
*Category: SYSTEM CONFIG*


**Syntax:**
```
ZNm= n
ZN n,n,n,n,n,n,n,n
```

### Description
ZN adds a negative open loop voltage to the controller?s command signal when the position error is negative.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | -9.9998 | 0 | 0 | 0.0003 | Open loop voltage (Volts) |  |

### Remarks
Valid only for -NAN and -CER firmware

### Examples
```dmc
'Galil DMC Code Example
ZNA=-1;'set negative antifriction bias on A axis to -1 volt
ZPC=1;'set positive antifriction bias on C axis to 1 volt 
```

---

## `ZP` — Positive Antifriction Bias
*Category: SYSTEM CONFIG*


**Syntax:**
```
ZPm= n
ZP n,n,n,n,n,n,n,n
```

### Description
ZP adds a positive open loop voltage to the controller?s command signal when the position error is positive.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
| m | A | H | N/A | Axis | Axis to assign value |  |
| n | 0 | 9.9998 | 0 | 0.0003 | Open loop voltage (Volts) |  |

### Remarks
Valid only for -NAN and -CER firmware

### Examples
```dmc
'Galil DMC Code Example
ZNA=-1;'set negative antifriction bias on A axis to -1 volt
ZPC=1;'set positive antifriction bias on C axis to 1 volt 
```

---

## `ZS` — Zero Subroutine Stack
*Category: PROGRAMMING*


**Syntax:**
```
ZS n
```

### Operands
_ZS0_ZS1_ZS2_ZS3_ZS4_ZS5_ZS6_ZS7
Operand has special meaning, see

### Remarks

### Description
The ZS command is used to clear the stack when finishing or leaving a subroutine. This command is used to avoid returning from an interrupt (either inputor error). This turns the jump to subroutine into a jump. The status of the stack can be interrogated with the operand _ZS, see Remarks.

### Arguments
| Argument | Min | Max | Default | Resolution | Description | Notes |
| --- | --- | --- | --- | --- | --- | --- |
n0101Sets zero stackoperation
n = 0 clears the entire stack. n = 1 clears one level of thestack.

### Remarks
Do not use RI (Return from Interrupt) when using ZS.
To re-enable interrupts, you must use II command again.
Operand

### Usage
_ZSn contains the stack level for the specified thread where n = 0 to 7.
The response, an integer between zero and sixteen, indicates zero for beginning condition and sixteen for the deepest value.

### Examples
```dmc
'Galil DMC Code Example
#A;'           Main Program
II1;'          Input Interrupt on 1
#B;JP #B;EN ;' Loop
#ININT;'       Input Interrupt
MG"INTERRUPT";'Print message
S=_ZS0;'        Interrogate stack
S=?;'          Print stack
ZS;'           Zero stack
S=_ZS0;'        Interrogate stack
S=?;'          Print stack
EN;'           End 
```

*Applies to: DMC50000,DMC52000,DMC4000,DMC4200,DMC4103,DMC30010,DMC2103,RIO47000,DMC1806,DMC1802,DMC2105*

---
