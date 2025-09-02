#include <stdio.h>

int main() {
    char caracter;

    printf("Ingresa un caracter: ");
    scanf("%c", &caracter);

    if (caracter >= '0' && caracter <= '9') {
        printf("El caracter '%c' es un digito numerico.\n", caracter);
    } else {
        printf("El caracter '%c' NO es un digito numerico.\n", caracter);
    }

    return 0;
}