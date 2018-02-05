

#include <stdio.h>
#include <stdlib.h>

struct auto{
    char marca [20];
    int anio;
    char tipo[20];
    int version;
} auto1 = {"Chevrolet", 2012, "electrico", 29};

int main(int argc, char** argv) {

    printf("La marca es: ", auto1.marca);
    printf("\nEl año es: ", auto1.anio);
    printf("\nEs tipo: ", auto1.tipo);
    printf("\nEs version: ",&auto1.version);


    return (EXIT_SUCCESS);
}

