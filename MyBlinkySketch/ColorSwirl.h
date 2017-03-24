#ifndef COLOR_SWIRL_H
#define COLOR_SWIRL_H

#include <FastLED.h>
#include "BlinkyTape.h"

class ColorSwirl : public Pattern {
  private:
    float rBal;
    float gBal;
    float bBal;
    
    int j;
    int f;
    int k;
    
  public:
    ColorSwirl(float newRBal, float newGBal, float newBBal);
    void reset();
    void draw(CRGB * leds);
};

#endif
