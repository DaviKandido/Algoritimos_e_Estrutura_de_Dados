#include "io.h"
#include <math.h>

/*
E2.) Incluir uma função recursiva (06E2) para
para calcular o valor indicado abaixo,
lido o número de termos (n) do teclado:
e = 1 + 3/2! + 5/4! + 7/6! + 9/8! + ...
*/

#include <stdio.h>

int calcularfatorial(int fatorial, int contador) {

    if (contador > 0) {

        fatorial = fatorial * contador;

        return calcularfatorial(fatorial, contador - 1);

    } else {

        return fatorial;
    }
}

double calcularsequencia(int fatorial, int sequencia, int contador, double soma) {

    if (contador > 0) {

        soma += (double)sequencia / calcularfatorial(fatorial, fatorial - 1);

        return calcularsequencia(fatorial + 2, sequencia + 2, contador - 1, soma);

    } else {

        return soma + 1;
    }
}

int main() {

    int contador = 0;
    int fatorial = 2;
    int sequencia = 3;
    double soma = 0.0;

    printf("Defina o numero de vezes que a sequencia ira repetir: ");
    scanf("%d", &contador);

    soma = calcularsequencia(fatorial, sequencia, contador, soma);

    printf("O valor da soma retornada sera: %lf\n", soma);

    return 0;
}



/*

Defina o numero de vezes que a sequencia ira repetir: 2
O valor da soma retornada sera: 2.708333

 ou

Defina o numero de vezes que a sequencia ira repetir: 5
O valor da soma retornada sera: 2.718282

ou

Defina o numero de vezes que a sequencia ira repetir: 3
O valor da soma retornada sera: 2.718056

*/
