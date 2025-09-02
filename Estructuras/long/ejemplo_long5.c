#include <stdio.h>

int main() {
    long a, b, producto;

    printf("Ingrese el primer número (long): ");
    scanf("%ld", &a);

    printf("Ingrese el segundo número (long): ");
    scanf("%ld", &b);

    producto = a * b;

    printf("\nEl producto de %ld x %ld = %ld\n", a, b, producto);

    return 0;
}
