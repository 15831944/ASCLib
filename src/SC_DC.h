#ifndef SC_DC_h
#define SC_DC_h
#include "Arduino.h"
#include "utility/utils.h"
class SC_L298n_DC{
    public:
        SC_L298n_DC(uint8_t dirPin, uint8_t execPin, uint8_t enablePin);
        void rotate(bool direction);
        void stop(bool hold);
        void rotate(unsigned int duration, bool direction);
        void setSpeed(uint8_t speed);
    private:
        const uint8_t _dirPin;
        const uint8_t _execPin;
        const uint8_t _enablePin;
        uint8_t _speed;


};


#endif