/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

E1.) Incluir um método e uma função (08E1) para
ler um valor inteiro do teclado,
e mediante funções para calcular e retornar a quantidade
e seus divisores ímpares guardados em arranjo,
o qual deverá ser mostrado na tela após o retorno,
bem como gravado em arquivo ( "DIVISORES.TXT" ).
DICA: Supor que a quantidade de divisores
será, no máximo, igual ao próprio número.

*/

#include <stdio.h>
#include "io.h"

int Divisoresimpares(int numero) {

    FILE * arquivo = fopen ("DIVISORES.TXT", "wt" );

    int contador = numero;
    int quantidade = 0;

    fprintf(arquivo, "São divisores impares de %d: \n\n", numero);

    while ( contador > 0){

        if (numero % contador == 0 && contador % 2 != 0) {

            fprintf ( arquivo, "%d\n", contador );
            quantidade++;

        }

        contador--;

    }

    fclose ( arquivo );

    return quantidade;
}




int main (){


    int numero = 0;

    printf("Digite um numero para se encontrar seus divisores impares: ");
    scanf("%d", &numero);

    printf("A quantidade de divisores impares e: %d", Divisoresimpares(numero));

    return 0;
}


/*


    Resposta no terminal:

Digite um numero para se encontrar seus divisores impares: 60
A quantidade de divisores impares e: 4


    Resposta em DIVISORES.TXT:

São divisores impares de 60: 

15
5
3
1


*/