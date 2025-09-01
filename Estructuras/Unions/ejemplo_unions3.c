#include <stdio.h>

// Definimos la unión
union Valor {
    int entero;
    char caracter;
};

int main() {
    union Valor v;

    // Caso 1: entero
    v.entero = 100;
    printf("Entero almacenado: %d\n", v.entero);

    // Caso 2: caracter (sobrescribe al entero)
    v.caracter = 'A';
    printf("Caracter almacenado: %c\n", v.caracter);

    return 0;
}
