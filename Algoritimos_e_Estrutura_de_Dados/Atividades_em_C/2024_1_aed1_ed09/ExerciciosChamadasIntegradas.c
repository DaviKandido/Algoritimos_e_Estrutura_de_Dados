
/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368
Lista: 2024-1_aed1_ed09


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


void printDiagonalDoubleMatrix( int linhas, int colunas, double negativeMatrix[linhas][colunas] ){

     int x = 0, y = 0;
     for ( x=0; x<linhas; x=x+1 )
     {   for ( y=0; y<colunas; y=y+1 )
         {   
          if(x ==y )
         printf("%lf\t", negativeMatrix[x][y]);
          else printf("\t");}
         printf("\n");
     }
}


void method_03(){

double negativeMatrix [10][10];

  int linhas  = 0;
  int colunas = 0;

  printf ( "\nlinhas = " );
  scanf  ( "%d", &linhas );    getchar( );
  printf ( "\ncolunas = " );
  scanf  ( "%d", &colunas );    getchar( );

  if( linhas <= 0 || colunas <= 0){

    printf("As linhas e colunas devem ser valores validos");
    method_03();

  } else{


  if(linhas == colunas){


    readNegativeDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");

    printDiagonalDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");

  } else{
    printf("A matriz deve ser quadrada, defina outra matriz: \n");
    method_03();
  }
  }
}

/*

    resposta:


linhas = 3

colunas = 2
A matriz deve ser quadrada, defina outra matriz: 

linhas = 3

colunas = 3
matriz[0][0] = 1
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

-1.000000
        -5.000000
                -9.000000


    Outra resposta:


linhas = 5

colunas = 1
A matriz deve ser quadrada, defina outra matriz: 

linhas = 2

colunas = 2
matriz[0][0] = -4
matriz[0][1] = -5
matriz[1][0] = -6
matriz[1][1] = -7

-4.000000        
        -7.000000


*/

void printSDiagonalDoubleMatrix( int linhas, int colunas, double negativeMatrix[linhas][colunas] ){

     int x = 0, y = 0;
     for ( x=0; x<linhas; x=x+1 )
     {   for ( y=0; y<colunas; y=y+1 )
         {   
          if(x+y == colunas-1 )
         printf("%lf\t", negativeMatrix[x][y]);
          else printf("\t");}
         printf("\n");
     }
}


void method_04(){

double negativeMatrix [10][10];

  int linhas  = 0;
  int colunas = 0;

  printf ( "\nlinhas = " );
  scanf  ( "%d", &linhas );    getchar( );
  printf ( "\ncolunas = " );
  scanf  ( "%d", &colunas );    getchar( );

  if( linhas <= 0 || colunas <= 0){

    printf("As linhas e colunas devem ser valores validos");
    method_04();

  } else{


  if(linhas == colunas){


    readNegativeDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");

    printSDiagonalDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");

  } else{
    printf("A matriz deve ser quadrada, defina outra matriz: \n");
    method_04();
  }
  }
}


/*

    resposta:


linhas = 0

colunas = -3
As linhas e colunas devem ser valores validos
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
        -5.000000
-7.000000


    Outra resposta:


linhas = 2

colunas = 2
matriz[0][0] = -1
matriz[0][1] = -2
matriz[1][0] = -3
matriz[1][1] = -4

        -2.000000
-3.000000



*/


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


void printLUTriangleDoubleMatrix( int linhas, int colunas, double negativeMatrix[linhas][colunas] ){

     int x = 0, y = 0;
     for ( x=0; x<linhas; x=x+1 )
     {   for ( y=0; y<colunas; y=y+1 )
         {   
          if(x <= y  )
          printf("%lf\t", negativeMatrix[x][y]);
          else 
          printf("\t\t");

          }
         printf("\n");
     }
}


