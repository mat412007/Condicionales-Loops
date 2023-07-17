#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int n = atoi(argv[1]);
    int numeroInvertido = 0;
    while(n > 0){
        numeroInvertido = numeroInvertido * 10 + n % 10;
        n /= 10;
    }
    printf("Numero invertido: %d", numeroInvertido);
    return 0;
}

