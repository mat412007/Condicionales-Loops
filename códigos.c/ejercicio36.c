#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int x, y;
    if(atoi(argv[1]) > atoi(argv[2])){
        x = atoi(argv[2]);
        y = atoi(argv[1]);
    }
    else {
        x = atoi(argv[1]);
        y = atoi(argv[2]);
    }
    printf("El valor X (mas chico es): %d, el Y es: %d\n", x, y);
}