
/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368
Lista: 2024-1_aed1_ed09

01.) Incluir um método (0911) para
ler as dimensões (quantidade de linhas e de colunas) de uma matriz real do teclado,
bem como todos os seus elementos (apenas valores negativos).
Verificar se as dimensões não são nulas ou negativas.
Para testar, ler dados e mostrá-los na tela por outro método.
Exemplo: double negativeMatrix [10][10];
readNegativeDoubleMatrix ( 3, 3, negativeMatrix );
printDoubleMatrix ( 3, 3, negativeMatrix );

*/

#include <stdio.h>
#include "io.h"


void readNegativeDoubleMatrix ( int linhas, int colunas, double negativeMatrix[linhas][colunas] ){

     int x = 0, y = 0;
     for ( x=0; x<linhas; x=x+1 )
     {   for ( y=0; y<colunas; y=y+1 )
         {   printf("matriz[%d][%d] = ", x, y);
             scanf( "%lf", &negativeMatrix [x][y]);
             if(negativeMatrix[x][y] > 0){
                printf("Valor positivo, invalido\n");
                 y = y - 1;
             }
             
             
        }
     }
}

void printDoubleMatrix ( int linhas, int colunas, double negativeMatrix[linhas][colunas] ){

     int x = 0, y = 0;
     for ( x=0; x<linhas; x=x+1 )
     {   for ( y=0; y<colunas; y=y+1 )
         {   printf("%lf\t", negativeMatrix[x][y]);}
         printf("\n");
     }
}


void method_01(){

double negativeMatrix [10][10];

  int linhas  = 0;
  int colunas = 0;

  printf ( "\nlinhas = " );
  scanf  ( "%d", &linhas );    getchar( );
  printf ( "\ncolunas = " );
  scanf  ( "%d", &colunas );    getchar( );

  if( linhas <= 0 || colunas <= 0){

    printf("As linhas e colunas devem ser valores validos");
    method_01();

  } else{


    readNegativeDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");
    printDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");

  }
}


int main(void){

 method_01 ( );

return 0;

}


/*

    resposta:

linhas = 2

colunas = 2
matriz[0][0] = 1
Valor positivo invalido
matriz[0][0] = 4       
Valor positivo invalido
matriz[0][0] = 5       
Valor positivo invalido
matriz[0][0] = 6       
Valor positivo invalido

matriz[0][0] = -1      
matriz[0][1] = -4
matriz[1][0] = -5
matriz[1][1] = -6

-1.000000       -4.000000
-5.000000       -6.000000


    Outra resposta:


linhas = -5

colunas = 0
As linhas e colunas devem ser valores validos
linhas = 6

colunas = 0
As linhas e colunas devem ser valores validos
linhas = 2

colunas = 2
matriz[0][0] = -6.9
matriz[0][1] = 8.5
Valor positivo invalido
matriz[0][1] = -8.5    
matriz[1][0] = -3.3
matriz[1][1] = -2.1

-6.900000       -8.500000
-3.300000       -2.100000


*/