#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char letra = 'a';
    int contador = 1;
    while(contador < 27){
        printf("%c ", letra);
        contador ++;
        letra ++;
    }
    printf("\n");
    return 0;
}