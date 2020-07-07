#ifndef SC_DC_h
#define SC_DC_h
#include "Arduino.h"
#include "utility/utils.h"
class SC_L298n_DC{
    public:
        SC_L298n_DC(unsigned char dirPin, unsigned char execPin, unsigned char enablePin);
        void rotate (unsigned char MOTOR_DIRECTION direction);

    private:
        const int _dirPin;
        const int _execPin;
        const int _enablePin;


};


#endif