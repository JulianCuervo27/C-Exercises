#include <stdio.h>
#include <math.h>  // Para la función pow

int main() {
    double base, exponente, resultado;

    // Pedir al usuario la base y el exponente
    printf("Ingrese la base: ");
    scanf("%lf", &base);

    printf("Ingrese el exponente: ");
    scanf("%lf", &exponente);

    // Calcular la potencia
    resultado = pow(base, exponente);

    // Mostrar el resultado
    printf("El resultado de %.2lf ^ %.2lf es: %.2lf\n", base, exponente, resultado);

    return 0;
}