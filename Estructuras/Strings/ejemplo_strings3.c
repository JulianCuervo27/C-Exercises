#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <string.h> // Incluye funciones para manipular cadenas

// Solución Ejercicio 3
// 3. Realiza un programa que compare dos cadenas y diga si son iguales o diferentes.

int main() {
    char cadena1[100]; // Primer arreglo de caracteres
    char cadena2[100]; // Segundo arreglo de caracteres

    printf("Ingresa la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);

    printf("Ingresa la segunda cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);

    // Elimina el salto de línea en ambas cadenas
    size_t len1 = strlen(cadena1);
    if (cadena1[len1 - 1] == '\n') {
        cadena1[len1 - 1] = '\0';
    }

    size_t len2 = strlen(cadena2);
    if (cadena2[len2 - 1] == '\n') {
        cadena2[len2 - 1] = '\0';
    }

    // Compara las cadenas
    if (strcmp(cadena1, cadena2) == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}