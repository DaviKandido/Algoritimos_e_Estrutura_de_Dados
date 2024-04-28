#include "io.h"

#include <stdio.h>

void multiplosde3e5(int a) {
    int multiplo = 0;
    int repeticoes = 0;

    printf("\nSao %d numeros multiplos de 3 e 5: ", a);

    while (repeticoes < a) {
        multiplo += 3;

        if (multiplo % 3 == 0 && multiplo % 5 == 0) {
            printf("%d ", multiplo);
            repeticoes++;
        }
    }
    printf("\n");
}

int main() {
    int leituras = 0;

    printf("Defina uma quantidade de leituras: ");
    scanf("%d", &leituras);

    multiplosde3e5(leituras);

    return 0;
}

/*

Defina uma quantidade de leituras: 5

Sao 5 numeros multiplos de 3 e 5: 15 30 45 60 75 


*/

