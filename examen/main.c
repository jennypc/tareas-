
#include <stdio.h>
#include <stdlib.h>

int par_impar (int numero);
int  (int i);
int main(int argc, char** argv) {

    int opcion, numero, i;
    
    printf("¿Que deseas hacer?\n");
    printf("1 = Saber si un numero es par o impar\n");
    printf("2 = Ver el alfabeto de manera invertida\n");
    scanf ("%d",&opcion);
    
    switch(opcion){
        case 1 : 
            par_impar(numero);
        break;
        
        case 2: 
            alfabeto(i);
        
            break;
        
        
        
        
    }
    
    return (EXIT_SUCCESS);
}
int par_impar (int numero){
    printf("Ingresa un numero\n");
        scanf("%d",&numero);
        if (numero%2==0){
            printf("El numero es par");
        }
        else{
            printf("EL numero es impar");
        }
        return (numero);
    
}

int alfabeto(int i){
   
    for(i=65;i>90;i++){
            
        }
           return (i); 
    
}
