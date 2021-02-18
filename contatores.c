/*
 * File:   contatores.c
 * Author: 21193066
 *
 * Created on 18 de Fevereiro de 2021, 15:15
 */


#include <xc.h>
#include "config.h"

void contatores_init(void) 
{
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;
    PORTDbits.RD5 = 0;
    PORTDbits.RD5 = 0;
    PORTDbits.RD5 = 0;
} 

void K1 (int estado)
{
    PORTDbits.RD7 = estado;
}
int K1status (void)
{
    return( PORTDbits.RD7);
}

void K2 (int estado)
{
    PORTDbits.RD6 = estado;
}

void K3 (int estado)
{
    PORTDbits.RD5 = estado;
}