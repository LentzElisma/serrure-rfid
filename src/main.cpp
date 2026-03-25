#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Dimensions de l'ecran
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64


Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("ERREUR : OLED non detecte !");
    while (true);  // Bloque ici si pas d'ecran
  }

  Serial.println("OLED OK !");

  // Effacer l'ecran (il demarre avec du bruit)
  display.clearDisplay();

  // Ecrire du texte
  display.setTextSize(1);           // Taille petite
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);          // Position x=0, y=0
  display.println("Serrure RFID");
  display.println("================");
  display.println("");

  display.setTextSize(2);           // Taille grande
  display.println("Hello !");

  display.setTextSize(1);
  display.println("");
  display.println("OLED fonctionne");

  // Envoyer tout a l'ecran d'un coup
  // L'OLED utilise un "buffer" : on prepare
  // tout en memoire puis on affiche
  display.display();
}

void loop() {
  // Rien pour le moment
  // L'ecran garde le dernier affichage
}