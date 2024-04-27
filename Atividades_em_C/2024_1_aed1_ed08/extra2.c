/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

E2.) Incluir um método e uma função (08E1) para
ler um arquivo ( "PALAVRAS.TXT" ),
e mediante uma função retornar as dez primeiras palavras
que não comecem ou terminem com a letra 'c' (ou 'C'), se houver.
As palavras encontradas deverão ser exibidas na tela,
após retorno.
DICA: Supor que a quantidade de palavras não ultrapassará 100.

*/

#include <stdio.h>
#include "io.h"

int contadorDePalavrasComC(FILE*arquivo, int soma) {
 

    char palavra[100];


    while (fscanf(arquivo, "%s", palavra) != EOF) {

       if (palavra[0] != 'c' && palavra[0] != 'C') {

        soma = soma + 1;
        printf("\n%s", palavra);

    }
    }
    printf("\n\n");

    return soma;
}

int main() {

    int soma = 0;


    FILE * arquivo;
    char nomedoarquivo[100];


    printf("Digite o nome do arquivo a ser lido: ");
    scanf("%s", &nomedoarquivo);

    arquivo = fopen (nomedoarquivo, "rt");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s \n", nomedoarquivo);
        return 1;
    } else{

        printf("\nO metodo a seguir contara quantas palavras NAO SAO iniciadas com c ou C em %s\n", nomedoarquivo);
        printf("\nSao elas: \n" );


        soma = contadorDePalavrasComC(arquivo, soma);

        printf ("Portanto %s contem %d palavras NAO iniciadas com c ou C ", nomedoarquivo, soma);

        fclose(arquivo);
    

    }


    return 0;
}


/*


    Resposta no terminal:

Digite o nome do arquivo a ser lido: PALAVRAS.TXT 

O metodo a seguir contara quantas palavras NAO SAO iniciadas com c ou C em PALAVRAS.TXT

Sao elas:

outro
palavra
ideias
olha
vou
digitos
predio
Tigre
Teclado
Garrafa
toddy

Portanto PALAVRAS.TXT contem 11 palavras NAO iniciadas com c ou C


*/