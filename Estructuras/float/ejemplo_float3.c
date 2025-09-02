#include <stdio.h>

int main() {
    float a, b, c, promedio;

    printf("Ingrese tres numeros reales: ");
    scanf("%f %f %f", &a, &b, &c);

    promedio = (a + b + c) / 3;

    printf("El promedio es: %.2f\n", promedio);

    return 0;
}