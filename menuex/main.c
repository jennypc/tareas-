/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 1 de diciembre de 2017, 02:41 PM
 */

#include <stdio.h>
#include <stdlib.h>

int par_impar( int numero);
int alfabeto ( int i);

int main(int argc, char** argv) {
    int opcion,numero,i;
    
    printf("¿Que deseas realizar?\n");
    printf("1 = saber si un numero es par o impar\n");
    printf ("2 = El alfabeto al reves\n");
    scanf("%d",&opcion);
    switch (opcion){
       
        case 1: 
            par_impar (numero);
            break;
            
        case 2: 
            alfabeto (i);
            break;
    }

    return (EXIT_SUCCESS);
}
int par_impar(int numero){
    printf("Ingresa el numero\n");
    scanf("%d",& numero);
    if (numero%2==0){
        printf("El numero es par");
    }
    else{
        printf("El numero es impar");
    }
    return (numero);
}

int alfabeto(int i){
    
    for( i=90; i>=65 ; i--){
        
    }
    
    
}


