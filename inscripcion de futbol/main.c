/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 3 de septiembre de 2017, 02:53 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define  INSCRIPTION 250
#define MONTHLY_PAYMENT 100


int main (){
    float monthly, inscription, total_amount;
    char yes;
    
    printf("¿Are you student of the university?");
    scanf ("%c", &yes);
   
     inscription = INSCRIPTION;
     monthly = MONTHLY_PAYMENT ;
     
   yes = tolower(yes);     
   if( yes == 'y' ) { 
    inscription= INSCRIPTION *.5;
    monthly = MONTHLY_PAYMENT *.5;       
   }
    total_amount= inscription + monthly;
    printf("the student must pay %f", total_amount);
}

