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








int main(){

    int n = 0;
    int resposta = 0;


    printf("Defina o valor de (n) quantidade: ");
    scanf("%d", &n); getchar();

    int x[n];

    while (n >= 0){

        printf("Defina o valor de (x): ");
        scanf("%d", &x[n-1]);

        n--;

    }

 


    printf("%s", x);



}