void method_06(){

double negativeMatrix [10][10];

  int linhas  = 0;
  int colunas = 0;

  printf ( "\nlinhas = " );
  scanf  ( "%d", &linhas );    getchar( );
  printf ( "\ncolunas = " );
  scanf  ( "%d", &colunas );    getchar( );

  if( linhas <= 0 || colunas <= 0){

    printf("As linhas e colunas devem ser valores validos");
    method_06();

  } else{


  if(linhas == colunas){


    readNegativeDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");

    printLUTriangleDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");

  } else{
    printf("A matriz deve ser quadrada, defina outra matriz: \n");
    method_06();
  }
  }
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

-1.000000       -2.000000       -3.000000
                -5.000000       -6.000000
                                -9.000000



    Outra resposta:

linhas = 3

colunas = 2
A matriz deve ser quadrada, defina outra matriz: 

linhas = 2

colunas = 2
matriz[0][0] = 5
Valor positivo invalido
matriz[0][0] = -5.5
matriz[0][1] = -6.759
matriz[1][0] = -10.65
matriz[1][1] = -98

-5.500000       -6.759000
                -98.000000


*/


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


void printSLUTriangleDoubleMatrix( int linhas, int colunas, double negativeMatrix[linhas][colunas] ){

     int x = 0, y = 0;
     for ( x=0; x<linhas; x=x+1 )
     {   for ( y=0; y<colunas; y=y+1 )
         {   
          if(x+y <= colunas-1 )
          printf("%lf\t", negativeMatrix[x][y]);
          else 
          printf("\t\t");

          }
         printf("\n");
     }
}


void method_08(){

double negativeMatrix [10][10];

  int linhas  = 0;
  int colunas = 0;

  printf ( "\nlinhas = " );
  scanf  ( "%d", &linhas );    getchar( );
  printf ( "\ncolunas = " );
  scanf  ( "%d", &colunas );    getchar( );

  if( linhas <= 0 || colunas <= 0){

    printf("As linhas e colunas devem ser valores validos");
    method_08();

  } else{


  if(linhas == colunas){


    readNegativeDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");

    printSLUTriangleDoubleMatrix ( linhas, colunas, negativeMatrix );
    printf("\n");

  } else{
    printf("A matriz deve ser quadrada, defina outra matriz: \n");
    method_08();
  }
  }
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

-1.000000       -2.000000       -3.000000
-4.000000       -5.000000
-7.000000



    Outra resposta:

linhas = 3

colunas = 2
A matriz deve ser quadrada, defina outra matriz: 

linhas = 2

colunas = 2
matriz[0][0] = 5
Valor positivo invalido
matriz[0][0] = -5.5
matriz[0][1] = -6.789
matriz[1][0] = -10.65
matriz[1][1] = -98

-5.500000       -6.789000
-10.650000

*/


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


void CriarMatrixcrescente ( int linhas, int colunas, int Matrixcrescente[linhas][colunas] ){

int soma = 0.0;

    int x = 0, y = 0;
    for (x = 0; x < linhas; x++) {
        for (y = 0; y < colunas; y++) {
          soma++;
            Matrixcrescente[x][y] = soma;
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


void method_E1(){

int Matrixcrescente [10][10];

  int linhas  = 0;
  int colunas = 0;

  printf ( "\nlinhas = " );
  scanf  ( "%d", &linhas );    getchar( );
  printf ( "\ncolunas = " );
  scanf  ( "%d", &colunas );    getchar( );

  if( linhas <= 0 || colunas <= 0){

    printf("As linhas e colunas devem ser valores validos");
    method_E1();

  } else{

if(linhas == colunas){


    for(int i = 2; i <= linhas && i <= colunas; i++ ){

    CriarMatrixcrescente(i, i, Matrixcrescente);
    printf("\n");

    fprintintMatrix("Extra_01.TXT", i, i, Matrixcrescente);
    printf("\n");


    fscanfintMatrix("Extra_01.TXT", i, i, Matrixcrescente);
    printf("\n");
    }

  }
   else {
    printf("A matriz deve ser quadrada, defina outra matriz: \n");
    method_E1();
  }
  }
}


/*

    resposta:


linhas = 4

colunas = 4


1       2        
3       4        



1       2       3
4       5       6
7       8       9



1       2       3       4
5       6       7       8
9       10      11      12
13      14      15      16



    Matrix gravada em Extra_01.TXT :

4
4
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16


Obs: Fiquem em duvida se deveriam ser grvadas todas as matrizes geradas ou somente a original, no entanto como 
no enunciado da questão se usou o termo Matrix no singular deduzi que seria apenas a ultima.
*/



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

int main ( void )
{
 // definir dados/resultados
    int opcao = 0;

 // repetir ate' desejar parar
    do
    {
     // identificar
        printf ( "\n" );             // para saltar linha
        printf ( "%s\n", "Lista_ed09 - v.0.0 - 02/05/2024"       );
        printf ( "%s\n", "Matricula: 857859 Nome: Davi Candido de Almeida" );

     // mostrar opcoes
        printf ( "%s\n", "Opcoes:"         );
        printf ( "%s\n", " 0 - parar"      );
        printf ( "%s\n", " 1 - method_01   2 - method_02" );
        printf ( "%s\n", " 3 - method_03   4 - method_04" );
        printf ( "%s\n", " 5 - method_05   6 - method_06" );
        printf ( "%s\n", " 7 - method_07   8 - method_08" );
        printf ( "%s\n", " 9 - method_09  10 - method_10" );
        printf ( "%s\n", " 11 - method_E1  12 - method_E2" );

        printf ( "%s\n", "" );        // para saltar linha

     // ler opcao
        printf ( "%s", "Qual a sua opcao? " );
        scanf  ( "%d", &opcao ); getchar ( );
        printf ( "%d",  opcao );

     // escolher acao
        switch ( opcao )
        {
           case  0:               break;
           case  1: method_01 ( ); break;
           case  2: method_02 ( ); break;
           case  3: method_03 ( ); break;
           case  4: method_04 ( ); break;
           case  5: method_05 ( ); break;
           case  6: method_06 ( ); break;
           case  7: method_07 ( ); break;
           case  8: method_08 ( ); break;
           case  9: method_09 ( ); break;
           case 10: method_10 ( ); break;
           case 11: method_E1 ( ); break;
           case 12: method_E2 ( ); break;
           
           default:
                    printf ( "\n%s\n\n", "ERRO: Opcao invalida." );
                    break;
        } // fim escolher
    }
    while ( opcao != 0 );

 // encerrar execucao
    printf ( "\n%s\n\n", "Apertar ENTER para terminar." );
    getchar( );

} // end main ( )