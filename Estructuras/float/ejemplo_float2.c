#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Ingrese la temperatura en Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("La temperatura en Fahrenheit es: %.2f\n", fahrenheit);

    return 0;
}