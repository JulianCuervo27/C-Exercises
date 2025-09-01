#include <stdio.h>

// Definimos el struct Persona
struct Persona {
    char nombre[50];
    int edad;
    char direccion[100];
};

int main() {
    struct Persona p;

    // Pedimos los datos de la persona
    printf("Ingrese el nombre: ");
    scanf(" %[^\n]", p.nombre); // lee con espacios

    printf("Ingrese la edad: ");
    scanf("%d", &p.edad);

    printf("Ingrese la direccion: ");
    scanf(" %[^\n]", p.direccion);

    // Imprimimos los datos
    printf("\n--- Datos de la Persona ---\n");
    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %d\n", p.edad);
    printf("Direccion: %s\n", p.direccion);

    return 0;
}
