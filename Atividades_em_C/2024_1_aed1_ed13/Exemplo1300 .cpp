/*
Exemplo1300 - v0.0. - __ / __ / _____
Author: ________________________
*/
// ----------------------------------------------- classes
#include "Contato.hpp" // classe para tratar dados de pessoas
// ----------------------------------------------- definicoes globais
using namespace std;
// ----------------------------------------------- metodos
/**
Method_00 - nao faz nada.
*/
void method_00 ( )
{
// nao faz nada
} // end method_00 ( )
/**
Method_01 - Testar definicoes da classe.
*/

void method_01 ( )
{
// definir dados
Contato pessoa1;
ref_Contato pessoa2 = nullptr;
ref_Contato pessoa3 = new Contato ( );
// identificar
cout << "\nMethod_01 - v0.0\n" << endl;
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_01 ( )
/**
Method_01 - exemplo 1



/**
Method_02 - Testar atribuicoes.
*/
void method_02 ( )
{
// definir dados
Contato pessoa1;
ref_Contato pessoa2 = nullptr;
ref_Contato pessoa3 = new Contato ( );
// identificar
cout << "\nMethod_02 - v0.0\n" << endl;
// testar atribuicoes
pessoa1.setNome ( "Pessoa_01" );
pessoa1.setFone ( "111" );
pessoa3->setNome ( "Pessoa_03" );
pessoa3->setFone ( "333" );
cout << "pessoa1 - { " << pessoa1.getNome ( ) << ", " << pessoa1.getFone ( ) << " }" << endl;
cout << "pessoa3 - { " << pessoa3->getNome ( ) << ", " << pessoa3->getFone ( ) << " }" << endl;
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_02 ( )




/**
Method_03 - Testar recuperacao de dados.
*/
void method_03 ( )
{
// definir dados
Contato pessoa1;
ref_Contato pessoa2 = nullptr;
ref_Contato pessoa3 = new Contato ( );
// identificar
cout << "\nMethod_03 - v0.0\n" << endl;
// testar atribuicoes
pessoa1.setNome ( "Pessoa_01" );
pessoa1.setFone ( "111" );
pessoa3->setNome ( "Pessoa_03" );
pessoa3->setFone ( "333" );
cout << "pessoa1 - " << pessoa1.toString ( ) << endl;
cout << "pessoa3 - " << pessoa3->toString ( ) << endl;
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_03 ( )




/**
Method_04 - Testar construtor alternativo.
*/
void method_04 ( )
{
// definir dados
Contato pessoa1 ( "Pessoa_01", "111" );
ref_Contato pessoa2 = nullptr;
ref_Contato pessoa3 = new Contato ( "Pessoa_03", "333" );
// identificar
cout << "\nMethod_04 - v0.0\n" << endl;
// testar atribuicoes
cout << "pessoa1 - " << pessoa1.toString ( ) << endl;
cout << "pessoa3 - " << pessoa3->toString ( ) << endl;
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_04 ( )




/**
Method_05 - Testar construtor alternativo.
*/
void method_05 ( )
{
// definir dados
Contato pessoa1 ( "Pessoa_01", "111" );
ref_Contato pessoa2 = nullptr;
ref_Contato pessoa3 = new Contato ( "", "333" );
// identificar
cout << "\nMethod_05 - v0.0\n" << endl;
// testar atribuicoes
cout << "pessoa1 - " << pessoa1.toString ( ) << " (" << pessoa1.getErro( ) << ")" << endl;
cout << "pessoa3 - " << pessoa3->toString ( ) << " (" << pessoa3->getErro( ) << ")" << endl;
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_05 ( )



/**
Method_06 - Testar construtor alternativo.
*/
void method_06 ( )
{
// definir dados
Contato pessoa1 ( "Pessoa_01", "111" );
ref_Contato pessoa2 = nullptr;
ref_Contato pessoa3 = new Contato ( "", "333" );
// identificar
cout << "\nMethod_06 - v0.0\n" << endl;
// testar atribuicoes
if ( ! pessoa1.hasErro( ) )
cout << "pessoa1 - " << pessoa1.toString( ) << endl;
else
cout << "pessoa1 tem erro (" << pessoa1.getErro( ) << ")" << endl;
if ( ! pessoa3->hasErro( ) )
cout << "pessoa3 - " << pessoa3->toString( ) << endl;
else
cout << "pessoa3 tem erro (" << pessoa3->getErro( ) << ")" << endl;
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_06 ( )



/**
Method_07 - Testar atribuicoes e tratamento de erro.
*/
void method_07 ( )
{
// definir dados
Contato pessoa1 ( "Pessoa_01", "111" );
ref_Contato pessoa2 = nullptr;
ref_Contato pessoa3 = new Contato ( "", "333" );
// identificar
cout << "\nMethod_07 - v0.0\n" << endl;
// testar atribuicoes
pessoa2 = &pessoa1; // copiar endereco de objeto
if ( ! pessoa2->hasErro( ) )
cout << "pessoa1 - " << pessoa2->toString( ) << endl;
else
cout << "pessoa1 tem erro (" << pessoa2->getErro( ) << ")" << endl;
pessoa2 = pessoa3; // vincular-se a outro objeto
if ( ! pessoa2->hasErro( ) )
cout << "pessoa3 - " << pessoa2->toString( ) << endl;
else
cout << "pessoa3 tem erro (" << pessoa2->getErro( ) << ")" << endl;
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_07 ( )




/**
Method_08 - Testar atribuicoes e tratamento de erro.
*/
void method_08 ( )
{
// definir dados
Contato pessoa1 ( "Pessoa_01", "111" );
ref_Contato pessoa2 = nullptr;
ref_Contato pessoa3 = new Contato ( "", "333" );
ref_Contato pessoa4 = nullptr;
// identificar
cout << "\nEXEMPLO1308 - Method_08 - v0.0\n" << endl;
// testar atribuicoes
pessoa2 = new Contato ( pessoa1 );
if ( pessoa2 )
cout << "pessoa2 - " << pessoa2->toString( ) << endl;
else
cout << "pessoa2 tem erro (" << pessoa2->getErro( ) << ")" << endl;
if ( pessoa3 ) // o teste de existencia deve ser feito previamente
{
pessoa2 = new Contato ( *pessoa3 );
if ( pessoa2 )
cout << "pessoa2 - " << pessoa2->toString( ) << endl;
else
cout << "pessoa2 tem erro (" << pessoa3->getErro( ) << ")" << endl;
} // end if
if ( pessoa4 ) // o teste de existencia deve ser feito previamente
{
pessoa2 = new Contato ( *pessoa4 );
if ( pessoa2 )
cout << "pessoa2 - " << pessoa2->toString( ) << endl;
else
cout << "pessoa2 tem erro (" << pessoa4->getErro( ) << ")" << endl;
} // end if
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_08 ( )




/**
Method_09 - Testar arranjo de objetos (1).
*/
void method_09 ( )
{
// definir dados
Contato pessoa [ 3 ];
int x = 0;
// identificar
cout << "\nMethod_09 - v0.0\n" << endl;
// testar atribuicoes
pessoa [ 0 ].setNome ( "Pessoa_1" );
pessoa [ 0 ].setFone ( "111" );
pessoa [ 1 ].setNome ( "Pessoa_2" );
pessoa [ 1 ].setFone ( "222" );
pessoa [ 2 ].setNome ( "Pessoa_3" );
pessoa [ 2 ].setFone ( "333" );
for ( x=0; x < 3; x=x+1 )
{
cout << x << " : " << pessoa[ x ].toString( ) << endl;
} // end for
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_09 ( )




/**
Method_10 - Testar arranjo de referencias para objetos (2).
*/
void method_10 ( )
{
// definir dados
Contato *pessoa [ 3 ];
int x = 0;
// identificar
cout << "\nMethod_10 - v0.0\n" << endl;
// testar atribuicoes
pessoa [ 0 ] = new Contato ( "Pessoa_1", "111" );
pessoa [ 1 ] = new Contato ( "Pessoa_2", "222" );
pessoa [ 2 ] = new Contato ( "Pessoa_3", "333" );
for ( x=0; x < 3; x=x+1 )
{
cout << x << " : " << pessoa[ x ]->toString( ) << endl;
} // end for
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
		cout << " 1 - exemplo 1 - testar definicao de contatos (objetos) " << endl;
		cout << " 2 - exemplo 2 - Testar atribuicoes "  << endl;
		cout << " 3 - exemplo 3 - Testar recuperacao de dados." << endl;
		cout << " 4 - exemplo 4 - Testar construtor alternativo." << endl;
		cout << " 5 - exemplo 5 - Testar construtor alternativo." << endl;
		cout << " 6 - exemplo 6 - Testar construtor alternativo." << endl;
		cout << " 7 - exemplo 7 - Testar atribuicoes e tratamento de erro." << endl;
		cout << " 8 - exemplo 8 - Testar atribuicoes e tratamento de erro." << endl;
		cout << " 9 - exemplo 9 - Testar arranjo de objetos (1)." << endl;
		cout << "10 - exemplo 10 - Testar arranjo de referencias para objetos (2). " << endl;
// ler do teclado
		cout << endl << "Entrar com uma opcao: ";
		cin >> x;
// escolher acao
		switch ( x )
		{
			case 1: 
			cout << endl << "Method_01 - v0.0" << endl;
			method_01 ( );
			break;
			case 2: 
			cout << endl << "Method_02 - v0.0" << endl;
			method_02 ( );
			break;
			case 3: 
			cout << endl << "Method_03 - v0.0" << endl;
			method_03 ( );
			break;
			case 4: 
			cout << endl << "Method_04 - v0.0" << endl;
			method_04 ( );
			break;
			case 5: 
			cout << endl << "Method_05 - v0.0" << endl;
			method_05 ( );
			break;
			case 6: 
			cout << endl << "Method_06 - v0.0" << endl;
			method_06 ( );
			break;
			case 7: 
			cout << endl << "Method_07 - v0.0" << endl;
			method_07 ( );
			break;
		case 8:
			cout << endl << "Method_08 - v0.0" << endl;
			method_08 ( );
			break;
			case 9: 
			cout << endl << "Method_09 - v0.0" << endl;
			method_09 ( );
			break;
			case 10: 
			cout << endl << "Method_10 - v0.0" << endl;
			method_10 ( );
			break;
			case 11: 
			cout << endl << "Method_E1 - v0.0" << endl;
			method_E1 ( );
			break;
			case 12: 
			cout << endl << "Method_E2 - v0.0" << endl;
			method_E2 ( );
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
