#ifndef EMS_H
#define EMS_H

#include <FastLED.h>
#include "BlinkyTape.h"

class EMSLightStrobe : public Pattern {
  private:
  CRGB EMS_col;

int TOP_INDEX = int(LED_COUNT/2);
int wait_time = 1;                     //-TIME IN MS
int thishue = 0;                       //-LOOPS DELAY VAR
int thissat = 255;                     //-LOOPS DELAY VAR
int thathue = (thishue + 160) % 255;


  public:
    EMSLightStrobe(CRGB NewEMSColor);
    void reset() {};
    void draw(CRGB * leds);
};

#endif
