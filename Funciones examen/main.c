
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

float AreaCirculo(float r);
void IMC();

int main(int argc, char** argv) {
    int opcion, a, b;
    float r;
    printf("¿Que deseas realizar?\n");
    printf("1 = Saber el area de un circulo\n");
    printf("2 = Saber la masa corporal\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1: printf("Ingresa el radio del circulo\n");
            scanf("%f", &r);
            a = PI * r*r;
            printf("El area del circulo es:%d", a);
            break;

        case 2: IMC();
            break;

    }

    return (EXIT_SUCCESS);
}

float AreaCirculo(float r){
    int a;
    a = PI * r*r;
    return (a);
}
void IMC(){
    int b;
    float m,p;
    printf("Ingresa el peso en Kg.\n");
    scanf("%f",&p);
    printf("Ingresa tu altura en M.\n");
    scanf("%f",&m);
    b= p/m*m;
    printf("Tu masa corporal es:%d",b);
}