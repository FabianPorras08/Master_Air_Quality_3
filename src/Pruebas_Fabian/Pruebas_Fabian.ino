/*****************************************************

Prueba de las bibliotecas en Arduino IDE
Estudiantes: Sergio Rojas Calvo, Fabián Porras Castillo, 
Iván Rojas Calvo

******************************************************/

#include "lib.h"

/*********************************************/
/*
  Prueba de lectura 
*/
/********************************************/

// Prueba de escritura del sensor en monitor serial
  int resultado_menu;
  void setup(){
    Serial.begin(9600);
  }
  
  void loop(){
  Modos_de_operacion();
  }
 
//  data = airquality3_generic_write(254);
//  Serial.print(">> CO2 data is ");
//  Serial.print(data);
//  Serial.print(" ppm.\n");
//  Serial.print(">> TVOC data is ");
//  Serial.print(data);
//  Serial.print(" ppb.\n");
//  delay(1000);
//    }
//  
//  else{
//    Serial.println("No hay datos");
//    delay(1000);
//    } 
//  }
//}

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
*/

//  Serial.println( " 1. Ingrese al Modo 0.");
//  Serial.println( " 2. Ingrese al Modo 1.");
//  Serial.println( " 3. Ingrese al Modo 2.");
//  Serial.println( " 4. Ingrese al Modo 3.");
//  Serial.println( " 5. Ingrese al Modo 4.");
//  Serial.println( " 6. Salir.");
//  Serial.parseInt();
