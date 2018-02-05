/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: UNIVERIDAD
 *
 * Created on 7 de noviembre de 2017, 12:35 AM
 */

#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int vec [5]={3,5,7,9,2},i,n,b=0,p;
    printf("teclea el valor a buscar");
    scanf("%d",&n);
    for (i=0; i<5;i++)
        if (vec[i]==n){
            b=1;
                    p=i;
            
        }
    if (b==1){
       printf("\nEl numero %i si se encuentra en la posicion %i",n,p);
    }
      
    else 
        printf("\nEl numero %i no se encuentra",n);
    return (0);
    }


























