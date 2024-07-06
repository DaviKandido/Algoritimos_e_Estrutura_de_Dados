/*
Ed13 - v0.0. - 30 / 05 / 2024
Author: Davi Cândido de Almeida
*/

// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres

// ----------------------------------------------- classes / pacotes

#include "io.hpp"
#include "ExercicioClassContato.hpp"
#include "ExercicioClassERRO.hpp"

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

01.) Incluir um método público à classe (1311) para
ler do teclado e atribuir um valor ao nome (atributo de certo objeto).
Incluir um método para testar essa nova característica.
DICA: Testar se o nome não está vazio.
Exemplo: contato1.readName ( “Nome: ” );

*/
void method_01 ( ) {
// identificar
	
ref_Contato contato1 = new Contato();
std::string nome;
std::string fone;

	std::cout << "Digite o nome do contato: ";
	std::cin >> nome;
	contato1->set_nome(nome);

	std::cout << endl;

	std::cout << "Digite o telefone do contato: ";
	std::cin >> fone;
	contato1->set_fone(fone);

	//contato1->set_fone("");  //Teste de inexistencia de dado
	
	if( !contato1->has_erro() ) {
	std::cout <<"\nO contato de nome: " + contato1->readNome() + ", possui o telefone: " + contato1->readFone() << endl;
	}else if(contato1->get_erro() == 1){
		std::cout <<"\nO contato nao possui nome" << endl;
	} else {
		std::cout <<"\nO contato nao possui numero" << endl;
	}

} // end method_01 ( )


/*

Method_01 - v0.0

Digite o nome do contato: Davi

Digite o telefone do contato: (31)97306-7259

O contato de nome: Davi, possui o telefone: (31)97306-7259

----------------------------------------------------------

Method_01 - v0.0

Digite o nome do contato: fdhfg

Digite o telefone do contato: Não existe

O contato nao possui numero

*/

/**
Method_02. - Exercicio 2

02.) Incluir um método público à classe (1312) para
ler do teclado e atribuir um valor ao telefone (atributo de certo objeto).
Incluir um método para testar essa nova característica.
DICA: Testar se o telefone não está vazio.
Exemplo: contato1.readPhone ( “Fone: ” );

*/

// Metodo 2 já foi antecipado no metodo 1 //
void method_02 ( )
{
// identificar

ref_Contato contato1 = new Contato();
std::string nome;
std::string fone;

	std::cout << "Digite o nome do contato: ";
	std::cin >> nome;
	contato1->set_nome(nome);

	std::cout << endl;

	std::cout << "Digite o telefone do contato: ";
	std::cin >> fone;
	contato1->set_fone(fone);

	//contato1->set_fone("");  //Teste de inexistencia de dado
	
	if( !contato1->has_erro() ) {
	std::cout <<"\nO contato de nome: " + contato1->readNome() + ", possui o telefone:" + contato1->readFone() << endl;
	}else if(contato1->get_erro() == 1){
		std::cout <<"\nO contato nao possui nome" << endl;
	} else {
		std::cout <<"\nO contato nao possui numero" << endl;
	}

} // end method_02 ( )




/**
Method_03. - Exercicio 3

03.) Incluir um método privado à classe (1313) para
testar se o valor de um telefone é válido, ou não.
Incluir um método para testar essa nova característica.
DICA: Testar se as posições contêm apenas algarismos e o símbolo ‘-‘.

*/
void method_03 ( )
{
// identificar

ref_Contato contato1 = new Contato();
std::string nome;
std::string fone;

	std::cout << "Digite o nome do contato: ";
	std::cin >> nome;
	contato1->set_nome(nome);

	std::cout << endl;

	std::cout << "Digite o telefone do contato: ";
	std::cin >> fone;
	contato1->set_fone(fone);

	//contato1->set_nome("");  //Teste de inexistencia de dado
	
	if( !contato1->has_erro() ) {
	std::cout <<"\nO contato de nome: " + contato1->readNome() + ", possui o telefone: " + contato1->readFone() << endl;
	}else if(contato1->get_erro() == 1){
		std::cout <<"\nO contato nao possui nome" << endl;
	} else if(contato1->get_erro() == 3){
		std::cout <<"\nO contato possui um numero invalido" << endl;
	} else {
		std::cout <<"\nO contato nao possui numero" << endl;
	}

} // end method_03 ( )


/*
Method_03 - v0.0

Digite o nome do contato: Davi

Digite o telefone do contato: 66AFSD

O contato possui um numero invalido
---------------------------------------

Method_03 - v0.0

Digite o nome do contato: Davi

Digite o telefone do contato: 31973-7259

O contato de nome: Davi, possui o telefone: 31973-7259

*/


/**
Method_04.  - Exercicio 4

04.) Incluir um método público à classe (1314) para
ler dados de arquivo, dado o nome do mesmo, e armazenar em um objeto dessa classe.
Incluir um método para testar essa nova característica.
Exemplo: contato1.readFromFile ( “Pessoa1.txt” );

*/


