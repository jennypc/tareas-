/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 17 de octubre de 2017, 08:57 PM
 */

#include <stdio.h>
#include <stdlib.h>
void funcion_uno();
void hipotenusa();
void area();
void angulo();
void final();

int main() {

    int a, b, operacion;
    do {
        funcion_uno();
        printf("Elige la operacion que deseas hacer:\n 1=hipotenusa de un triangulo\n 2=area de un triangulo\n 3=angulo de un triangulos\n");
        scanf("%d", &operacion);
        switch (operacion) {
            case 1:
                hipotenusa();
                break;
            case 2:
                area();
                break;
            case 3:
                angulo();
                break;

        }
        final();
    }    while (operacion == 1);
    return (0);
}

void funcion_uno() {
    int operacion;
}

void hipotenusa() {
    int a, b, operacion;
    printf("ingresa el cateto opuesto\n");
    scanf("%d", &b);
    printf("ingresa el cateto adyacente\n");
    scanf("%d", &a);
    operacion = b*a;
    printf("La hipotenusa del triangulo es %d\n", operacion);
}

void area() {
    int a, b, operacion;
    printf("ingresa la base del triangulo\n");
    scanf("%d", &b);
    printf("ingresa la altura del triangulo\n");
    scanf("%d", &a);
    operacion = b * a / 2;
    printf("El area del triangulo es %d \n", operacion);
}

void angulo() {
    int a, b, operacion;
    printf("ingresa un angulo de el triangulo\n");
    scanf("%d", &a);
    printf("ingresa el otro angulo del triangulo\n");
    scanf("%d", &b);
    operacion = a + b;
    operacion = 180 - operacion;
    printf("El otro angulo es de %d\n", operacion);

}

void final() {
    int operacion;
    printf("¿Desea hacer otra operacion?\n");
    printf("1=si\n0=no");
    scanf("%d", &operacion);
}









