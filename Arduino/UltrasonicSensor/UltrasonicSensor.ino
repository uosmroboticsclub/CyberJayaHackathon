#include "Ultrasonic.h"
Ultrasonic ultrasonic(9,8); //trig pin 9, echo pin 8

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 Serial.print(ultrasonic.Ranging(CM));
 Serial.println( "cm" );
   
 delay(1000);
}