void method_04 ( )
{
// identificar

	ref_Contato contatoDoArquivo = new Contato();
	std::string nomeArquivo;

	std::cout <<"Digite de qual arquivo sera lido o contato: ";
	std::cin >> nomeArquivo;


	contatoDoArquivo->readFromFile(nomeArquivo); // leitura do arquivo


	if( !contatoDoArquivo->has_erro() ) {

	std::cout <<"\nO nome do contato lido do arquivo e: " + contatoDoArquivo->readNome() << endl 
			  << "E telefone lido foi: " + contatoDoArquivo->readFone() << endl;

	}else if(contatoDoArquivo->get_erro() == 1){
		std::cout <<"\nO contato lido nao possui nome" << endl;
	} else if(contatoDoArquivo->get_erro() == 3){
		std::cout <<"\nO contato lido possui um numero invalido" << endl;
	} else if(contatoDoArquivo->get_erro() == 2){
		std::cout <<"\nO contato lido nao possui numero" << endl;
	} else{
		std::cout <<"\nO arquivo citado nao existe" << endl;
	}


} // end method_04 ( )

/*
Method_04 - v0.0

Digite de qual arquivo sera lido o contato: pessoa1.txt

O nome do contato lido do arquivo e: Davi
E telefone lido foi: 9549-9876
-------------------------------------------------------
Method_04 - v0.0

Digite de qual arquivo sera lido o contato: nãoExiste.txt

O arquivo citado nao existe
--------------------------------------------------------
Method_04 - v0.0

Digite de qual arquivo sera lido o contato: pessoa1.txt

O contato lido nao possui numero
*/



/**
Method_05.  - Exercicio 5

05.) Incluir um método público à classe (1315) para
gravar dados de uma pessoa em arquivo, dado o nome do mesmo.
Incluir um método para testar essa nova característica.
DICA: Gravar o tamanho também do arquivo, primeiro, antes dos outros dados.
Exemplo: contato.writeToFile ( “Pessoa1.txt” );

*/


void method_05 ( )
{
// identificar


	ref_Contato contato1 = new Contato();
	std::string nome;
	std::string fone;

	std::cout << "Digite o nome do contato: ";
	std::cin >> nome;
	contato1->set_nome(nome);

	std::cout << endl;

	std::cout << "Digite o telefone do contato: ";
	std::cin >> fone;
	contato1->set_fone(fone);


	if( !contato1->has_erro() ) {
		
	contato1->writeToFile("Pessoa1.txt");
	std::cout <<"\nO contato gravado tem o nome: " + contato1->readNome() + ", e possui o telefone: " + contato1->readFone() << endl;

	}else if(contato1->get_erro() == 1){
		std::cout <<"\nO contato nao possui nome" << endl;
	} else if(contato1->get_erro() == 3){
		std::cout <<"\nO contato possui um numero invalido" << endl;
	} else {
		std::cout <<"\nO contato nao possui numero" << endl;
	}


} // end method_05 ( )

/*
Method_05 - v0.0

Digite o nome do contato: Davi

Digite o telefone do contato: 31973067259

O contato gravado tem o nome: Davi, e possui o telefone: 31973067259
*/

/**
Method_06.  - Exercicio 6

06.) Incluir um novo atributo à classe (1316) para
um segundo telefone e modificar os construtores para lidar com isso.
Incluir um método para testar essa nova característica.
Exemplo: contato1 = new Contato ( “nome1”, “99999-1111”, “98888-2222” );

*/


//Quantidade de telefones inserido como entrada
void method_06 ( )
{
// identificar

ref_Contato contato1 = new Contato();

std::string nome;
std::string fone;

int QuantidadeTelefones;

	std::cout << "Digite o nome do contato: ";
	std::cin >> nome;
	contato1->set_nome(nome);

	std::cout << endl;

	std::cout << "Defina uma quantidade de telefones: ";
	std::cin >> QuantidadeTelefones;
	contato1->set_QuantidadeTelefones(QuantidadeTelefones);

	std::cout << endl;

	for(int i = 0; i < QuantidadeTelefones; i++){
	std::cout << "Digite o telefone ["<<i+1<<"] do contato: ";
	std::cin >> fone;
	contato1->set_fone(fone, i);
	}

	//contato1->set_fone("");  //Teste de inexistencia de dado
	
	if( !contato1->has_erro() ) {
		
	contato1->writeToFile("Pessoa1.txt");
	std::cout <<"\nO contato gravado tem o nome: " + contato1->readNome() + ", e possui o(s) telefone(s): " + contato1->readFone() << endl;

	}else if(contato1->get_erro() == 1){
		std::cout <<"\nO contato nao possui nome" << endl;
	} else if(contato1->get_erro() == 3){
		std::cout <<"\nO contato possui um numero invalido" << endl;
	} else {
		std::cout <<"\nO contato nao possui numero" << endl;
	}

} // end method_06 ( )


