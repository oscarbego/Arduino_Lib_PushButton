/*
PushButton.h - Librería para evitar el
rebote del push button
Creada por Bego Septiembre '2014
Lanzado bajo licencia MIT
*/

#ifndef PushButton_h
#define PushButton_h
#include "arduino.h"

class PushButton {

private:
   int _btn;
   void (*callbt)();
   void (*callbf)();
   boolean salida;
   int estado;
   int edoAnt;


public:
   PushButton(int btn, void(*)());
   PushButton(int btn, void(*)(), void(*)());
   void isPushed();
};

#endif
