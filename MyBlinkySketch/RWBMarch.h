#ifndef RWBMARCH_H
#define RWBMARCH_H

#include <FastLED.h>
#include "BlinkyTape.h"


class RWBMarch : public Pattern {
  private:
  CRGB RWBMarch_col;

int ledsX[LED_COUNT][3];             //-ARRAY FOR COPYING WHATS IN THE LED STRIP CURRENTLY 
int idex = 0;                        //-LED INDEX (0 to LED_COUNT-1)
int wait_time = 420;                 //-TIME IN MS


//---FIND ADJACENT INDEX COUNTER-CLOCKWISE
int adjacent_ccw(int i) {
  int r;
  if (i > 0) {r = i - 1;}
  else {r = LED_COUNT - 1;}
  return r;
}

  public:
    RWBMarch(CRGB NewRWBMarchColor);
    void reset();
    void draw(CRGB * leds);
};

#endif
