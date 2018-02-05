/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 24 de agosto de 2017, 11:42 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define bdm 1000
#define bdq 500
#define bdd 200
#define bdc 100
#define bdci 50
#define bdv 20
#define moneda 10
#define mone 5

int main (){
    int pesos,cien,mil,quin,dos,cinc,vein,diez,ci ;
    
    printf ("ingresa la cantidad\n");
    scanf ("%d",&pesos);
    
    mil= pesos/bdm;
    quin= pesos/bdq;
    dos= pesos/bdd;
    cien=pesos/bdc;
    cinc=pesos/bdci;
    vein=pesos/bdv;
    diez=pesos/moneda;
    ci=pesos/mone;
    
    printf("billetes de mil tienes %d \n",mil);
    printf("billetes de quinientos tienes %d\n",quin);
    printf("billetes de docientos tienes %d\n",dos);
    printf("billetes de cien tienes %d\n",cien);
    printf("billetes de cincuenta tienes %d\n",cinc);
    printf("billestes de veinte tienes %d\n",vein);
    printf("monedas de diez tienes %d\n",diez);
    printf("monedas de cinco tienes %d\n",ci);
    
   return 0;    
    
}
