#include "SC_Servo.h"

SC_Simple_Servo::SC_Simple_Servo(unsigned char _pin): _pin(pin)
{ 
    pinMode(_pin, OUTPUT)
}

SC_Simple_Servo::rotate(int degrees)
{ 
    for(int i = 1; i<=degreees; i++)
    {
        digitalWrite(_pin, HIGH);
        delay(12.77); 
        digitalWrite(_pin, LOW)}
        delay(12.77);
    }
}