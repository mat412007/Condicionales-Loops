#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){ 
    float matematicos = atof(argv[1]);
    printf("El primer matematico recibe una cerveza completa, pero despues el resto la divide en 2 de manera infinita de esta manera:\n");
    float cantinero = 1.0;
        while(matematicos != 0){
            float reduccion = cantinero /= 2.0;
            printf("%f\n", reduccion);
            matematicos--;
        }
    return 0;
}