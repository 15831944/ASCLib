#ifndef SC_SERVO_h
#define SC_SERVO_h

#include "Arduino.h"
#include "utility/utils.h"

class SC_Simple_Servo {
    private:
        const unsigned char _pin;
    public:
        SC_Simple_Servo(unsigned char _pin);
        void rotate(int degrees);
        
};
#endif