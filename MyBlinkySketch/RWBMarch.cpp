#include "RWBMarch.h"
#include "BlinkyTape.h"

#include <Arduino.h>

RWBMarch::RWBMarch(CRGB RWBMarchCol) :
  RWBMarch_col(RWBMarchCol) {
  }

void RWBMarch::reset() {
idex = 0;
}

void RWBMarch::draw(CRGB* leds)   {  
  for(int i = 0; i < LED_COUNT; i++ ) {
    ledsX[i][0] = leds[i].r;
    ledsX[i][1] = leds[i].g;
    ledsX[i][2] = leds[i].b;
  } 
  int iCCW;
  idex++;
  if (idex > 2) {idex = 0;}
  switch (idex) {
    case 0:
      leds[0].r = 255;
      leds[0].g = 0;
      leds[0].b = 0;
    break;
    case 1:
      leds[0].r = 255;
      leds[0].g = 255;
      leds[0].b = 255;
    break;
    case 2:
      leds[0].r = 0;
      leds[0].g = 0;
      leds[0].b = 255;
    break;
  }
    for(int i = 1; i < LED_COUNT; i++ ) {
      iCCW = adjacent_ccw(i);
      leds[i].r = ledsX[iCCW][0];
      leds[i].g = ledsX[iCCW][1];
      leds[i].b = ledsX[iCCW][2];    
    }
  LEDS.show();  
  delay(wait_time);
}


