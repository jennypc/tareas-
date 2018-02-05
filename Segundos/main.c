/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 12 de octubre de 2017, 03:50 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int hrs, s, min;
    printf("Ingresa los segundos\n");
    scanf("%d", &s);

    hrs = s / 3600;
    min = s / 60;

    printf("Son %d horas\n", hrs);
    printf("son %d minutos\n", min);
    printf("Son %d segundos\n", s);

    return (0);

}

