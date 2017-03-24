#ifndef MATRIX_H
#define MATRIX_H

#include <FastLED.h>
#include "BlinkyTape.h"

class Matrix : public Pattern {
  private:
  CRGB matrix_col;

int ledsX[LED_COUNT][3];             //-ARRAY FOR COPYING WHATS IN THE LED STRIP CURRENTLY
int wait_time = 25;                  //-TIME IN MS
int thissat = 255;                   //-LOOPS DELAY VAR
int thishue = 0;                     //-LOOPS DELAY VAR

  public:
    Matrix(CRGB MatrixrCol);
    void reset() {};
    void draw(CRGB * leds);
};

#endif
