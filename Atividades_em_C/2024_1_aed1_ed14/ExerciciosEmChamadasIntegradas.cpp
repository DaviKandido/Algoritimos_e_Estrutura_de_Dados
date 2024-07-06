/*
ed14 - v0.0. - 05 / 06 / 2023
Author: Davi Cândido de Almeida
*/

// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres

// ----------------------------------------------- classes / pacotes

#include "io.hpp"
#include "MyString.hpp"
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

Funcao para converter conteudo para valor Real, se possivel.
@return valor Real equivalente, se valido;
(-1), caso contrario

int getInt ( )

*/

void method_01 ( ) {
// identificar
	

	ref_MyString conteudo1 = new MyString();
	std::string conteudoGravado;

	std::cout << "Insira uma string de numeros para ser convertida para um valor Real: ";
	std::cin >> conteudoGravado;
	std::cout << endl;

	conteudo1->set_Conteudo(conteudoGravado);

	int numeroReal = conteudo1->getInt(conteudoGravado);


	if(conteudo1->get_erro() == 1){
		std::cout << "[ERRO] Caracteres invalidos para conversao, retorno: " << numeroReal << std::endl;
	} else{
		std::cout << "Valor Real equivalente: " << numeroReal << std::endl << std::endl;
		std::cout << conteudo1->get_ErroMsg();
	}


} // end method_01 ( )

/*
Method_01 - v0.0

Insira uma string de numeros para ser convertida para um valor Real: 12345

Valor Real equivalente: 12345
[ERRO] Nao ha erro.
-----------------------------------------------------------------------------

Insira uma string de numeros para ser convertida para um valor Real: -1234

Valor Real equivalente: -1234
[ERRO] Nao ha erro.
---------------------------------------------------------------------------

Insira uma string de numeros para ser convertida para um valor Real: palavra

[ERRO] Caracteres invalidos para conversao, retorno: -1
---------------------------------------------------------------------------

Insira uma string de numeros para ser convertida para um valor Real: 65-98

[ERRO] Caracteres invalidos para conversao, retorno: -1
*/


/**
Method_02. - Exercicio 2

Funcao para converter conteudo para valor real, se possivel.
@return valor real equivalente, se valido;
(0.0), caso contrario

double getDouble ( )

*/

void method_02 ( )
{
// identificar


	ref_MyString conteudo1 = new MyString();
	std::string conteudoGravado;

	std::cout << "Insira uma string de numeros para ser convertida para um valor real: ";
	std::cin >> conteudoGravado;
	std::cout << endl;

	conteudo1->set_Conteudo(conteudoGravado);

	double numeroReal = conteudo1->getDouble(conteudoGravado);


	if(conteudo1->get_erro() == 1){
		std::cout << "[ERRO] Caracteres invalidos para conversao, retorno: " << numeroReal << std::endl;
	} else{
		conteudo1->get_ErroMsg();
		std::cout << "Valor real equivalente: " << numeroReal << std::endl << endl;
		std::cout << conteudo1->get_ErroMsg();
	}
} // end method_02 ( )

/*
Method_02 - v0.0

Insira uma string de numeros para ser convertida para um valor real: 123.456

Valor real equivalente: 123.456

[ERRO] Nao ha erro.
---------------------------------------------------------------------------

Insira uma string de numeros para ser convertida para um valor real: 12,369

Valor real equivalente: 12.369

[ERRO] Nao ha erro.
--------------------------------------------------------------------------

Insira uma string de numeros para ser convertida para um valor real: Palv,

[ERRO] Caracteres invalidos para conversao, retorno: 0.0
*/


/**
Method_03. - Exercicio 3

Funcao para converter conteudo para valor lógico, se possivel.
Nota: Considerar válidos: { true, false, T, F, 0, 1 }
@return valor logico equivalente, se valido;
false, caso contrario

bool getBoolean( )

*/

void method_03 ( )
{
// identificar


	ref_MyString conteudo1 = new MyString();
	std::string conteudoGravado;

	std::cout << "Insira um valor para converter para booleano { true, false, T, F, 0, 1 }: ";
	std::cin >> conteudoGravado;
	std::cout << endl;

	conteudo1->set_Conteudo(conteudoGravado);

	bool valorBooleano = conteudo1->getBoolean(conteudoGravado);

	if(conteudo1->get_erro() == 1){
		std::cout << "[ERRO] Caracteres invalidos para conversao, portanto retorno: " << valorBooleano << std::endl;
	} else{
		std::cout << "Valor booleano equivalente: " << valorBooleano << std::endl << endl;
		std::cout << conteudo1->get_ErroMsg();
	}
} // end method_03 ( )

