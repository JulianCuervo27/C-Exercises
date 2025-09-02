#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <string.h> // Incluye funciones para manipular cadenas

// Solución Ejercicio 1
// 1. Escribe un programa que lea una cadena y la imprima al revés.

int main() {
    char texto[100];   // Arreglo para almacenar la cadena (hasta 99 caracteres + '\0')

    printf("Ingresa una cadena: ");
    fgets(texto, sizeof(texto), stdin); // Lee la cadena con espacios (incluye '\n' al final)

    // Elimina el salto de línea si lo hay
    size_t longitud = strlen(texto);
    if (texto[longitud - 1] == '\n') {
        texto[longitud - 1] = '\0';
        longitud--; // Ajusta la longitud real
    }

    printf("Cadena al revés: ");
    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", texto[i]); // Imprime cada carácter desde el final
    }

    printf("\n"); // Salto de línea final
    return 0;
}