/*
Method_06 - v0.0

Digite o nome do contato: Davi

Defina uma quantidade de telefones: 4

Digite o telefone [1] do contato: 3173067259
Digite o telefone [2] do contato: 9876-9632
Digite o telefone [3] do contato: 98752-963
Digite o telefone [4] do contato: 1234-5678

O contato gravado tem o nome: Davi, e possui o(s) telefone(s): {3173067259} {9876-9632} {98752-963} {1234-5678}
*/


/**
Method_07.  - Exercicio 7

07.) Incluir um novo atributo à classe (1317) para
indicar quantos telefones estão associados a cada objeto.
Incluir um método para obter essa informação.
Incluir um método para testar essa nova característica.
Exemplo: int n = contato1.phones ( );

*/

void method_07 ( )
{
// identificar


ref_Contato contato1 = new Contato();

std::string nome;
std::string fone;

int QuantidadeTelefones;

	std::cout << "Digite o nome do contato: ";
	std::cin >> nome;
	contato1->set_nome(nome);

	std::cout << endl;

	std::cout << "Defina uma quantidade de telefones: ";
	std::cin >> QuantidadeTelefones;
	contato1->set_QuantidadeTelefones(QuantidadeTelefones);

	std::cout << endl;

	for(int i = 0; i < QuantidadeTelefones; i++){
	std::cout << "Digite o telefone ["<<i+1<<"] do contato: ";
	std::cin >> fone;
	contato1->set_fone(fone, i);
	}

	//contato1->set_fone("");  //Teste de inexistencia de dado

	int QuantidadeDeFones = contato1->DescobrirQuantidadeDeFones();
	
	if( !contato1->has_erro() ) {
		
	contato1->writeToFile("Pessoa1.txt");
	std::cout <<"\nO contato gravado tem o nome: " + contato1->readNome() + ", e possui " << QuantidadeDeFones << " telefone(s) que sao: " + contato1->readFone() << endl;

	}else if(contato1->get_erro() == 1){
		std::cout <<"\nO contato nao possui nome" << endl;
	} else if(contato1->get_erro() == 3){
		std::cout <<"\nO contato possui um numero invalido" << endl;
	} else {
		std::cout <<"\nO contato nao possui numero" << endl;
	}



} // end method_07 ( )

/*
Method_07 - v0.0

Digite o nome do contato: Davi

Defina uma quantidade de telefones: 3

Digite o telefone [1] do contato: 31973067259
Digite o telefone [2] do contato: 36987423982
Digite o telefone [3] do contato: 41569871236

O contato gravado tem o nome: Davi, e possui 3 telefone(s) que sao: {31973067259} {36987423982} {41569871236}
*/


/**
Method_08.  - Exercicio 8

08.) Incluir um método público (1318) para
para atribuir valor ao segundo telefone.
Incluir um método para testar essa nova característica.
DICA: Se o contato só tiver um telefone, perguntar se quer acrescentar mais um número,
e mudar automaticamente a quantidade deles, se assim for desejado.
Exemplo: contato.setPhone2a ( “97777-3333” );

*/



void method_08 ( )
{
// identificar

ref_Contato contato1 = new Contato();

std::string nome;
std::string fone;

int QuantidadeTelefones;
bool DesejaMaisTelefone;

	std::cout << "Digite o nome do contato: ";
	std::cin >> nome;
	contato1->set_nome(nome);

	std::cout << endl;

	std::cout << "Defina uma quantidade de telefones: ";
	std::cin >> QuantidadeTelefones;
	contato1->set_QuantidadeTelefones(QuantidadeTelefones);

	std::cout << endl;

	for(int i = 0; i < QuantidadeTelefones; i++){
		std::cout << "Digite o telefone ["<<i+1<<"] do contato: ";
		std::cin >> fone;
		contato1->set_fone(fone, i);

		if(QuantidadeTelefones == 1){
			std::cout << "Deseja acrescentar mais numeros? [1] Sim [0] Nao: ";
			std::cin >> DesejaMaisTelefone;
				if(DesejaMaisTelefone){
					std::cout << "Defina uma quantidade de telefones a ser acrescentada: ";
					std::cin >> QuantidadeTelefones;
					QuantidadeTelefones += 1;
					contato1->set_QuantidadeTelefones(QuantidadeTelefones);
				}
			
		}

	}

	//contato1->set_fone("");  //Teste de inexistencia de dado

	int QuantidadeDeFones = contato1->DescobrirQuantidadeDeFones();
	
	if( !contato1->has_erro() ) {
		
	contato1->writeToFile("Pessoa1.txt");
	std::cout <<"\nO contato gravado tem o nome: " + contato1->readNome() + ", e possui " << QuantidadeDeFones << " telefone(s) que sao: " + contato1->readFone() << endl;

	}else if(contato1->get_erro() == 1){
		std::cout <<"\nO contato nao possui nome" << endl;
	} else if(contato1->get_erro() == 3){
		std::cout <<"\nO contato possui um numero invalido" << endl;
	} else {
		std::cout <<"\nO contato nao possui numero" << endl;
	}


} // end method_08 ( )

