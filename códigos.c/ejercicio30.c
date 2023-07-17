#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

double b = 0;

bool play(){
    return rand() % 2 == 0 ? false : true;
}
bool experimento (int s, int g){
    while(s > 0 && s < g){
        if(play()) s++;
        else s--;
        b++;
    }
    return s == 0 ? false : true;
}

int main(int argc, char *argv[]){
    srand(time(NULL));
    int s = atoi(argv[1]);
    int g = atoi(argv[2]);
    int t = atoi(argv[3]);
}