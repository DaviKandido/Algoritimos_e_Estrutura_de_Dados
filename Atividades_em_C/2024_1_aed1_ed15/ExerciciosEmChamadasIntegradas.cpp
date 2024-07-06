/*
    identificação: 

Ed15 - v0.0. - 13 / 06 / 2024

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/


// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres

// ----------------------------------------------- classes / pacotes

#include "io.hpp"
#include "Funcoes.hpp"

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
Method_01 - Exercicio 1


Funcao para acrescentar caractere ao final
de uma cadeia de caracteres, por meio de apontador.
@return apontador para a cadeia atualizada
@param s - apontador para cadeia de caracteres
@param c - caractere a ser inserido

char* str_push_back ( char *s, char c )

*/

void method_01 ( ) {
// identificar
	
char *s = new char[80];
char c;

cout << "Defina uma cadeia de caracteres: ";
cin >> s;
cout << "Agora defina um caracter para adicionar a sua frente: ";
cin >> c;

char* resultado = str_push_back ( s,  c );

cout << "Agora a cadeia sera: " << resultado << std::endl;


} // end method_01 ( )

/*
Method_01 - v0.0

Defina uma cadeia de caracteres: ABCDE
Agora defina um caracter para adicionar a sua frente: o
Agora a cadeia sera: ABCDEo
-------------------------------------------------------------
Method_01 - v0.0

Defina uma cadeia de caracteres: aei
Agora defina um caracter para adicionar a sua frente: 8
Agora a cadeia sera: aei8
*/

/**
Method_02. - Exercicio 2

Funcao para remover caractere do final
de uma cadeia de caracteres, por meio de apontador.
@return apontador para a cadeia atualizada
@param s - apontador para cadeia de caracteres

char* str_pop_back ( char *s )

*/

void method_02 ( )
{
// identificar

char *s = new char[80];

cout << "Defina uma cadeia para remover seu ultimo caracter: ";
cin >> s;

char* resultado = str_pop_back ( s );

cout << "Agora a cadeia sera: " << resultado << std::endl;

} // end method_02 ( )


/*
Method_02 - v0.0

Defina uma cadeia para remover seu ultimo caracter: ABCDE
Agora a cadeia sera: ABCD
-------------------------------------------------------------
Method_02 - v0.0

Defina uma cadeia para remover seu ultimo caracter: 12345
Agora a cadeia sera: 1234
*/

/**
Method_03. - Exercicio 3

Funcao para acrescentar caractere ao início
de uma cadeia de caracteres, por meio de apontador.
@return apontador para a cadeia atualizada
@param c - caractere a ser inserido
@param s - apontador para cadeia de caracteres

char* str_push_front ( char c, char *s )

*/

void method_03 ( )
{
// identificar


char *s = new char[80];
char c;

cout << "Defina uma cadeia de caracteres: ";
cin >> s;
cout << "Agora defina um caracter para adicionar em seu inicio: ";
cin >> c;

char* resultado = str_push_front ( c, s );

cout << "Agora a cadeia sera: " << resultado << std::endl;


} // end method_03 ( )

/*
Method_03 - v0.0

Defina uma cadeia de caracteres: ABCDE
Agora defina um caracter para adicionar em seu inicio: 8
Agora a cadeia sera: 8ABCDE
------------------------------------------------------------
Method_03 - v0.0

Defina uma cadeia de caracteres: 12345
Agora defina um caracter para adicionar em seu inicio: A
Agora a cadeia sera: A12345

*/

/**
Method_04.  - Exercicio 4

Funcao para remover caractere do início
de uma cadeia de caracteres, por meio de apontador.
@return apontador para a cadeia atualizada
@param s - apontador para cadeia de caracteres

char* str_pop_front ( char *s )

*/


void method_04 ( )
{
// identificar

char *s = new char[80];

cout << "Defina uma cadeia para remover seu ultimo caracter: ";
cin >> s;

char* resultado = str_pop_front ( s );

cout << "Agora a cadeia sera: " << resultado << std::endl;

} // end method_04 ( )

/*
Method_04 - v0.0

Defina uma cadeia para remover seu ultimo caracter: ABCDE
Agora a cadeia sera: BCDE
------------------------------------------------------------
Method_04 - v0.0

Defina uma cadeia para remover seu ultimo caracter: 12345
Agora a cadeia sera: 2345
*/

/**
Method_05.  - Exercicio 5

Funcao para inserir caractere no meio (aproximadamente)
de uma cadeia de caracteres, por meio de apontador,
se houver pelo menos dois caracteres.
@return apontador para a cadeia atualizada
@param s - apontador para cadeia de caracteres
@param c - caractere a ser inserido

char* str_push_mid ( char *s, char c )

*/


