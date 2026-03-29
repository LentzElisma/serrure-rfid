#include <Arduino.h>
#include <ESP32Servo.h>

// Le servo est branche sur le pin D13
#define SERVO_PIN 13

Servo monServo;

void setup() {
  Serial.begin(115200);

 
  monServo.attach(SERVO_PIN);

  Serial.println("Test servo demarre !");
}

void loop() {

  Serial.println("Servo : 0 degres (ferme)");
  monServo.write(0);   
  delay(2000);           

  // Position ouverte (90 degres)
  Serial.println("Servo : 90 degres (ouvert)");
  monServo.write(90);   
  delay(2000);

  // Retour ferme
  Serial.println("Servo : 0 degres (ferme)");
  monServo.write(0);
  delay(2000);
}