

#include <stdio.h>
#include <stdlib.h>

int FactorialNumero(int x);
int DigitosNumero(int num);
int PotenciaNumero(int x, int y);

int main() {
    
    int opc, x, y, fact = 1, contador = 1, num, cont, res = 1;
    do{
    printf ("¿Que deseas hacer?\n");
    printf("1 = Calcula el factorial de un numero\n");
    printf("2 = Calcula cuantos digitos tiene un numero\n");
    printf("3 = calcular la potencia de un numero\n");
    scanf("%d",&opc);
    
    switch (opc) {
        case 1:
            printf("Ingrese el numero\n");
            scanf("%d", &x);
            for (y = x; y > 1; y--)
                fact = fact * y;
            printf("El factorial de %d = %d\n", x, fact);
            break;

        case 2:
            printf("Ingresa el numero:\n");
            scanf("%d", &num);

            while (num / 10 > 0) {
                num = num / 10;
                contador++;
            }
            printf("El numero tiene %d caracteres", contador);
            break;

        case 3:
            printf("Escribe el numero que se elevara a una potencia\n");
            scanf("%d", &x);
            printf("Escribe a que potencia se va a elevar el numero%d", x);
            scanf("%d", &y);
            for (cont = 1; cont <= y; cont++);
            res = res*x;
            printf("El %d elevado a la potencia %d es: %d", x, y, res);
            break;
    }
    printf("Deseas hacer otra operacion\n");
           printf("1=si\n0=no");
           scanf("%d",&opc);
    }
    while(opc==1);
    
    return (0);
}

int FactorialNumero(int x) {
    int y, fact;
    fact = fact * y;
    return (fact);
}

int DigitosNumero(int num) {
    num = num / 10;
    return (num);
}

int PotenciaNumero(int x, int y) {
    int res;
    res = res*x;
    return (res);

}
