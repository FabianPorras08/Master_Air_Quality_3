#include "lib.h"

void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.println("");
  Serial.println("Digite el modo de operacion <1-5> ");
  
  while (Serial.available() == 0){
  }
  airquality3_set_environment_data(50);
}

//hola
