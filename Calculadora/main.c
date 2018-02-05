
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int operacion,a, b, opcion;
    do{
    printf("¿Que operacion desea hacer?\n 1=Suma\n 2=Resta\n 3=Multiplicacion\n 4=DIvision\n 5=Raiz_cuadrada\n");
    scanf("%d",&operacion);
    
    switch (operacion){
        case 1: printf("ingresa el primer numero\n");
        scanf("%d",&a);
        printf("ingresa el segundo numero\n");
        scanf("%d",&b);
        operacion=a+b ;
        printf("el resultado de la suma es %d \n",operacion);
        break ;
        
        case 2: printf("Ingresa el primer numero\n");
        scanf("%d",&a);
        printf("ingresa el segundo numero\n");
        scanf("%d",&b);
        operacion= a-b;
        printf("El resultado de la resta es \n%d ", operacion);
        break;
        
        case 3:printf("Ingresa el primer numero\n");
        scanf("%d",&a);
        printf("ingresa el segundo numero\n");
        scanf("%d",&b);
        operacion= a*b;
        printf("El resultado de la multiplicacion es\n %d", operacion);
        break;
        
        case 4: printf("Ingresa el primer numero\n");
        scanf("%d",&a);
        printf("ingresa el segundo numero\n");
        scanf("%d",&b);
        operacion= a/b;
        printf("El resultado de la divion es \n%d ", operacion);
        break;
        
        case 5: printf("Ingresa el numero\n");
        scanf("%d",&a);
        operacion= sqrt (a) ;
        printf("El resultado de la raiz_cuadrada es \n %d", operacion);
        
    }
        printf("desea hacer otra operacion\n");
        printf("1=SI\n0=no\n");
        scanf("%d",&opcion);
       
    
    }
    while(opcion==1);
    
    return (0);
    
}
        
        
        
        
        
        
        
        
        
        
        
        
    
    
    
    
    
    
    
    
    
  

