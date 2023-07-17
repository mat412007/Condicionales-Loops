#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]) {

    // Recuperamos por la consola x e y
    float x = atof(argv[1]);
    float y = atof(argv[2]);

    // Radianes
    float radianes = atan2(y, x);

    // pasamos de radianes a grados
    float grados = radianes * 180 / 3.1416;

    printf("El angulo del vector (%.2f, %.2f) es %.2f grados", x, y, grados);
}