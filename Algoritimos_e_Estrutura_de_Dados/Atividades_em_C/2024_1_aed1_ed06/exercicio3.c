#include "io.h"

/*
03.) Incluir um método recursivo (0613) para
ler um valor inteiro do teclado e chamar procedimento recursivo para
mostrar essa quantidade em valores da sequência de inversos dos múltiplos de 6, começando em 1.

DICA: Separar o primeiro do restante.

Exemplo: valor = 5 => { 1/1, 1/6, 1/12, 1/18, 1/24. }
*/


void multiplosde6inversos(int leituras, int contador){


    if (leituras > contador) {

        if(contador == 1){
            printf ("\n1/%d", contador);
        }

        printf ("\n1/%d", contador*6);

        multiplosde6inversos(leituras, contador+1);

    } 
}


int main (void){
    

    int leituras = 0;


    printf("Defina uma quantidade de leituras: ");
    scanf("%d", &leituras);

    printf("\nSao multiplodo de 6 inversos: ");
    multiplosde6inversos(leituras, 1);

    
    return 0;
}


/*

Defina uma quantidade de leituras: 5

Sao multiplodo de 6 inversos:
1/1
1/6
1/12
1/18
1/24

ou

Defina uma quantidade de leituras: 10

Sao multiplodo de 6 inversos:
1/1
1/6
1/12
1/18
1/24
1/30
1/36
1/42
1/48
1/54

*/