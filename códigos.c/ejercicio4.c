#include <stdio.h>
#include <stdlib.h>

int fact(int n) {
    int counter = 1;
    if(n < 0){
        printf("Error\n");
        return 1;
    }  
    while(n != 0) {
        counter *= n;
        n--;    
    }  
    printf("%d\n", counter);
}
int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    fact(n);
}
