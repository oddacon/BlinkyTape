#ifndef XMAS_COLOR_LOOP
#define XMAS_COLOR_LOOP

#include <FastLED.h>
#include "BlinkyTape.h"


class ColorLoop1 : public Pattern {
  private:
  CRGB color1;


  boolean transition = false;
  int offset = 0;  
  long waiting_time = 1000;

      
  public:
    ColorLoop1(CRGB newColor1);
    void reset();
    void draw(CRGB * leds);
};

#endif
