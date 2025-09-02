#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <string.h> // Incluye funciones para manipular cadenas

// Solución Ejercicio 2
// 2. Crea un programa que cuente cuántas vocales tiene una cadena ingresada por el usuario.

int main() {
    char texto[100];   // Arreglo para almacenar la cadena
    int contador = 0;  // Variable para contar vocales

    printf("Ingresa una cadena: ");
    fgets(texto, sizeof(texto), stdin); // Lee la cadena con espacios

    // Elimina el salto de línea si lo hay
    size_t longitud = strlen(texto);
    if (texto[longitud - 1] == '\n') {
        texto[longitud - 1] = '\0';
        longitud--;
    }

    // Recorre la cadena y cuenta vocales
    for (int i = 0; i < longitud; i++) {
        char c = texto[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contador++;
        }
    }

    printf("Número de vocales: %d\n", contador);
    return 0;
}