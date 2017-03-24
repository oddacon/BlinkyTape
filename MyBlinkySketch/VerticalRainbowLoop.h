#ifndef VER_RAINBOW_LOOP_H
#define VER_RAINBOW_LOOP_H

#include <FastLED.h>
#include "BlinkyTape.h"


class VerRainbowLoop : public Pattern {
  private:
  CRGB ver_rainbow_loop_col;

int BOTTOM_INDEX = 0;
int TOP_INDEX = int(LED_COUNT/2);
int EVENODD = LED_COUNT%2;


int wait_time = 10;           //-TIME IN MS
int thisstep = 10;           //-LOOPS DELAY VAR
int thissat = 255;           //-FX LOOPS DELAY VAR
int idex = 0;                //-LED INDEX (0 to LED_COUNT-1)
int ihue = 0;                //-HUE (0-255)


//---FIND INDEX OF HORIZONAL OPPOSITE LED
int horizontal_index(int i) {
  //-ONLY WORKS WITH INDEX < TOPINDEX
  if (i == BOTTOM_INDEX) {return BOTTOM_INDEX;}
  if (i == TOP_INDEX && EVENODD == 1) {return TOP_INDEX + 1;}
  if (i == TOP_INDEX && EVENODD == 0) {return TOP_INDEX;}
  return LED_COUNT - i;  
}


  public:
    VerRainbowLoop(CRGB NewVerRainbowLoopColor);
    void reset() {};
    void draw(CRGB * leds);
};

#endif
