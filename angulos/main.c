/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 30 de octubre de 2017, 01:21 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int  opc,a, b, c;
    float ang;
    do{
    printf("Seleccione que deseas sacar\n");
    printf("1 = Seno de un angulo\n");
    printf("2 = Coseno de un angulo\n");
    printf("3 = tangente de un angulo\n");
    scanf("%d",&opc);
    
    switch (opc){
        case 1: 
            printf("Ingresa el angulo\n");
            scanf("%f",&ang);
            a= sin (ang);
            printf("El seno de %f\n",ang);
            printf("Es:%d\n",a);
            break;
            
        case 2:
            printf("Ingresa el angulo\n");
            scanf("%f",&ang);
           b=cos (ang);
            printf("El coseno de %f\n",ang);
            printf("Es:%d\n",b);
            break;
        
        case 3:
            printf("Ingresa el angulo\n");
            scanf("%f",&ang);
            c= tan(ang);
            printf("La tangente de %f\n",ang);
            printf("Es:%d\n",c);
            break;
    }
   printf("Deseas hacer otra operacion\n");
           printf("1=si\n0=no");
           scanf("%d",&opc);
    }
    
    while(opc==1);
    
    
    return (0);
}



