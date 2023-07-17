#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int cantidadnumeros = argc - 1;

    int maximo = atoi(argv[1]);
    int minimo = atoi(argv[1]);
    int prom = 0;

    for (int i = 1; i <= cantidadnumeros; i++){
        int numero = atoi(argv[i]);
        if(numero > maximo) {
            maximo = numero;
        }
        if(numero < minimo){
            minimo = numero;
        }
        prom += numero;
    }
    int promedio = prom / cantidadnumeros;
    printf("El numero maximo ingresado es: %d\n", maximo);
    printf("El numero minimo ingresado es: %d\n", minimo);
    printf("El promedio de todos los numeros es %d", promedio);
    return 0;
}