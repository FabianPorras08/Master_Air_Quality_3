/*****************************************************

  Prueba de las bibliotecas en Arduino IDE
  Estudiantes: Sergio Rojas Calvo, Fabián Porras Castillo,
  Iván Rojas Calvo

******************************************************/

#include "lib.h"
/*****************************************************

  Prueba de las bibliotecas en Arduino IDE
  Estudiante: Sergio Rojas Calvo

******************************************************/
float data = 0;
int valor = 0;
float resultado = 0;

void setup() {
  Serial.begin(9600);
  Serial.print("Test de datos aleatorios: \n"); // Se debe cambiar según la prueba
  Serial.print("Test de escritura: \n");
}

void loop() {
  airquality3_get_co2_and_tvoc();
  airquality3_data_receiving();
  airquality3_software_reset();
}
/*****************************************************

  Prueba de las bibliotecas en Arduino IDE
  Estudiante: Ivan Rojas Calvo

******************************************************/
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
  airquality3_set_baseline(48);
}
/*****************************************************
  Prueba de las bibliotecas en Arduino IDE
  Estudiante: Fabián Porras Castillo
******************************************************/
  int resultado_menu;
  void setup(){
    Serial.begin(9600);
    Serial.println("La medición de la temperatura ambiente en °C son de");
  }
  
  void loop(){
  Modos_de_operacion();
  airquality3_temperatura();
  airquality3_rangos_temperatura();
  airquality3_porcent_humedad();
  airquality3_rabgos_porcent_humedad();
}
