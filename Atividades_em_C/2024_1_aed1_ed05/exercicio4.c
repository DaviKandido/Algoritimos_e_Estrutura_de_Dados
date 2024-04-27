#include "io.h"


void multiploinversosde7(int a){

int multiplo = 0;
double multiploinverso = 0;
int repeticoes = 0 ;

printf("\nSao %d numeros multiplos inversos de 7:", a);

    for(repeticoes; repeticoes < a; repeticoes ++){
        
        multiplo += 7;
        printf("\n1/%d", (int)multiplo);
        multiploinverso = 1.0/multiplo;
        printf(" = %lf", multiploinverso);

    }
}


int main (){

    int leituras = 0;

printf("Defina uma quantidade de leituras: ");
scanf( "%d", &leituras);

multiploinversosde7(leituras);


return(0);
}

/*

Defina uma quantidade de leituras: 5

Sao 5 numeros  multiplos inversos de 7:
1/7 = 0.142857
1/14 = 0.071429
1/21 = 0.047619
1/28 = 0.035714
1/35 = 0.028571

*/