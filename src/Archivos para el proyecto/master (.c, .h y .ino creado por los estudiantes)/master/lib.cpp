
#include "lib.h"
#include <Arduino.h>
#include <stdio.h>

/*****************************************************
  Pruebas de las bibliotecas en Arduino IDE
  Estudiante: Fabián Porras Castillo
******************************************************/

/************************************************************************************************************/

// Prueba #1 - Modos de operación
  // Esta es la forma en la que se imprime el menú
  void Modos_de_operacion(){
    int resultado_menu;
    Serial.println("\nSeleccione el modo deseado: ");
    Serial.println("1. Modo 0 ");
    Serial.println("2. Modo 1 ");
    Serial.println("3. Modo 2 ");
    Serial.println("4. Modo 3 ");
    Serial.println("5. Modo 4 ");
    while (Serial.available()==0){
    }
    resultado_menu = Serial.parseInt(); // Asignar la variable el dato deseado
    seleccionarOpcion(resultado_menu); // Invoca a la función del switch para elegir el dato deseado
 }

 void seleccionarOpcion(int nResultado){ // Recibe por parámetro el entero digitado por el usuario
  // Switch case, determina en el menu los diferentes casos, estos casos son las funciones declaradas en el .h para cada prueba.
    switch (nResultado)
      {
       case 1:
         modo0();
         delay(2000);
         Modos_de_operacion();
         break;

       case 2:
         modo1();
         delay(2000);
         Modos_de_operacion();
         break;
       case 3:
         modo2();
         delay(2000);
         Modos_de_operacion();
         break;
       case 4:
         modo3();
         delay(2000);
         Modos_de_operacion();
         break;
      case 5:
         modo4();
         delay(2000);
         Modos_de_operacion();
       break;
       default: // Cualquier caso que no sea ninguno de los anteriores
       Serial.println("\nPor favor seleccione una opción válida. ");
       }
 }
// En esta parte del código se imprime lo que corresponde a cada modo
 void modo0(){
    Serial.println("\nEn este modo la corriente está inactiva y baja");
    return;
 }
 void modo1(){
    Serial.println("\nEste modo tiene la energía constante y realiza una medición de la calidad del aire cada segundo");
    return;
 }
 void modo2(){
    Serial.println("\nEste modo muestra los pulso de calentamiento en la calidad de aire cada 10 segundos");
    return;
 }
 void modo3(){
    Serial.println("\nEste modo te modo mide los pulso de calentamiento de baja potencia en la calidad de aire cada 60 segundos");
    return;
 }
 void modo4(){
    Serial.println("\nEste mide la energía de forma constante cada 250 ms.");
    return;
}

/************************************************************************************************************/

//Prueba #2 - Temperatura ambiente para la operación
// En este bloque de código, se tomarán valores randomizados para las mediciones de la temperatura almacenada
void airquality3_temperatura_almacenada() {
  float temp = random(-40, 125);
  Serial.println("La temperatura almacenada en °C es de: ");
  Serial.println(temp);
  delay(4000);
}
// En este bloque de código, se tomarán valores randomizados con un rango mayor al deseado en las mediciones de la temperatura almacenada para determinar si son óptimos o no
void airquality3_rangos_temperatura_almacenada() {
  float temp = random(-70, 200);
  Serial.println("Temperatura almacenada en °C: ");
  Serial.println(temp);
// El if y elsa son los encargados de las comparaciones.
  if (temp >= -40 && temp <= 125) {
    Serial.println("Temperatura almacenada óptima para su uso. ");
    delay(4000);
  }
  else {
    Serial.println("Temperatura almacenada nada favorable para su uso. ");
    delay(4000);
  }
}

/************************************************************************************************************/

// Prueba #3 - Humedad relativa (no condensación)
// En este bloque de código, se tomarán valores randomizados para las mediciones del porcentaje de humedad
  void airquality3_porcent_humedad(){
    float hum = random(10,95);
  
    Serial.println("El porcentaje de la humedad relativa °C es de: ");
    Serial.println(hum);
    delay(4000);
  }
