

#include "config.h"
#include <xc.h>
#include "semaforo.h"
#include "delay.h"

void main (void)
{
    int estado = 0;
    int t;
    while ( 1 ) 
   {
        switch ( estado ) 
        {
            case 0:
                    estado = 1;
                    break;
            case 1:
                    semaforo_init();
                    estado = 2;
                    break;
            case 2:
                    vermelho (0);
                    amarelo(0);
                    verde(1);
                    verdeped(0);
                    vermelhoped(1);
                    if ( botaoPedestre() == 1 )
                        estado:3;
                    break;             
            case 3:
                    t = 3000;
                    estado = 4;
                    break;
            case 4:
                    delay(1);
                    --t;
                    if (t <=0)
                        estado = 5;
                    break;
            case 5:
                    vermelho (0);
                    amarelo(1);
                    verde(0);
                    t = 1500;
                    estado = 6;
                    break;
            case 6:
                    delay (1);
                     --t;
                    if (t <=0)
                        estado = 7;
                    break;
            case 7:
                    vermelho (1);
                    amarelo(0);
                    verde(0);
                    verdeped(1);
                    vermelhoped(0);
                    t = 5000;
                    estado 8;
                    break;              
            case 8:
                    delay (1);
                     --t;
                    if (t <=0)
                        estado = 2;
                    break;
        }        
   }

}
