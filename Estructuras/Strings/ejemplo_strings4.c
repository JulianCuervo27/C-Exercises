#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <string.h> // Incluye funciones para manipular cadenas

// Solución Ejercicio 4
// 4. Escribe un programa que concatene dos cadenas ingresadas por el usuario.

int main() {
    char cadena1[100]; // Primer arreglo de caracteres
    char cadena2[100]; // Segundo arreglo
    char resultado[200]; // Arreglo para guardar la concatenación

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

    // Copia la primera cadena en resultado
    strcpy(resultado, cadena1);

    // Agrega la segunda cadena al final
    strcat(resultado, cadena2);

    printf("Cadena concatenada: %s\n", resultado);
    return 0;
}