/*
 * File:   botoes.c
 * Author: 21193066
 *
 * Created on 18 de Fevereiro de 2021, 15:21
 */


#include <xc.h>

void botoes_init(void)
{
    TRISDbits.TRISD0 = 1;
    TRISDbits.TRISD1 = 1;
}

int S1 (void)
{
    return(PORTDbits.RD1); 
}

int S0 (void)
{
    return(PORTDbits.RD0);
}