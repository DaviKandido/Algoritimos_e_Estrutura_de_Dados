#include "io.h"


void multiplosde6(int a){

int multiplo = 0;
int repeticoes = 0 ;

printf("\nSao %d numeros multiplos de 6:", a);

    for(repeticoes; repeticoes < a; repeticoes ++){
        
        multiplo += 6;
        printf("\n%d", multiplo);

    }
}


int main (){

    int leituras = 0;

printf("Defina uma quantidade de leituras: ");
scanf( "%d", &leituras);

multiplosde6(leituras);


return(0);
}

/*

Defina uma quantidade de leituras: 5

Sao 5 numeros multiplos de 6: 
6
12
18
24
30


*/