/*
Method_08 - v0.0

Digite o nome do contato: Davi

Defina uma quantidade de telefones: 1

Digite o telefone [1] do contato: 31973067259
Deseja acrescentar mais numeros? [1] Sim [0] Nao: 1
Defina uma quantidade de telefones a ser acrescentada: 2
Digite o telefone [2] do contato: 4259786312
Digite o telefone [3] do contato: 9876-2143

O contato gravado tem o nome: Davi, e possui 3 telefone(s) que sao: {31973067259} {4259786312} {9876-2143}
--------------------------------------------------------------------------------------------------------------
Method_08 - v0.0

Digite o nome do contato: Davi

Defina uma quantidade de telefones: 1

Digite o telefone [1] do contato: 319730-7259
Deseja acrescentar mais numeros? [1] Sim [0] Nao: 0

O contato gravado tem o nome: Davi, e possui 1 telefone(s) que sao: 319730-7259
*/



/**
Method_09.  - Exercicio 9

09.) Incluir um método público (01319) para
alterar o valor apenas do segundo telefone.
Incluir um método para testar essa nova característica.
DICA: Se o contato não tiver dois telefones, uma situação de erro deverá ser indicada.
Exemplo: contato.setPhone2b ( “97777-3333” );

*/

//Fiz o exercicio de forma que fosse possivel alterar qualquer numero incluso no contato, não apenas o 2
//de forma que caso o numero não exista o numero é definido como invalido
void method_09 ( )
{
// identificar

ref_Contato contato1 = new Contato();

std::string nome;
std::string fone;

int QuantidadeTelefones;
bool DesejaMaisTelefone;
bool DesejaExcluirTelefone;
int numero;

	std::cout << "Digite o nome do contato: ";
	std::cin >> nome;
	contato1->set_nome(nome);

	std::cout << endl;

	std::cout << "Defina uma quantidade de telefones: ";
	std::cin >> QuantidadeTelefones;
	contato1->set_QuantidadeTelefones(QuantidadeTelefones);

	std::cout << endl;

	for(int i = 0; i < QuantidadeTelefones; i++){
		std::cout << "Digite o telefone ["<<i+1<<"] do contato: ";
		std::cin >> fone;
		contato1->set_fone(fone, i);

		if(QuantidadeTelefones == 1){
			std::cout << "Deseja acrescentar mais numeros? [1] Sim [0] Nao: ";
			std::cin >> DesejaMaisTelefone;
				if(DesejaMaisTelefone){
					std::cout << "Defina uma quantidade de telefones a ser acrescentada: ";
					std::cin >> QuantidadeTelefones;
					QuantidadeTelefones += 1;
					contato1->set_QuantidadeTelefones(QuantidadeTelefones);
				}	
		}
	}


	//alterar algum numero existente
	std::cout << "Deseja Alterar algum telefone? [1] Sim [0] Nao: ";
	std::cin >> DesejaExcluirTelefone;
	if(DesejaExcluirTelefone){
	std::cout << "Defina uma qual numero sera alterado: ";
	std::cin >> numero;
		if(contato1->AlterarTelefone(numero-1, fone)){

			std::cout << "Altere o telefone ["<<numero<<"] do contato: ";
			std::cin >> fone;
			contato1->set_fone(fone, numero-1);

			std::cout << "\nTelefone alterado com sucesso!" << endl;
		} else{
			std::cout << "\nNumero Inexistente!" << endl;
		}
	}

	//contato1->set_fone("");  //Teste de inexistencia de dado

	int QuantidadeDeFones = contato1->DescobrirQuantidadeDeFones();
	
	if( !contato1->has_erro() ) {
		
	contato1->writeToFile("Pessoa1.txt");
	std::cout <<"\nO contato gravado tem o nome: " + contato1->readNome() + ", e possui " << QuantidadeDeFones << " telefone(s) que sao: " + contato1->readFone() << endl;

	}else if(contato1->get_erro() == 1){
		std::cout <<"\nO contato nao possui nome" << endl;
	} else if(contato1->get_erro() == 3){
		std::cout <<"\nO contato possui um numero invalido" << endl;
	} else {
		std::cout <<"\nO contato nao possui numero" << endl;
	}

} // end method_09 ( )

