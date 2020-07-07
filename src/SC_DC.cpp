#include "SC_DC.h"

SC_L298n_DC::SC_L298n_DC(unsigned char dirPin, unsigned char execPin, unsigned char enablePin): _dirPin(dirPin), _execPin(execPin), _enablePin(enablePin)
{
    pinMode(_dirPin, OUTPUT);
    pinMode(_execPin, OUTPUT);
    pinMode(_enablePin, OUTPUT);

}

void SC_L298n_DC::rotate(bool direction)
{
    analogWrite(_enablePin, map(_speed, 0, 255, 0, 1023));
    analogWrite(_dirPin, direction);
    analogWrite(_execPin, HIGH);
}
void SC_L298n_DC::rotate(uint16_t duration, bool direction)
{
    
}
void SC_L298n_DC::stop(bool hold)
{
    analogWrite(_enablePin, hold);
    analogWrite(_execPin, LOW);
}

void SC_L298n_DC::setSpeed(uint8_t speed)
{
    _speed = speed;
}