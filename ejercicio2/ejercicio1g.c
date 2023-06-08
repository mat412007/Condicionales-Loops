#include <stdio.h>
#include <stdlib.h>

int suma(int n) {
    int counter = 1;
    int sum = 0;
    while(counter <= n) {
        sum += counter;
        counter++;
    }
    return sum;
    
}
int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    printf("%d\n", suma(n));
    return 0;
}