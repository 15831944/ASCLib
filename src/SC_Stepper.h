#ifndef SC_STEPPER_h
#define SC_STEPPER_h

#include "Arduino.h"
#include "utility/utils.h"

class SC_A4988_Stepper {
    public:
        SC_A4988_Stepper(unsigned char dirPin, unsigned char stepPin);
        ~SC_A4988_Stepper();
        void step(bool direction);
        void step(unsigned int amount, bool direction);
        void setSpecificSpeed(unsigned int speed);

    private:
        const unsigned char _dirPin;
        const unsigned char _stepPin;
        unsigned int _speed;

};



#endif
