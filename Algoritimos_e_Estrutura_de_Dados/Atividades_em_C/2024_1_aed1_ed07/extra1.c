/*

E1.) Incluir um método (07E1) para
programa ler um valor inteiro do teclado, e
gravar em arquivo os seus divisores ímpares em ordem decrescente.

*/

#include "io.h"

void Divisoresimpares(int numero) {

    FILE * arquivo = fopen ("EXTRA_1.TXT", "wt" );

    int contador = numero;

    fprintf(arquivo, "São divisores impares de %d: \n\n", numero);

    while ( contador > 0){

        if (numero % contador == 0 && contador % 2 != 0) {

            fprintf ( arquivo, "%d\n", contador );

        }

        contador--;

    }

    fclose ( arquivo );
}




int main (){


    int numero = 0;

    printf("Digite um numero para se encontrar seus divisores impares: ");
    scanf("%d", &numero);

    Divisoresimpares(numero);

    return 0;
}



/*

Respostas em EXTRA_1.TXT:

São divisores impares de 50: 

25
5
1


OU


São divisores impares de 105: 

105
35
21
15
7
5
3
1

*/