/*
Method_03 - v0.0

Insira um valor para converter para booleano { true, false, T, F, 0, 1 }: true

Valor booleano equivalente: 1

[ERRO] Nao ha erro.
--------------------------------------------------------------------------

Insira um valor para converter para booleano { true, false, T, F, 0, 1 }: 0

Valor booleano equivalente: 0

[ERRO] Nao ha erro.
--------------------------------------------------------------------------

Insira um valor para converter para booleano { true, false, T, F, 0, 1 }: T

Valor booleano equivalente: 1

[ERRO] Nao ha erro.
--------------------------------------------------------------------------

Insira um valor para converter para booleano { true, false, T, F, 0, 1 }: palavra

[ERRO] Caracteres invalidos para conversao, portanto retorno: 0

*/



/**
Method_04.  - Exercicio 4

Funcao para verificar se o parametro esta’ contido no conteudo.
@return true , se contiver (em qualquer posicao);
false, caso contrario

bool contains ( std::string texto )

*/


void method_04 ( )
{
// identificar

	ref_MyString conteudo1 = new MyString();
	std::string conteudoGravado;
	std::string parametro;


	std::cout << "Insira um conteudo: ";
	std::cin >> conteudoGravado;
	std::cout << endl;

	std::cout << "Insira um parametro: ";
	std::cin >> parametro;
	std::cout << endl;

	conteudo1->set_Conteudo(conteudoGravado);

	bool contains = conteudo1->contemParametro(parametro);

	if(conteudo1->get_erro() == 1 || !contains){
		std::cout << "[ERRO] Paramtro nao esta contido no conteudo, Retorno: " << contains << std::endl;
	} else{
		std::cout << "o parametro esta contido no conteudo, Retorno:" << contains << std::endl << endl;
		std::cout << conteudo1->get_ErroMsg();
	}
} // end method_04 ( )

/*
Method_04 - v0.0

Insira um conteudo: TesteDeContimento

Insira um parametro: Teste

Foram achadas 5 Correspondencias de 5, portanto o parametro esta contido no conteudo, Retorno:1

[ERRO] Nao ha erro.
--------------------------------------------------------------------------

Insira um conteudo: TesteDeCorrespondencia

Insira um parametro: NãoEsta 

Foram achadas 0 Correspondencias de 7, portanto [ERRO] Paramtro nao esta contido no conteudo, Retorno: 0

*/


/**
Method_05.  - Exercicio 5

Funcao para converter letras para maiusculas.
@return valor equivalente em maiusculas, se houver;
o proprio valor, caso contrario

std::string toUpperCase( )

*/


void method_05 ( )
{
// identificar


	ref_MyString conteudo1 = new MyString();
	std::string conteudoGravado;

	std::cout << "Insira um conteudo: ";
	std::cin >> conteudoGravado;
	std::cout << endl;

	conteudo1->set_Conteudo(conteudoGravado);

	std::string Maiusculas = conteudo1->toUpperCase(conteudoGravado);

	if(conteudo1->get_erro() == 1){
		std::cout << "[ERRO] O conteudo possui caracteres invalidos para conversao"
		<< endl << "Portanto o retorno de "+conteudoGravado+" com as possiveis conversoes sao: "<< Maiusculas << std::endl;
	} else{
		std::cout << "A conversao de "+conteudoGravado+" para maiusculas sera: " << Maiusculas << std::endl << endl;
		std::cout << conteudo1->get_ErroMsg();
	}

} // end method_05 ( )

/*
Method_05 - v0.0

Insira um conteudo: conversao

A conversao de conversao para maiusculas sera: CONVERSAO

[ERRO] Nao ha erro.
--------------------------------------------------------------------------

Insira um conteudo: iNViaVel

[ERRO] O conteudo possui caracteres invalidos para conversao
Portanto o retorno de iNViaVel com as possiveis conversoes sao: INVIAVEL
--------------------------------------------------------------------------

Insira um conteudo: 12345

[ERRO] O conteudo possui caracteres invalidos para conversao
Portanto o retorno de 12345 com as possiveis conversoes sao: 12345
*/

/**
Method_06.  - Exercicio 6

Funcao para converter letras para minusculas.
@return valor equivalente em minusculas, se houver;
o proprio valor, caso contrario

std::string toLowerCase( )

*/



