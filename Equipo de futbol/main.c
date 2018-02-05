/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 12 de octubre de 2017, 04:04 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int opcion, a = 0, b = 0;
    float estatura;
    for (a = 0; a <= 5;) {
        printf("¿Que sexo eres?: \n 1=Hombre\n 2=Mujer\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("ingresa tu estatura\n");
                scanf("%f", &estatura);

                if (estatura >= 1.60 && estatura <= 1.75) {
                    printf("Estas en el equipo varonil");
                    
                } else {
                    printf("No eres aceptado en el equipo.");
                }
                break;
            case 2:
                printf("ingresa tu estatura\n");
                scanf("%f", &estatura);
                if (estatura >= 1.60) {
                    printf("Estas en el equipo femenil");
                    
                } else {
                    printf("No eres aceptada en el equipo");
                }
                break;
        }

    }
    return (0);
}


