#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int cantidadnumeros = argc - 1;
    int maximo = atoi(argv[1]);
    for (int i = 1; i <= cantidadnumeros; i++){
        int numero = atoi(argv[i]);
        if(numero > maximo) {
            maximo = numero;
        }
    }
    printf("El numero maximo ingresado es: %d", maximo);
    return 0;
}