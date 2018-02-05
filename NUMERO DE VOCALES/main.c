

#include <stdio.h>
#include <stdlib.h>
#define max_cadena 100 

int main(int argc, char** argv) {
    char cadena[max_cadena];
    int i, j;
    //int vocales[5];
    int vocales[5] = {0};
    char tvocales[] = {'a', 'e', 'i', 'o', 'u'};

    printf("Introduce una frase: ");
    gets(cadena);

    i = 0;
    while (cadena[i] != '\0') {
        for (j = 0; j < 5; j++)
            if (cadena[i] == tvocales[j])
                vocales[j]++;
        i++;
    }

    for (i = 0; i < 5; i++) {
        printf("\nLa %c aparece en \"%s\" %d veces", tvocales[i], cadena, vocales[i]);
    }


    return (EXIT_SUCCESS);
}
