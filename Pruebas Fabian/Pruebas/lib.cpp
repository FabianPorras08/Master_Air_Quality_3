
#include "lib.h"
#include <Arduino.h>

float suma(float A,float B){
  float sum = 0;
  sum = A+B;
  return sum;
}
float resta(float A,float B){
  return A-B;
}
float multiplicacion(float A,float B){
  return A*B;
}

float airquality3_generic_write(float A){
  float airquality_data = 0;
  airquality_data = A;
  return A;
}
