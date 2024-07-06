#include "io.h"

int fatorial(int fat){


int repeticoes = 0 ;
int multiplicacao = 1;


    for(repeticoes; repeticoes < fat; repeticoes ++){
        
        multiplicacao = multiplicacao * (fat-repeticoes);

    }
    return (multiplicacao);
}


void metodo(int lei){

    int repeticoes = 0 ;
    double calculo = 0.0 ;
    double soma = 0.0 ;

    printf("\n Sera f(%d) = ", lei);

        for(repeticoes; repeticoes < lei; repeticoes ++){
            
            
            calculo = (1+(2+((double)repeticoes*2))/(fatorial(5+((double)repeticoes*2))));


            printf("(1+%d/%d!) ", (2+(repeticoes*2)),(5+(repeticoes*2)));

            soma = soma + calculo; 
    
        }
        printf("\n A soma de f(%d) = %lf", lei, soma);

}


int main (){

    int leituras = 0;

printf("Defina uma quantidade de leituras: ");
scanf( "%d", &leituras);

metodo(leituras);


return(0);
}

/*

Defina uma quantidade de leituras: 1

 Sera f(1) = (1+2/5!)
 A soma de f(1) = 1.016667


 ou


Defina uma quantidade de leituras: 3

 Sera f(3) = (1+2/5!) (1+4/7!) (1+6/9!)
 A soma de f(3) = 3.017477


*/