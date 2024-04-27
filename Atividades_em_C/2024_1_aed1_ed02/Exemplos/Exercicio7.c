#include <stdio.h>
#include "io.h"
#include <math.h>
#include <stdbool.h>


int main1(){

    int numero1,numero2;
    int resto1, resto2;

    scanf("%d%d", &numero1, &numero2);

    resto1 = numero1%2;
    resto2 = numero2%2;
    printf ("O resto de %d por 2 e igual a %d\n", numero1, resto1);
    printf ("E o resto de %d por 2 e igual a %d\n", numero2, resto2);

    if(resto1==0){
        printf("\nPortanto o %d e par", numero1);
    } else{
        printf("\nPortant o %d e impar", numero1);
    }

    if(resto2==0){
        printf("\nE o numero %d e par", numero2);
    } else{
        printf("\nE o numero %d e impar", numero2);
    }

 return(0);
}

int main(){
    printf("Voce usara o metodo 1\n\n Digite os numeros desejado com um espaco entre eles: ");
    main1();
}