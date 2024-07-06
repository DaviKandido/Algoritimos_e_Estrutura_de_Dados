/*
Exemplo - v0.0. - 16 / 05 / 2024
Author: Davi Cândido de Almeida
*/

// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres

// ----------------------------------------------- classes / pacotes

#include "io.hpp"

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
Method_01 - exemplo 1



*/
void method_01 ( ) {
// identificar
	






} // end method_01 ( )




/**
Method_02. - exemplo 2



*/
void method_02 ( )
{
// identificar







} // end method_02 ( )




/**
Method_03. - exemplo 3



*/
void method_03 ( )
{
// identificar







} // end method_03 ( )





/**
Method_04.  - exemplo 4


*/


void method_04 ( )
{
// identificar





} // end method_04 ( )




/**
Method_05.  - exemplo 5


*/


void method_05 ( )
{
// identificar





} // end method_05 ( )



/**
Method_06.  - exemplo 6


*/



void method_06 ( )
{
// identificar





} // end method_06 ( )



/**
Method_07.  - exemplo 7


*/



void method_07 ( )
{
// identificar






} // end method_07 ( )




/**
Method_08.  - exemplo 8


*/



void method_08 ( )
{
// identificar






} // end method_08 ( )





/**
Method_09.  - exemplo 9


*/


void method_09 ( )
{
// identificar






} // end method_09 ( )




/**
Method_10.  - exemplo 10


*/


void method_10 ( )
{
// identificar







} 


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
