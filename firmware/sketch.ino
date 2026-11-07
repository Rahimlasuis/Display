#include "LedControl.h"

// Set up the matrix pins: DIN=11, CLK=13, CS=10
LedControl lc = LedControl(11, 13, 10, 1);

const int BUTTON_PIN = 2;

void setup() {
  lc.shutdown(0, false);       // Wake up the display
  lc.setIntensity(0, 8);       // Set mid-level brightness
  lc.clearDisplay(0);   
  
  pinMode(BUTTON_PIN, INPUT_PULLUP);  
  
   pinMode(A0, OUTPUT);
  digitalWrite(A0, LOW);    
}

void drawY() {
  lc.clearDisplay(0);
  lc.setLed(0, 0, 0, true);
  lc.setLed(0, 1, 1, true);
  lc.setLed(0, 2, 2, true);
  lc.setLed(0, 3, 3, true);
  lc.setLed(0, 0, 7, true);
  lc.setLed(0, 1, 6, true);
  lc.setLed(0, 2, 5, true);
  lc.setLed(0, 3, 4, true);
  lc.setLed(0, 4, 3, true);
  lc.setLed(0, 4, 4, true);
  lc.setLed(0, 5, 3, true);
  lc.setLed(0, 5, 4, true);
  lc.setLed(0, 6, 3, true);
  lc.setLed(0, 6, 4, true);
  lc.setLed(0, 7, 3, true);
  lc.setLed(0, 7, 4, true);
}

void drawN() {
  lc.clearDisplay(0);

  lc.setLed(0, 7, 7, true);
  lc.setLed(0, 6, 7, true);
  lc.setLed(0, 5, 7, true);
  lc.setLed(0, 4, 7, true);
  lc.setLed(0, 3, 7, true);
  lc.setLed(0, 2, 7, true);
  lc.setLed(0, 1, 7, true);
  lc.setLed(0, 0, 7, true);
  lc.setLed(0, 1, 6, true);
  lc.setLed(0, 2, 5, true);
  lc.setLed(0, 3, 4, true);
  lc.setLed(0, 4, 3, true);
  lc.setLed(0, 5, 2, true);
  lc.setLed(0, 6, 1, true);
  lc.setLed(0, 7, 0, true);
  lc.setLed(0, 7, 0, true);
  lc.setLed(0, 6, 0, true);
  lc.setLed(0, 5, 0, true);
  lc.setLed(0, 4, 0, true);
  lc.setLed(0, 3, 0, true);
  lc.setLed(0, 2, 0, true);
  lc.setLed(0, 1, 0, true);
  lc.setLed(0, 0, 0, true);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == LOW) {
    lc.clearDisplay(0);     // Turn all pixels off initially
    delay(250);
    int choice = random(0, 2);

    if (choice == 0) {
      drawY();
    } else {
      drawN();
    }

  }
  
}
