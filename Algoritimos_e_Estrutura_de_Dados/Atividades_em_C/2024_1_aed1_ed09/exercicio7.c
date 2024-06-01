
/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368
Lista: 2024-1_aed1_ed09

07.) Incluir um método (0917) para
mostrar somente os valores abaixo e na diagonal secundária de uma matriz real, se for quadrada.
Exemplo: double negativeMatrix [10][10];
readNegativeDoubleMatrix ( 3, 3, negativeMatrix );
printSLDTriangleDoubleMatrix ( 3, 3, negativeMatrix );

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

void printSLDTriangleDoubleMatrix( int linhas, int colunas, double negativeMatrix[linhas][colunas] ){

     int x = 0, y = 0;
     for ( x=0; x<linhas; x=x+1 )
     {   for ( y=0; y<colunas; y=y+1 )
         {   
          if(x+y < colunas-1 )
          printf("\t\t");
          else 
          printf("%lf\t", negativeMatrix[x][y]);
          }
         printf("\n");
     }
}


void method_07(){

double negativeMatrix [10][10];

  int linhas  = 0;
  int colunas = 0;

  printf ( "\nlinhas = " );
  scanf  ( "%d", &linhas );    getchar( );
  printf ( "\ncolunas = " );
  scanf  ( "%d", &colunas );    getchar( );

  if( linhas <= 0 || colunas <= 0){

    printf("As linhas e colunas devem ser valores validos");
    method_07();

  } else{


  if(linhas == colunas){


    readNegativeDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");

    printSLDTriangleDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");

  } else{
    printf("A matriz deve ser quadrada, defina outra matriz: \n");
    method_07();
  }
  }
}


int main(void){

 method_07 ( );

return 0;

}


/*

    resposta:


linhas = 3

colunas = 3
matriz[0][0] = -1
matriz[0][1] = -2
matriz[0][2] = -3
matriz[1][0] = -4
matriz[1][1] = -5
matriz[1][2] = -6
matriz[2][0] = -7
matriz[2][1] = -8
matriz[2][2] = -9

                                -3.000000
                -5.000000       -6.000000
-7.000000       -8.000000       -9.000000


    Outra resposta:

linhas = 0

colunas = -2
As linhas e colunas devem ser valores validos
linhas = 2

colunas = 3
A matriz deve ser quadrada, defina outra matriz: 

linhas = 2

colunas = 2
matriz[0][0] = 5
Valor positivo invalido
matriz[0][0] = -5
matriz[0][1] = -6
matriz[1][0] = -7
matriz[1][1] = -8

                -6.000000
-7.000000       -8.000000



*/