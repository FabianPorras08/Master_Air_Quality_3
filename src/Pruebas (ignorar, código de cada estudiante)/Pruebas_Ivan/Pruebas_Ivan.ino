#include "lib.h"

void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.println("");
  Serial.println("Digite el modo de operacion <1-5> ");
  
  while (Serial.available() == 0){
  }
  airquality3_set_environment_data(80); //Dato ideal para una temperatura de 9 °C según data sheet
  airquality3_set_baseline();
  airquality3_set_measurement_mode(48);
}

//hola
