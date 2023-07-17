#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int producto = 1;

    for(int i = 1; i < argc; i++){
        int numero = atoi(argv[i]);

        if (numero == 0){
            break;
        }
        else {
            producto *= numero;
        }
    }

    printf("El producto es: %d\n", producto);
    return 0;
}