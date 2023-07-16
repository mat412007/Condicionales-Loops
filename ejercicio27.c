#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]) {
    int n = atoi(argv[1]);

    if(n < 0){
        printf("Error: el numero es negativo");
        return 1;
    }

    for(int i = 0; i <= n; i++){
        int potencia = pow(2, i);
        printf("2^%d = %d\n", i, potencia);
    }
    return 0;
}