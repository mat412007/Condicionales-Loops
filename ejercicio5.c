#include <stdio.h>
#include <stdlib.h>

int igual(int a, int b, int c) {
    if(a == b && b == c){
        printf("Son iguales");
    }
    else {
        printf("No son iguales");
    }
}
int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    return igual(a, b, c);
}