/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 6 de septiembre de 2017, 09:52 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main (){
    float promedio;
    
    printf ("Ingresa el promedio");
    scanf ("%f",&promedio);

    if(promedio>=100){
        printf ("excelente");
    }
    else {
        if(promedio>=90&&promedio<=99){
            printf ("Muy bueno");
        }
        else{
            if (promedio>=80&&promedio<=89){
                printf("bueno");
            }
            else {
                if (promedio>=70&&promedio<=79){
                    printf ("Regular");
                }
                else{
                    if(promedio>=60&&promedio<=69){
                        printf("malo");
                    } 
                    }
                    
                }
            }
        }
    
    return 0; }
    
    
    
    
    
    
    
    
    
    
    


