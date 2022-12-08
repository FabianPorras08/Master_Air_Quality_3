/*****************************************************

Prueba de las bibliotecas en Arduino IDE
Estudiantes: Sergio Rojas Calvo, Fabián Porras Castillo, 
Iván Rojas Calvo

******************************************************/

#include "lib.h"

  void setup(){
    Serial.begin(9600);
//  Serial.println("La medición de la temperatura alnacemada en °C son de: ");
//  Serial.println("La medición del porcentaje de la humedad relativa es de: ");
  }

  void loop(){
//  Modos_de_operacion();
//  airquality3_temperatura_almacenada();
//  airquality3_rangos_temperatura_almacenada();
  airquality3_porcent_humedad();
  airquality3_rangos_porcent_humedad();
}
