
#include "lib.h"
#include <Arduino.h>

//**********************************************************
//  Funcion para establecer un valor de temperatura adecuado
//**********************************************************
void airquality3_set_environment_data (float fntc_steps){
  float T;

  //Ecuacion para calcular temperatura
  T = 5000 + fntc_steps*50;  
  if(-5 > T > 50){
    Serial.println("Temperatura normal: ");
    Serial.print(T);
    Serial.print(" °C");
  }

  //La temperatura ambiente no es la adecuada para el sensor
  else{
    Serial.println("ERROR Temperatura fuera de limites: ");
    Serial.print(T);
    Serial.print(" °C");
  }
}

//**********************************************************
//  Funcion que escribe comando de inicializacion de booloader
//**********************************************************

void airquality3_set_baseline(){
  
  Serial.println("Comando para iniciar bootloader: ");
  while (Serial.available() == 0) {}
  Serial.readString();

  // Si el comando se escribio inicie app, sino, imprima error
  if (Serial.readString() == "airquality3_set_baseline") {
    Serial.println("Iniciando aplicacion adecuadamente");
  } 
  else {
    Serial.println("Error al inciar aplicacion");
  }
}
