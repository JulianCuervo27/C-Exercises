#include <stdio.h>

int main() {
    char palabra[100];   // Para almacenar la palabra (máximo 99 caracteres)
    char letra;
    int i = 0;
    int contador = 0;

    printf("Ingresa una palabra: ");
    scanf("%s", palabra);  // Lee una palabra sin espacios

    printf("Ingresa una letra a buscar: ");
    scanf(" %c", &letra);  // El espacio antes de %c evita problemas con el buffer

    // Recorre la palabra carácter por carácter
    while (palabra[i] != '\0') {
        if (palabra[i] == letra) {
            contador++;
        }
        i++;
    }

    printf("La letra '%c' aparece %d veces en la palabra \"%s\".\n", letra, contador, palabra);

    return 0;
}