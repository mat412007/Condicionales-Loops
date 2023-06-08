#include <stdio.h>
#include <stdlib.h>

double total(char medio, double precio, int cant){
    double pagar = precio * cant;
    if (medio == 'e') pagar *= 0.85;
    if (medio == 't') pagar *= 0.9;
    if (medio == 'c') pagar *= 1.05;
    return pagar;
}

int main(int argc, char *argv[]){
    char medio = argv[1][0];
    double precio = atof(argv[2]);
    double cant = atoi(argv[3]);
    printf("Total a pagar: $%.2f\n", total(medio, precio, cant));
    return 0;
}

