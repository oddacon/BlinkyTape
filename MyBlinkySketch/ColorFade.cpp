#include "ColorFade.h"
#include "BlinkyTape.h"

#include <Arduino.h>


ColorFade::ColorFade(CRGB NewFadeColor) :
  col_fade(NewFadeColor) {
  }

void ColorFade::draw(CRGB* leds)   {  
    ihue++;
    if (ihue > 255) {ihue = 0;}
    for(int idex = 0 ; idex < LED_COUNT; idex++ ) {
      leds[idex] = CHSV(ihue, isat, 255);
    }
    LEDS.show();    
    delay(wait_time);
}
