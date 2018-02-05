/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 24 de agosto de 2017, 10:38 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int b,h,altura,peri,are;
    
    printf ("ingresa la base del triangulo\n");
    scanf ("%d",&b);
    
    h=sqrt(3)*b/2;
    are= sqrt (3)/4*pow(b,2);
    peri= b*3;
    
    printf ("el area del triangulo es %d\n", are);
    printf ("el perimetro de el triangulo es %d",peri);
    
   return 0;
   
}
