
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
int resultado_menu = 0;
int nResultado = 0;

void setup() {
  Serial.begin(9600);

}
void loop() {

  Serial.println("\nSeleccione el modo deseado: ");
  Serial.println("1. Prueba 1");
  Serial.println("2. Prueba 2");
  Serial.println("3. Prueba 3");
  Serial.println("4. Prueba 4");
  Serial.println("5. Prueba 5");
  Serial.println("6. Prueba 6");
  Serial.println("7. Prueba 7");
  Serial.println("8. Prueba 8");
  Serial.println("9. Prueba 9");

  while (Serial.available() == 0) {
  }
  resultado_menu = Serial.parseInt(); // Asignar la variable el dato deseado
  //seleccionarOpcion(resultado_menu); // Invoca a la función del switch para elegir el dato deseado

  switch (resultado_menu)
  {
    case 1:
      Modos_de_operacion();
      delay(2000);
      break;

    case 2:
      airquality3_temperatura_almacenada();
      delay(2000);
      break;

    case 3:
      airquality3_porcent_humedad();
      delay(2000);
      break;

    case 4:
      airquality3_get_co2_and_tvoc();
      delay(2000);
      Modos_de_operacion();
      break;
    case 5:
      airquality3_data_receiving();
      delay(2000);
      break;
    case 6:
      airquality3_software_reset();
      delay(2000);
    break;
    case 7:
      airquality3_set_environment_data(80);
      delay(2000);
    break;
    case 8:
      airquality3_set_baseline();
      delay(2000);
    break;
    case 9:
      airquality3_set_measurement_mode(48);
      delay(2000);
    break;
    default: // Cualquier caso que no sea ninguno de los anteriores
      Serial.println("\nPor favor seleccione una opción válida. ");
  }
}
