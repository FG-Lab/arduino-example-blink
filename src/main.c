#include "../include/arduino_lar.h"
#include <util/delay.h>


int main (int argc, char *argv[])
{
    // Set Pin 13 to be an output
    set_pin_mode(PIN_13, PIN_WRITE);

    while (1)
    {
        // Set Pin 13 high
        set_pin_state(PIN_13, PIN_HIGH);

        // Wait half a second
        _delay_ms(1000);

        // Set Pin 13 low
        set_pin_state(PIN_13, PIN_LOW);

        // Wait half a second again.
        _delay_ms(500);
    }

    return 0;
}

