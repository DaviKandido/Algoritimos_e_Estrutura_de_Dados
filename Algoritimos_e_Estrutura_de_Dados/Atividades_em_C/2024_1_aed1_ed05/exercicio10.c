#include "io.h"


/*
10.) Incluir função e método (Exemplo0520) para
calcular a soma dos inversos (1/x) das adições de números naturais terminando no valor 6.
Testar essa função para quantidades diferentes de valores
e mostrar os resultados em outro método.
Exemplo: n = 5 => 1/16 + 1/12 + 1/9 + 1/7 + 1/6

*/

void sequencia(int a){

int inicial = 6;
int repeticoes = 0;
double inicialinverso = 0.0;

double soma = 0;

printf("\nSao %d inversos (1/x) das adicoes de numeros naturais terminando no valor 6:", a);

    while ( repeticoes < a){
        
        inicial = inicial + repeticoes;
        repeticoes++;
       
    }

    while(repeticoes >= 1){

        printf("\n1/%d", inicial);
        inicialinverso = 1.0/inicial;
        printf(" = %lf", inicialinverso);
        
        soma = soma + inicialinverso;
        inicial = inicial - repeticoes+1;

        repeticoes--;
    }


printf("\n");
printf("\n E a soma dos inversos (1/x) das adicoes de numeros naturais terminando no valor 6 e: %lf ", soma);
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

Sao 5 inversos (1/x) das adicoes de numeros naturais terminando no valor 6:
1/16 = 0.062500
1/12 = 0.083333
1/9 = 0.111111
1/7 = 0.142857
1/6 = 0.166667

 E a soma dos inversos (1/x) das adicoes de numeros naturais terminando no valor 6 e: 0.566468


 ou 

Defina uma quantidade de leituras: 10

Sao 10 inversos (1/x) das adicoes de numeros naturais terminando no valor 6:
1/51 = 0.019608
1/42 = 0.023810
1/34 = 0.029412
1/27 = 0.037037
1/21 = 0.047619
1/16 = 0.062500
1/12 = 0.083333
1/9 = 0.111111
1/7 = 0.142857
1/6 = 0.166667

 E a soma dos inversos (1/x) das adicoes de numeros naturais terminando no valor 6 e: 0.723953 



*/