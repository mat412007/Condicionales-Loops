#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void tabla(int n) {
    for(int counter = 1; counter <= n; counter++) {
        printf("%d\t%d\n", counter, counter*counter);
    }
}
int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    tabla(n);
    return 0;
}