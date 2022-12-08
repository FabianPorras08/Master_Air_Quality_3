
#include "lib.h"
#include <Arduino.h>


  
void airquality3_get_co2_and_tvoc(){ //int co2,int tvoc

  int co2 = random(400,8192); // Número aleatorio para pruebas del sensor
  int tvoc = random(0,1187);
  
  Serial.print("\n>> El valor de CO2 es ");
  Serial.print(co2);
  Serial.print(" ppm.");
  
  Serial.print("\n>> El valor de TVOC es ");
  Serial.print(tvoc);
  Serial.print(" ppb.\n");
  
  delay(1500);
  }  

void airquality3_data_receiving(){ 
    
  int co2 = random(300,8200); // Número aleatorio para pruebas del sensor
  int tvoc = random(-100,1200);
  Serial.print("\n>> Dato CO2(ppm): ");
  Serial.println(co2);
  Serial.print(">> Dato TVOC(ppb): ");
  Serial.println(tvoc);                       //
  
  if (co2>=400 && co2<=8192, tvoc>=0  && tvoc<=1187 ){             // 
  Serial.println("\n>> Recibiendo datos correctamente ");
  delay(2000);
  }
  
  else{
    Serial.println("\nError de medición, dato inválido");
    delay(2000);
  } 
}

void airquality3_software_reset(){
  
  Serial.println("  Ingresar 'key'(reset) para un software reset:");
  airquality3_get_co2_and_tvoc();
  
  while (Serial.available() == 0) {}     //wait for data available
  String reset = Serial.readString();  //read until timeout
  reset.trim();                        // remove any \r \n whitespace at the end of the String
  
  if (reset == "reset") {
    
    Serial.println("\n  Reseting device, returning to BOOT mode.");
    Serial.println("  ¿Desea reiniciar el sensor y seguir midiendo? s/n.");
    while (Serial.available() == 0) {}     //wait for data available
    String s_n = Serial.readString();  //read until timeout
    s_n.trim();
   
    while(s_n == "n"){
    Serial.println("\n BOOT MODE");
    delay(5000);
    }
  } 
  
  else {
    Serial.println("\n  Fallo al generar reset");
  }
}

// Ejemplo de escritura de datos
/*
float airquality3_generic_write(float A){
  float airquality_data = 0;
  airquality_data = A;
  return A;
}*/

// Ejemplo de suma
/*
float suma(float A,float B){
  float sum = 0;
  sum = A+B;
  return sum;
}*/
