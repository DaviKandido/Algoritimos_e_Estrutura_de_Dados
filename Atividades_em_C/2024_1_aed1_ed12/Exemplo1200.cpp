/*
Exemplo1200 - v0.0. - 23 / 05 / 2024
Author: Davi Cândido de Almeida
*/

// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres

// ----------------------------------------------- classes / pacotes

#include "io.hpp"
#include "mymatrix.hpp"

using namespace std;

// ----------------------------------------------- definicoes globais

void pause ( std::string text )
{
std::string dummy;
std::cin.clear ( );
std::cout << std::endl << text;
std::cin.ignore( );
std::getline(std::cin, dummy);
std::cout << std::endl << std::endl;
} // end pause ( )

// ----------------------------------------------- metodos



/**
Method_01 - Mostrar certa quantidade de valores.
*/
void method_01 ( )
{
// definir dados
Matrix <int> int_matrix ( 2, 2, 0 );
int_matrix.set ( 0, 0, 1 ); int_matrix.set ( 0, 1, 2 );
int_matrix.set ( 1, 0, 3 ); int_matrix.set ( 1, 1, 4 );
// identificar
cout << "\nMethod_01 - v0.0\n" << endl;
// mostrar dados
int_matrix.print ( );
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_01 ( )


/**
Method_02.
*/
void method_02 ( )
{
// definir dados
Matrix <int> matrix ( 2, 2, 0 );
// identificar
cout << endl << "Method_02 - v0.0" << endl;
// ler dados
matrix.read ( );
// mostrar dados
matrix.print ( );
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_02 ( )


/**
Method_03.
*/
void method_03 ( )
{
// definir dados
Matrix <int> matrix ( 2, 2, 0 );
// identificar
cout << endl << "Method_03 - v0.0" << endl;
// ler dados
matrix.read ( );
// mostrar dados
matrix.print ( );
// gravar dados
matrix.fprint( "MATRIX1.TXT" );
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_03 ( )





/**
Method_04.
*/
void method_04 ( )
{
// definir dados
Matrix <int> matrix ( 1, 1, 0 );
// identificar
cout << endl << "Method_04 - v0.0" << endl;
// ler dados
matrix.fread ( "MATRIX1.TXT" );
// mostrar dados
matrix.print ( );
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_04 ( )




/**
Method_05.  - exemplo 5


*/


/**
Method_05.
*/
void method_05 ( )
{
// definir dados
Matrix <int> int_matrix1 ( 1, 1, 0 );
Matrix <int> int_matrix2 ( 1, 1, 0 );
// identificar
cout << endl << "Method_05 - v0.0" << endl;
// ler dados
int_matrix1.fread ( "MATRIX1.TXT" );
// mostrar dados
cout << "\nOriginal\n" << endl;
int_matrix1.print ( );
// copiar dados
int_matrix2 = int_matrix1;
// mostrar dados
cout << "\nCopia\n" << endl;
int_matrix2.print ( );
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_05 ( )



/**
Method_06.  - exemplo 6


*/



/**
Method_06.
*/
void method_06 ( )
{
// definir dados
Matrix <int> int_matrix ( 2, 2, 0 );
int_matrix.set ( 0, 0, 0 ); int_matrix.set ( 0, 1, 0 );
int_matrix.set ( 1, 0, 0 ); int_matrix.set ( 1, 1, 0 );
// identificar
cout << endl << "Method_06 - v0.0" << endl;
// mostrar dados
int_matrix.print ( );
// testar condicao
cout << "Zeros = " << int_matrix.isZeros ( ) << endl;
// ler dados
int_matrix.fread ( "MATRIX1.TXT" );
// mostrar dados
int_matrix.print ( );
// testar condicao
cout << "Zeros = " << int_matrix.isZeros ( ) << endl;
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_06 ( )



/**
Method_07.
*/
void method_07 ( )
{
// definir dados
Matrix <int> int_matrix1 ( 1, 1, 0 );
Matrix <int> int_matrix2 ( 1, 1, 0 );
// identificar
cout << endl << "Method_07 - v0.0" << endl;
// ler dados
int_matrix1.fread ( "MATRIX1.TXT" );
// mostrar dados
cout << "\nMatrix_1\n";
int_matrix1.print ( );
// copiar dados
int_matrix2 = int_matrix1;
// mostrar dados
cout << "\nMatrix_2\n";
int_matrix2.print ( );
// testar condicao
cout << "Diferentes = " << (int_matrix1!=int_matrix2) << endl;
// alterar dados
int_matrix2.set ( 0, 0, (-1) );
// mostrar dados
cout << "\nMatrix_1\n";
int_matrix1.print ( );
// mostrar dados
cout << "\nMatrix_2\n";
int_matrix2.print ( );
// testar condicao
cout << "Diferentes = " << (int_matrix1!=int_matrix2) << endl;
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_07 ( )




/**
Method_08.
*/
void method_08 ( )
{
// definir dados
Matrix <int> int_matrix1 ( 1, 1, 0 );
Matrix <int> int_matrix2 ( 1, 1, 0 );
Matrix <int> int_matrix3 ( 1, 1, 0 );
// identificar
cout << endl << "Method_08 - v0.0" << endl;
// ler dados
int_matrix1.fread ( "MATRIX1.TXT" );
// mostrar dados
cout << "\nMatrix_1\n";
int_matrix1.print ( );
// copiar dados
int_matrix2 = int_matrix1;
// mostrar dados
cout << "\nMatrix_2\n";
int_matrix2.print ( );
// operar dados
int_matrix3 = int_matrix1 - int_matrix2;
// mostrar dados
cout << "\nMatrix_3\n";
int_matrix3.print ( );
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_08 ( )





/**
Method_09.
*/
void method_09 ( )
{
// definir dados
Matrix <int> int_matrix1 ( 2, 2, 0 );
int_matrix1.set ( 0, 0, 1 );
int_matrix1.set ( 0, 1, 0 );
int_matrix1.set ( 1, 0, 0 );
int_matrix1.set ( 1, 1, 1 );
Matrix <int> int_matrix2 ( 1, 1, 0 );
Matrix <int> int_matrix3 ( 1, 1, 0 );
// identificar
cout << endl << "Method_09 - v0.0" << endl;
// ler dados
int_matrix2.fread ( "MATRIX1.TXT" );
// mostrar dados
cout << "\nMatrix_1\n";
int_matrix1.print ( );
// mostrar dados
cout << "\nMatrix_2\n";
int_matrix2.print ( );
// operar dados
int_matrix3 = int_matrix1 * int_matrix2;
// mostrar dados
cout << "\nMatrix_3\n";
int_matrix3.print ( );
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_09 ( )




/**
Method_10.
*/
void method_10 ( )
{
// definir dados
Matrix <int> int_matrix ( 3, 3, 0 );
int x = 0;
int y = 0;
// identificar
cout << endl << "Method_10 - v0.0" << endl;
// ler dados
int_matrix.fread ( "MATRIX1.TXT" );
// mostrar dados
cout << "\nMatrix\n";
int_matrix.print ( );
// operar dados
for ( int x = 0; x < int_matrix.getRows ( ); x=x+1 )
{
for ( int y = 0; y < int_matrix.getColumns ( ); y=y+1 )
{
int_matrix.set ( x, y, int_matrix.get ( x, y ) * (-1) );
} // end for
} // end for
// mostrar dados
cout << "\nMatrix\n";
int_matrix.print ( );
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_10 ( )

/**
Method_E1.  - exemplo Extra 1


*/

void method_E1 ( )
{
// identificar






} // end method_E1 ( )


/**
Method_E2.  - exemplo Extra 2


*/


void method_E2 ( )
{
// identificar






} // end method_E2 ( )

// ----------------------------------------------- acao principal
/*
Funcao principal.
@return codigo de encerramento
*/
int main ( int argc, char** argv )
{
// definir dado
	int x = 0; // definir variavel com valor inicial
// repetir até desejar parar
	do
	{
// identificar
		cout << "\nExemplos: " << endl ;
// mostrar opcoes
		cout << "Opcoes " << endl;
		cout << " 0 - parar " << endl;
		cout << " 1 - exemplo 1 " << endl;
		cout << " 2 - exemplo 2" << endl;
		cout << " 3 - exemplo 3" << endl;
		cout << " 4 - exemplo 4" << endl;
		cout << " 5 - exemplo 5" << endl;
		cout << " 6 - exemplo 6" << endl;
		cout << " 7 - exemplo 7" << endl;
		cout << " 8 - exemplo 8" << endl;
		cout << " 9 - exemplo 9" << endl;
		cout << "10 - exemplo 10" << endl;
// ler do teclado
		cout << endl << "Entrar com uma opcao: ";
		cin >> x;
// escolher acao
		switch ( x )
		{
			case 1: 
			cout << endl << "Method_01 - v0.0" << endl;
			method_01 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 2: 
			cout << endl << "Method_02 - v0.0" << endl;
			method_02 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 3: 
			cout << endl << "Method_03 - v0.0" << endl;
			method_03 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 4: 
			cout << endl << "Method_04 - v0.0" << endl;
			method_04 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 5: 
			cout << endl << "Method_05 - v0.0" << endl;
			method_05 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 6: 
			cout << endl << "Method_06 - v0.0" << endl;
			method_06 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 7: 
			cout << endl << "Method_07 - v0.0" << endl;
			method_07 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
		case 8:
			cout << endl << "Method_08 - v0.0" << endl;
			method_08 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 9: 
			cout << endl << "Method_09 - v0.0" << endl;
			method_09 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 10: 
			cout << endl << "Method_10 - v0.0" << endl;
			method_10 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 11: 
			cout << endl << "Method_E1 - v0.0" << endl;
			method_E1 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 12: 
			cout << endl << "Method_E2 - v0.0" << endl;
			method_E2 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
		default:
			cout << endl << "ERRO: Valor invalido." << endl;
		} // end switch
	}
	while ( x != 0 );
// encerrar
	return ( 0 );
} // end main ( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
