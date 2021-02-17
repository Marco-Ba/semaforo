/*
 * File:   semaforo.c
 * Author: 21193066
 *
 * Created on 17 de Fevereiro de 2021, 15:34
 */


#include <xc.h>

#define VERDE           PORTDbits.RD5
#define AMARELO         PORTDbits.RD6
#define VERMELHO        PORTDbits.RD7
#define VERDEPED        PORTDbits.RD2
#define VERMELHOPED     PORTDbits.RD3
#define BOTAO           PORTDbits.RD1

void semaforo_init (void) 
{
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD3 = 0;
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD1 = 1;
    VERDE = 0;
    AMARELO = 0;
    VERMELHO = 0;
    VERDEPED = 0;
    VERMELHOPED = 0;
}

void verde (int x)
{
    VERDE = x;
}

void amarelo (int x)
{
    AMARELO = x;
}

void vermelho (int x)
{
    VERMELHO = x;
}

void verdeped (int x)
{
    VERDEPED = x;
}

void vermelhoped (int x)
{
    VERMELHOPED = x;
}

int botaoPedestre (void)
{
    return ( BOTAOPED );
}