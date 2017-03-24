#ifndef COLOR_FADE_H
#define COLOR_FADE_H

#include <FastLED.h>
#include "BlinkyTape.h"


class ColorFade : public Pattern {
  private:
  CRGB col_fade;

int wait_time = 20;          //-TIME IN MS
int isat = 255;              //-LOOPS DELAY VAR
int idex = 0;                //-LED INDEX (0 to LED_COUNT-1)
int ihue = 0;                //-HUE (0-255)

  public:
    ColorFade(CRGB NewFadeColor);
    void reset() {};
    void draw(CRGB * leds);
};

#endif
