#include "Matrix.h"
#include "BlinkyTape.h"

#include <Arduino.h>

Matrix::Matrix(CRGB MatrixrCol) :
  matrix_col(MatrixrCol) {
  }

void Matrix::draw(CRGB* leds)   {  
  int rand = random(0, 100);
  if (rand > 90) {
    leds[0] = matrix_col;
  }
  else {leds[0] = CHSV(thishue, thissat, 0);}
    for(int i = 0; i < LED_COUNT; i++ ) {
      ledsX[i][0] = leds[i].r;
      ledsX[i][1] = leds[i].g;
      ledsX[i][2] = leds[i].b;
    } 
    for(int i = 1; i < LED_COUNT; i++ ) {
    leds[i].r = ledsX[i-1][0];
    leds[i].g = ledsX[i-1][1];
    leds[i].b = ledsX[i-1][2];    
  }
  LEDS.show();  
  delay(wait_time);
}
