#include "io.h"

/*
04.) Incluir um método recursivo (0614) para
ler um valor inteiro do teclado e chamar procedimento recursivo para
mostrar essa quantidade em valores da sequência de inversos dos múltiplos de 6, terminando em 1.
Exemplo: valor = 5 => { 1/24, 1/18, 1/12, 1/6, 1/1 }
*/


void multiplosde6inversosdecrescentes(int leituras){


    if (leituras >= 1) {

        printf ("\n1/%d", leituras*6);

        if(leituras == 1){
            printf ("\n1/%d", leituras);
            multiplosde6inversosdecrescentes(leituras-1);
        }

      multiplosde6inversosdecrescentes(leituras-1);

    } 
}


int main (void){
    

    int leituras = 0;


    printf("Defina uma quantidade de leituras: ");
    scanf("%d", &leituras);

    printf("\nSao multiplodo de 6 inversos e em ordem decrescente: ");
    multiplosde6inversosdecrescentes(leituras-1);

    
    return 0;
}


/*

Defina uma quantidade de leituras: 5

Sao multiplodo de 6 inversos e em ordem decrescente:
1/24
1/18
1/12
1/6
1/1

ou

Defina uma quantidade de leituras: 10

Sao multiplodo de 6 inversos e em ordem decrescente:
1/54
1/48
1/42
1/36
1/30
1/24
1/18
1/12
1/6
1/1

*/