void method_05 ( )
{
// identificar

char *s = new char[80];
char c;

cout << "Defina uma cadeia de caracteres: ";
cin >> s;
cout << "Agora defina um caracter para adicionar em seu meio: ";
cin >> c;

char* resultado = str_push_mid ( s,  c );

cout << "Agora a cadeia sera: " << resultado << std::endl;


} // end method_05 ( )

/*
Method_05 - v0.0

Defina uma cadeia de caracteres: ABCDEFGH
Agora defina um caracter para adicionar em seu meio: 8
Agora a cadeia sera: ABCD8EFGH
------------------------------------------------------------
Method_05 - v0.0

Defina uma cadeia de caracteres: 12345
Agora defina um caracter para adicionar em seu meio: c
Agora a cadeia sera: 12c345 //meio (aproximadamente)
------------------------------------------------------------
Method_05 - v0.0

Defina uma cadeia de caracteres: A
Agora defina um caracter para adicionar em seu meio: 5
Agora a cadeia sera: A //Cadeia possui menos do que 2 caracteres, retorna o proprio caracter

*/

/**
Method_06.  - Exercicio 6

Funcao para remover caractere do meio (aproximadamente)
de uma cadeia de caracteres, por meio de apontador.
Se houver ao menos dois caracteres, remover o primeiro.
@return apontador para a cadeia atualizada
@param s - apontador para cadeia de caracteres

char* str_pop_mid ( char *s )

*/


void method_06 ( )
{
// identificar

char *s = new char[80];

cout << "Defina uma cadeia para remover seu caracter do meio (Aprox.): ";
cin >> s;

char* resultado = str_pop_mid ( s );

cout << "Agora a cadeia sera: " << resultado << std::endl;

} // end method_06 ( )

/*
Method_06 - v0.0

Defina uma cadeia para remover seu caracter do meio (Aprox.): ABCDE
Agora a cadeia sera: ABDE
------------------------------------------------------------
Method_06 - v0.0

Defina uma cadeia para remover seu caracter do meio (Aprox.): 1234
Agora a cadeia sera: 134 //Dois caracteres no meio, remove o primeiro.
------------------------------------------------------------
Method_06 - v0.0

Defina uma cadeia para remover seu caracter do meio (Aprox.): 12
Agora a cadeia sera: 2 //Dois caracteres, remove o primeiro.
*/


/**
Method_07.  - Exercicio 7

Funcao para inserir caractere em certa posição válida
de uma cadeia de caracteres, por meio de apontador.
@return apontador para a cadeia atualizada
@param s - apontador para cadeia de caracteres
@param c - caractere a ser inserido
@param index - posicao onde inserir

char* str_insert ( char *s, char c, int index )

*/

void method_07 ( )
{
// identificar

char *s = new char[80];
char c;
int index;

cout << "Defina uma cadeia de caracteres: ";
cin >> s;
cout << "Insera uma posicao: ";
cin >> index;
cout << "Agora defina um caracter para adicionar na posicao inserida: ";
cin >> c;

char* resultado = str_insert ( s,  c, index);

cout << "\nA cadeia sera: " << resultado << std::endl;

} // end method_07 ( )

/*
Method_07 - v0.0

Defina uma cadeia de caracteres: ABCDE
Insera uma posicao: 3
Agora defina um caracter para adicionar na posicao inserida: 3

A cadeia sera: AB3CDE
------------------------------------------------------------
Method_07 - v0.0

Defina uma cadeia de caracteres: 1234
Insera uma posicao: -2
Agora defina um caracter para adicionar na posicao inserida: 5

[Erro] Posicao invaida

A cadeia sera: 1234 //Posição invalida retorna a propria cadeia
------------------------------------------------------------
Method_07 - v0.0

Defina uma cadeia de caracteres: 1
Insera uma posicao: 6
Agora defina um caracter para adicionar na posicao inserida: 7

[Erro] Posicao invaida

A cadeia sera: 1 //Posição invalida retorna a propria cadeia
------------------------------------------------------------
Method_07 - v0.0

Defina uma cadeia de caracteres: 123456
Insera uma posicao: 1
Agora defina um caracter para adicionar na posicao inserida: A

A cadeia sera: A123456
*/


/**
Method_08.  - Exercicio 8

Funcao para remover caractere de certa posição válida
de uma cadeia de caracteres, por meio de apontador.
@return apontador para a cadeia atualizada
@param s - apontador para cadeia de caracteres
@param index - posicao de onde remover

char* str_remove ( char *s, int index )

*/

void method_08 ( )
{
// identificar


char *s = new char[80];
int index;

cout << "Defina uma cadeia de caracteres: ";
cin >> s;
cout << "Insera uma posicao (remover): ";
cin >> index;

char* resultado = str_remove ( s, index);

cout << "\nA cadeia sera: " << resultado << std::endl;

} // end method_08 ( )

