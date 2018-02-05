
#include <stdio.h>
#include <stdlib.h>

main(void) {

    int aleatorio, i;
    printf("Obteniendo serie de numeros\n");
            long random();
    for (i = 1; i <= 10; i++) {
        aleatorio = rand()%11;
                printf("%d, %d\n",random(11),aleatorio);
    }

    return (0);
}