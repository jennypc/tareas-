

#include <stdio.h>
#include <stdlib.h>

void inicio();
void FactorialNumero();

int main(int argc, char** argv) {
    int i, x;
    long int fact = 1;
    void inicio();
    for (i = x; i > 1; i--)
        fact = fact * i;
    printf("El factorial de %d = %ld", x, fact);
    return (EXIT_SUCCESS);
}

void inicio() {
    int x;
    printf("Dame el número para calcular su factorial\n");
    scanf("%d", &x);
}

void FactorialNumero() {
    int fact, i;
     fact = fact * i;
   
}