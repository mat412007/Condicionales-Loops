#include <stdio.h>
#include <stdlib.h>

int maximo(int a, int b, int c) {
    if(a > b && a > c) return a;
    else if(b > a && b > c) return b;
    return c;
}
int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    printf("%d\n", maximo(a, b, c));
    return 0;
}