/*

Method_09 - v0.0

Digite o nome do contato: Davi

Defina uma quantidade de telefones: 3

Digite o telefone [1] do contato: 31973067259
Digite o telefone [2] do contato: 42789-98723
Digite o telefone [3] do contato: 3699852-741
Deseja Alterar algum telefone? [1] Sim [0] Nao: 1
Defina uma qual numero sera alterado: 2
Altere o telefone [2] do contato: 58789-98763

Telefone alterado com sucesso!

O contato gravado tem o nome: Davi, e possui 3 telefone(s) que sao: {31973067259} {58789-98763} {3699852-741}
---------------------------------------------------------------------
Method_09 - v0.0

Digite o nome do contato: Davi

Defina uma quantidade de telefones: 2

Digite o telefone [1] do contato: 31973-7259
Digite o telefone [2] do contato: 69871-9872
Deseja Alterar algum telefone? [1] Sim [0] Nao: 1
Defina uma qual numero sera alterado: 3

Numero Inexistente!

O contato gravado tem o nome: Davi, e possui 2 telefone(s) que sao: {31973-7259} {69871-9872}
----------------------------------------------------------------------
Method_09 - v0.0

Digite o nome do contato: Davi 

Defina uma quantidade de telefones: 1

Digite o telefone [1] do contato: 987456
Deseja acrescentar mais numeros? [1] Sim [0] Nao: 0
Deseja Alterar algum telefone? [1] Sim [0] Nao: 0

O contato gravado tem o nome: Davi, e possui 1 telefone(s) que sao: 987456

*/


/**
Method_10.  - Exercicio 10

10.) Incluir um método público (01320) para
remover apenas o valor do segundo telefone.
Incluir um método para testar essa nova característica.
DICA: Se o contato só tiver um telefone, uma situação de erro deverá ser indicada.
Exemplo: contato.setPhone2c ( "" );

*/

//Da mesma forma que no exercicio anteriro fiz de forma customizada para qualquer numero poder ser excluido
void method_10 ( )
{
// identificar

ref_Contato contato1 = new Contato();

std::string nome;
std::string fone;

int QuantidadeTelefones;
bool DesejaMaisTelefone;
bool DesejaExcluirTelefone;
int numero;

	std::cout << "Digite o nome do contato: ";
	std::cin >> nome;
	contato1->set_nome(nome);

	std::cout << endl;

	std::cout << "Defina uma quantidade de telefones: ";
	std::cin >> QuantidadeTelefones;
	contato1->set_QuantidadeTelefones(QuantidadeTelefones);

	std::cout << endl;

	for(int i = 0; i < QuantidadeTelefones; i++){
		std::cout << "Digite o telefone ["<<i+1<<"] do contato: ";
		std::cin >> fone;
		contato1->set_fone(fone, i);

		if(QuantidadeTelefones == 1){
			std::cout << "Deseja acrescentar mais numeros? [1] Sim [0] Nao: ";
			std::cin >> DesejaMaisTelefone;
				if(DesejaMaisTelefone){
					std::cout << "Defina uma quantidade de telefones a ser acrescentada: ";
					std::cin >> QuantidadeTelefones;
					QuantidadeTelefones += 1;
					contato1->set_QuantidadeTelefones(QuantidadeTelefones);
				}	
		}
	}


	//Excluir algum numero existente
	std::cout << "Deseja Excluir algum telefone? [1] Sim [0] Nao: ";
	std::cin >> DesejaExcluirTelefone;
	if(DesejaExcluirTelefone){
	std::cout << "Defina uma qual numero sera Excluido: ";
	std::cin >> numero;
		if(contato1->ExcluirTelefone(numero-1)){

			std::cout << "\nTelefone Excluido com sucesso!" << endl;
		} else{
			std::cout << "\nNumero Inexistente!" << endl;
		}
	}

	//contato1->set_fone("");  //Teste de inexistencia de dado

	int QuantidadeDeFones = contato1->DescobrirQuantidadeDeFones();
	
	if( !contato1->has_erro() ) {
		
	contato1->writeToFile("Pessoa1.txt");
	std::cout <<"\nO contato gravado tem o nome: " + contato1->readNome() + ", e possui " << QuantidadeDeFones << " telefone(s) que sao: " + contato1->readFone() << endl;

	}else if(contato1->get_erro() == 1){
		std::cout <<"\nO contato nao possui nome" << endl;
	} else if(contato1->get_erro() == 3){
		std::cout <<"\nO contato possui um numero invalido" << endl;
	} else {
		std::cout <<"\nO contato nao possui numero" << endl;
	}
} 

/*
Method_10 - v0.0

Digite o nome do contato: Davi

Defina uma quantidade de telefones: 3

Digite o telefone [1] do contato: 3197306-7259
Digite o telefone [2] do contato: 425698-7896
Digite o telefone [3] do contato: 326547-9874
Deseja Excluir algum telefone? [1] Sim [0] Nao: 1
Defina uma qual numero sera Excluido: 2

Telefone Excluido com sucesso!

O contato gravado tem o nome: Davi, e possui 1 telefone(s) que sao: {3197306-7259} {} {326547-9874}
-----------------------------------------------------------------------------------------------------
Method_10 - v0.0

Digite o nome do contato: Davi

Defina uma quantidade de telefones: 2

Digite o telefone [1] do contato: 31973067259
Digite o telefone [2] do contato: 98746-98742 
Deseja Excluir algum telefone? [1] Sim [0] Nao: 1
Defina uma qual numero sera Excluido: 3

Numero Inexistente!

O contato gravado tem o nome: Davi, e possui 2 telefone(s) que sao: {31973067259} {98746-98742}
*/


