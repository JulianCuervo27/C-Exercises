#include <stdio.h>

int main() {
    double numero;

    // Pedir el número al usuario
    printf("Ingrese un numero: ");
    scanf("%lf", &numero);

    // Verificar si es positivo, negativo o cero
    if (numero > 0) {
        printf("El numero es positivo.\n");
    } else if (numero < 0) {
        printf("El numero es negativo.\n");
    } else {
        printf("El numero es cero.\n");
    }

    return 0;
}