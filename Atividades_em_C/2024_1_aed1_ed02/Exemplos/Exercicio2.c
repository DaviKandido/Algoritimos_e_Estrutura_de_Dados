#include <stdio.h>
#include "io.h"
#include <math.h>
#include <stdbool.h>

int main1(){

    int a;
    int s;
    scanf("%d", &a);
    s = a%2;
    printf ("O resto de %d por 2 e igual a %d\n", a,s);
    
    if(a < -25){
        printf("\nAlem de ser menor que -25 ");
    } else if (a > 25) {
        printf("\nAlem de ser maior que 25 ");
    } else {
        printf("\nAlem de ser entre -25 e 25 ");

    }

    if(s==0){
        printf("tambem e par");
    } else{
        printf("tambem e impar");
    }

 return(0);
}


// ou também podera ser escrito assim

int main2(){

    int a;
    int s;
    scanf("%d", &a);
    s = a%2;
    printf ("O resto de %d por 2 e igual a %d\n", a,s);
    
    if((a < -25)&&(s==0)){
        printf("\nAlem de ser menor que -25 tambem e par ");
    } else if ((a < 25)&&(s!=0)) {
        printf("\nAlem de ser maior que -25 tambem e impar ");
    } 
    else if ((a > 25)&&(s==0)) {
        printf("\nAlem de ser maior que 25 e par");
    }  
    else if ((a > 25)&&(s!=0)) {
        printf("\nAlem de ser maior que 25 e impar ");
    }
    else if ((a < 25)&&(a > -25)&&(s==0)) {
        printf("\nAlem de estar entre -25 e 25 e par ");
    } 
    else {
        printf("\nAlem de estar entre -25 e 25 e impar ");
    }

 return(0);
}


int main(){
    printf("Voce usara o metodo 1\n\n Digite o numero desejado: ");
    main1();
    printf("\nAgora se usara o metodo 2\n\n Digite o numero desejado: ");
    main2();
}