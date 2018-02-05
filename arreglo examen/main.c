

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int lista[15], i, suma, contador;
    for (i = 0; i <= 15; i++) {


        for (contador = 1; contador <= lista[i]; contador++)
            suma = suma + contador;
    }
    printf("La sumas es %d", suma);



    return (EXIT_SUCCESS);
}

