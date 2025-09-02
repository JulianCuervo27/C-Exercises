#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1; // para evitar desbordamiento en números grandes

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("No existe factorial de numeros negativos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("El factorial de %d es: %llu\n", n, factorial);
    }

    return 0;
}