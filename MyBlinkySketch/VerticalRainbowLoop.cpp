#include "VerticalRainbowLoop.h"
#include "BlinkyTape.h"

#include <Arduino.h>


VerRainbowLoop::VerRainbowLoop(CRGB NewVerRainbowLoopColor) :
  ver_rainbow_loop_col(NewVerRainbowLoopColor) {
  }


void VerRainbowLoop::draw(CRGB* leds)   {  
   idex++;
  if (idex > TOP_INDEX) {idex = 0;}  
  ihue = ihue + thisstep;
  if (ihue > 255) {ihue = 0;}
  int idexA = idex;
  int idexB = horizontal_index(idexA);
  leds[idexA] = CHSV(ihue, thissat, 255);
  leds[idexB] = CHSV(ihue, thissat, 255);
  LEDS.show();  
  delay(wait_time);
}
