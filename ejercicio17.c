#include <stdio.h>
#include <math.h>

int main () {
    int n[] = {1, 2, 4, 8, 16, 32, 64};
    printf("ln(n)\tn\tn ln(n)\tn^2\tn^3\t2^n\n");

    for(int i = 0; i < sizeof(n) / sizeof(n[0]) ; i++){
        int numero = n[i];
        double ln_n = log(numero);
        double n = numero;
        double n_ln_n = numero * log(numero);
        double n_2 = pow(numero, 2);
        double n_3 = pow(numero, 3);
        double dos_n = pow(2, numero);
        printf("%.1f\t%d\t%.1f\t%.1f\t%.1f\t%.1f\n", ln_n, numero, n_ln_n, n_2, n_3, dos_n);
    }
    return 0;
}

