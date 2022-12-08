#ifndef _LIB //cambiar a un include
#define _LIB
#include <Arduino.h>

/*
#ifndef LIB_H_INCLUDED //cambiar a un include
#define LIB_H_INCLUDED
  
#ifndef _cplusplus
extern "C"{   // Es c corriendo en un ambiente en c++, usted hace muchas cosas pero solo me interesan las que esten descritas en c.
#endif
*/

  float suma(float A,float B);
  float resta(float A,float B);
  float multiplicacion(float A,float B);
  float airquality3_generic_write(float A); 
  void Modos_de_operacion();
  void modo0();
  void modo1();
  void modo2();
  void modo3();
  void modo4();
  void seleccionarOpcion(int nResultado);

#endif
