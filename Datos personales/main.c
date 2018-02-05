/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 12 de octubre de 2017, 03:34 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    char nombre [30], domicilio [30] ;
    int edad;
    printf("Ingresa tu nombre completo\n");
    scanf("%s", &nombre);
    printf("Ingresa tu domicilio\n");
    scanf("%s", &domicilio);
    printf("ingresa tu edad\n");
    scanf("%d", &edad);
    printf("Los datos personales son\n");
    printf("tu nombre es %s\n",nombre);
    printf("tu domicilio es %s\n",domicilio);
    printf("tu edad es%d\n",edad);
    
    return (0);

}

