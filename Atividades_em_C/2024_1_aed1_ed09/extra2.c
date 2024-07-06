
/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368
Lista: 2024-1_aed1_ed09

E2.) Incluir definições e testes (09E2) para
ler do teclado as quantidades de linhas e colunas de uma matriz,
e montar uma matriz com a característica abaixo,
a qual deverá ser gravada em arquivo, após o retorno.
Exemplos:

4 3
2 1

9 8 7
6 5 4
3 2 1

16 15 14 13
12 11 10 9
8  7  6  5
4  3  2  1

*/

#include <stdio.h>
#include "io.h"


void CriarMatrixdecrescente ( int linhas, int colunas, int Matrixcrescente[linhas][colunas] ){

int decrescimento = (linhas*colunas);

    int x = 0, y = 0;
    for (x = 0; x < linhas; x++) {
        for (y = 0; y < colunas; y++) {
            Matrixcrescente[x][y] = decrescimento;
            decrescimento--;

            }
        }
    }

void fscanfintMatrix(char *filename, int linhas, int colunas, int Matrixcrescente[linhas][colunas]) {
   
    FILE *arquivo = fopen(filename, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int p = 0, q = 0;
    int num = 0;
    int x = 0, y = 0;

    fscanf(arquivo, "%d", &p);
    fscanf(arquivo, "%d", &q);

    if (p <= linhas && q <= colunas) {
        while (x < p) {
            y = 0;
            while (y < q) {
                fscanf(arquivo, "%d", &num);
                printf("%d\t", num);
                y++;
            }
            printf("\n");
            x++;
        }
    } else {
        printf("As dimensoes da matriz no arquivo nao correspondem as dimensões fornecidas.\n");
    }

    fclose(arquivo); // Fechar o arquivo após a leitura, mesmo se a condição não for satisfeita
}



void fprintintMatrix ( chars filename ,int linhas, int colunas, int Matrixcrescente[linhas][colunas] ){

    FILE *arquivo = fopen(filename, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arquivo, "%d\n", linhas);
    fprintf(arquivo, "%d\n", colunas);

    int x = 0, y = 0;
    for (x = 0; x < linhas; x++) {
        for (y = 0; y < colunas; y++) {
            fprintf(arquivo, "%d\n", Matrixcrescente[x][y]);
        }
    }

    fclose(arquivo);
}


void method_E2(){

int Matrixcrescente [10][10];

  int linhas  = 0;
  int colunas = 0;

  printf ( "\nlinhas = " );
  scanf  ( "%d", &linhas );    getchar( );
  printf ( "\ncolunas = " );
  scanf  ( "%d", &colunas );    getchar( );

  if( linhas <= 0 || colunas <= 0){

    printf("As linhas e colunas devem ser valores validos");
    method_E2();

  } else{

if(linhas == colunas){


    for(int i = 2; i <= linhas && i <= colunas; i++ ){

    CriarMatrixdecrescente(i, i, Matrixcrescente);
    printf("\n");

    fprintintMatrix("Extra_02.TXT", i, i, Matrixcrescente);
    printf("\n");


    fscanfintMatrix("Extra_02.TXT", i, i, Matrixcrescente);
    printf("\n");
    }

  }
   else {
    printf("A matriz deve ser quadrada, defina outra matriz: \n");
    method_E2();
  }
  }
}


int main(void){

 method_E2 ( );


return 0;
}


/*

    resposta:


linhas = 4

colunas = 4


4       3        
2       1        



9       8       7
6       5       4
3       2       1



16      15      14      13
12      11      10      9
8       7       6       5
4       3       2       1



    Matrix gravada em Extra_02.TXT :

4
4
16
15
14
13
12
11
10
9
8
7
6
5
4
3
2
1

Obs: Fiquem em duvida se deveriam ser grvadas todas as matrizes geradas ou somente a original, no entanto como 
no enunciado da questão se usou o termo Matrix no singular deduzi que seria apenas a ultima.
*/