#ifndef RAINBOW_LOOP_H
#define RAINBOW_LOOP_H

#include <FastLED.h>
#include "BlinkyTape.h"


class RainbowLoop : public Pattern {
  private:
  CRGB rainbow_loop_col;

int wait_time = 10;          //-TIME IN MS
int ihue = 0;                //-HUE (0-255)

  public:
    RainbowLoop(CRGB NewRainbowLoopColor);
    void reset() {};
    void draw(CRGB * leds);
};

#endif
