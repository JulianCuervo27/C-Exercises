#include <stdio.h>

// Solución Ejemplo 1
// 1. Escribe un programa que almacene la edad de varias personas usando variables short.

int main() {
    short edad1, edad2, edad3;

    printf("Ingresa la primera edad: ");
    scanf("%hd", &edad1);

    printf("Ingresa la segunda edad: ");
    scanf("%hd", &edad2);

    printf("Ingresa la tercera edad: ");
    scanf("%hd", &edad3);

    printf("\nLas edades ingresadas son:\n");
    printf("Edad 1: %hd\n", edad1);
    printf("Edad 2: %hd\n", edad2);
    printf("Edad 3: %hd\n", edad3);

    return 0;
}