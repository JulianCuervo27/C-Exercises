#include <stdio.h>
#include <math.h>

int main() {
    long n;
    int esPrimo = 1; // asumimos que es primo

    printf("Ingrese un número (long): ");
    scanf("%ld", &n);

    if (n <= 1) {
        esPrimo = 0; // 0 y 1 no son primos
    } else {
        for (long i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                esPrimo = 0; // tiene un divisor, no es primo
                break;
            }
        }
    }

    if (esPrimo) {
        printf("%ld es un número primo.\n", n);
    } else {
        printf("%ld NO es un número primo.\n", n);
    }

    return 0;
}
