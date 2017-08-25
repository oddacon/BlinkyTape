#include "RandomColorFade.h"
#include "BlinkyTape.h"

#include <Arduino.h>


RndColFade::RndColFade(CRGB NewRndColFade) :
  rnd_col_fade(NewRndColFade) {
  }

void RndColFade::draw(CRGB* leds)   {  

if ((((Col1 == 0) || (Col1 == 250)) && (((Col2 == 0) || (Col2 == 250)) && ((Col3 == 0) || (Col3 == 250))))) {
    do {
        C1 = random(1, 3);
        C2 = random(1, 3);
        C3 = random(1, 3);
    } while (((((C1 == 1) && (C2 == 1) && (C3 == 1)) || ((C1 == 2) && (C2 == 2) && (C3 == 2)))));
}
if (((C1 == 1) && (Col1 != 0))) {
    Col1 = (Col1 - 10);  
}
if (((C2 == 1) && (Col2 != 0))) {
    Col2 = (Col2 - 10);
}
if (((C3 == 1) && (Col3 != 0))) {
    Col3 = (Col3 - 10);
}

if (((C1 == 2) && (Col1 != 250))) {
    Col1 = (Col1 + 10);
}
if (((C2 == 2) && (Col2 != 250))) {
    Col2 = (Col2 + 10);
}
if (((C3 == 2) && (Col3 != 250))) {
    Col3 = (Col3 + 10);
}
  
  for (uint8_t i = 0; i < LED_COUNT; i++) {
   leds[i] = CRGB(Col1, Col2, Col3);
  }
  delay(wait_time);
  LEDS.show();
}
 
