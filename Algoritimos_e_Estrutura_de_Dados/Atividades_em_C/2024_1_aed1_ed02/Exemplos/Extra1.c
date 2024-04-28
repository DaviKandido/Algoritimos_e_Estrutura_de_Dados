#include <stdio.h>
#include "io.h"
#include <math.h>
#include <stdbool.h>


int main1() {

    char letra1, letra2, letra3;

    printf("\nDigite o primeiro valor:");
    scanf(" %c", &letra1);
    printf("\nDigite o segundo valor:");
    scanf(" %c", &letra2);
    printf("\nDigite o terceiro valor:");
    scanf(" %c", &letra3);

    if ((letra1 > letra2 && letra1 < letra3) || (letra1 > letra3 && letra1 < letra2)) {
        printf("\nO caracter %c esta entre os caracteres indicados ", letra1);
    } else if ((letra1 == letra2) || (letra1 == letra3)) {
        printf("\nO primeiro valor (%c) e igual a pelo menos um dos outros dois caracteres\n", letra1);
    } else {
        printf("\nO caracter %c nao esta entre os caracteres indicados ", letra1);
    }

    return 0;
}

int main() {
    printf("Voce usara o metodo 1:\n ");
    main1();
    return 0;
}
