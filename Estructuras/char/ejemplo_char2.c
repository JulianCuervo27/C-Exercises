#include <stdio.h>

int main() {
    char letra;

    printf("Ingresa una letra: ");
    scanf("%c", &letra);

    // Comparar directamente sin convertir a minúscula ni validar más
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("'%c' es una vocal.\n", letra);
    } else {
        printf("'%c' es una consonante.\n", letra);
    }

    return 0;
}