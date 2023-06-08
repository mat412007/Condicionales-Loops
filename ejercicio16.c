#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    for(int i = 1; i <= n; i++){
        printf("%d ", i);
    }
    printf("\n");
    int fila = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j || i % j == 0 || j % i == 0){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("%d", fila);
        fila++;
        printf("\n");
    }
    return 0;
}