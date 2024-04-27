#include "io.h"

/**
readIntArray - Ler arranjo com valores inteiros.
@param n - quantidade de valores
@param array - grupo de valores inteiros
*/

void printIntArray ( int n, int array [ ] )
{
// definir dado local
int x = 0;
// mostrar valores no arranjo
for ( x=0; x<n; x=x+1 )
{
// mostrar valor
IO_printf ( "%2d: %d\n", x, array [ x ] );
} // end for
} // end printIntArray ( )
/**
Method_01 - Mostrar certa quantidade de valores.
*/
void method_01 ( )
{
// definir dado
int array [ ] = { 1, 2, 3, 4, 5 };
// identificar
IO_id ( "Method_01 - v0.0" );
// executar o metodo auxiliar
printIntArray ( 5, array );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_01 ( )


void readIntArray ( int n, int array [ ] )
{
// definir dados locais
int x = 0;
int y = 0;
chars text = IO_new_chars ( STR_SIZE );
// ler e guardar valores em arranjo
for ( x=0; x<n; x=x+1 )
{
// ler valor
strcpy ( text, STR_EMPTY );
y = IO_readint ( IO_concat (
IO_concat ( text, IO_toString_d ( x ) ), " : " ) );
// guardar valor
array [ x ] = y;
} // end for
} // end readIntArray ( )
/**
Method_02.
*/
void method_02 ( )
{
// definir dados
int n = 5; // quantidade de valores
int array [ n ];
// identificar
IO_id ( "Method_02 - v0.0" );
// ler dados
readIntArray ( n, array );
// mostrar dados
IO_printf ( "\n" );
printIntArray ( n, array );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_02 ( )


/**
fprintIntArray - Gravar arranjo com valores inteiros.
@param fileName - nome do arquivo
@param n - quantidade de valores
@param array - grupo de valores inteiros
*/
void fprintIntArray ( chars fileName, int n, int array [ ] )
{
// definir dados locais

int x = 0;
// gravar quantidade de dados
IO_fprintf ( arquivo, "%d\n", n );
// gravar valores no arranjo
for ( x=0; x<n; x=x+1 )
{
// gravar valor
IO_fprintf ( arquivo, "%d\n", array [ x ] );
} // end for
// fechar arquivo
fclose ( arquivo );
} // end fprintIntArray ( )
/**
Method_03.
*/


void method_03 ( )
{
// definir dados
int n = 5; // quantidade de valores
int array [ n ];
// identificar
IO_id ( "Method_03 - v0.0" );
// ler dados
readIntArray ( n, array );
// mostrar dados
IO_printf ( "\n" );
fprintIntArray ( "ARRAY1.TXT", n, array );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_03 ( )



int main (void){
    
    method_03();

}


/*
    resposta:


Method_03 - v0.0
Autor: ________________________

0 : 1
1 : 2
2 : 3
3 : 4
4 : 5


Apertar ENTER para continuar

*/