#include <stdio.h>
#include <stdlib.h>

int linea(int a) { 
    for(int a; a < 2000; a++) {
        printf("%d ", a);
    if (a % 5 == 0) 
        printf("\n");
    }
}
int main(int argc,char *argv[]) {
    int a = atoi(argv[1]);
    return linea(a);
}