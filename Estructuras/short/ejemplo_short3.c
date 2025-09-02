#include <stdio.h>

// Solución Ejemplo - 3
// 3. Realiza un programa que determine si un número short es múltiplo de 5.

int main() {
    short numero;

    printf("Ingresa un número: ");
    scanf("%hd", &numero);

    if (numero % 5 == 0) {
        printf("El número %hd es múltiplo de 5.\n", numero);
    } else {
        printf("El número %hd NO es múltiplo de 5.\n", numero);
    }

    return 0;
}