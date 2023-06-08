#include <stdio.h>
#include <stdlib.h>

void decision(int a) {
    if(a > 0) {
        printf("Es positivo.");
    }
    else if(a == 0) {
        printf("Es igual a 0.");
    }
    else {
        printf("Es negativo.");
    }
}  
    int main(int argc, char *argv[]) {
        int a = atoi(argv[1]);
        decision(a);
        return 0;
    }
