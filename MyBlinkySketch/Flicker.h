#ifndef FLICKER_H
#define FLICKER_H

#include <FastLED.h>
#include "BlinkyTape.h"

class Flicker : public Pattern {
  private:
  CRGB flicker_col;

int thisstep = 10;           //-LOOPS DELAY VAR
int thissat = 255;           //-LOOPS DELAY VAR
int thishue = 0;             //-LOOPS DELAY VAR

  public:
    Flicker(CRGB NewFlickerColor);
    void reset() {};
    void draw(CRGB * leds);
};

#endif
