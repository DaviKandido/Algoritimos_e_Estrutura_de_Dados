#include "io.h"


/*
08.) Incluir função e método (0518) para
calcular a soma da adição dos primeiros números naturais começando no valor 6.
Testar essa função para quantidades diferentes de valores e
mostrar os resultados em outro método.
Exemplo: n = 5 => 6 + 7 + 9 + 12 + 16

*/

void sequencia(int a){

int inicial = 6;
int repeticoes = 0;
int soma = 0;

printf("\nSao %d soma da adicao dos primeiros numeros naturais comecando no valor 6:", a);

    for(repeticoes; repeticoes < a; repeticoes ++){
        
        inicial = inicial + repeticoes;
        printf("\n%d", inicial);

        soma = soma + inicial;
    }

printf("\n");
printf("\n E a soma da soma da adicao dos primeiros numeros naturais comecando no valor 6 e: %d ", soma);
printf("\n");


}


int main (){

    int leituras = 0;

printf("Defina uma quantidade de leituras: ");
scanf( "%d", &leituras);

sequencia(leituras);


return(0);
}

/*

Defina uma quantidade de leituras: 5

Sao 5 soma da adicao dos primeiros numeros naturais comecando no valor 6:
6
7
9
12
16

 E a soma da soma da adicao dos primeiros numeros naturais comecando no valor 6 e: 50 


 ou 


Defina uma quantidade de leituras: 10

Sao 10 soma da adicao dos primeiros numeros naturais comecando no valor 6:
6
7
9
12
16
21
27
34
42
51

 E a soma da soma da adicao dos primeiros numeros naturais comecando no valor 6 e: 225


*/