#include <stdio.h>
#include <stdlib.h>

int divisible(int a, int b){
    if(a > b){
        printf("El a debe ser menor al b.");
    }
    else{
        while(b != a){
            if(a % 3 == 0){
                printf("%d\n", a);
            }
            a++;
        }
    }
}
int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    return divisible(a, b);
}