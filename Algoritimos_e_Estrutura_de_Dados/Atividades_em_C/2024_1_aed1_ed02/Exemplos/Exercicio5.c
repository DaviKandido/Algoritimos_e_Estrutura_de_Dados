#include <stdio.h>
#include "io.h"
#include <math.h>
#include <stdbool.h>


int main1(){

    int a;
    scanf("%d", &a);
    
    if((a >= 10)&&(a <= 25)){
        printf("%d pertence ao intervalo fechado de [10:30]\n", a );
    } else if ((a >= 30)&&(a <= 50)) {
        printf("%d pertence ao intervalo de [25:50]\n", a);
    } else if ((a >= 25)&&(a<=30)) {
        printf("%d pertence a intercecao de [10:30] e [25:50]\n", a);
    } else {
        printf("%d não pertence aos intervalos de [10:30] ou [25:50] \n", a);
    }

 return(0);
}


int main(){
    printf("Voce usara o metodo 1\n\n Digite o numero desejado:");
    main1(); 
}