// En este bloque de código, se tomarán valores randomizados con un rango mayor al deseado en las mediciones del porcentaje de humedad para determinar si es óptimo o no
  void airquality3_rabgos_porcent_humedad() {
    float hum = random(20,94);
    Serial.println("El porcentaje de la humedad relativa °C es de: ");
    Serial.println(hum);
// El if y elsa son los encargados de las comparaciones.
    if (10 >= hum >= 35) {
      Serial.println("Humedad relativa óptima para su uso ");
      delay(4000);
    }
    else {
      Serial.println("Humedad relativa nada favorable para su uso ");
      delay(4000);
    }
}


/*****************************************************
  Pruebas de las bibliotecas en Arduino IDE
  Estudiante: Sergio Rojas Calvo
******************************************************/


/************************************************************************************************************/

// Prueba #4 - Lectura y escritura de datos CO2 y TVOC

void airquality3_get_co2_and_tvoc(){ //int co2,int tvoc
  Serial.print("Test de Lectura y escritura de datos CO2 y TVOC \n"); // Se debe cambiar según la prueba
  // Números aleatorios para las pruebas del sensor
  int co2 = random(400,8192); 
  int tvoc = random(0,1187);
  // Serial.println para cada dato del sensor
  Serial.print("\n>> El valor de CO2 es ");
  Serial.print(co2);
  Serial.print(" ppm.");
  // Serial.println para cada dato del sensor
  Serial.print("\n>> El valor de TVOC es ");
  Serial.print(tvoc);
  Serial.print(" ppb.\n");
  delay(1500);
  }   

/************************************************************************************************************/

//Prueba #5 - Recibo de datos correctos e inválidos

void airquality3_data_receiving(){ 

  Serial.print("Test de Recibo de datos correctos e inválidos");
  // Números aleatorios para las pruebas del sensor
  int co2 = random(300,8200); 
  int tvoc = random(-100,1200);
  Serial.print("\n>> Dato CO2(ppm): ");
  Serial.println(co2);
  Serial.print(">> Dato TVOC(ppb): ");
  Serial.println(tvoc);                     
  // El if y elsa son los encargados de las comparaciones.
  if (co2>=400 && co2<=8192, tvoc>=0  && tvoc<=1187 ){           
  Serial.println("\n>> Recibiendo datos correctamente ");
  delay(2000);
  }
  else{
    Serial.println("\nError de medición, dato inválido");
    delay(2000);
  }
}

/************************************************************************************************************/

//Prueba #6 - Prueba de reset de software

void airquality3_software_reset(){

  Serial.print("Test de Reset de software");

  Serial.println("  Ingresar 'key'(reset) para un software reset:");
  airquality3_get_co2_and_tvoc();
  
  while (Serial.available() == 0) {}   //Espera por un dato disponible
  String reset = Serial.readString();  //Leer hasta el tiempo de espera
  reset.trim();                        //Remueve cualquier espacio del string
  
  if (reset == "reset") {
    
    Serial.println("\n  Reseting device, returning to BOOT mode.");
    Serial.println("  ¿Desea reiniciar el sensor y seguir midiendo? s/n.");
    while (Serial.available() == 0) {}     //Espera por un dato disponible
    String s_n = Serial.readString();      //Leer hasta el tiempo de espera
    s_n.trim();
    while(s_n == "n"){
    Serial.println("\n BOOT MODE");
    delay(5000);
    }
  } 
  else {
    Serial.println("\n  Fallo al generar reset");  // Error si el valor del dato es inválido
  }
}

/*****************************************************
  Pruebas de las bibliotecas en Arduino IDE
  Estudiante: Ivan Rojas Calvo
******************************************************/


/************************************************************************************************************/

//----------------------------------------------------------
//  Funcion para establecer un valor de temperatura adecuado
//----------------------------------------------------------

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

//------------------------------------------------------------
//  Funcion que escribe comando de inicializacion de booloader
//------------------------------------------------------------

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

//-------------------------------------------------------
//  Funcion para correcion de linea de base en mediciones
//-------------------------------------------------------

void airquality3_set_measurement_mode(int horas_uso){
  
  while(horas_uso > 24)
  {  //24 horas 

    //Durante las primeras 500 horas (5 representa 500), ajuste la linea de base cada 24-48 horas
    for(int i; i<=5; i++){
      Serial.println("Actualice la linea de base para mediciones de CO2 y TVOC");
      delay(480); // Simula las 48 horas para mandar mensaje de actualizacion
    }
  }
}
