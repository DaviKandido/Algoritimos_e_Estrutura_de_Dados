#include "io.h"

/*
05.) Incluir uma função recursiva (0615) para
calcular a soma de valores gerados pela adição dos primeiros valores pares positivos ao valor 6.
Testar essa função para quantidades diferentes.
Exemplo: valor = 5 => 6 + 8 + 12 + 18 + 26
*/


int somatorio(int leituras, int contador, int soma){


    if (leituras >= contador) {

        printf ("\n%d", 6 + contador*(contador+1));

        soma = soma + 6 + contador*(contador+1);
    

        somatorio(leituras, contador+1, soma);


    } else{
        return (soma);
    }
}


int main (){
    

    int leituras = 0;
    int soma = 0;



    printf("Defina uma quantidade de leituras: ");
    scanf("%d", &leituras);

    printf("\nA soma de valores gerados pela adicao dos primeiros valores pares positivos ao valor 6 e: ");

    soma = somatorio(leituras-1, 0, soma);

    printf("\nO valor da soma sera: %d", soma);

    
    return 0;

}



/*

Defina uma quantidade de leituras: 5

A soma de valores gerados pela adicao dos primeiros valores pares positivos ao valor 6 e: 
6
8
12
18
26
O valor da soma sera: 70

ou

Defina uma quantidade de leituras: 10

A soma de valores gerados pela adicao dos primeiros valores pares positivos ao valor 6 e: 
6
8
12
18
26
36
48
62
78
96
O valor da soma sera: 390

*/