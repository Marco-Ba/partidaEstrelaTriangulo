/*
 * File:   delay.c
 * Author: 21193066
 *
 * Created on 18 de Fevereiro de 2021, 15:10
 */


#include <xc.h>
#include "config.h"

void delay (unsigned int t) 
{
    while (1)
    {
        __delay_ms(1);
        --t;
    }    
           
}

