#include <stdio.h>
#include <stdlib.h>

int rep(int n) {
    while(n != 0){
        printf("Hola mundo\n");
        n --;
    }
}
int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    rep(n);
}