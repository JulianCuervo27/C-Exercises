#include <stdio.h>

// Definimos el struct para un libro
struct Libro {
    char titulo[50];
    char autor[50];
    int anio;
};

int main() {
    // Creamos un arreglo de 5 libros
    struct Libro biblioteca[5];

    // Pedimos al usuario que ingrese la información de cada libro
    for (int i = 0; i < 5; i++) {
        printf("\nLibro %d\n", i + 1);

        printf("Titulo: ");
        scanf(" %[^\n]", biblioteca[i].titulo); // Lee con espacios

        printf("Autor: ");
        scanf(" %[^\n]", biblioteca[i].autor);

        printf("Año: ");
        scanf("%d", &biblioteca[i].anio);
    }

    // Mostramos la información almacenada
    printf("\n--- Biblioteca ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nLibro %d:\n", i + 1);
        printf("Titulo: %s\n", biblioteca[i].titulo);
        printf("Autor: %s\n", biblioteca[i].autor);
        printf("Año: %d\n", biblioteca[i].anio);
    }

    return 0;
}
