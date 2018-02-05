/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 24 de agosto de 2017, 10:16 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main () {
    float Num1,Num2,sum,res,multi,div;
    printf ("ingresa el primer numero\n");
    scanf ("%f",&Num1);
    
    printf ("ingresa el segundo numero\n");
    scanf ("%f",&Num2);
   
    sum= Num1+Num2;
    res= Num1-Num2;
    multi= Num1*Num2;
    div= Num1/Num2;
    
    printf("La suma es igual a %f \n",sum);
    printf ("La resta es igual a %f \n",res);
    printf ("La multiplicacion es igual a %f \n",multi);
printf ("La division es igual a %f\n",div);


    return 0;   
}
