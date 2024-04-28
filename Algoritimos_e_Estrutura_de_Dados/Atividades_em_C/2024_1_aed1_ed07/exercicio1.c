/*

01.) Incluir um método (0711) para
ler um valor inteiro do teclado e
gravar essa quantidade em múltiplos de 4, pares, em ordem crescente, começando em 4.
Exemplo: n = 5 => { 4, 8, 12, 16, 20 }

*/

#include "io.h"

int gravarmultiplosde4 ( int controlador, int quantidade) {

    FILE * arquivo = fopen ("Texto_1.txt", "wt" );

    while (controlador >= quantidade ){
        
        fprintf(arquivo, "%d\n", quantidade*4);
        printf("%d\n", quantidade*4);
        quantidade++;
    }

    fclose ( arquivo );
}






int main (){

    int controlador = 0;
    int quantidade = 1;

    printf("Quantos multiplos de 4 serao gravados: ");
    scanf("%d", &controlador);

    gravarmultiplosde4( controlador, quantidade);

    return 0;
}



/*

Respostas em Texto_1:

4
8
12
16
20



*/