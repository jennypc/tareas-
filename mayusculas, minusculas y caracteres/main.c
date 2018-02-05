/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 4 de septiembre de 2017, 10:27 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main (){
   char a;
   
   printf ("Ingresa el caracter \n");
   scanf ("%c",&a);
   
   if (a>=65&& a<=90) {
       printf ("%c,Son mayusculas",a);
   }
    else { 
       if (a>=97&& a<=122) {
        printf ("son minusculas");
   }
    else {
        if (a>=32&&a<=47) {
       printf (" es un caracter");
   } 
    else {
        if (a>=48&&a<=57) {
       printf ("es un numero");
   }
   }
       }
   }
   return 0; } 
   
                   
    
    
    
    
    
    
    
    
    
    
    
    
    

