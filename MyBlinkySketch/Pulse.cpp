#include "Pulse.h"
#include "BlinkyTape.h"

#include <Arduino.h>

ColorPulse::ColorPulse(CRGB NewPulseColor) :
  pulse_col(NewPulseColor) {
  }

void ColorPulse::draw(CRGB* leds)   {  
    for (uint16_t i = 0; i < LED_COUNT; i++) {
      leds[i] = pulse_col; 
    }
  // let's fade up by scaling the brightness - in general, brightness shouldn't go above 93, so the strip won't draw too much power.
  // Oh, and 93 is plenty bright!
  for(int scale = 0; scale < 93; scale++) { 
    LEDS.setBrightness(scale);
    LEDS.show();
    delay(wait_time);
  }
  // now let's fade down by scaling the brightness
  for(int scale = 93; scale > 0; scale--) { 
    LEDS.setBrightness(scale);
    LEDS.show();
    delay(wait_time);
  }
  colorcode++; // OK - next color!
  colorcode = colorcode % 1; // number of case modulus, remember it's zero based!
  delay(wait_time);
}
