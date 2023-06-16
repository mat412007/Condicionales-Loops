#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int numero = atoi(argv[1]); // 
    int divisor = 2; 
    
    while(numero > 1){
        if(numero % divisor == 0){
            printf("%d \n", divisor);
            // numero = 60 / 2 = 30
            // numero = 30 / 2 = 15
            // numero = 15 / 2 = 7.5
            numero = numero / divisor;
        }
        else {
            divisor++;
        }
    }
    return 0;
}