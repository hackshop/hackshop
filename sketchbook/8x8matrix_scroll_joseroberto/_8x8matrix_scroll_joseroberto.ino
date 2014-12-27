#include <Wire.h>
#include "Adafruit_LEDBackpack.h"
#include "Adafruit_GFX.h"

Adafruit_8x8matrix matrix = Adafruit_8x8matrix();

void setup() {
  Serial.begin(9600);
  Serial.println("8x8 LED Matrix Test");
  
  matrix.begin(0x70);  // pass in the address
}

int nlet = 12;
int tlen = 6*nlet;

void loop() {
  matrix.setTextSize(1);
  matrix.setTextWrap(false);  // we dont want text to wrap so it scrolls nicely
  matrix.setTextColor(LED_ON);
  for (int8_t x=8; x>=-tlen; x--) {
    matrix.clear();
    matrix.setCursor(x,0);
    matrix.print("JOSE ROBERTO");
    matrix.writeDisplay();
    delay(100);
  }


}
