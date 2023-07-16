#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    // A = 579
    // B = 975
    // ADadoVuelta = 975
    // Si B = ADadoVuelta - Es capicua / No

    int aDadoVuelta = 0;
    while(a != 0){
        // Nos da el ultimo digito de A (576 = 6)
        int digito = a % 10;
        printf("%d\n", digito);
        // Con *10 le agregamos un cero
        aDadoVuelta = aDadoVuelta * 10 + digito;
        printf("%d\n", aDadoVuelta);
        // Le sacamos un digito a la A
        a /= 10;
        printf("%d\n", a);
    }
    printf("%d\n", aDadoVuelta);
    if(aDadoVuelta == b){
        printf("Son capicuas\n");
    }
    else {
        printf("No son capicuas\n");
    }
}
