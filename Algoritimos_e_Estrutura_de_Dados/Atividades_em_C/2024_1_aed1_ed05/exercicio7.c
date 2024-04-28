#include "io.h"


void multiploinversosde6(int a){

int multiplo = 0;
double multiploinverso = 0;
int repeticoes = 0 ;
double soma = 0;

printf("\nSao %d numeros multiplos inversos de 6:", a);

    for(repeticoes; repeticoes < a; repeticoes){
        
        multiplo += 6;
        
        
        if(multiplo % 6 == 0 && !(multiplo % 5 == 0)){
        
        printf("\n1/%d", (int)multiplo);
        multiploinverso = 1.0/multiplo;
        printf(" = %lf", multiploinverso);
        repeticoes ++;

        soma = soma + multiploinverso;

        }

    }

printf("\n");
printf("\n E a soma dos numeros multiplos inversos de 6 e nao multiplos de 5 sera: %lf ", soma);
printf("\n");

}




int main (){

    int leituras = 0;

printf("Defina uma quantidade de leituras: ");
scanf( "%d", &leituras);

multiploinversosde6(leituras);


return(0);
}

/*

Defina uma quantidade de leituras: 5

Sao 5 numeros multiplos inversos de 6:
1/6 = 0.166667
1/12 = 0.083333
1/18 = 0.055556
1/24 = 0.041667
1/36 = 0.027778

 E a soma dos numeros multiplos inversos de 6 e nao multiplos de 5 sera: 0.375000

 ou

Sao 10 numeros multiplos inversos de 6:
1/6 = 0.166667
1/12 = 0.083333
1/18 = 0.055556
1/24 = 0.041667
1/36 = 0.027778
1/42 = 0.023810
1/48 = 0.020833
1/54 = 0.018519
1/66 = 0.015152
1/72 = 0.013889

 E a soma dos numeros multiplos inversos de 6 e nao multiplos de 5 sera: 0.467202
*/