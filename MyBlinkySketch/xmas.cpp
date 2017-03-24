#include "xmas.h"
#include "BlinkyTape.h"

#include <Arduino.h>


ColorLoop1::ColorLoop1(CRGB newColor1) :
  color1(newColor1) {
  }

void ColorLoop1::reset() {
offset = offset + 1 % 3;
}

void ColorLoop1::draw(CRGB* leds)  {  
  
  int done = 0;

  while (transition == true) { 
    for (uint16_t i = 0; i < LED_COUNT; i++) {
      switch ( (i + offset) % 3 ) {
        case 0:
          // starts red 
          if (leds[i].r < 255) {
            leds[i].r++;
          }
          if (leds[i].g > 0) {
            leds[i].g--;
          }
          if (leds[i].b > 0) {
            leds[i].b--;
          }
          if (leds[i].r == 255 && leds[i].g == 0 && leds[i].b == 0)
            done++;
          break; 
        case 1:
          // starts green
          if (leds[i].r > 0) {
            leds[i].r--;
          }
          if (leds[i].g < 255) {
            leds[i].g++;
          }
          if (leds[i].b > 0) {
            leds[i].b--;
          }
          if (leds[i].r == 0 && leds[i].g == 255 && leds[i].b == 0)
            done++;
          break; 
        case 2:
          // starts white red green
          if (leds[i].r < 255) {
            leds[i].r++;
          }
          if (leds[i].g < 255) {
            leds[i].g++;
          }
          if (leds[i].b < 255) {
            leds[i].b++;
          }
          if (leds[i].r == 255 && leds[i].g == 255 && leds[i].b == 255)
            done++;
          break; 
      }    
    }
    LEDS.show();
    if (done > LED_COUNT) {
      transition = false;
    }
  }
  offset = offset + 1 % 3;
  delay(waiting_time);
  transition = true;
}
