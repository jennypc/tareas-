/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 23 de agosto de 2017, 10:45 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define PreLi 100
#define PreLa 2.35
#define PreCu 23

int main() {
    int libros,cuadernos,lapices;
    float vtotal;
    
    printf ("¿cuantos libros vendio?");
    scanf ("%d",&libros);
    printf ("¿cuantos cuadernos vendio?");
    scanf ("%d",&cuadernos);
    printf ("¿cuantos lapices vendio?");

    scanf ("%d",&lapices);
    
    vtotal= libros*PreLi + cuadernos*PreCu + lapices*PreLa;
    printf ("La venta total fue de $ %d",vtotal);
    
    
    return ; 
    
}

