#include <stdio.h>
#include <string.h>

// Definimos el struct Persona
struct Persona {
    char nombre[50];
    int edad;
};

// Función para comparar dos personas
int compararPersonas(struct Persona p1, struct Persona p2) {
    if (strcmp(p1.nombre, p2.nombre) == 0 && p1.edad == p2.edad) {
        return 1; // Son iguales
    } else {
        return 0; // Son diferentes
    }
}

int main() {
    struct Persona persona1, persona2;

    // Ingreso de datos de la primera persona
    printf("Ingrese el nombre de la primera persona: ");
    scanf(" %[^\n]", persona1.nombre);
    printf("Ingrese la edad: ");
    scanf("%d", &persona1.edad);

    // Ingreso de datos de la segunda persona
    printf("\nIngrese el nombre de la segunda persona: ");
    scanf(" %[^\n]", persona2.nombre);
    printf("Ingrese la edad: ");
    scanf("%d", &persona2.edad);

    // Comparar
    if (compararPersonas(persona1, persona2)) {
        printf("\nLas dos personas son IGUALES.\n");
    } else {
        printf("\nLas dos personas son DIFERENTES.\n");
    }

    return 0;
}
