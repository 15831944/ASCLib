#include "SC_Stepper.h"
/* Author: NightChips
 * 
 * 
 * 
 */

SC_A4988_Stepper::SC_A4988_Stepper(unsigned char dirPin, unsigned char stepPin): _dirPin(dirPin), _stepPin(stepPin)
{
    pinMode(dirPin, OUTPUT);
    pinMode(stepPin, OUTPUT);
    
}

SC_A4988_Stepper::~SC_A4988_Stepper()
{
    digitalWrite(_dirPin, LOW);
    digitalWrite(_stepPin, LOW);
}

void SC_A4988_Stepper::step(bool direction)
{
    digitalWrite(_dirPin, direction);
    digitalWrite(_stepPin, HIGH);
    delayMicroseconds(_speed);
    digitalWrite(_stepPin, LOW);
}

void SC_A4988_Stepper::step(unsigned int amount, bool direction)
{
    digitalWrite(_dirPin, direction);
    for(unsigned int i=0; i<amount;i++)
    {
        digitalWrite(_stepPin, HIGH);
        delayMicroseconds(_speed);
        digitalWrite(_stepPin,LOW);
        delayMicroseconds(_speed);
    }
}

void SC_A4988_Stepper::setSpecificSpeed(unsigned int amount)
{
    _speed = amount;
}
