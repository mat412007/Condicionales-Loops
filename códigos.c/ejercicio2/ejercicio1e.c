#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int diceroll(void) {
    int dice = rand() % 8;
    if(dice < 5) {
        return dice+1;
    }
    else {
        return 6;
    }
}
int main(void) {
    srand(time(NULL));
    printf("%d", diceroll());
    return 0;
}
