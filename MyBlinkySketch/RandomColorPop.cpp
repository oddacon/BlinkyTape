#include "RandomColorPop.h"
#include "BlinkyTape.h"

#include <Arduino.h>


RandomColorPop::RandomColorPop(CRGB NewRandomColorPopColor) :
  random_col_pop_col(NewRandomColorPopColor) {
  }

void RandomColorPop::reset() {
}


void RandomColorPop::draw(CRGB* leds)   {  

  idex = random(0, LED_COUNT);
  ihue = random(0, 255);
  for(int i = 0 ; i < LED_COUNT; i++ ) {
      leds[i] = CRGB(0, 0, 0);   //-SET ALL LEDS TO ONE COLOR
  }
  leds[idex] = CHSV(ihue, thissat, 255);
  LEDS.show();
  delay(wait_time);
    
}


