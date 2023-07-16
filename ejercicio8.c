#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int n){
    int random = rand() % 101;
    srand(time(NULL));
    int suma = 0;
    while(n > 0){
        printf("%d ", random);
        suma = suma + random;
        n--;
    }
    printf("\n");
    printf("%d", suma);
}

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int divisor = n;
    aleatorio(n);
    return 0;
}