void method_06 ( )
{
// identificar

	ref_MyString conteudo1 = new MyString();
	std::string conteudoGravado;

	std::cout << "Insira um conteudo: ";
	std::cin >> conteudoGravado;
	std::cout << endl;

	conteudo1->set_Conteudo(conteudoGravado);

	std::string Maiusculas = conteudo1->toLowerCase(conteudoGravado);

	if(conteudo1->get_erro() == 1){
		std::cout << "[ERRO] O conteudo possui caracteres invalidos para conversao"
		<< endl << "Portanto o retorno de "+conteudoGravado+" com as possiveis conversoes sao: "<< Maiusculas << std::endl;
	} else{
		std::cout << "A conversao de "+conteudoGravado+" para minuscula sera: " << Maiusculas << std::endl << endl;
		std::cout << conteudo1->get_ErroMsg();
	}
} // end method_06 ( )

/*
Method_06 - v0.0

Insira um conteudo: CONVERSAO

A conversao de CONVERSAO para minuscula sera: conversao

[ERRO] Nao ha erro.
--------------------------------------------------------------------------

Insira um conteudo: inVErSAo  

[ERRO] O conteudo possui caracteres invalidos para conversao
Portanto o retorno de inVErSAo com as possiveis conversoes sao: inversao
--------------------------------------------------------------------------

Insira um conteudo: NUMERO12345

[ERRO] O conteudo possui caracteres invalidos para conversao
Portanto o retorno de NUMERO12345 com as possiveis conversoes sao: numero12345
*/

/**
Method_07.  - Exercicio 7

Funcao para trocar todas as ocorrencias de certo caractere por outro novo.
@return valor com substituicoes, se houver;
o proprio valor, caso contrario

std::string replace ( char original, char novo )

*/

void method_07 ( )
{
// identificar

	ref_MyString conteudo1 = new MyString();
	std::string conteudoGravado;
	char original;
	char novo;


	std::cout << "Insira um conteudo: ";
	std::cin >> conteudoGravado;
	std::cout << endl;

	std::cout << "Defina qual caracter devera ser trocado: ";
	std::cin >> original;
	std::cout << endl;

	std::cout << "Defina por qual caracter se trocara: ";
	std::cin >> novo;
	std::cout << endl;

	conteudo1->set_Conteudo(conteudoGravado);

	std::string NovaString = conteudo1->replace(conteudoGravado, original, novo);

	if(conteudo1->get_erro() == 1){
		std::cout << "[ERRO] O conteudo nao possui o caracter indicado"
		<< endl << "Portanto o retorno de "+conteudoGravado+" sara: "<< NovaString << std::endl;
	} else{
		std::cout << "A conversao de "+conteudoGravado+" com a substituicao das ocorrencias sera: " << NovaString << std::endl << endl;
		std::cout << conteudo1->get_ErroMsg();
	}
} // end method_07 ( )

/*
Method_07 - v0.0

Insira um conteudo: Palavra

Defina qual caracter devera ser trocado: a

Defina por qual caracter se trocara: o

A conversao de Palavra com a substituicao das ocorrencias sera: Polovro

[ERRO] Nao ha erro.
--------------------------------------------------------------------------

Insira um conteudo: Troca

Defina qual caracter devera ser trocado: b

Defina por qual caracter se trocara: a

[ERRO] O conteudo nao possui o caracter indicado
Portanto o retorno de Troca sara: Troca
*/


/**
Method_08.  - Exercicio 8

Funcao para codificar o conteudo segundo a cifra de César (pesquisar).
@return valor equivalente codificado, se houver;
o proprio valor, caso contrario

std::string encrypt ( )

*/

void method_08 ( )
{
// identificar


	ref_MyString conteudo1 = new MyString();
	std::string conteudoGravado;
	int valorCripit;

	std::cout << "Insira um conteudo: ";
	std::cin >> conteudoGravado;
	std::cout << endl;

	std::cout << "Insira o valor de criptografacao (numero inteiro): ";
	std::cin >> valorCripit;
	std::cout << endl;

	conteudo1->set_Conteudo(conteudoGravado);

	std::string NovaString = conteudo1->encrypt(conteudoGravado, valorCripit);

	if(conteudo1->get_erro() == 1){
		std::cout << "[ERRO] Nao foi possivel codificar o conteudo inteiro"
		<< endl << "Portanto o retorno das possiveis conversoes de "+conteudoGravado+" sara: "<< NovaString << std::endl;
	} else{
		std::cout << "A codificacao de "+conteudoGravado+" pela cifra de Cesar sera: " << NovaString << std::endl << endl;
		std::cout << conteudo1->get_ErroMsg();
	}
} // end method_08 ( )

