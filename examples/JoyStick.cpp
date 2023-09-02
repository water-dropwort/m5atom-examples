#include <M5Atom.h>

#define X_PIN 25
#define Y_PIN 33
#define SW_PIN 21

void setup() {
  M5.begin(true, false, true);
  pinMode(SW_PIN, INPUT_PULLUP);
}

void loop() {
  int x  = analogRead(X_PIN); // 0-4095
  int y  = analogRead(Y_PIN); // 0-4095
  int sw = digitalRead(SW_PIN); // SW_OFF:1, SW_ON:0

  Serial.printf("X:%d, Y:%d, SW:%d\n", x, y, sw);
  delay(100);
}
