#include <stdio.h>
#include <stdlib.h>

float funcion(float x) {
    return -4 * x * x + 12 * x;
}
float calcularArea(float n) {
    if (n <= 0) {
        printf("La n debe ser mayor a cero\n");
        return 0;
    }
    float intervalo = 3.0 / n;
    float x;
    float areaTotal = 0.0;

    for (float i = 0; i < n; i++) {
        x = i * intervalo;
        areaTotal += funcion(x) * intervalo;
    }
    return areaTotal;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: a.exe <valor_de_n>\n");
        return 1;
    }
    float n = atof(argv[1]);
    float area = calcularArea(n);
    printf("El area total es: %.2f\n", area);
    return 0;
}