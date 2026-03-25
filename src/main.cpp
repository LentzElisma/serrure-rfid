#include <Arduino.h>

#define LED_VERTE 26

void setup() {
  Serial.begin(115200);
  pinMode(LED_VERTE, OUTPUT);
  Serial.println("Test LED externe demarre !");
}

void loop() {
  digitalWrite(LED_VERTE, HIGH);
  Serial.println("LED verte ON");
  delay(1000);

  digitalWrite(LED_VERTE, LOW);
  Serial.println("LED verte OFF");
  delay(1000);
}