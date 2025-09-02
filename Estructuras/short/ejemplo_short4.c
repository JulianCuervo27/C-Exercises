#include <stdio.h>

// Solución Ejemplo - 4
// 4. Escribe un programa que cuente cuántos números pares hay en un arreglo de short.

int main() {
    short numeros[5];
    int contador = 0;

    // Entrada de datos
    for (int i = 0; i < 5; i++) {
        printf("Ingresa el número %d: ", i + 1);
        scanf("%hd", &numeros[i]);
    }

    // Conteo de pares
    for (int i = 0; i < 5; i++) {
        if (numeros[i] % 2 == 0) {
            contador++;
        }
    }

    printf("\nCantidad de números pares: %d\n", contador);

    return 0;
}