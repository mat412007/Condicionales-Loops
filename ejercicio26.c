#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    long long int n = atoi(argv[1]); // long se usa para numeros largos
    long double sum = 0.0;

    for(int i = 1; i <= n; i++){
        sum += 1.0 / (i * i);
    }
    sum *= 6;
    sum = sqrt(sum);
    printf("El vaor de pi aproximado por la serie es %lf\n", sum);
    return 0;
}