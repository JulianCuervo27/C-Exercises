#include <stdio.h>

int main() {
    long a, b, suma;

    printf("Ingrese el primer número (long): ");
    scanf("%ld", &a);

    printf("Ingrese el segundo número (long): ");
    scanf("%ld", &b);

    suma = a + b;

    printf("\nLa suma de %ld + %ld = %ld\n", a, b, suma);

    return 0;
}
