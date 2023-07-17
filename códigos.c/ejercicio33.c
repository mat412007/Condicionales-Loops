#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Problema matematico Monty Hall

int main (int argc, char *argv[]) {

    int n = atoi(argv[1]);
    srand(time(NULL));

    int ganar_cambiando = 0;
    int ganar_sin_cambiar = 0;

    for(int i = 0; i < n; i++){
        int puerta_auto = rand() % 3; // 0, 1 , 2 / Puera en la que esta el auto
        int eleccion_incial = rand() % 3; // eleccion inicial del participante

        if(eleccion_incial == puerta_auto){
            ganar_sin_cambiar++;
        }
        else {
            ganar_cambiando++;
        }
    }

    printf("Probalidad de ganar sin cambiar de puerta: %d\n", ganar_sin_cambiar);
    printf("Probalidad de ganar cambiando de puerta: %d\n", ganar_cambiando);

}