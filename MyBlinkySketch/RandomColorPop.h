#ifndef RANDOM_COLOR_POP_H
#define RANDOM_COLOR_POP_H

#include <FastLED.h>
#include "BlinkyTape.h"

class RandomColorPop : public Pattern {
  private:
  CRGB random_col_pop_col;

int idex = 0;                 //-LED INDEX (0 to LED_COUNT-1)
int ihue = 0;                 //-HUE (0-255)
int thissat = 255;            //-LOOPS DELAY VAR
int wait_time = 1;            //-TIME IN MS

  public:
    RandomColorPop(CRGB NewRandomColorPopColor);
    void reset();
    void draw(CRGB * leds);
};

#endif
