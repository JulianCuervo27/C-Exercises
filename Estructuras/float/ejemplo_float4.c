#include <stdio.h>

int main() {
    float x, y;

    printf("Ingrese dos numeros decimales: ");
    scanf("%f %f", &x, &y);

    if (x > y)
        printf("%.2f es mayor que %.2f\n", x, y);
    else if (y > x)
        printf("%.2f es mayor que %.2f\n", y, x);
    else
        printf("Ambos numeros son iguales.\n");

    return 0;
}