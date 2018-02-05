

#include <stdio.h>
#include <stdlib.h>

struct persona{
    char nombre[20];
    int edad;      
}
personas ={"juan",13};



int main(int argc, char** argv) {
    
    printf ("Su nombre es: ",personas.nombre);
    printf("\nLa edad es: ",personas.edad);
    
    
    
    

    return (EXIT_SUCCESS);
}

