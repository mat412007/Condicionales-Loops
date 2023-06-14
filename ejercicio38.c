#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char letra = 'a';
    int contador = 1;
    while(contador <= 27){
        printf("%c\n", letra);
        contador ++;
        letra ++;
    }
    return 0;
}