/*
 * gib_mir_mal_ne_wago.ino
 *
 * Created: 02.09.2025
 * Author : Andre Alexander Bell <andre.bell@wago.com>, Maik Rehburg <maik.rehburg@wago.com>
 */ 

// Pin assignments
uint8_t leds[] = {PIN_PA3, PIN_PA2, PIN_PA1, PIN_PA0};

void setup() {
  // Set pins D0-D3 as outputs
  for (int pin = 0; pin <= 3; pin++) {
    pinMode(leds[pin], OUTPUT);
  }
}

void loop() {
  // Muster 1: 0b00000111 -> D0, D1, D2 HIGH, D3 LOW
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(100);

  // Muster 2: 0b00001011 -> D0, D1, D3 HIGH, D2 LOW
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(100);

  // Muster 3: 0b00001101 -> D0, D2, D3 HIGH, D1 LOW
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(100);

  // Muster 4: 0b00001110 -> D1, D2, D3 HIGH, D0 LOW
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(100);
}