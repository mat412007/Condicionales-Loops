#include <stdio.h>
#include <stdlib.h>

int valor_absoluto(int a) {
    if (a > 0) return a;
    return -a;
}
int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    printf("%d\n", valor_absoluto(a));
    return 0;
}