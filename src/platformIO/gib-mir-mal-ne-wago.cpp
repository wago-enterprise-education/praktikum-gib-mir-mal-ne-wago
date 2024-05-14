#include <Arduino.h>

int pins[] = {PA0, PA1, PA2, PA3};
int currentPin = 0;

void setup() {
  // put your setup code here, to run once:
  // int result = myFunction(2, 3);
  for (int i=0; i<4; ++i) {
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<4; ++i) {
    digitalWrite(pins[i], HIGH);
  }
  digitalWrite(pins[currentPin], LOW);
  currentPin += 1;
  if (currentPin == 4) {
    currentPin = 0;
  }
  delay(500);
}
