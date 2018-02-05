/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 6 de septiembre de 2017, 10:23 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int main (){
    int operacion;
    float a,b,r,B,p,ap;
   do{
    printf (" 1=area_cuadrado \n 2=area_triangulo \n 3=area_circulo \n 4=area_rectangulo \n 5=area_trapecio \n 6=area_pentagono \n");
    scanf("%d",&operacion);
    
    
    switch (operacion)
    {
        case 1: 
        printf("ingrese la base\n");
        scanf("%f",&b);
        printf ("ingresa la altura\n");
        scanf ("%f",&a);
        operacion=b*a;
        printf("El area del cuadrado es %d\n", operacion);
        break;
        
        case 2:
        printf("ingrese la base\n");
        scanf("%f",&b);
        printf ("ingresa la altura \n");
        scanf ("%f",&a);
        operacion=b*a/2;
        printf("El area del triangulo es %d\n", operacion);
        break;
        
        case 3:
        printf ("Ingresa el radio\n");
        scanf("%f",&r);
        operacion= PI*r*r;
        printf("El area del circulo es %d\n", operacion);
        break;
        
        case 4:
            printf("ingrese la base del rectangulo\n");
            scanf("%f",&b);
            printf("ingrese la altura del rectangulo\n");
            scanf ("%f",&a);
            operacion= b*a;
            printf("El area del rectangulo es %d\n",operacion);
            break;
            
        case 5:
            printf("Ingresa la base mayor\n");
            scanf("%f",&B);
            printf("Ingresa la base menor\n");
            scanf("%f",&b);
            printf("Ingresa la altura\n");
            scanf("%f",&a);
            operacion=B+b/2*a;
            printf("El area de el trapecio es %d\n",operacion);
            break;
            
        case 6:
            printf("Ingresa el perimetro del pentagono\n");
            scanf("%f",&p);
            printf("Ingresa la apotema\n");
            scanf("%f",&ap);
            operacion=p*ap/2;
            printf("El area del pentagono es %d\n",operacion);
            break;
            
    }
    printf("¿Desea obtener el area de otra figura?\n");
    printf("1=si\n0=no");
    scanf("%d",&operacion);
    }
    while(operacion==1);
    
    
        return(0);
}
   
    
    
    
    
    
    
    



