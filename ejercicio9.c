#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int siguiente = 1;
    int actual = 0;
    int temporal = 0;
    while(n > 0){
        printf("%d\n", actual);
        temporal = actual;
        actual = siguiente;
        siguiente = siguiente + temporal;
        n--;
    }
    return 0;
}