/**
Method_E1.  - Exercicio Extra 1

E1.) Fazer modificações na classe Contato (013E1)
para lidar com qualquer quantidade de telefones, menor que 10.
Incluir testes para essa nova característica.
DICA: Guardar a quantidade de telefones e, separadamente, os telefones em arranjo.

*/

//methodo_E1 Antecipado durante a produção de todos os methodos do Ed
void method_E1 ( )
{
// identificar

ref_Contato contato1 = new Contato();

std::string nome;
std::string fone;

int QuantidadeTelefones;
bool DesejaMaisTelefone;
bool DesejaExcluirTelefone;
int numero;

	std::cout << "Digite o nome do contato: ";
	std::cin >> nome;
	contato1->set_nome(nome);

	std::cout << endl;

	std::cout << "Defina uma quantidade de telefones: ";
	std::cin >> QuantidadeTelefones;
	contato1->set_QuantidadeTelefones(QuantidadeTelefones);

	std::cout << endl;

	for(int i = 0; i < QuantidadeTelefones; i++){
		std::cout << "Digite o telefone ["<<i+1<<"] do contato: ";
		std::cin >> fone;
		contato1->set_fone(fone, i);

		if(QuantidadeTelefones == 1){
			std::cout << "Deseja acrescentar mais numeros? [1] Sim [0] Nao: ";
			std::cin >> DesejaMaisTelefone;
				if(DesejaMaisTelefone){
					std::cout << "Defina uma quantidade de telefones a ser acrescentada: ";
					std::cin >> QuantidadeTelefones;
					QuantidadeTelefones += 1;
					contato1->set_QuantidadeTelefones(QuantidadeTelefones);
				}	
		}
	}


	//alterar algum numero existente
	std::cout << "Deseja Alterar algum telefone? [1] Sim [0] Nao: ";
	std::cin >> DesejaExcluirTelefone;
	if(DesejaExcluirTelefone){
	std::cout << "Defina uma qual numero sera alterado: ";
	std::cin >> numero;
		if(contato1->AlterarTelefone(numero-1, fone)){

			std::cout << "Altere o telefone ["<<numero<<"] do contato: ";
			std::cin >> fone;
			contato1->set_fone(fone, numero-1);

			std::cout << "\nTelefone alterado com sucesso!\n" << endl;
		} else{
			std::cout << "\nNumero Inexistente!" << endl;
		}
	}


	//Excluir algum numero existente
	std::cout << "Deseja Excluir algum telefone? [1] Sim [0] Nao: ";
	std::cin >> DesejaExcluirTelefone;
	if(DesejaExcluirTelefone){
	std::cout << "Defina uma qual numero sera Excluido: ";
	std::cin >> numero;
		if(contato1->ExcluirTelefone(numero-1)){

			std::cout << "\nTelefone Excluido com sucesso!" << endl;
		} else{
			std::cout << "\nNumero Inexistente!" << endl;
		}
	}

	//contato1->set_fone("");  //Teste de inexistencia de dado

	int QuantidadeDeFones = contato1->DescobrirQuantidadeDeFones();
	
	if( !contato1->has_erro() ) {
		
	contato1->writeToFile("Pessoa1.txt");
	std::cout <<"\nO contato gravado tem o nome: " + contato1->readNome() + ", e possui " << QuantidadeDeFones << " telefone(s) que sao: " + contato1->readFone() << endl;

	}else if(contato1->get_erro() == 1){
		std::cout <<"\nO contato nao possui nome" << endl;
	} else if(contato1->get_erro() == 3){
		std::cout <<"\nO contato possui um numero invalido" << endl;
	} else {
		std::cout <<"\nO contato nao possui numero" << endl;
	}

} // end method_E1 ( )

/*
Method_E1 - v0.0

Digite o nome do contato: Davi

Defina uma quantidade de telefones: 3

Digite o telefone [1] do contato: 123456
Digite o telefone [2] do contato: 987654
Digite o telefone [3] do contato: 741852
Deseja Alterar algum telefone? [1] Sim [0] Nao: 1
Defina uma qual numero sera alterado: 2
Altere o telefone [2] do contato: 852963

Telefone alterado com sucesso!

Deseja Excluir algum telefone? [1] Sim [0] Nao: 1
Defina uma qual numero sera Excluido: 3

Telefone Excluido com sucesso!

O contato gravado tem o nome: Davi, e possui 2 telefone(s) que sao: {123456} {852963} {}
*/



