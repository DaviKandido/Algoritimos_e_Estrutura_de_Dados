
/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368
Lista: 2024-1_aed1_ed09

10.) Incluir uma função (0920) para
testar se são zeros os valores acima da diagonal principal de uma matriz real quadrada.
Exemplo: double negativeMatrix [10][10];
readNegativeDoubleMatrix ( 3, 3, negativeMatrix );
bool result = allZerosUTriangleDoubleMatrix ( 3, 3, negativeMatrix );

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

void printLUTriangleDoubleMatrix2( int linhas, int colunas, double negativeMatrix[linhas][colunas] ){

     int x = 0, y = 0;
     for ( x=0; x<linhas; x=x+1 )
     {   for ( y=0; y<colunas; y=y+1 )
         {   
          if(x < y)
          printf("%lf\t", negativeMatrix[x][y]);
          else 
          printf("\t\t");
          }
         printf("\n");
     }
}


bool allZerosUTriangleDoubleMatrix( int linhas, int colunas, double negativeMatrix[linhas][colunas] ){

bool resultado = true;

     int x = 0, y = 0;

     for ( x=0; x<linhas; x=x+1 )
     {   for ( y=0; y<colunas; y=y+1 )
         {   
          if(x < y){
            if(negativeMatrix[x][y] != 0){
              resultado = false;
            }
           }
          }
     }
  return resultado;
}


void method_10(){

double negativeMatrix [10][10];

  int linhas  = 0;
  int colunas = 0;

  printf ( "\nlinhas = " );
  scanf  ( "%d", &linhas );    getchar( );
  printf ( "\ncolunas = " );
  scanf  ( "%d", &colunas );    getchar( );

  if( linhas <= 0 || colunas <= 0){

    printf("As linhas e colunas devem ser valores validos");
    method_10();

  } else{


  if(linhas == colunas){


    readNegativeDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");

    printf("\nSera analisado os segintes valores abaixo da diagonal principal da matriz:\n\n");

    printLUTriangleDoubleMatrix2 ( linhas, colunas, negativeMatrix );
    printf("\n");

    bool result = allZerosUTriangleDoubleMatrix ( linhas, colunas, negativeMatrix );

    if(result == true){
      printf("True: Todos os valores abaixo da diagonal principal sao zero\n\n");

    } else{

      printf("False: NEM todos os valores abaixo da diagonal principal sao zero\n\n");
    }

  }
   else {
    printf("A matriz deve ser quadrada, defina outra matriz: \n");
    method_10();
  }
  }
}



int main(void){

 method_10 ( );

return 0;

}


/*

    resposta:

linhas = 3

colunas = 3
matriz[0][0] = -1
matriz[0][1] = 0
matriz[0][2] = 0
matriz[1][0] = -2
matriz[1][1] = -3
matriz[1][2] = 0
matriz[2][0] = -4
matriz[2][1] = -5
matriz[2][2] = -6


Sera analisado os segintes valores abaixo da diagonal principal da matriz:

                0.000000        0.000000
                                0.000000


True: Todos os valores abaixo da diagonal principal sao zero


0.000000
0.000000        0.000000

True: Todos os valores abaixo da diagonal principal sao zero


    Outra resposta:


linhas = 0

colunas = 2
As linhas e colunas devem ser valores validos
linhas = 3

colunas = 2
A matriz deve ser quadrada, defina outra matriz: 

linhas = 3

colunas = 3
matriz[0][0] = -1
matriz[0][1] = -2
matriz[0][2] = 3
Valor positivo invalido
matriz[0][2] = -3
matriz[1][0] = -4
matriz[1][1] = -5
matriz[1][2] = -6
matriz[2][0] = -
Valor positivo invalido
matriz[2][0] = -7
matriz[2][1] = -8
matriz[2][2] = -9


Sera analisado os segintes valores abaixo da diagonal principal da matriz:

                -2.000000       -3.000000
                                -6.000000


False: NEM todos os valores abaixo da diagonal principal sao zero


*/