/*
Method_08 - v0.0

Defina uma cadeia de caracteres: 12345
Insera uma posicao (remover): 3

A cadeia sera: 1245
------------------------------------------------------------
Method_08 - v0.0

Defina uma cadeia de caracteres: ABCD
Insera uma posicao (remover): 10

[Erro] Posicao invaida

A cadeia sera: ABCD
------------------------------------------------------------

Method_08 - v0.0

Defina uma cadeia de caracteres: 56789
Insera uma posicao (remover): 1

A cadeia sera: 6789
------------------------------------------------------------
Method_08 - v0.0

Defina uma cadeia de caracteres: A
Insera uma posicao (remover): 1

A cadeia sera:   //A cadeia passa a ter somente o '\0', ou seja sem caracteres como conteudo
*/


/**
Method_09.  - Exercicio 9

Funcao para procurar pela primeira ocorrencia de certo símbolo
em uma cadeia de caracteres, por meio de apontador.
@return apontador para a primeira ocorrência; NULL, caso contrario
@param s - apontador para cadeia de caracteres
@param c - caractere a ser procurado

char* str_chr ( char *s, char c )

*/

void method_09 ( )
{
// identificar

char *s = new char[80];
char c;

cout << "Defina uma cadeia de caracteres: ";
cin >> s;
cout << "Agora defina um caracter para se procurar: ";
cin >> c;

char* resultado = str_chr ( s,  c );

    if (resultado) {
        printf("\nA primeira ocorrencia do caractere '%c' esta em: %s\n", c, resultado);
    } else {
        printf("\n[ERRO] O caractere '%c' nao foi encontrado na cadeia.\n", c);
    }

} // end method_09 ( )

/*
Method_09 - v0.0

Defina uma cadeia de caracteres: ABCDEFGHIJ
Agora defina um caracter para se procurar: G

A primeira ocorrencia do caractere 'G' esta em: GHIJ
------------------------------------------------------------
Method_09 - v0.0

Defina uma cadeia de caracteres: 1234567
Agora defina um caracter para se procurar: b

[ERRO] O caractere 'b' nao foi encontrado na cadeia.
*/


/**
Method_10.  - Exercicio 10

Funcao para separar caracteres ate' a ocorrencia de delimitador
em uma cadeia de caracteres, por meio de apontador.
@return apontador para caracteres; NULL, caso contrario
@param s - apontador para cadeia de caracteres
@param delimiter - caractere a ser procurado

char* str_tok ( char *s, char delimiter )

*/

void method_10 ( )
{
// identificar

char *s = new char[80];
char c;

cout << "Defina uma cadeia de caracteres: ";
cin >> s;
cout << "Agora defina um caracter onde delimitar : ";
cin >> c;

char* resultado = str_tok ( s,  c );

    if (resultado) {
        printf("\nCadeia antes do delimitador: %s\n", resultado);
        printf("Cadeia depois do delimitador: %s\n", resultado + strlen(resultado) + 1);
    } else {
        printf("\n[ERRO] O delimitador '%c' nao foi encontrado na Cadeia.\n", c);
    }

} 

/*
Method_10 - v0.0

Defina uma cadeia de caracteres: ABCDEFGHI
Agora defina um caracter onde delimitar : D

Cadeia antes do delimitador: ABC
Cadeia depois do delimitador: DEFGHI
------------------------------------------------------------
Method_10 - v0.0

Defina uma cadeia de caracteres: 12345678
Agora defina um caracter onde delimitar : A

[ERRO] O delimitador 'A' nao foi encontrado na Cadeia.
*/

/**
Method_E1.  - Exercicio Extra 1

Funcao para procurar por certo prefixo
em cadeia de caracteres, por meio de apontador.
@return apontador para a primeira ocorrência; NULL, caso contrario
@param prefix - prefixo a ser procurado
@param s - apontador para cadeia de caracteres

char* str_prefix ( char *prefix, char *s )

*/

void method_E1 ( )
{
// identificar


char *s = new char[80];
char *pre = new char[80];

cout << "Defina uma cadeia de caracteres: ";
cin >> s;
cout << "Agora defina um prefixo para se procurar: ";
cin >> pre;

char* resultado = str_prefix ( pre,  s );

    if (resultado) {
        printf("\nA primeira correncia do prefixo '%s' esta em: %s\n", pre , resultado);
    } else {
        printf("\n[ERRO] O prefixo '%s' nao foi encontrado na cadeia.\n", pre);
    }

} // end method_E1 ( )

