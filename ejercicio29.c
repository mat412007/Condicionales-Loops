#include <stdio.h>
#include <stdlib.h>

double harmonic(int n) {
    double sum = 0.0;
    for(int i = 1; i <= n; i++){
        sum += 1.0 / i;
    }
    return sum;
}
int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    double h = harmonic(n);
    printf("El numero armonico %d es %2.f\n", n, h);
    return 0;
}