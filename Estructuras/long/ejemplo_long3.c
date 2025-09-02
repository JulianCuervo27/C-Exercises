#include <stdio.h>

int main() {
    int n, i, contador = 0;

    printf("Ingrese la cantidad de elementos del arreglo: ");
    scanf("%d", &n);

    long arreglo[n];

    // Ingreso de los elementos
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%ld", &arreglo[i]);
    }

    // Contar números impares
    for (i = 0; i < n; i++) {
        if (arreglo[i] % 2 != 0) {
            contador++;
        }
    }

    printf("\nCantidad de números impares en el arreglo: %d\n", contador);

    return 0;
}
