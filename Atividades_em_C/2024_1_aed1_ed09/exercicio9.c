
/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368
Lista: 2024-1_aed1_ed09

09.) Incluir uma função (0919) para
testar se não são todos zeros os valores abaixo da diagonal principal de uma matriz real quadrada.
Exemplo: double negativeMatrix [10][10];
readNegativeDoubleMatrix ( 3, 3, negativeMatrix );
bool result = allZerosLTriangleDoubleMatrix ( 3, 3, negativeMatrix );

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

void printLDTriangleDoubleMatrix2( int linhas, int colunas, double negativeMatrix[linhas][colunas] ){

     int x = 0, y = 0;
     for ( x=0; x<linhas; x=x+1 )
     {   for ( y=0; y<colunas; y=y+1 )
         {   
          if(x > y)
          printf("%lf\t", negativeMatrix[x][y]);
          else 
          printf("\t\t");
          }
         printf("\n");
     }
}


bool allZerosLTriangleDoubleMatrix( int linhas, int colunas, double negativeMatrix[linhas][colunas] ){

bool resultado = true;

     int x = 0, y = 0;

     for ( x=0; x<linhas; x=x+1 )
     {   for ( y=0; y<colunas; y=y+1 )
         {   
          if(x > y){
            if(negativeMatrix[x][y] != 0){
              resultado = false;
            }
           }
          }
     }
  return resultado;
}


void method_09(){

double negativeMatrix [10][10];

  int linhas  = 0;
  int colunas = 0;

  printf ( "\nlinhas = " );
  scanf  ( "%d", &linhas );    getchar( );
  printf ( "\ncolunas = " );
  scanf  ( "%d", &colunas );    getchar( );

  if( linhas <= 0 || colunas <= 0){

    printf("As linhas e colunas devem ser valores validos");
    method_09();

  } else{


  if(linhas == colunas){


    readNegativeDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");

    printf("\nSera analisado os segintes valores abaixo da diagonal principal da matriz:\n\n");

    printLDTriangleDoubleMatrix2 ( linhas, colunas, negativeMatrix );
    printf("\n");

    bool result = allZerosLTriangleDoubleMatrix ( linhas, colunas, negativeMatrix );

    if(result == true){
      printf("True: Todos os valores abaixo da diagonal principal sao zero\n\n");

    } else{

      printf("False: NEM todos os valores abaixo da diagonal principal sao zero\n\n");
    }

  }
   else {
    printf("A matriz deve ser quadrada, defina outra matriz: \n");
    method_09();
  }
  }
}



int main(void){

 method_09 ( );

return 0;

}


/*

    resposta:

linhas = 3

colunas = 3
matriz[0][0] = -1
matriz[0][1] = -2
matriz[0][2] = -3
matriz[1][0] = 0
matriz[1][1] = -4
matriz[1][2] = -5
matriz[2][0] = 0
matriz[2][1] = 0
matriz[2][2] = -6


Sera analisado os segintes valores abaixo da diagonal principal da matriz:


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
matriz[0][2] = -4
matriz[1][0] = -5
matriz[1][1] = -6
matriz[1][2] = -
Valor positivo invalido
matriz[1][2] = -7
matriz[2][0] = -8
matriz[2][1] = -9
matriz[2][2] = -10


Sera analisado os segintes valores abaixo da diagonal principal da matriz:


-5.000000
-8.000000       -9.000000

False: NEM todos os valores abaixo da diagonal principal sao zero


*/