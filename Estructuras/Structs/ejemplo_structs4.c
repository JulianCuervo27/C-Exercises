#include <stdio.h>

#define MAX_ESTUDIANTES 3
#define MAX_NOTAS 4

// Definimos el struct para un estudiante
struct Estudiante {
    char nombre[50];
    float notas[MAX_NOTAS];
    float promedio;
};

int main() {
    struct Estudiante grupo[MAX_ESTUDIANTES];

    // Ingreso de datos
    for (int i = 0; i < MAX_ESTUDIANTES; i++) {
        printf("\nIngrese el nombre del estudiante %d: ", i + 1);
        scanf(" %[^\n]", grupo[i].nombre);

        float suma = 0;
        for (int j = 0; j < MAX_NOTAS; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &grupo[i].notas[j]);
            suma += grupo[i].notas[j];
        }
        grupo[i].promedio = suma / MAX_NOTAS;
    }

    // Mostrar resultados
    printf("\n--- Promedios de los estudiantes ---\n");
    for (int i = 0; i < MAX_ESTUDIANTES; i++) {
        printf("\nEstudiante: %s\n", grupo[i].nombre);
        printf("Notas: ");
        for (int j = 0; j < MAX_NOTAS; j++) {
            printf("%.2f ", grupo[i].notas[j]);
        }
        printf("\nPromedio: %.2f\n", grupo[i].promedio);
    }

    return 0;
}
