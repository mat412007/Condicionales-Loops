#include <stdio.h>
#include <stdlib.h>

int linea() { 
    for(int a = 1001; a < 2000; a++) {
        printf("%d ", a);
    if (a % 5 == 0) 
        printf("\n");
    }
}
int main(int argc,char *argv[]) {
    linea();
}