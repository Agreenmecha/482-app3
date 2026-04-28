const int PIN_A = 2;
const int PIN_B = 3;

volatile long encoderCount = 0;
volatile int lastA = LOW;

void setup() {
  Serial.begin(115200);
  pinMode(PIN_A, INPUT_PULLUP);
  pinMode(PIN_B, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(PIN_A), onEncoderA, CHANGE);
  attachInterrupt(digitalPinToInterrupt(PIN_B), onEncoderB, CHANGE);
}

void loop() {
  static long lastCount = 0;
  long count;

  noInterrupts();
  count = encoderCount;
  interrupts();

  if (count != lastCount) {
    Serial.print("Count: ");
    Serial.println(count);
    lastCount = count;
  }
}

void onEncoderA() {
  int a = digitalRead(PIN_A);
  int b = digitalRead(PIN_B);
  if (a == HIGH) {
    encoderCount += (b == LOW) ? 1 : -1;
  } else {
    encoderCount += (b == HIGH) ? 1 : -1;
  }
}

void onEncoderB() {
  int a = digitalRead(PIN_A);
  int b = digitalRead(PIN_B);
  if (b == HIGH) {
    encoderCount += (a == HIGH) ? 1 : -1;
  } else {
    encoderCount += (a == LOW) ? 1 : -1;
  }
}
