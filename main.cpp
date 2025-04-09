#include "mbed.h"
#include "arm_book_lib.h"

int main()
{
    // Agrego un LED más.
    DigitalIn gasDetector(D2), gasDetector2(D3);

    DigitalOut alarmLed(LED1), alarmLed2(LED2);

    gasDetector.mode(PullDown), gasDetector2.mode(PullDown);

    alarmLed = OFF, alarmLed2 = OFF;

    // Imprimir "Hello World" por puerto serie (9600 baudios por defecto).
    printf("%s\n", "Hello World");
    
    while (true) {
        
        if ( gasDetector == ON ) {
            alarmLed = ON;
        }
        
        if ( gasDetector == OFF ) {
            alarmLed = OFF;
        }

        if ( gasDetector2 == ON ) {
            alarmLed2 = ON;
        }
        
        if ( gasDetector2 == OFF ) {
            alarmLed2 = OFF;
        }
    }
}