/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 30 de septiembre de 2017, 07:33 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main (){
    int numero,contador=1; 
    printf("Ingresa el numero:\n");
    scanf("%d",&numero);
    
    while (numero/10>0){
        numero=numero/10;
                contador++;
               }
    printf("El numero tiene %d caracteres",contador);
    
    return (0);
}


