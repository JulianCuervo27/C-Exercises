#include <stdio.h>

//Solución Ejercicio 2
// 2. Crea un programa que sume dos números tipo short y muestre el resultado.

int main() {
    short num1, num2, suma;

    printf("Ingresa el primer número: ");
    scanf("%hd", &num1);

    printf("Ingresa el segundo número: ");
    scanf("%hd", &num2);

    suma = num1 + num2;

    printf("La suma de %hd + %hd es: %hd\n", num1, num2, suma);

    return 0;
}