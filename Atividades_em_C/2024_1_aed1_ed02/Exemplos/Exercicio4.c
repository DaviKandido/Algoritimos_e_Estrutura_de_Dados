#include <stdio.h>
#include "io.h"
#include <math.h>
#include <stdbool.h>


int main1(){

    int a;
    scanf("%d", &a);
    
    if((a >= 15)&&(a <= 60)){
        printf("%d pertence ao intervalo fechado de [15:60]\n", a );
    } else {
        printf("%d nao pertence ao intervalo de [15:60]\n", a);
    }

 return(0);
}


int main(){
    printf("Voce usara o metodo 1\n\n Digite o numero desejado:");
    main1(); 
}