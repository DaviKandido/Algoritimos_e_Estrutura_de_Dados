
/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368
Lista: 2024-1_aed1_ed09

02.) Incluir um método (0912) para
gravar uma matriz real em arquivo.
A matriz e o nome do arquivo serão dados como parâmetros.
Para testar, usar a leitura da matriz do problema anterior.
Usar outro método para ler e recuperar a matriz do arquivo, antes de mostrá-la na tela.
Exemplo: double negativeMatrix [10][10];
readNegativeMatrix DoubleMatrix ( 3, 3, negativeMatrix );
fprintDoubleMatrix ( "MATRIX_01.TXT", 3, 3, negativeMatrix );
*/

#include <stdio.h>
#include "io.h"


void readNegativeDoubleMatrix ( int linhas, int colunas, double negativeMatrix[linhas][colunas] ){

    int x = 0, y = 0;
    for (x = 0; x < linhas; x++) {
        for (y = 0; y < colunas; y++) {
            printf("matriz[%d][%d] = ", x, y);
            scanf("%lf", &negativeMatrix[x][y]);
            if (negativeMatrix[x][y] >= 0) {
                printf("Valor positivo, invalido\n");
                y--;
            }
        }
    }
}

void fscanfDoubleMatrix(char *filename, int linhas, int colunas, double negativeMatrix[linhas][colunas]) {
   
    FILE *arquivo = fopen(filename, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int p = 0, q = 0;
    double num = 0;
    int x = 0, y = 0;

    fscanf(arquivo, "%d", &p);
    fscanf(arquivo, "%d", &q);

    if (p <= linhas && q <= colunas) {
        while (x < p) {
            y = 0;
            while (y < q) {
                fscanf(arquivo, "%lf", &num);
                printf("%lf\t", num);
                y++;
            }
            printf("\n");
            x++;
        }
    } else {
        printf("As dimensões da matriz no arquivo não correspondem às dimensões fornecidas.\n");
    }

    fclose(arquivo); // Fechar o arquivo após a leitura, mesmo se a condição não for satisfeita
}



void fprintDoubleMatrix ( chars filename ,int linhas, int colunas, double negativeMatrix[linhas][colunas] ){

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
            fprintf(arquivo, "%lf\n", negativeMatrix[x][y]);
        }
    }

    fclose(arquivo);
}


void method_02(){

double negativeMatrix [10][10];

  int linhas  = 0;
  int colunas = 0;

  printf ( "\nlinhas = " );
  scanf  ( "%d", &linhas );    getchar( );
  printf ( "\ncolunas = " );
  scanf  ( "%d", &colunas );    getchar( );

  if( linhas <= 0 || colunas <= 0){

    printf("As linhas e colunas devem ser valores validos");
    method_02();

  } else{



    readNegativeDoubleMatrix(linhas, colunas, negativeMatrix);
    printf("\n");
    fprintDoubleMatrix("MATRIX_01.TXT", linhas, colunas, negativeMatrix);
    printf("\n");
    fscanfDoubleMatrix("MATRIX_01.TXT", linhas, colunas, negativeMatrix);
    printf("\n");


  }
}



/*

    resposta no terminal:

linhas = 3

colunas = 3
matriz[0][0] = 1
Valor positivo invalido
matriz[0][0] = 2       
Valor positivo invalido
matriz[0][0] = 3       
Valor positivo invalido
matriz[0][0] = -1      
matriz[0][1] = -2
matriz[0][2] = -3
matriz[1][0] = -4
matriz[1][1] = -5
matriz[1][2] = -6
matriz[2][0] = -7
matriz[2][1] = -8
matriz[2][2] = -9

-1.000000       -2.000000       -3.000000
-4.000000       -5.000000       -6.000000
-7.000000       -8.000000       -9.000000



    resposta em MATRIX01.TXT:


3
3
-1.000000
-2.000000
-3.000000
-4.000000
-5.000000
-6.000000
-7.000000
-8.000000
-9.000000


*/