#include "io.h"


/*
09.) Incluir função e método (0519) para
calcular a soma dos quadrados da adição dos números naturais começando no valor 6.
Testar essa função para quantidades diferentes de valores e
e mostrar os resultados em outro método.
Exemplo: n = 5 => 36 + 49 + 64 + 81 + 100

*/

void sequencia(int a){

int inicial = 6;
int repeticoes = 0;
int soma = 0;
int quadrado = 0;

printf("\nSao %d dos numeros dos quadrados da adicao dos numeros naturais comecando no valor 6:", a);

    for(repeticoes; repeticoes < a; repeticoes ++){
        
        quadrado = inicial * inicial;
        inicial ++ ;
        printf("\n%d", quadrado);

        soma = soma + quadrado;
    }

printf("\n");
printf("\n E a soma dos quadrados da adicao dos numeros naturais comecando no valor 6 e: %d ", soma);
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

Sao 5 dos numeros dos quadrados da adicao dos numeros naturais comecando no valor 6:
36
49
64
81
100

 E a soma dos quadrados da adicao dos numeros naturais comecando no valor 6 e: 330


 ou 


Sao 10 dos numeros dos quadrados da adicao dos numeros naturais comecando no valor 6:
36
49
64
81
100
121
144
169
196
225

 E a soma dos quadrados da adicao dos numeros naturais comecando no valor 6 e: 1185

 E a soma da soma da adicao dos primeiros numeros naturais comecando no valor 6 e: 225


*/