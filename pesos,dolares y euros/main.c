/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 24 de agosto de 2017, 04:58 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define dolar 17
#define euro 20.50

int main (){
    
    int cnatidadpesos,conversionD,conversionE;
    float pesos;
    
    printf("¿cuanto quieres convertir en dolares?\n");
    scanf ("%f",&pesos);
    printf("¿cuanto quieres convertir en euros?\n");
    scanf ("%f",&pesos);
    

    conversionD= pesos/dolar;
    conversionE= pesos/ euro;
    
    printf("dolares %d",conversionD);
    printf("euros %d",conversionE);
    
    return 0 ;

}
        
