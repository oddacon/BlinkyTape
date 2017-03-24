#include "RainbowLoop.h"
#include "BlinkyTape.h"

#include <Arduino.h>

RainbowLoop::RainbowLoop(CRGB NewRainbowLoopColor) :
  rainbow_loop_col(NewRainbowLoopColor) {
  }


void RainbowLoop::draw(CRGB* leds)   {  
  ihue -= 1;
  fill_rainbow( leds, LED_COUNT, ihue );
  LEDS.show();
  delay(wait_time);
}