/**
Method_E2.  - Exercicio Extra 2

E2.) Fazer modificações na classe Contato (013E2)
para lidar também com endereços (residencial e profissional).
Incluir testes para essa nova característica.
DICA: Guardar separadamente o endereço residencial e o profissional.

*/


void method_E2 ( )
{
// identificar

ref_Contato contato1 = new Contato();

std::string nome;
std::string fone;
std::string enderecoProfissional;
std::string enderecoResidencial;

int QuantidadeTelefones;
int numero;

bool DesejaMaisTelefone;
bool DesejaExcluirTelefone;
bool DesejaincluirenderecoResidencial;
bool DesejaincluirenderecoProfissional;


	std::cout << "Digite o nome do contato: ";
	std::cin >> nome;
	contato1->set_nome(nome);

	std::cout << endl;

	std::cout << "Defina uma quantidade de telefones: ";
	std::cin >> QuantidadeTelefones;
	contato1->set_QuantidadeTelefones(QuantidadeTelefones);

	std::cout << endl;

	for(int i = 0; i < QuantidadeTelefones; i++){
		std::cout << "Digite o telefone ["<<i+1<<"] do contato: ";
		std::cin >> fone;
		contato1->set_fone(fone, i);

		if(QuantidadeTelefones == 1){
			std::cout << "Deseja acrescentar mais numeros? [1] Sim [0] Nao: ";
			std::cin >> DesejaMaisTelefone;
				if(DesejaMaisTelefone){
					std::cout << "Defina uma quantidade de telefones a ser acrescentada: ";
					std::cin >> QuantidadeTelefones;
					QuantidadeTelefones += 1;
					contato1->set_QuantidadeTelefones(QuantidadeTelefones);
				}	
		}
	}


	//alterar algum numero existente
	std::cout << "Deseja Alterar algum telefone? [1] Sim [0] Nao: ";
	std::cin >> DesejaExcluirTelefone;
	if(DesejaExcluirTelefone){
	std::cout << "Defina uma qual numero sera alterado: ";
	std::cin >> numero;
		if(contato1->AlterarTelefone(numero-1, fone)){

			std::cout << "Altere o telefone ["<<numero<<"] do contato: ";
			std::cin >> fone;
			contato1->set_fone(fone, numero-1);

			std::cout << "\nTelefone alterado com sucesso!\n" << endl;
		} else{
			std::cout << "\nNumero Inexistente!" << endl;
		}
	}


	//Excluir algum numero existente
	std::cout << "Deseja Excluir algum telefone? [1] Sim [0] Nao: ";
	std::cin >> DesejaExcluirTelefone;
	if(DesejaExcluirTelefone){
	std::cout << "Defina uma qual numero sera Excluido: ";
	std::cin >> numero;
		if(contato1->ExcluirTelefone(numero-1)){

			std::cout << "\nTelefone Excluido com sucesso!" << endl;
		} else{
			std::cout << "\nNumero Inexistente!" << endl;
		}
	}

	//Inclui endereco Residencial
	std::cout << "\nDeseja incluir algum endereco Residencial? [1] Sim [0] Nao: ";
	std::cin >> DesejaincluirenderecoResidencial;
	if(DesejaincluirenderecoResidencial){
		std::cout << "Defina o endereco Residencial (Não use espaços): ";
		std::cin >> enderecoResidencial;
	}
	contato1->set_EnderecoResidencial(enderecoResidencial);

	//Inclui endereco Profissional
	std::cout << "\nDeseja incluir algum endereco Profissional? [1] Sim [0] Nao: ";
	std::cin >> DesejaincluirenderecoProfissional;
	if(DesejaincluirenderecoProfissional){
		std::cout << "Defina o endereco Profissional (Não use espaços): ";
		std::cin >> enderecoProfissional;
	}
	contato1->set_EnderecoProfissional(enderecoProfissional);

	int QuantidadeDeFones = contato1->DescobrirQuantidadeDeFones();
	

	//contato1->set_EnderecoProfissional("");  //Teste de inexistencia de dado

	if( !contato1->has_erro() ) {
		
	contato1->writeToFile("Pessoa1.txt");
	std::cout <<"\n\nO contato gravado tem o nome: " + contato1->readNome() + ", e possui " << QuantidadeDeFones << " telefone(s) que sao: " + contato1->readFone() << endl;
	std::cout <<"Seu endereco profissional e: " + contato1->readEnderecoProfissional() + ", e seu residencial: " + contato1->readEnderecoResidencial() << endl;

	}else if(contato1->get_erro() == 1){
		std::cout <<"\nO contato nao possui nome" << endl;
	} else if(contato1->get_erro() == 3){
		std::cout <<"\nO contato possui um numero invalido" << endl;
	} else if(contato1->get_erro() == 2){
		std::cout <<"\nO contato nao possui numero" << endl;
	} else if(contato1->get_erro() == 5){

	std::cout <<"\nO contato nao possui enderenco profissional, portanto o conato sera apenas: " << endl;

	contato1->writeToFile("Pessoa1.txt");
	std::cout <<"\nO contato gravado tem o nome: " + contato1->readNome() + ", e possui " << QuantidadeDeFones << " telefone(s) que sao: " + contato1->readFone() << endl;
	std::cout <<"E seu endereco residencial e: " + contato1->readEnderecoResidencial() << endl;

	} else if(contato1->get_erro() == 6){

	std::cout <<"\nO contato nao possui enderenco residencial, portanto o conato sera apenas: " << endl;

	contato1->writeToFile("Pessoa1.txt");
	std::cout <<"\nO contato gravado tem o nome: " + contato1->readNome() + ", e possui " << QuantidadeDeFones << " telefone(s) que sao: " + contato1->readFone() << endl;
	std::cout <<"E seu endereco profissional e: " + contato1->readEnderecoProfissional();

	} else if(contato1->get_erro() == 7){

	contato1->writeToFile("Pessoa1.txt");
	std::cout <<"\nO contato nao possui enderenco residencial nem profissional, portanto o conato sera apenas: " << endl;
	std::cout <<"\nO contato gravado tem o nome: " + contato1->readNome() + ", e possui " << QuantidadeDeFones << " telefone(s) que sao: " + contato1->readFone() << endl;

	}


} // end method_E2 ( )


