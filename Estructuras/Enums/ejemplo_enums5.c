#include <stdio.h>

// Definimos un enum con los días de la semana
enum Dia {
    LUNES = 1,
    MARTES,
    MIERCOLES,
    JUEVES,
    VIERNES,
    SABADO,
    DOMINGO
};

int main() {
    printf("Dias de la semana:\n");

    for (int d = LUNES; d <= DOMINGO; d++) {
        switch (d) {
            case LUNES:     printf("1 - Lunes\n"); break;
            case MARTES:    printf("2 - Martes\n"); break;
            case MIERCOLES: printf("3 - Miércoles\n"); break;
            case JUEVES:    printf("4 - Jueves\n"); break;
            case VIERNES:   printf("5 - Viernes\n"); break;
            case SABADO:    printf("6 - Sábado\n"); break;
            case DOMINGO:   printf("7 - Domingo\n"); break;
        }
    }

    return 0;
}
