#include "FastLED.h"

#define LED_NUMBER 270
#define LED_PIN 50

int red = 0;
int green = 0;
int blue = 0;

CRGB leds[LED_NUMBER];

void setup() {
  FastLED.addLeds<NEOPIXEL, LED_PIN>(leds, LED_NUMBER);
  FastLED.setBrightness(128);
  pacem_starts();
}

void loop() {
  if (Serial.available() > 0) {
    String description = Serial.readStringUntil('\n'); 
    description.toLowerCase();
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("montagne") == true) {
      red = 170;
      green = 95;
      blue = 0;
    }
    if (description.Contains("rivière") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    if (description.Contains("forêt") == true) {
      red = 30;
      green = 180;
      blue = 30;
    }
    
  }
  delay(1000);
}


void vocal_recognition() {
  red = red / 2;
  blue = blue / 2;
  green = green / 2;
  change_color();
}


void end_vocal_recognition() {
  red = red * 2;
  green = green * 2;
  blue = blue * 2;
  change_color();
}

void pacem_starts() {
  for (int i = 0, i <NUM_LEDS, i++) {
    leds[i] = CRGB(0, 120, 255);
    }
}


void pause() {
  for (int i=0, i<NUM_LEDS, i++) {
    leds[i] = CRGB(0, 0, 0);
}


void change_color() {
  for (int i, i < NUM_LEDS, i++) {
    leds[i] = CRGB(red, green, blue);
    }
  }
  // Afficher les couleurs sur les LEDs
  FastLED.show();
}
}
// À effectuer dans le code :
// L'éclairage se met en pause quand le bouton Play/Pause est pressé
// Au démarrage du PACEM, le bandeau émet une lumière blanche
// Le code associe des mots à une ambiance
