#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <string.h> // Incluye funciones para manipular cadenas
#include <ctype.h>     // Biblioteca para funciones de caracteres (opcional)

// Solución Ejercicio 1
// 5. Haz un programa que cuente cuántas palabras hay en una frase.

int main() {
    char texto[200];   // Arreglo para almacenar la frase
    int palabras = 0;  // Contador de palabras
    int enPalabra = 0; // Bandera para detectar si estamos dentro de una palabra

    printf("Ingresa una frase: ");
    fgets(texto, sizeof(texto), stdin);

    // Elimina el salto de línea si lo hay
    size_t longitud = strlen(texto);
    if (texto[longitud - 1] == '\n') {
        texto[longitud - 1] = '\0';
        longitud--;
    }

    // Recorre la cadena para contar palabras
    for (int i = 0; i < longitud; i++) {
        if (!isspace(texto[i]) && enPalabra == 0) {
            palabras++;       // Se detecta el inicio de una nueva palabra
            enPalabra = 1;    // Activamos la bandera
        } else if (isspace(texto[i])) {
            enPalabra = 0;    // Salimos de la palabra
        }
    }

    printf("Número de palabras: %d\n", palabras);
    return 0;
}