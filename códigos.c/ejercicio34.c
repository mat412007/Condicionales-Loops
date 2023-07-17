#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float c = atof(argv[1]);
    float e = 0.000000000000001;
    float t = c;

    while((t - c/t) > e * t){
        t = (c/t + t)/2;
    }
    printf("%f\n", t);
}