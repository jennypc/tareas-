

#include <stdio.h>
#include <stdlib.h>

float CelsiusF(float a);
float FCelsius(float a);
float CelsiusK(float a);
float KCelsius(float a);

int main() {
    float a, c;
    int opc;
    do {
        printf("Que deseas realizar?\n");
        printf("1 = Celsius a Fahrenheit\n");
        printf("2 = Fahrenheit a Celsius\n");
        printf("3 = Celsius a Kelvin\n");
        printf("4 = kelvin a celsius\n");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                printf("Ingresa los grados celsius a convertir\n");
                scanf("%f", &a);
                c = (1.8 * a) + 32;
                printf("los grados a fahrenheit son: %f\n", c);
                break;
            case 2:
                printf("Ingresa los grados fahrenheit a convertir \n");
                scanf("%f", &a);
                c = (a - 32) / 1.8;
                printf("los grados a celsius son: %f\n", c);
                break;
            case 3:
                printf("Ingresa los grados celcius\n");
                scanf("%f", &a);
                c = a + 273.15;
                printf("los grados kelvin son:%.3f\n", c);
                break;

            case 4:
                printf("Ingresa los grados kelvin\n");
                scanf("%f", &a);
                c = a - 273.15;
                printf("los grados celsius son:%.3f\n", c);
                break;

        }
        printf("Deseas hacer otra operacion\n");
        printf("1=si\n0=no");
        scanf("%d", &opc);


    } while (opc == 1);


    return (0);

}

float CelsiusF(float a) {
    float c;
    c = (1.8 * a) + 32;
    return (c);
}

float FCelsius(float a) {
    float c;
    c = (a - 32) / 1.8;
    return (c);
}

float CelsiusK(float a) {
    float c;
    c = a + 273.15;
    return (c);
}

float KCelsius(float a) {
    float c;
    c = a - 273.15;
    return (c);
}