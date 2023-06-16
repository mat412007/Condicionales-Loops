#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char *argv[]) {
    int n = atoi(argv[1]);

    if(n < 0){
        printf("Error: el numero es negativo");
        return 1;
    }
    int dos_n = pow(2, n);

    for(int i = 0; i <= dos_n; i++){
        int potencia = pow(2, i);
        printf("%d\n", potencia);
    }
    return 0;
}