/*
Method_E2 - v0.0

Digite o nome do contato: Davi

Defina uma quantidade de telefones: 2

Digite o telefone [1] do contato: 3197306-7259
Digite o telefone [2] do contato: 4259874-9874
Deseja Alterar algum telefone? [1] Sim [0] Nao: 0
Deseja Excluir algum telefone? [1] Sim [0] Nao: 0

Deseja incluir algum endereco Residencial? [1] Sim [0] Nao: 1
Defina o endereco Residencial((Não use espaços)Não use espaços): Rua_Major

Deseja incluir algum endereco Profissional? [1] Sim [0] Nao: 1
Defina o endereco Profissional(Não use espaços)(Não use espaços): Rua_Lanza


O contato gravado tem o nome: Davi, e possui 2 telefone(s) que sao: {3197306-7259} {4259874-9874}
Seu endereco profissional e: Rua_Lanza, e seu residencial: Rua_Major
---------------------------------------------------------------------------------
Method_E2 - v0.0

Digite o nome do contato: Davi

Defina uma quantidade de telefones: 1  

Digite o telefone [1] do contato: 3197306-7259
Deseja acrescentar mais numeros? [1] Sim [0] Nao: 0
Deseja Alterar algum telefone? [1] Sim [0] Nao: 0
Deseja Excluir algum telefone? [1] Sim [0] Nao: 0

Deseja incluir algum endereco Residencial? [1] Sim [0] Nao: 1
Defina o endereco Residencial:(Não use espaços) Rua_Major

Deseja incluir algum endereco Profissional? [1] Sim [0] Nao: 0

O contato nao possui enderenco profissional, portanto o conato sera apenas: /n

O contato gravado tem o nome: Davi, e possui 1 telefone(s) que sao: 3197306-7259

E seu residencial e: Rua_Major
--------------------------------------------------------------------------------------
ethod_E2 - v0.0

Digite o nome do contato: Davi

Defina uma quantidade de telefones: 1

Digite o telefone [1] do contato: 3197306-7259
Deseja acrescentar mais numeros? [1] Sim [0] Nao: 0
Deseja Alterar algum telefone? [1] Sim [0] Nao: 0
Deseja Excluir algum telefone? [1] Sim [0] Nao: 0

Deseja incluir algum endereco Residencial? [1] Sim [0] Nao: 0

Deseja incluir algum endereco Profissional? [1] Sim [0] Nao: 1
Defina o endereco Profissional(Não use espaços): Rua_Lanza

O contato nao possui enderenco residencial, portanto o conato sera apenas: 

O contato gravado tem o nome: Davi, e possui 1 telefone(s) que sao: 3197306-7259
E seu endereco profissional e: Rua_Lanza
-----------------------------------------------------------------------------------------------
Method_E2 - v0.0

Digite o nome do contato: Davi

Defina uma quantidade de telefones: 1

Digite o telefone [1] do contato: 3197306-7259
Deseja acrescentar mais numeros? [1] Sim [0] Nao: 0
Deseja Alterar algum telefone? [1] Sim [0] Nao: 0
Deseja Excluir algum telefone? [1] Sim [0] Nao: 0

Deseja incluir algum endereco Residencial? [1] Sim [0] Nao: 0

Deseja incluir algum endereco Profissional? [1] Sim [0] Nao: 0

O contato nao possui enderenco residencial nem profissional, portanto o conato sera apenas:

O contato gravado tem o nome: Davi, e possui 1 telefone(s) que sao: 3197306-7259

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
