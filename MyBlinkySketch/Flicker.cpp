#include "Flicker.h"
#include "BlinkyTape.h"

#include <Arduino.h>

Flicker::Flicker(CRGB NewFlickerColor) :
  flicker_col(NewFlickerColor) {
  }

void Flicker::draw(CRGB* leds)   {  
  int random_bright = random(0,255);
  int random_delay = random(10,100);
  int random_bool = random(0,random_bright);
  if (random_bool < 10) {
    for(int i = 0 ; i < LED_COUNT; i++ ) {
      leds[i] = CHSV(thishue, thissat, random_bright);
    }
    LEDS.show();
    delay(random_delay);
  }
}
