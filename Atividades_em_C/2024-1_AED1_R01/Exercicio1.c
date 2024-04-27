/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/



/*
    objetivo:

01.) DEFINIR função e procedimento para testes ( exercicio01 ) para:
- ler um valor inteiro (n) do teclado para indicar uma quantidade;
- ler outros tantos valores inteiros (x) do teclado, um por vez, até atingir a quantidade;
- dizer para cada valor lido a soma de seus divisores ímpares calculada por função.
DICA: Usar apenas alternativas simples.
O resultado NÃO deverá ser mostrado dentro da função.
Exemplos:
n = 5
x = { 22, 121, 440, 581, 814 }
resposta = soma_divisores_impares ( valor );


*/


#include"io.h"

 int soma_divisores_impares ( int x ){

       int contador = x;
       int soma = 0;

    while ( contador > 0){

        if (x % contador == 0 && contador % 2 != 0) {

            soma = soma + contador;

            contador--;

        } else{
           contador--;
        }

    }
    return soma;

 }






int main(){

        printf ( "\n" );             
        printf ( "%s\n", "1_aed1_recuperacao01 - 24/04/2024"       );
        printf ( "%s\n", "Matricula: 857859 Nome: Davi Candido de Almeida\n" );


    int n = 0;

    int resposta = 0;


    printf("\nDefina o valor de (n) quantidades: ");
    scanf("%d", &n); getchar();

    int x[n];

    while ( n > 0 ){

        printf("\n\nDefina o valor do %d(x): ", n);
        scanf("%d", &x[n]);

        resposta = soma_divisores_impares (x[n]);
        printf("\nA soma dos divisores de %d e: %d", x[n], resposta);

        n--;


    }




    return 0;
}



/*
        Resposta:

n = 5
x = { 22, 121, 440, 581, 814 }

Defina o valor de (n) quantidades: 5


Defina o valor do 5(x): 22

A soma dos divisores de 22 e: 12

Defina o valor do 4(x): 121

A soma dos divisores de 121 e: 133

Defina o valor do 3(x): 440

A soma dos divisores de 440 e: 72

Defina o valor do 2(x): 581

A soma dos divisores de 581 e: 672

Defina o valor do 1(x): 814

A soma dos divisores de 814 e: 456

*/