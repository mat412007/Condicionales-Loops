#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void function(double a, double b, double c) {
    double result = b*b - 4*a*c;
    if(result < 0) {
        printf("No hay solucion en los numeros reales.");
    }
    else if(result > 0) {
        printf("%f", -b + sqrt(result)/ (2*a));
        printf("%f", -b - sqrt(result)/ (2*a));
    }
    else if(result == 0) {
        printf("Raiz doble %f", -b / (2*a));
    }
}
int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    function(a, b, c);
    return 0;
}