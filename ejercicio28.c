#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    // n = 2
    int n = atoi(argv[1]);

    // 2 != 0
    if(n == 0){
        printf("0");
        return 1;
    }

    int potencia = 1;
    // Mientras (1 <= 2 / 2)
    while(potencia <= n / 2){
        // potencia = 2
        potencia *= 2;
    }

    while(potencia > 0){
        // SI (2 >= 2)
        if(n >= potencia){
            printf("1");
            // N = 0
            n -= potencia;
        }
        else {
            printf("0");
        }
        // 2 / 2 = 1
        potencia /= 2;
    }
    
    // 10
}