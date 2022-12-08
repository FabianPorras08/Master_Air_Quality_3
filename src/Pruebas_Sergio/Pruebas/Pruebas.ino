
/*****************************************************

Prueba de las bibliotecas en Arduino IDE
Estudiantes: Sergio Rojas Calvo, Fabián Porras Castillo, 
Iván Rojas Calvo

******************************************************/

#include "lib.h"

void setup(){
  Serial.begin(9600);
  Serial.print("Test de datos aleatorios: \n"); // Se debe cambiar según la prueba
  }

void loop(){
  //airquality3_get_co2_and_tvoc();
  //airquality3_data_receiving();
  airquality3_software_reset();
  }



// Prueba de escritura del sensor en monitor serial
/*
float data = 0;
int valor = 0;

void setup(){
  Serial.begin(9600);
  Serial.print("Test de escritura: \n");
}

void loop(){

  //valor = Serial.parseInt();
  
  //si existe datos disponibles los leemos
  if (Serial.available() > 0 ){
  
  //leemos la opcion enviada
  if (Serial.read() == '1'){
  data = airquality3_generic_write(254);
  Serial.print(">> CO2 data is ");
  Serial.print(data);
  Serial.print(" ppm.\n");
  
  Serial.print(">> TVOC data is ");
  Serial.print(data);
  Serial.print(" ppb.\n");
  delay(1000);
    }
  
  else{
    Serial.println("No hay datos");
    delay(1000);
    } 
  }
}
*/

// Ejemplo de suma
/*
float resultado = 0;
  
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Test de suma: \n");
  resultado = suma(5,3);
  Serial.println(resultado);
  delay(500);
}
*/
