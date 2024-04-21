#include "io.h"

#include <stdio.h>

void multiplosde3e5(int a) {
    int multiplo = 0;
    int repeticoes = 0;
    int soma = 0;

    printf("\n Os %d numeros multiplos de 3 e nao multiplos de 5 que serao somados sera: ", a);

    while (repeticoes < a) {
        multiplo += 3;

        if (multiplo % 3 == 0 && !(multiplo % 5 == 0)) {
            printf("%d ", multiplo);
            soma = soma + multiplo;
            repeticoes++;
        }
    }

    printf("\n");
    printf("\n E a soma dos numeros multiplos de 3 e nao multiplos de 5 sera: %d ", soma);
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

 Os 5 numeros multiplos de 3 e nao multiplos de 5 que serao somados sera: 3 6 9 12 18 

 E a soma dos numeros multiplos de 3 e nao multiplos de 5 sera: 48    

ou

Defina uma quantidade de leituras: 6

 Os 6 numeros multiplos de 3 e nao multiplos de 5 que serao somados sera: 3 6 9 12 18 21 

 E a soma dos numeros multiplos de 3 e nao multiplos de 5 sera: 69
*/

