/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 24 de octubre de 2017, 10:33 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int AreaCirculo(int n1);
int AreaTriangulo(int n1, int n2);

int main() {

    int n1, n2, a, b, opc;

    printf("¿Que deseas realizar?\n");
    printf("1 = Area de un circulo\n");
    printf("2 = Area de un triangulo\n");
scanf("%d", &opc);
    switch (opc ) {
        case 1:
            AreaCirculo(n1);
            break;

        case 2:
            AreaTriangulo(n1,n2);
            break;
    }



    return (0);
}

int AreaCirculo(int n1) {
    int a;
    printf("Ingrese el radio\n");
    scanf("%d", &n1);
    a = PI * n1*n1;
    printf("El area de el circulo es: %d\n", a);
    return (a);
}

int AreaTriangulo(int n1, int n2) {
    int b;
    printf("Ingrese la base\n");
    scanf("%d", &n1);
    printf("Ingresa la altura\n");
    scanf("%d", &n2);
    b = n1 * n2 / 2;
    printf("El area del triangulo es: %d\n", b);
    return (b);
}

