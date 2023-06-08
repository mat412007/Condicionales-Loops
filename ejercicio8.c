#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(){
    return rand() % 101;
}

int main(int argc, char *argv[1]){
    int n = atoi(argv[1]);
    srand(time(NULL));
    while(n > 0){
        printf("%d\n", aleatorio(n));
        n--;
    }
}