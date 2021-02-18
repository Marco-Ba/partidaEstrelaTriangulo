/*
 * File:   main.c
 * Author: 21193066
 *
 * Created on 18 de Fevereiro de 2021, 15:01
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "contatores.h"
#include "botoes.h"

void main(void) 
{ 
    int estado = 0;
    int t;
    while ( 1 )
    {
        switch ( estado )
        {
            case 0: 
                    botoes_init();
                    contatores_init();    
                    estado =1;
                    break;
            case 1: 
                    if(S1()==1)
                       estado =2;
                    break;
            case 2: 
                    
                    K1(1);
                    K2(1);
                    K3(0);
                    t =5000;
                    estado =3;
                    break;
            case 3: 
                     delay (1);
                    --t;
                    if(t<=0)
                        estado =4;
                    break;
                    
            case 4:
                    K1(1);
                    K2(0);
                    K3(1);
                    if(S0()==1)
                        estado =5;
                    break;
            case 5:
                    K1(0);
                    K2(0);
                    K3(0);
                    estado =1;
                    break;
                         
        }        
    } 
}