/*
Method_E1 - v0.0

Defina uma cadeia de caracteres: CADEIA_DE_CARACTERES
Agora defina um prefixo para se procurar: CARA

A primeira correncia do prefixo 'CARA' esta em: CARACTERES
-----------------------------------------------------------------------------
Method_E1 - v0.0

Defina uma cadeia de caracteres: Cadeia_de_caracteres_novos
Agora defina um prefixo para se procurar: Cadeia

A primeira correncia do prefixo 'Cadeia' esta em: Cadeia_de_caracteres_novos
-----------------------------------------------------------------------------
Method_E1 - v0.0

Defina uma cadeia de caracteres: Cadeia_de_caracteres_novos
Agora defina um prefixo para se procurar: coro

[ERRO] O prefixo 'coro' nao foi encontrado na cadeia.
*/



/**
Method_E2.  - Exercicio Extra 2

Funcao para procurar por certo sufixo
em cadeia de caracteres, por meio de apontador.
@return apontador para a primeira ocorrência; NULL, caso contrario
@param s - apontador para cadeia de caracteres
@param sufix - sufixo a ser procurado

char* str_suffix chr ( char *s, char *sufix )

*/


void method_E2 ( )
{
// identificar


char *s = new char[80];
char *suf = new char[80];

cout << "Defina uma cadeia de caracteres: ";
cin >> s;
cout << "Agora defina um sufixo para se procurar: ";
cin >> suf;

char* resultado = str_suffix ( s, suf );

    if (resultado) {
        printf("\nA primeira correncia do sufixo '%s' esta em: %s\n", suf , resultado);
    } else {
        printf("\n[ERRO] O sufixo '%s' nao foi encontrado na cadeia.\n", suf);
    }

} // end method_E2 ( )

/*
Method_E2 - v0.0

Defina uma cadeia de caracteres: Cadeia_de_caracteres_novos
Agora defina um sufixo para se procurar: cara

A primeira correncia do sufixo 'cara' esta em: caracteres_novos
-----------------------------------------------------------------------------
Method_E2 - v0.0

Defina uma cadeia de caracteres: Cadeia_de_caracteres_novos
Agora defina um sufixo para se procurar: novos

A primeira correncia do sufixo 'novos' esta em: novos
-----------------------------------------------------------------------------
Method_E2 - v0.0

Defina uma cadeia de caracteres: Cadeia_de_caracteres_novos
Agora defina um sufixo para se procurar: coisa

[ERRO] O sufixo 'coisa' nao foi encontrado na cadeia.

*/

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
		cout << "\nEds - Atividades" << endl ;
// mostrar opcoes
		cout << "Opcoes " << endl;
		cout << " 0 - parar " << endl;
		cout << " 1 - Exercicio 1 " << endl;
		cout << " 2 - Exercicio 2" << endl;
		cout << " 3 - Exercicio 3" << endl;
		cout << " 4 - Exercicio 4" << endl;
		cout << " 5 - Exercicio 5" << endl;
		cout << " 6 - Exercicio 6" << endl;
		cout << " 7 - Exercicio 7" << endl;
		cout << " 8 - Exercicio 8" << endl;
		cout << " 9 - Exercicio 9" << endl;
		cout << "10 - Exercicio 10" << endl;
		cout << "11 - Exercicio E1" << endl;
		cout << "12 - Exercicio E2" << endl;
// ler do teclado
		cout << endl << "Entrar com uma opcao: ";
		cin >> x;
// escolher acao
		switch ( x )
		{
			case 1: 
			cout << endl << "Method_01 - v0.0" << endl << endl;
			method_01 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 2: 
			cout << endl << "Method_02 - v0.0" << endl << endl;
			method_02 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 3: 
			cout << endl << "Method_03 - v0.0" << endl << endl;
			method_03 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 4: 
			cout << endl << "Method_04 - v0.0" << endl << endl;
			method_04 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 5: 
			cout << endl << "Method_05 - v0.0" << endl << endl;
			method_05 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 6: 
			cout << endl << "Method_06 - v0.0" << endl << endl;
			method_06 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 7: 
			cout << endl << "Method_07 - v0.0" << endl << endl;
			method_07 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
		case 8:
			cout << endl << "Method_08 - v0.0" << endl << endl;
			method_08 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 9: 
			cout << endl << "Method_09 - v0.0" << endl << endl;
			method_09 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 10: 
			cout << endl << "Method_10 - v0.0" << endl << endl;
			method_10 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 11: 
			cout << endl << "Method_E1 - v0.0" << endl << endl;
			method_E1 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
			case 12: 
			cout << endl << "Method_E2 - v0.0" << endl << endl;
			method_E2 ( );
			pause ( "Apertar ENTER para continuar" );
			break;
		default:
			cout << endl << "ERRO: Valor invalido." << endl;
		} // end switch
	}
	while ( x != 0 );
// encerrar
	pause ( "Apertar ENTER para terminar" );
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
