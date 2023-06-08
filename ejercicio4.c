#include <stdio.h>
#include <stdlib.h>

int fact(int n) {
    int counter = 1;
    if(n < 0){
        printf("Error");
    }  
    while(counter <= n) {
        printf("%d\n", counter); 
        counter ++;    
    }  
}
int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    fact(n);
}
