#include "io.h"


void fatorial(int fat){


int repeticoes = 0 ;
int multiplicacao = 1;

printf("\nA fatoracao de %d! sera: ", fat);

    for(repeticoes; repeticoes < fat; repeticoes ++){
        
        multiplicacao = multiplicacao * (fat-repeticoes);
        printf("%d ", fat-repeticoes);

    }
printf("\n");
printf("\n Portanto o fatorial de %d! e: %d ", fat, multiplicacao);
printf("\n");
}


int main (){

 
    int fatorado = 0;

printf("Defina um numero a ser fatorado: ");
scanf( "%d", &fatorado);

fatorial(fatorado);


return(0);
}

/*

Defina um numero a ser fatorado: 5

A fatoracao de 5! sera: 5 4 3 2 1

 Portanto o fatorial de 5! e: 120

 ou

 Defina um numero a ser fatorado: 10

A fatoracao de 10! sera: 10 9 8 7 6 5 4 3 2 1

 Portanto o fatorial de 10! e: 3628800


*/