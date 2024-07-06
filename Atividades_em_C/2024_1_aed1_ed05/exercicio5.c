#include "io.h"

/*
Para ler um valor real real (x) do teclado;
para ler uma quantidade inteira do teclado e, mediante um procedimento,
mostrar essa quantidade em valores pares crescentes nos denominadores
da sequência: 1 1/x2 1/x4 1/x6 ...
DICA: Usar da biblioteca <math.h> a função pow ( x, y ) para calcular a potência.
Exemplo: n = 5 => { 1, 1/x2, 1/x4, 1/x6, 1/x8 }
*/



void denominadorcrescente(int a){

int denominador = 0;
double denominadorinverso = 0;
int repeticoes = 0;

printf("\nAgora defina o denominador de 1/x: ");
scanf("%d", &denominador);
printf("\nA fracao usada sera 1/%d", denominador);


printf("\nSao %d numeros de denominador %d elevado a sequencia de pares:", a, denominador);

    for(repeticoes; repeticoes < a; repeticoes ++){
        
      
        printf("\n1/%d^(%d) ou 1/%d ", denominador,repeticoes*2, (int)pow(denominador, repeticoes*2));
        denominadorinverso = 1.0/pow(denominador, repeticoes*2);
        printf(" = %lf", denominadorinverso);

    }
}


int main (){

    int leituras = 0;

printf("Defina uma quantidade de leituras: ");
scanf( "%d", &leituras);

denominadorcrescente(leituras);


return(0);
}

/*

Defina uma quantidade de leituras: 5

Agora defina o denominador de 1/x: 2

A fracao usada sera 1/2
Sao 5 numeros de denominador 2 elevado a sequencia de pares:
1/2^(0) ou 1/1  = 1.000000
1/2^(2) ou 1/4  = 0.250000
1/2^(4) ou 1/16  = 0.062500
1/2^(6) ou 1/64  = 0.015625
1/2^(8) ou 1/256  = 0.003906

*/