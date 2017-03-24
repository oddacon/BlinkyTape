#include "EMSLightStrobe.h"
#include "BlinkyTape.h"

#include <Arduino.h>


EMSLightStrobe::EMSLightStrobe(CRGB NewEMSColor) :
  EMS_col(NewEMSColor) {
  }


void EMSLightStrobe::draw(CRGB* leds)   {  
  for(int x = 0 ; x < 5; x++ ) {
    for(int i = 0 ; i < TOP_INDEX; i++ ) {
        leds[i] = CHSV(thishue, thissat, 255);
      }
    LEDS.show(); 
    delay(wait_time); 
      for(int i = 0 ; i < LED_COUNT; i++ ) {
          leds[i] = CHSV(0, 0, 0); //-SET ALL LEDS TO ONE COLOR
      }
    LEDS.show();
    delay(wait_time);
  }
  for(int x = 0 ; x < 5; x++ ) {
      for(int i = TOP_INDEX ; i < LED_COUNT; i++ ) {
        leds[i] = CHSV(thathue, thissat, 255);
      }
    LEDS.show(); 
    delay(wait_time);
      for(int i = 0 ; i < LED_COUNT; i++ ) { 
          leds[i] = CHSV(0, 0, 0); //-SET ALL LEDS TO ONE COLOR
      }
    LEDS.show(); 
    delay(wait_time);
  }
}


