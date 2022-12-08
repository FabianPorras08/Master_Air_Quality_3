
//#include _LIB //cambiar a un include
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

  
  void airquality3_get_co2_and_tvoc(); // int co2,int tvoc
  void airquality3_data_receiving();
  void airquality3_software_reset();
  float airquality3_generic_write(float A);
  float suma(float A,float B);

/*
#ifdef _cplusplus    
    }
#endif
*/

//#include  "lib.c"
#endif
