/*

E2.) Incluir um método e uma função (07E2) para
ler palavras de um arquivo, uma por linha, e
contar quantas começam com a letra 'c' (ou 'C').

*/

#include "io.h"

int contadorDePalavrasComC(FILE*arquivo, int soma) {
 

    char palavra[100];


    // Ler os valores do arquivo e somá-los
    while (fscanf(arquivo, "%s", palavra) != EOF) {

       if (palavra[0] == 'c' || palavra[0] == 'C') {

        soma = soma + 1;

    }

    }

    return soma;
}

int main() {

    int soma = 0;

    // Abrir o arquivo para leitura

    FILE * arquivo;
    char nomedoarquivo[100];


    printf("Digite o nome do arquivo a ser lido: ");
    scanf("%s", &nomedoarquivo);

    arquivo = fopen (nomedoarquivo, "rt");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s \n", nomedoarquivo);
        return 1;
    } else{

        printf("\nO metodo a seguir contara quantas palavras iniciadas com c ou C contem em %s\n\n", nomedoarquivo);


        soma = contadorDePalavrasComC(arquivo, soma);

        printf ("%s contem %d palavras iniciadas com c ou C ", nomedoarquivo, soma);

        fclose(arquivo);
    

    }


    return 0;
}



/*


Digite o nome do arquivo a ser lido: EXTRA_2.TXT

O metodo a seguir contara quantas palavras iniciadas com c ou C contem em EXTRA_2.TXT

EXTRA_2.TXT contem 6 palavras iniciadas com c ou C 



OU



Digite o nome do arquivo a ser lido: EXTRA_2(NEW).TXT

O metodo a seguir contara quantas palavras iniciadas com c ou C contem em EXTRA_2(NEW).TXT

EXTRA_2(NEW).TXT contem 4 palavras iniciadas com c ou C 


*/