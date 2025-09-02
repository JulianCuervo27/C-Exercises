#include <stdio.h>

// Definimos los niveles de dificultad
enum Dificultad {
    FACIL = 1,
    MEDIO,
    DIFICIL
};

int main() {
    enum Dificultad nivel;

    printf("Seleccione un nivel de dificultad (1 = Facil, 2 = Medio, 3 = Dificil): ");
    scanf("%d", &nivel);

    printf("\nHas elegido: ");
    switch (nivel) {
        case FACIL:
            printf("FÁCIL - Ideal para principiantes.\n");
            break;
        case MEDIO:
            printf("MEDIO - Un reto moderado.\n");
            break;
        case DIFICIL:
            printf("DIFÍCIL - Solo para expertos.\n");
            break;
        default:
            printf("Nivel inválido.\n");
    }

    return 0;
}
