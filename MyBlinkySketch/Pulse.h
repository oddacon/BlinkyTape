#ifndef COLOR_PULSE_H
#define COLOR_PULSE_H

#include <FastLED.h>
#include "BlinkyTape.h"

class ColorPulse : public Pattern {
  private:
  CRGB pulse_col;

int colorcode = 0;
int wait_time = 10; //TIME IN MS
    
  public:
    ColorPulse(CRGB NewPulseColor);
    void reset() {};
    void draw(CRGB * leds);
};

#endif
