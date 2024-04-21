#include <stdio.h>
#include "io.h"
#include <math.h>
#include <stdbool.h>


int main1(){

    double numero1,numero2,numero3;

    scanf("%lf", &numero1);
    scanf("%lf", &numero2);
    scanf("%lf", &numero3);

    if((numero1 < numero2)&&(numero1 > numero3)){
        printf("\nO numero %lf esta entre os numeros %lf e %lf ", numero1, numero2, numero3);
    } else if((numero1 > numero2)&&(numero1 < numero3)){
        printf("\nO numero %lf esta entre os numeros %lf e %lf ", numero1, numero2, numero3);
    } else{
        printf("\nO numero %lf nao esta entre os numeros %lf e %lf ", numero1, numero2, numero3);
    }


 return(0);
}

int main(){
    printf("Voce usara o metodo 1\n\n Digite o numero desejado e de ENTER para digitar o proximo: ");
    main1();
}

/* Testes realizado e respostas:

(0.75, 0.5, 1.8) = O numero 0.750000 esta entre os numeros 0.500000 e 1.800000
(3.6, 4.5, 2.4) = O numero 3.600000 esta entre os numeros 4.500000 e 2.400000
(6.3, 7.2, 6.5) = O numero 6.300000 nao esta entre os numeros 7.200000 e 6.500000
(9.8, 8.9, 8.9) = O numero 9.800000 nao esta entre os numeros 8.900000 e 8.900000

OBS: O mesmo codigo utilizado no exercicio 9 poderá ser utilizado no exercicio 10 devido ao else que já faz a função
de indicar os numeros que não estarão entre os numeros 2 e 3

*/ 