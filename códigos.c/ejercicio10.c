#include <stdio.h>
#include <stdlib.h>

int MCD(int a, int b){
    int t;
    while(b != 0){
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main(int argc, char *argv[]){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("%d", MCD(a, b));
    return 0;
}