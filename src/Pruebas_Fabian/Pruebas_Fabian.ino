/*****************************************************

Prueba de las bibliotecas en Arduino IDE
Estudiantes: Sergio Rojas Calvo, Fabián Porras Castillo, 
Iván Rojas Calvo

******************************************************/

#include "lib.h"

//  int resultado_menu;
  void setup(){
    Serial.begin(9600);
//  Serial.println("La medición de la temperatura ambiente en °C son de");
  }
  
  void loop(){
  //Modos_de_operacion();
  airquality3_temperatura();
  airquality3_rangos_temperatura();
//  airquality3_porcent_humedad();
//  airquality3_rangos_porcent_humedad();
}
