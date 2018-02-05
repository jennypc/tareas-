/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 24 de octubre de 2017, 11:37 PM
 */

#include <stdio.h>
#include <stdlib.h>

int FactorialNumero(int x);
int DigitosNumero(int n1);
int potencia(int n1, int b);

int main() {

    int x, b, n1, contador = 1, opc, cont, numero;
    long fact;
    printf("Que desear realizar?\n");
    printf("1 = Calcular el factorial de un numero\n");
    printf("2 = Saber cuantos digitos tiene un numero\n");
    printf("3 = Calcular la potencia de un numero ");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            printf("Ingresa el numero\n");
            scanf("%d", &x);
            fact = 1
            for (cont = 1; cont <= x; cont--)
                fact = cont * fact;
            printf("El factorial de %d es %d", x, fact);
            break;

        case 2:
            printf("Ingresa el numero:\n");
            scanf("%d", &n1);
while (n1 / 10 > 0) {
                n1 = n1 / 10;
                contador++;
            }
            printf("El numero tiene %d caracteres", contador);
            break;







    }
}