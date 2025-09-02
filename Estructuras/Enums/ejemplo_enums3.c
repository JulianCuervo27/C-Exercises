#include <stdio.h>

// Definimos el enum para los estados del semáforo
enum Semaforo {
    ROJO,
    AMARILLO,
    VERDE
};

int main() {
    enum Semaforo estado;

    printf("Ingrese el estado del semaforo (0 = Rojo, 1 = Amarillo, 2 = Verde): ");
    scanf("%d", &estado);

    switch (estado) {
        case ROJO:
            printf("El semaforo esta en ROJO: Detenerse.\n");
            break;
        case AMARILLO:
            printf("El semaforo esta en AMARILLO: Precaucion.\n");
            break;
        case VERDE:
            printf("El semaforo esta en VERDE: Avanzar.\n");
            break;
        default:
            printf("Estado invalido.\n");
    }

    return 0;
}
