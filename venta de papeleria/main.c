/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 24 de agosto de 2017, 04:41 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define PreLi 100
#define PreCu 23
#define PreLa 2.35

int main() {
    int libros,cuadernos,lapices;
    float Vtotal;
    printf (" ¿Cuantos libros vendio?\n");
    scanf ("%d",&libros);
    
    printf ("¿Cuantos cuadernos vendio?\n");
    scanf ("%d",&cuadernos);

    printf("¿cuantos lapices vendio?\n");
    scanf ("%d",&lapices);
    
    Vtotal= libros*PreLi + cuadernos*PreCu + lapices*PreLa;
    
    printf ("Se vende un total de $ %f\n",Vtotal);

    return 0;
}

