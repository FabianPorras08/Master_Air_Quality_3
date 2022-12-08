#include "lib.h"
#include <Arduino.h>
#include <stdio.h>

// float suma(float A,float B){
//  float sum = 0;
//  sum = A+B;
//  return sum;
// }
// float resta(float A,float B){
//  return A-B;
// }
// float multiplicacion(float A,float B){
//  return A*B;
// }
//
// float airquality3_generic_write(float A){
//  float airquality_data = 0;
//  airquality_data = A;
//  return A;
// }
/* Programa: Tabla de multiplicar de un n mero (Soluci n 1) */

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
