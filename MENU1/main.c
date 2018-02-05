
#include <stdio.h>
#include <stdlib.h>

void numeros();
void area_triangulo();

int main(int argc, char** argv) {
    int i = 1, b, a, opc, area;

    printf("¿Que deseas realizar?\n");
    printf("1 = Imprimir los numeros del 1 al 30\n");
    printf("2 = Saber el area de un triangulo\n");
    scanf("%d", & opc);

    switch (opc) {
        case 1:
            numeros();
         break;

        case 2:
            area_triangulo();
      break;
    }

    return (EXIT_SUCCESS);
}

void numeros() {
    int i;
    printf("Numeros del 1 al 30\n");
    while (i <= 30) {
        printf("%d\n", i);
        i = i + 1;
        return (0);
    }

   