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
FILE* arquivo = fopen ( fileName, "wt" );
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




/**
freadArraySize - Ler tamanho do arranjo com valores inteiros.
@return quantidade de valores lidos
@param fileName - nome do arquivo
*/
int freadArraySize ( chars fileName )
{
// definir dados locais
int n = 0;
FILE* arquivo = fopen ( fileName, "rt" );
// ler a quantidade de dados
IO_fscanf ( arquivo, "%d", &n );
if ( n <= 0 )
{
IO_println ( "ERRO: Valor invalido." );
n = 0;
} // end if
// retornar dado lido
return ( n );
} // end freadArraySize ( )
/**
freadIntArray - Ler arranjo com valores inteiros.
@param fileName - nome do arquivo
@param n - quantidade de valores
@param array - grupo de valores inteiros
*/
void freadIntArray ( chars fileName, int n, int array [ ] )
{
// definir dados locais
int x = 0;
int y = 0;
FILE* arquivo = fopen ( fileName, "rt" );
// ler a quantidade de dados
IO_fscanf ( arquivo, "%d", &x );
if ( n <= 0 || n > x )
{
IO_println ( "ERRO: Valor invalido." );
}
else
{
// ler e guardar valores em arranjo
x = 0;
while ( ! feof ( arquivo ) && x < n )
{
// ler valor
IO_fscanf ( arquivo, "%d", &y );
// guardar valor
array [ x ] = y;
// passar ao proximo
x = x+1;
} // end while
} // end if
} // end freadIntArray ( )



/**
Method_04.
*/
void method_04 ( )
{
// definir dados
int n = 0; // quantidade de valores
// identificar
IO_id ( "Method_04 - v0.0" );
// ler dados
n = freadArraySize ( "ARRAY1.TXT" );
if ( n <= 0 )
{
IO_printf ( "\nERRO: Valor invalido.\n" );
}
else
{
// definir armazenador
int array [ n ];
// ler dados
freadIntArray ( "ARRAY1.TXT", n, array );
// mostrar dados
IO_printf ( "\n" );
printIntArray ( n, array );
} // end if
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_04 ( )


/**
copyIntArray - Copiar arranjo com valores inteiros.
@param n - quantidade de valores
@param copy - copia do grupo de valores inteiros
@param array - grupo de valores inteiros
*/
void copyIntArray ( int n, int copy [ ], int array [ ] )
{
// definir dados locais
int x = 0;
int y = 0;
if ( n <= 0 )
{
IO_println ( "ERRO: Valor invalido." );
n = 0;
}
else
{
// copiar valores em arranjo
for ( x = 0; x < n; x = x + 1 )
{
// copiar valor
copy [ x ] = array [ x ];
} // end for
} // end if
} // end copyIntArray ( )
/**
Method_05.
*/
void method_05 ( )
{
// definir dados
int n = 0; // quantidade de valores
// identificar
IO_id ( "Method_05 - v0.0" );
// ler a quantidade de dados
n = freadArraySize ( "ARRAY1.TXT" );
if ( n <= 0 )
{
IO_printf ( "\nERRO: Valor invalido.\n" );
}
else
{
// definir armazenador
int array [ n ];
int other [ n ];
// ler dados
freadIntArray ( "ARRAY1.TXT", n, array );
// copiar dados
copyIntArray ( n, other, array );
// mostrar dados
IO_printf ( "\nOriginal\n" );
printIntArray ( n, array );
// mostrar dados
IO_printf ( "\nCopia\n" );
printIntArray ( n, other );
} // end if
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_05 ( )

/**
sumIntArray - Somar valores em arranjo com inteiros.
@return - soma dos valores
@param n - quantidade de valores
@param array - grupo de valores inteiros
*/
int sumIntArray ( int n, int array [ ] )
{
// definir dados locais
int soma = 0;
int x = 0;
// mostrar valores no arranjo
for ( x=0; x<n; x=x+1 )
{
// somar valor
soma = soma + array [ x ];
} // end for
// retornar resposta
return ( soma );
} // end sumIntArray ( )
/**
Method_06.
*/
void method_06 ( )
{
// definir dados
int n = 0; // quantidade de valores
// identificar
IO_id ( "Method_06 - v0.0" );
// ler a quantidade de dados
n = freadArraySize ( "ARRAY1.TXT" );
if ( n <= 0 )
{
IO_printf ( "\nERRO: Valor invalido.\n" );
}
else
{
// definir armazenador
int array [ n ];
// ler dados
freadIntArray ( "ARRAY1.TXT", n, array );
// mostrar a soma dos valores no arranjo
IO_printf ( "\nSoma = %d\n", sumIntArray ( n, array ) );
} // end if
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_06 ( )


/**
isAllZeros - Testar valores inteiros em arranjo.
@return - true, se todos os dados forem iguais a zero;
false, caso contrario
@param n - quantidade de valores
@param array - grupo de valores inteiros
*/
bool isAllZeros ( int n, int array [ ] )
{
// definir dados locais
bool result = true;
int x = 0;
// mostrar valores no arranjo
x=0;
while ( x<n && result )
{
// testar valor
result = result && ( array [ x ] == 0 );
// passar ao proximo
x = x + 1;
} // end while
// retornar resposta
return ( result );
} // end isAllZeros ( )
/**
Method_07.
*/
void method_07 ( )
{
// definir dados
int n = 5; // quantidade de valores
int array1 [ ] = { 0,0,0,0,0 };
int array2 [ ] = { 1,2,3,4,5 };
int array3 [ ] = { 1,2,0,4,5 };
// identificar
IO_id ( "Method_07 - v0.0" );
// testar dados
IO_println ( "\nArray1" );
printIntArray ( n, array1 );
IO_printf ( "isAllZeros (array1) = %d", isAllZeros (n, array1) );
IO_println ( "\nArray2" );
printIntArray ( n, array2 );
IO_printf ( "isAllZeros (array2) = %d", isAllZeros (n, array2) );
IO_println ( "\nArray3" );
printIntArray ( n, array3 );
IO_printf ( "isAllZeros (array3) = %d", isAllZeros (n, array3) );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_07 ( )



int main (void){
    
    method_07();

}


/*
    resposta:

Method_07 - v0.0
Autor: ________________________


Array1
 0: 0
 1: 0
 2: 0
 3: 0
 4: 0
isAllZeros (array1) = 1
Array2
 0: 1
 1: 2
 2: 3
 3: 4
 4: 5
isAllZeros (array2) = 0
Array3
 0: 1
 1: 2
 2: 0
 3: 4
 4: 5
isAllZeros (array3) = 0
Apertar ENTER para continua

*/