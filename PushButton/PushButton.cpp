/*
PushButton.cpp - Librería para evitar el
rebote del push button
Creada por Bego Septiembre '2014
Lanzado bajo licencia MIT
*/

#include "arduino.h"
#include "PushButton.h"

PushButton::PushButton(int btn, void (*callbt)())
{
  pinMode(btn, INPUT);
  _btn = btn;

  this->callbt = callbt;
}

PushButton::PushButton(int btn, void (*callbt)(), void (*callbf)())
{
  pinMode(btn, INPUT);
  _btn = btn;

  this->callbt = callbt;
  this->callbf = callbf;
}

void PushButton::isPushed()
{
	estado = digitalRead(_btn);

    if(estado && !edoAnt)
        callbt();

    if(!estado)
    {
      	if(callbf)
      		callbf();
    }

    edoAnt = estado;
}
