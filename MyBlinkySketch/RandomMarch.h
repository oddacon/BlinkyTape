#ifndef RANDOM_MARCH_H
#define RANDOM_MARCH_H

#include <FastLED.h>
#include "BlinkyTape.h"


class RandomMarch : public Pattern {
  private:
  CRGB random_march_col;


int ledsX[LED_COUNT][3];             //-ARRAY FOR COPYING WHATS IN THE LED STRIP CURRENTLY 
int idex = 0;                        //-LED INDEX (0 to LED_COUNT-1)
int wait_time = 500;                 //-TIME IN MS


//---FIND ADJACENT INDEX COUNTER-CLOCKWISE
int adjacent_ccw(int i) {
  int r;
  if (i > 0) {r = i - 1;}
  else {r = LED_COUNT - 1;}
  return r;
}

  public:
    RandomMarch(CRGB NewRandomMarchColor);
    void reset() {};
    void draw(CRGB * leds);
};

#endif
