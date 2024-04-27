#include <stdio.h>
#include "io.h"
#include <math.h>
#include <stdbool.h>


int main1(){

    double numero1,numero2;
    double terco;

    scanf("%lf%lf", &numero1, &numero2);

    terco = numero1 /3.0;

    if(numero2 < terco){
        printf("\nO numero %lf e menor que 1/3 do numero %lf", numero2, numero1); // -5.5 6.4
    } else if(numero2 == terco){
        printf("\nO numero %lf e igual a 1/3 do numero %lf", numero2, numero1); // 9.0 3.0
    } else{
        printf("\nO numero %lf e maior que 1/3 do numero %lf", numero2, numero1); // 3.0 3.0
    }


 return(0);
}

int main(){
    printf("Voce usara o metodo 1\n\n Digite os numeros desejado com um espaco entre eles: ");
    main1();
}