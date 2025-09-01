#include <stdio.h>

// Definimos la union con varios tipos de datos
union Datos {
    int entero;
    float decimal;
    char caracter;
    double grande;
};

int main() {
    printf("Tamaño de int: %zu bytes\n", sizeof(int));
    printf("Tamaño de float: %zu bytes\n", sizeof(float));
    printf("Tamaño de char: %zu bytes\n", sizeof(char));
    printf("Tamaño de double: %zu bytes\n", sizeof(double));

    printf("\nTamaño de la union Datos: %zu bytes\n", sizeof(union Datos));

    return 0;
}
