/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 27 de octubre de 2017, 03:29 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

void menu();
float AreaCirculo(float R);
float AreaAro(float r);
float VolumenCilindro(float altura);
int operacion;

int main() {
    float R,r,altura;
   do {
        menu();
        switch (operacion) {
            case 1:
                printf("Igresa el radio del circulo\n");
                scanf("%f", &R);
                operacion = PI * R*R;
                printf("El area del circulo es: %d",operacion);
                break;

            case 2:
                printf("Ingresa el radio menor\n");
                scanf("%f", r);
                operacion = AreaCirculo - pow(r,2);

                printf("El area de el aro es:%d",operacion);
                break;

            case 3:
                printf("Ingresa la altura\n") ;
                        scanf("%f", &altura);
               operacion = altura * AreaCirculo;
                printf("El volumen del cilindro es:%d",operacion);
                break;

        }

        printf("Deseas hacer otra operacion\n");
        printf("1=si\n0=no");
        scanf("%d", &operacion);


    }    while (operacion == 1);
    return (0);
}

void menu (){
   printf("Que deseas haces?\n");
        printf("1 = Area de un circulo\n");
        printf("2 = Area de un aro\n");
        printf("3 = volumen de un cilindro\n");
        scanf("%d", &operacion); 
   }
float AreaCirculo(float R) {
    operacion= PI * R*R;
    return (operacion);
}

float AreaAro(float r) {
    operacion = AreaCirculo - pow(r,2);
    return (operacion);
}

float AreaCilindro(float altura) {
   operacion = altura * AreaCirculo;
    return (operacion);
}



