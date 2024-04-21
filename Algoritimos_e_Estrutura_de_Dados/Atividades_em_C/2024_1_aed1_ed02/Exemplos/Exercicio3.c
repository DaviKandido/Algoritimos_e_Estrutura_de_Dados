#include <stdio.h>
#include "io.h"
#include <math.h>
#include <stdbool.h>


int main1(){

    int a;
    scanf("%d", &a);
    
    if((a > 35)&&(a < 65)){
        printf("%d pertence ao intervalo aberto de (35:65)\n", a );
    } else {
        printf("%d nao pertence ao intervalo de (35:65)\n", a);
    }

 return(0);
}


int main(){
    printf("Voce usara o metodo 1\n\n Digite o numero desejado:");
    main1(); 
}