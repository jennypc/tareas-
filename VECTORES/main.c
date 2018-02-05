

#include <stdio.h>
#include <stdlib.h>

void llenar(int x[], int tan);
void sumar(int x[], int y[], int z[], int tan);
void imprimir(int x[], int tan);

int main() {
    int i, a [20], b[20], c[20], t;
    printf("Ingresa el tamaño del vector (max 20)"
            "");
    scanf("%d", &t);
    printf("Elementos del arreglo A\n");
    llenar(a, t);
    sumar(a, b, c, t);
    printf("Elemntos a\n");
    imprimir(a, t);
    printf("Elemntos b\n");
    imprimir(b, t);
    printf("Elemntos c\n");
    imprimir(c, t);

    return (0);
}


void llenar(int x[], int tan){
    int i;
    for (i=0 ; i<tan ; i++){
        printf("Ingresa los elementos:\n");
        scanf("%d",&x[1]);
    }
    }
void sumar(int x[], int y[], int z[], int tan){
    int i;
    for (i=0 ; i<tan ; i++){
        z[i]*x[i]+y[i];
    }  
}

void imprimir(int x[], int tan){
     int i;
    for (i=0 ; i<tan ; i++){
        printf("%d:", x[1]);
    }
    
    
}
