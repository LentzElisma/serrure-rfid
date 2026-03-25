#include <Arduino.h>

#define BUZZER 12

void setup() {
  Serial.begin(115200);
  pinMode(BUZZER, OUTPUT);
  Serial.println("Test buzzer demarre !");
}

void loop() {
  // Bip court = acces autorise
  Serial.println("Bip court");
  digitalWrite(BUZZER, HIGH);
  delay(100);
  digitalWrite(BUZZER, LOW);
  delay(2000);

  // Double bip = acces refuse
  Serial.println("Double bip");
  digitalWrite(BUZZER, HIGH);
  delay(100);
  digitalWrite(BUZZER, LOW);
  delay(100);
  digitalWrite(BUZZER, HIGH);
  delay(100);
  digitalWrite(BUZZER, LOW);
  delay(2000);
}