

// Motor Connections (Both must use PWM pins)
#define RPWM 11
#define LPWM 10

void setup() {

  // Set motor connections as outputs
  pinMode(RPWM, OUTPUT);
  pinMode(LPWM, OUTPUT);

  // Stop motors
  analogWrite(RPWM, 0);
  analogWrite(LPWM, 0);
}

void loop() {

  // Accelerate forward
  digitalWrite(RPWM, LOW);
  for (int i = 0; i < 255; i++) {
    analogWrite(LPWM, i);
    delay(20);
  }

  delay(1000);

  // Decelerate forward
  for (int i = 255; i >= 0; i--) {
    analogWrite(LPWM, i);
    delay(20);
  }

  delay(500);

  // Accelerate reverse
  digitalWrite(LPWM, LOW);
  for (int i = 0; i < 255; i++) {
    analogWrite(RPWM, i);
    delay(20);
  }

  delay(1000);

  // Decelerate reverse
  for (int i = 255; i >= 0; i--) {
    analogWrite(RPWM, i);
    delay(20);
  }

  delay(500);
}