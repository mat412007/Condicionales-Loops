#include <stdio.h>
#include <stdlib.h>

void decision(int a) {
    if(a > 0) {
        printf("Es positivo.\n");
    }
    else if(a == 0) {
        printf("Es igual a 0.\n");
    }
    else {
        printf("Es negativo.\n");
    }
}  
    int main(int argc, char *argv[]) {
        int a = atoi(argv[1]);
        decision(a);
        return 0;
    }
