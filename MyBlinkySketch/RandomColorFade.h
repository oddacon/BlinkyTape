#ifndef RND_COL_FADE_H
#define RND_COL_FADE_H

#include <FastLED.h>
#include "BlinkyTape.h"


class RndColFade : public Pattern {
  private:
  CRGB rnd_col_fade;
  
  int wait_time = 200;           //-TIME IN MS
  int Col1;
  int Col2;
  int Col3;

  int C1;
  int C2;
  int C3;


  public:
    RndColFade(CRGB NewRndColFade);
    void reset() {};
    void draw(CRGB * leds);
};

#endif 
