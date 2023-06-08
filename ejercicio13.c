#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool es_primo(int n){
    int i = 2;
    while(i < n){
        if(n % i == 0){
            prime = false; break; 
        }  
        i++;
    }
    return prime;
}
int main( int argc, char *argv[]){
    int n = atoi(argv[1]);
    printf("%s\n", es_primo(n) ? "es primo" : "no es primo");
    return 0;
}