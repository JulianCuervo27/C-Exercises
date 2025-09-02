#include <stdio.h>

int main() {
    double num1, num2, suma;

    // Pedir al usuario los dos números
    printf("Ingrese el primer numero: ");
    scanf("%lf", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%lf", &num2);

    // Realizar la suma
    suma = num1 + num2;

    // Mostrar el resultado
    printf("La suma es: %lf\n", suma);

    return 0;
}