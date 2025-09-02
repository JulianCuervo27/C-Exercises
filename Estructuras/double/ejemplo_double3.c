#include <stdio.h>

int main() {
    double n1, n2, n3, n4, n5, promedio;

    // Pedir los 5 números al usuario
    printf("Ingrese el primer numero: ");
    scanf("%lf", &n1);

    printf("Ingrese el segundo numero: ");
    scanf("%lf", &n2);

    printf("Ingrese el tercer numero: ");
    scanf("%lf", &n3);

    printf("Ingrese el cuarto numero: ");
    scanf("%lf", &n4);

    printf("Ingrese el quinto numero: ");
    scanf("%lf", &n5);

    // Calcular el promedio
    promedio = (n1 + n2 + n3 + n4 + n5) / 5;

    // Mostrar el resultado
    printf("El promedio es: %lf\n", promedio);

    return 0;
}