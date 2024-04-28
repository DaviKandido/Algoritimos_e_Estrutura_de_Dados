/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/



/*
    objetivo:

02.) DEFINIR função e procedimento para testes ( exercicio02 ) para:
- ler um valor inteiro (n) do teclado para indicar uma quantidade;
- ler outros tantos valores inteiros (x) do teclado, um por vez, até atingir a quantidade;
- dizer para cada valor lido se é primo, ou não, verificado por função.
DICA: Usar alternativas dupla.
O resultado NÃO deverá ser mostrado dentro da função.
NÃO usar break ou continue.
Usar apenas 01 retorno.
Exemplos:
n = 5
x = { -293, -107, 153, 199, 811 }
resposta = primo ( valor );


*/


#include"io.h"

 int primo ( int x ){

       int contador = x;
       int soma = 0;

    while ( contador > 0){

        if (x % contador == 0 ) {

            soma = soma + 1;

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


    printf("\nDefina o valor de (n) quantidade: ");
    scanf("%d", &n); getchar();

    int x[n];

    while ( n > 0 ){

        printf("\n\nDefina o valor de (x): ");
        scanf("%d", &x[n]);

        resposta = primo (x[n]);

        if (resposta == 1 || resposta == 2){
            printf ( "\n%d e primo:", x[n]);

        } else {

            printf ( "\n%d nao e primo:", x[n]) ;

        }

        n--;


    }




    return 0;
}



/*
        Resposta:


n = 5
x = { -293, -107, 153, 199, 811 }

Defina o valor de (n) quantidade: 5


Defina o valor de (x): -293

-293 nao e primo:

Defina o valor de (x): -107

-107 nao e primo:

Defina o valor de (x): 153

153 nao e primo:

Defina o valor de (x): 199

199 e primo:

Defina o valor de (x): 811

811 e primo:

*/