/*
Method_08 - v0.0

Insira um conteudo: palavra

Insira o valor de criptografacao (numero inteiro): 1

A codificacao de palavra pela cifra de Cesar sera: qbmbwsb

[ERRO] Nao ha erro
--------------------------------------------------------------------------

Insira um conteudo: numero12345

Insira o valor de criptografacao (numero inteiro): 2

[ERRO] Nao foi possivel codificar o conteudo inteiro
Portanto o retorno das possiveis conversoes de numero12345 sara: pwogtq12345
*/


/**
Method_09.  - Exercicio 9

Funcao para decodificar o conteudo previamente cifrado pela funcao acima.
@return valor equivalente decodificado, se houver;
o proprio valor, caso contrario

std::string decrypt ( )

*/

void method_09 ( )
{
// identificar

	ref_MyString conteudo1 = new MyString();
	std::string conteudoGravado;
	int valorCripit;

	std::cout << "Insira um conteudo: ";
	std::cin >> conteudoGravado;
	std::cout << endl;

	std::cout << "Insira o valor de criptografacao (numero inteiro): ";
	std::cin >> valorCripit;
	std::cout << endl;

	conteudo1->set_Conteudo(conteudoGravado);

	std::string NovaString = conteudo1->encrypt(conteudoGravado, valorCripit);

	if(conteudo1->get_erro() == 1){
		std::cout << "[ERRO] Nao foi possivel codificar o conteudo inteiro" << std::endl;
		std::cout << endl << "A conversoes das possiveis codificacao de "+conteudoGravado+" sara: "<< NovaString << std::endl << std::endl;
	} else{
		std::cout << "A codificacao de "+conteudoGravado+" pela cifra de Cesar sera: " << NovaString << std::endl << std::endl;
	}

	std::cout << "Insira o valor de descriptografacao (numero inteiro): ";
	std::cin >> valorCripit;
	std::cout << endl;


	NovaString = conteudo1->decrypt(NovaString, valorCripit);

	if(conteudo1->get_erro() == 1){
		std::cout << "A descodificacao de "+conteudoGravado+" sera: " << NovaString << std::endl << endl;
	} else{
		std::cout << "A descodificacao de "+conteudoGravado+" sera: " << NovaString << std::endl << endl;
		std::cout << conteudo1->get_ErroMsg();
	}
} // end method_09 ( )

/*
Method_09 - v0.0

Insira um conteudo: palavra

Insira o valor de criptografacao (numero inteiro): 2

A codificacao de palavra pela cifra de Cesar sera: rcncxtc

Insira o valor de descriptografacao (numero inteiro): 2

A descodificacao de palavra sera: palavra

[ERRO] Nao ha erro.
--------------------------------------------------------------------------

nsira um conteudo: zebra12345

Insira o valor de criptografacao (numero inteiro): 5

[ERRO] Nao foi possivel codificar o conteudo inteiro

A conversoes das possiveis codificacao de zebra12345 sara: ejgwf12345

Insira o valor de descriptografacao (numero inteiro): 5

A descodificacao de zebra12345 sera: zebra12345
*/


/**
Method_10.  - Exercicio 10

Funcao para separar todas as sequencias de caracteres separadas por espaços em branco.
@param sequencia - arranjo para armazenar possiveis cadeias de caracteres identificadas
@return quantidade de sequencias de caracteres identificadas, se houver;
zero, caso contrario

int split ( std::string sequencia [ ] )

*/

void method_10 ( )
{
// identificar
	ref_MyString conteudo1 = new MyString();
	std::string conteudoGravado;
	std::string sequencia [50];

	//std::cout << "A string a ser separada pelos espacos sera: ";
    //std::getline(std::cin, conteudoGravado); 

	 conteudoGravado = "Aqui temos um exemplo que sera separado por espacos";

	std::cout << conteudoGravado << endl;

	std::cout << endl;

	conteudo1->set_Conteudo(conteudoGravado);

	//conteudoGravado = " "; //Teste de inexistencia de dados

	int quantidadeDeString = conteudo1->split(conteudoGravado, sequencia);

	if(conteudo1->get_erro() == 1){
		std::cout << "[ERRO] Parametro Invalido, ou nao há strings, Retorno: " << quantidadeDeString << std::endl;
	} else{
		std::cout << "A quantidade de strings e: "<<quantidadeDeString<<", que sao: "<< std::endl << std::endl;
		for(int i = 0; i < quantidadeDeString; i++){
			std::cout << sequencia[i] << std::endl;
		}
		std::cout << std::endl;
		std::cout << conteudo1->get_ErroMsg();
	}

} 


