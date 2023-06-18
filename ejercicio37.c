#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));
    int resultado = rand() % 2;

    if(resultado == 0){
        printf("Cara");
    }
    else {
        printf("Ceca");
    }
}