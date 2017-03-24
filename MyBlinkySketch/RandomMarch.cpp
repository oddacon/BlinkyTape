#include "RandomMarch.h"
#include "BlinkyTape.h"

#include <Arduino.h>


RandomMarch::RandomMarch(CRGB NewRandomMarchColor) :
  random_march_col(NewRandomMarchColor) {
  }


void RandomMarch::draw(CRGB* leds)   {  
  for(int i = 0; i < LED_COUNT; i++ ) {
    ledsX[i][0] = leds[i].r;
    ledsX[i][1] = leds[i].g;
    ledsX[i][2] = leds[i].b;
}
  int iCCW;
  leds[0] = CHSV(random(0,255), 255, 255);
  for(int idex = 1; idex < LED_COUNT ; idex++ ) {
    iCCW = adjacent_ccw(idex);
    leds[idex].r = ledsX[iCCW][0];
    leds[idex].g = ledsX[iCCW][1];
    leds[idex].b = ledsX[iCCW][2];
  }
  LEDS.show();  
  delay(wait_time);
}