/*
Method_10 - v0.0

Aqui temos um exemplo que sera separado por espacos

A quantidade de strings e: 9, que sao:

Aqui
temos
um
exemplo
que
sera
separado
por
espacos

[ERRO] Nao ha erro.
--------------------------------------------------------------------------

[ERRO] Parametro Invalido, ou nao há strings, Retorno: 0
--------------------------------------------------------------------------

Naotemespaco

A quantidade de strings e: 1, que sao:

Naotemespaco

*/

/**
Method_E1.  - Exercicio Extra 1

E1.) Acrescentar um método (e testes) para fragmentar o conteúdo usando um delimitador à escolha,
diferente de espaço em branco.

*/

void method_E1 ( )
{
// identificar

	ref_MyString conteudo1 = new MyString();
	std::string conteudoGravado;
	int posicao;
	char caracter;

	std::cout << "Insira um conteudo: ";
	std::cin >> conteudoGravado;
	std::cout << endl;

	std::cout << "Insira uma cacarter pelo qual fragementar: ";
	std::cin >> caracter;
	std::cout << endl;

	std::cout << "Insira a posicao: ";
	std::cin >> posicao;
	std::cout << endl;

	conteudo1->set_Conteudo(conteudoGravado);

	//conteudoGravado = " "; //Teste de inexistencia de dados

	std::string NovaString = conteudo1->Fragementador(conteudoGravado, posicao, caracter);

	if(conteudo1->get_erro() == 1){
		std::cout << "[ERRO] Nao foi possivel fragmentar o conteudo, posicao invalida, ou conteudo inexistente" << std::endl;
	} else{
		std::cout << "A fragementacao de "+conteudoGravado+" por "+caracter+" na posicao "<<posicao<<" sera: " << NovaString << std::endl << std::endl;
	}

} // end method_E1 ( )

/*
Method_E1 - v0.0

Insira um conteudo: IreiSperalos

Insira uma cacarter pelo qual fragementar: _

Insira a posicao: 4

A fragementacao de IreiSperalos por _ na posicao 4 sera: Irei_Speralos
--------------------------------------------------------------------------

Insira um conteudo: Nome

Insira uma cacarter pelo qual fragementar: 2

Insira a posicao: -2

[ERRO] Nao foi possivel fragmentar o conteudo, posicao invalida, ou conteudo inexistente
--------------------------------------------------------------------------

Insira um conteudo: MeuTexto

Insira uma cacarter pelo qual fragementar: -

Insira a posicao: 3

A fragementacao de MeuTexto por - na posicao 3 sera: Meu-Texto
--------------------------------------------------------------------------

Insira um conteudo: separacao

Insira uma cacarter pelo qual fragementar: 

Insira a posicao:  2
 
[ERRO] Nao foi possivel fragmentar o conteudo, posicao invalida, ou conteudo inexistente
*/



/**
Method_E2.  - Exercicio Extra 2

E2.) Acrescentar um método (e testes) para inverter a ordem dos símbolos na cadeia de caracteres.

*/


void method_E2 ( )
{
// identificar

	ref_MyString conteudo1 = new MyString();
	std::string conteudoGravado;

	std::cout << "Insira um conteudo: ";
	std::cin >> conteudoGravado;
	std::cout << endl;

	conteudo1->set_Conteudo(conteudoGravado);

	//conteudoGravado = " "; //Teste de inexistencia de dados

	std::string NovaString = conteudo1->InverterSimbolos(conteudoGravado);


	if(conteudo1->get_erro() == 1){
		std::cout << "[ERRO] Nao foi possivel Inverter os Simbolos, conteudo inexistente" << std::endl;
	} else{
		std::cout << "A inversao dos simbolos de"+conteudoGravado+" sera: " << NovaString << std::endl << std::endl;
	}
} // end method_E2 ( )

/*
Method_E2 - v0.0

Insira um conteudo: IreiInverterTudo12345

A inversao dos simbolos deIreiInverterTudo12345 sera: 54321oduTretrevnIierI
--------------------------------------------------------------------------
Insira um conteudo: 

[ERRO] Nao foi possivel Inverter os Simbolos, conteudo inexistente

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
