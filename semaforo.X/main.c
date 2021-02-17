

#include "config.h"
#include <xc.h>

void semaforo_init(void)
{
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD5 = 0;
    PORTDbits.RD7 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD5 = 0;
}


void ledvermelho(int estado)
{
    PORTDbits.RD7 = estado;
}


void ledamarelo(int estado)
{
    PORTDbits.RD6 = estado;
}


void ledverde(int estado)
{
    PORTDbits.RD5 = estado;
}


void delay (int t)
{
    while( t )
    {
        --t;
        __delay_ms(1);
    }    
}


void main (void)
{
    semaforo_init();
    
    while (1)
    {
        PORTDbits.RD7 = 0;
        PORTDbits.RD6 = 0;
        PORTDbits.RD5 = 1;
        delay (4000);
        
        PORTDbits.RD7 = 0;
        PORTDbits.RD6 = 1;
        PORTDbits.RD5 = 0;
        delay (1000);
        
        PORTDbits.RD7 = 1;
        PORTDbits.RD6 = 0;
        PORTDbits.RD5 = 0;
        delay (7000);
    }
}
