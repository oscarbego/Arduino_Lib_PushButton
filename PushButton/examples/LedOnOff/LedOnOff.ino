#include <PushButton.h>

int led = 4;
int btn = 8;

//----------funciones a desempeñar-------  
void callOnPush()
{  
  digitalWrite(led, HIGH);
  Serial.println("Led on");
}

void callOnRelease()
{  
  digitalWrite(led, LOW);
}
//--------------------------------------- 


//PushButton button(btn, callOnPush); //solo push
PushButton button(btn, callOnPush, callOnRelease);

void setup() 
{                
  Serial.begin(9600); 
  pinMode(led, OUTPUT);     
}

void loop() 
{
  button.isPushed();
}