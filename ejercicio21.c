#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    int cuentaregresiva = 1;
    while(cuentaregresiva <= n){
    printf("%d\t%d\n", cuentaregresiva,  cuentaregresiva*cuentaregresiva);
    cuentaregresiva++;
    }
    return 0;
}