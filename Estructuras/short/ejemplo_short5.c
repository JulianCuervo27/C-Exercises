#include <stdio.h>

// Solución Ejemplo - 5
// 5. Haz un programa que convierta un número short a binario.

int main() {
    short numero;
    unsigned short mascara = 1 << 15; // Comienza con el bit más grande (posición 15)
    int i;

    printf("Ingresa un número: ");
    scanf("%hd", &numero);

    printf("Binario: ");
    for (i = 0; i < 16; i++) {
        // Imprime 1 o 0 según el bit en el que se encuentre
        if (numero & mascara) {
            printf("1");
        } else {
            printf("0");
        }

        // Para que se vea más ordenado, lo separa cada 4 bits
        if ((i + 1) % 4 == 0) {
            printf(" ");
        }

        mascara >>= 1; // Desplaza la máscara hacia la derecha
    }

    printf("\n");
    return 0;
}