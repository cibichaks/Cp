#include <msp430g2553.h>  // header file that depends upon your variant
/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;// Stop watchdog timer
    P1DIR = 0X41;    //Declare PIN0 AND PIN1 OF PORT 1 AS OUTPUT
    P1OUT = 0X01; //MAKE PIN0 HIGH AND PIN1 LOW INITIALLY
    unsigned int i;   //Delay variable
    while(1)
    {
        P1OUT ^=0X41;   //Toggle the respective by using bit-xor operator
        for(i=0;i<30000;i++){   //Necessary delay, change it to see the effect on toggling
        }
    }
    return 0;
}
