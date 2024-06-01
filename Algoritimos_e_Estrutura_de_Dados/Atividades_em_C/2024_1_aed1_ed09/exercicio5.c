
/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368
Lista: 2024-1_aed1_ed09

05.) Incluir um método (0915) para
mostrar somente os valores abaixo e na diagonal principal de uma matriz real, se for quadrada.
Exemplo: double negativeMatrix [10][10];
readNegativeDoubleMatrix ( 3, 3, negativeMatrix );
printLDTriangleDoubleMatrix ( 3, 3, negativeMatrix );

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

void printLDTriangleDoubleMatrix( int linhas, int colunas, double negativeMatrix[linhas][colunas] ){

     int x = 0, y = 0;
     for ( x=0; x<linhas; x=x+1 )
     {   for ( y=0; y<colunas; y=y+1 )
         {   
          if(x >= y)
          printf("%lf\t", negativeMatrix[x][y]);
          else 
          printf("\t\t");
          }
         printf("\n");
     }
}


void method_05(){

double negativeMatrix [10][10];

  int linhas  = 0;
  int colunas = 0;

  printf ( "\nlinhas = " );
  scanf  ( "%d", &linhas );    getchar( );
  printf ( "\ncolunas = " );
  scanf  ( "%d", &colunas );    getchar( );

  if( linhas <= 0 || colunas <= 0){

    printf("As linhas e colunas devem ser valores validos");
    method_05();

  } else{


  if(linhas == colunas){


    readNegativeDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");

    printLDTriangleDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");

  } else{
    printf("A matriz deve ser quadrada, defina outra matriz: \n");
    method_05();
  }
  }
}


int main(void){

 method_05 ( );

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

-1.000000
-4.000000       -5.000000
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
matriz[0][1] = -6.5
matriz[1][0] = -9.2
matriz[1][1] = -8.111

-5.000000
-9.200000       -8.111000


*/