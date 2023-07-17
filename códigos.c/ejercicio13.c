#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool es_primo(int n){
    int i = 2;
    while(i < n){
        if(n % i == 0){
            return false; 
            break; 
        }  
        i++;
    }
    return true;
}
int main( int argc, char *argv[]){
    int n = atoi(argv[1]);
    printf("%s\n", es_primo(n) ? "Es primo" : "No es primo");
    return 0;
}