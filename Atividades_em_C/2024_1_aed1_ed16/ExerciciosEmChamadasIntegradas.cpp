/*
    identificação: 

Ed16 - v0.0. - 21 / 06 / 2024

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
#include "FuncoesArray.hpp"
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

01.)

Funcao para acrescentar valor ao final
de um arranjo, por meio de apontador.
@return apontador para arranjo atualizado
@param array - apontador para arranjo
@param value - valor a ser inserido

int* array_push_back ( int *array, int value )

*/

void method_01() {
    FuncoesArray *Arrays = new FuncoesArray();

    int *array = nullptr;
    int *value = nullptr;
    int quantidadeArrays = 0;
    int quantidadeValue = 0;

    cout << "Defina quantos numeros que se terao no arranjo 1: ";
    cin >> quantidadeArrays;
    Arrays->set_quantidadeArray(array, quantidadeArrays);

    cout << endl << "Defina uma arranjo de inteiros: ";
    Arrays->set_cadeia(array, quantidadeArrays);
	cout << "O arranjo 1 e: ";  
	Arrays->print_cadeia(array, quantidadeArrays);


    cout << endl << "Defina quantos numeros que se terao no arranjo 2: ";
    cin >> quantidadeValue;
    Arrays->set_quantidadeValue(value, quantidadeValue);


    cout << endl << "Agora defina o outro arranjo para adicionar a sua frente: ";
    Arrays->set_cadeia(value, quantidadeValue);
	cout << "O arranjo 2 e: ";  
	Arrays->print_cadeia(value, quantidadeValue);


    if (!Arrays->has_erro()) {

        int *resultado = Arrays->array_push_back(array, value);
        cout << endl << "Agora o arranjo sera: ";

        Arrays->print_cadeia(resultado);

    } else if (Arrays->get_erro() == 1) {
        std::cout << "\n[Erro] O arranjo 1 e/ou 2 possui uma quantidade incorreta" << endl;
    }

}

/*
Method_01 - v0.0

Defina quantos numeros que se terao no arranjo 1: 3

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
O arranjo 1 e: 1 2 3 

Defina quantos numeros que se terao no arranjo 2: 3

Agora defina o outro arranjo para adicionar a sua frente:
Posicao[0]: 4
Posicao[1]: 5
Posicao[2]: 6
O arranjo 2 e: 4 5 6 

Agora o arranjo sera: 1 2 3 4 5 6
--------------------------------------------------------------------
Method_01 - v0.0

Defina quantos numeros que se terao no arranjo 1: -2

Defina uma arranjo de inteiros:
O arranjo 1 e:

Defina quantos numeros que se terao no arranjo 2: 2

Agora defina o outro arranjo para adicionar a sua frente:
Posicao[0]: 1
Posicao[1]: 2
O arranjo 2 e: 1 2 

[Erro] O arranjo 1 e/ou 2 possui uma quantidade incorreta
*/



/**
Method_02. - Exercicio 2

02.)

Funcao para remover valor do final
de um arranjo, por meio de apontador.
@return apontador para arranjo atualizado
@param array - apontador para arranjo

int* array_pop_back ( int *array )

*/

void method_02 ( )
{
// identificar

    FuncoesArray *Arrays = new FuncoesArray();

    int *array = nullptr;
    int quantidadeArrays = 0;
	int apagados = 0;

    cout << "Defina quantos numeros que se terao no arranjo 1: ";
    cin >> quantidadeArrays;
    Arrays->set_quantidadeArray(array, quantidadeArrays);

    cout << endl << "Defina uma arranjo de inteiros: ";
    Arrays->set_cadeia(array, quantidadeArrays);
	cout << "O arranjo e: ";  
	Arrays->print_cadeia(array, quantidadeArrays);

    cout << endl << "Defina quantos numeros serao apagados do final: ";
    cin >> apagados;

        int *resultado = Arrays->array_pop_back(array, apagados);

    if (!Arrays->has_erro()) {

        cout << endl << "Agora o arranjo sera: ";

        Arrays->print_cadeia(resultado);

    } else if (Arrays->get_erro() == 1) {
        std::cout << "\n[Erro] O arranjo 1 possui uma quantidade incorreta" << endl;
    } else if (Arrays->get_erro() == 2) {
        std::cout << "\n[Erro] O arranjo foi inteiramente apagado, quantidade inseria maior que o suficiente" << endl;
    } else if (Arrays->get_erro() == 3) {
        std::cout << "\n[Erro] Quantidade para apagar invalida" << endl;
    }

} // end method_02 ( )

/*
Method_02 - v0.0

Defina quantos numeros que se terao no arranjo 1: 5

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
Posicao[3]: 4
Posicao[4]: 5
O arranjo e: 1 2 3 4 5 

Defina quantos numeros serao apagados do final: 2

Agora o arranjo sera: 1 2 3
--------------------------------------------------------------------
Method_02 - v0.0

Defina quantos numeros que se terao no arranjo 1: 3

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
O arranjo e: 1 2 3 

Defina quantos numeros serao apagados do final: 5

[Erro] O arranjo foi inteiramente apagado, quantidade inseria maior que o suficiente
--------------------------------------------------------------------
Method_02 - v0.0

Defina quantos numeros que se terao no arranjo 1: 2

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
O arranjo e: 1 2 

Defina quantos numeros serao apagados do final: -3

[Erro] Quantidade para apagar invalida
*/


/**
Method_03. - Exercicio 3

Funcao para acrescentar valor ao início
de um arranjo, por meio de apontador.
@return apontador para arranjo atualizado
@param array - apontador para arranjo
@param value - valor a ser inserido

int* array_push_front ( int value, int *array )

*/

void method_03 ( )
{
// identificar

    FuncoesArray *Arrays = new FuncoesArray();

    int *array = nullptr;
    int *value = nullptr;
    int quantidadeArrays = 0;
    int quantidadeValue = 0;

    cout << "Defina quantos numeros que se terao no arranjo 1: ";
    cin >> quantidadeArrays;
    Arrays->set_quantidadeArray(array, quantidadeArrays);

    cout << endl << "Defina uma arranjo de inteiros: ";
    Arrays->set_cadeia(array, quantidadeArrays);
	cout << "O arranjo 1 e: ";  
	Arrays->print_cadeia(array, quantidadeArrays);


    cout << endl << "Defina quantos numeros que se terao no arranjo 2: ";
    cin >> quantidadeValue;
    Arrays->set_quantidadeValue(value, quantidadeValue);


    cout << endl << "Agora defina o outro arranjo para adicionar ao inicio: ";
    Arrays->set_cadeia(value, quantidadeValue);
	cout << "O arranjo 2 e: ";  
	Arrays->print_cadeia(value, quantidadeValue);


    if (!Arrays->has_erro()) {
        int *resultado = Arrays->array_push_front(array, value);
        cout << endl << "Agora o arranjo sera: ";
        Arrays->print_cadeia(resultado);
    } else if (Arrays->get_erro() == 1) {
        std::cout << "\n[Erro] O arranjo 1 e/ou 2 possui uma quantidade incorreta" << endl;
    }

} // end method_03 ( )

/*
Method_03 - v0.0

Defina quantos numeros que se terao no arranjo 1: 3

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
O arranjo 1 e: 1 2 3 

Defina quantos numeros que se terao no arranjo 2: 2

Agora defina o outro arranjo para adicionar ao inicio:
Posicao[0]: 5
Posicao[1]: 7
O arranjo 2 e: 5 7 

Agora o arranjo sera: 5 7 1 2 3
--------------------------------------------------------------------
Method_03 - v0.0

Defina quantos numeros que se terao no arranjo 1: 2

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
O arranjo 1 e: 1 2 

Defina quantos numeros que se terao no arranjo 2: -2

Agora defina o outro arranjo para adicionar ao inicio:
O arranjo 2 e:

[Erro] O arranjo 1 e/ou 2 possui uma quantidade incorreta
*/


/**
Method_04.  - Exercicio 4

Funcao para remover valor do início
de um arranjo, por meio de apontador.
@return apontador para arranjo atualizado
@param array - apontador para arranjo

int* array_pop_front ( int *array )

*/

void method_04 ( )
{
// identificar

    FuncoesArray *Arrays = new FuncoesArray();

    int *array = nullptr;
    int quantidadeArrays = 0;
	int apagados = 0;

    cout << "Defina quantos numeros que se terao no arranjo 1: ";
    cin >> quantidadeArrays;
    Arrays->set_quantidadeArray(array, quantidadeArrays);

    cout << endl << "Defina uma arranjo de inteiros: ";
    Arrays->set_cadeia(array, quantidadeArrays);
	cout << "O arranjo e: ";  
	Arrays->print_cadeia(array, quantidadeArrays);

    cout << endl << "Defina quantos numeros serao apagados do inicio: ";
    cin >> apagados;

        int *resultado = Arrays->array_pop_front(array, apagados);

    if (!Arrays->has_erro()) {

        cout << endl << "Agora o arranjo sera: ";

        Arrays->print_cadeia(resultado);

    } else if (Arrays->get_erro() == 1) {
        std::cout << "\n[Erro] O arranjo 1 possui uma quantidade incorreta" << endl;
    } else if (Arrays->get_erro() == 2) {
        std::cout << "\n[Erro] O arranjo foi inteiramente apagado, quantidade inseria maior que o suficiente" << endl;
    } else if (Arrays->get_erro() == 3) {
        std::cout << "\n[Erro] Quantidade para apagar invalida" << endl;
    }

} // end method_04 ( )

/*
Method_04 - v0.0

Defina quantos numeros que se terao no arranjo 1: 5

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
Posicao[3]: 4
Posicao[4]: 5
O arranjo e: 1 2 3 4 5 

Defina quantos numeros serao apagados do inicio: 3

Agora o arranjo sera: 4 5
--------------------------------------------------------------------
Method_04 - v0.0

Defina quantos numeros que se terao no arranjo 1: 5

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
Posicao[3]: 4
Posicao[4]: 5
O arranjo e: 1 2 3 4 5 

Defina quantos numeros serao apagados do inicio: -1

[Erro] Quantidade para apagar invalida
*/


/**
Method_05.  - Exercicio 5

Funcao para acrescentar valor no meio (aproximadamente)
de um arranjo, por meio de apontador.
@return apontador para arranjo atualizado
@param array - apontador para arranjo
@param value - valor a ser inserido

int* array_push_mid ( int *array, int value )

*/

void method_05 ( )
{
// identificar

    FuncoesArray *Arrays = new FuncoesArray();

    int *array = nullptr;
    int *value = nullptr;
    int quantidadeArrays = 0;
    int quantidadeValue = 0;
	int posicao = 0;

    cout << "Defina quantos numeros que se terao no arranjo 1: ";
    cin >> quantidadeArrays;
    Arrays->set_quantidadeArray(array, quantidadeArrays);

    cout << endl << "Defina uma arranjo de inteiros: ";
    Arrays->set_cadeia(array, quantidadeArrays);
	cout << "O arranjo 1 e: ";  
	Arrays->print_cadeia(array, quantidadeArrays);


    cout << endl << "Defina quantos numeros que se terao no arranjo 2: ";
    cin >> quantidadeValue;
    Arrays->set_quantidadeValue(value, quantidadeValue);


    cout << endl << "Agora defina o outro arranjo para adicionar ao meio do arranjo 1: ";
    Arrays->set_cadeia(value, quantidadeValue);
	cout << "O arranjo 2 e: ";  
	Arrays->print_cadeia(value, quantidadeValue);

	cout << endl << "Defina uma posicao ao meio do arranjo 1: ";
    cin >> posicao;

    int *resultado = Arrays->array_push_mid(array, value, posicao);

    if (!Arrays->has_erro()) {
        cout << endl << "Agora o arranjo sera: ";
        Arrays->print_cadeia(resultado);
    } else if (Arrays->get_erro() == 1) {
        std::cout << "\n[Erro] O arranjo 1 e/ou 2 possui uma quantidade incorreta" << endl;
    } else if (Arrays->get_erro() == 2) {
        std::cout << "\n[Erro] Posicao inexistente em arranjo 1" << endl;
    }
} // end method_05 ( )

/*
Method_05 - v0.0

Defina quantos numeros que se terao no arranjo 1: 5

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
Posicao[3]: 4
Posicao[4]: 5
O arranjo 1 e: 1 2 3 4 5 

Defina quantos numeros que se terao no arranjo 2: 2

Agora defina o outro arranjo para adicionar ao meio do arranjo 1:
Posicao[0]: 5
Posicao[1]: 7
O arranjo 2 e: 5 7 

Defina uma posicao ao meio do arranjo 1: 2

Agora o arranjo sera: 1 5 7 2 3 4 5
--------------------------------------------------------------------
Method_05 - v0.0

Defina quantos numeros que se terao no arranjo 1: 5

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
Posicao[3]: 4
Posicao[4]: 5
O arranjo 1 e: 1 2 3 4 5 

Defina quantos numeros que se terao no arranjo 2: -2

Agora defina o outro arranjo para adicionar ao meio do arranjo 1:
O arranjo 2 e:

Defina uma posicao ao meio do arranjo 1: 2

[Erro] O arranjo 1 e/ou 2 possui uma quantidade incorreta
--------------------------------------------------------------------
Method_05 - v0.0

Defina quantos numeros que se terao no arranjo 1: 3

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
O arranjo 1 e: 1 2 3 

Defina quantos numeros que se terao no arranjo 2: 2

Agora defina o outro arranjo para adicionar ao meio do arranjo 1:
Posicao[0]: 2
Posicao[1]: 8
O arranjo 2 e: 2 8 

Defina uma posicao ao meio do arranjo 1: -2

[Erro] Posicao inexistente em arranjo 1
*/

/**
Method_06.  - Exercicio 6

Funcao para remover valor do meio (aproximadamente)
de um arranjo, por meio de apontador.
@return apontador para arranjo atualizado
@param array - apontador para arranjo

int* array_pop_mid ( int *array )

*/


void method_06 ( )
{
// identificar

    FuncoesArray *Arrays = new FuncoesArray();

    int *array = nullptr;
    int quantidadeArrays = 0;
	int apagados = 0;
	int posicao = 0;

    cout << "Defina quantos numeros que se terao no arranjo 1: ";
    cin >> quantidadeArrays;
    Arrays->set_quantidadeArray(array, quantidadeArrays);

    cout << endl << "Defina uma arranjo de inteiros: ";
    Arrays->set_cadeia(array, quantidadeArrays);
	cout << "O arranjo e: ";  
	Arrays->print_cadeia(array, quantidadeArrays);

	cout << endl << "Defina uma posicao ao meio do arranjo 1: ";
    cin >> posicao;

    cout << endl << "Defina quantos numeros serao apagados a partir dessa posicao: ";
    cin >> apagados;


    int *resultado = Arrays->array_pop_mid(array, apagados, posicao);

    if (!Arrays->has_erro()) {

        cout << endl << "Agora agora arranjo sera: ";
        Arrays->print_cadeia(resultado);

    } else if (Arrays->get_erro() == 2) {
        std::cout << "\n[Erro] Posicao ou quantidade para apagar invalida" << endl;
    }


} // end method_06 ( )

/*
Method_06 - v0.0

Defina quantos numeros que se terao no arranjo 1: 5

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
Posicao[3]: 4
Posicao[4]: 5
O arranjo e: 1 2 3 4 5 

Defina uma posicao ao meio do arranjo 1: 2

Defina quantos numeros serao apagados a partir dessa posicao: 2

Agora agora arranjo sera: 1 4 5
--------------------------------------------------------------------
Method_06 - v0.0

Defina quantos numeros que se terao no arranjo 1: 6

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
Posicao[3]: 4
Posicao[4]: 5
Posicao[5]: 6
O arranjo e: 1 2 3 4 5 6 

Defina uma posicao ao meio do arranjo 1: 3

Defina quantos numeros serao apagados a partir dessa posicao: 3

Agora agora arranjo sera: 1 2 6
--------------------------------------------------------------------
ethod_06 - v0.0

Defina quantos numeros que se terao no arranjo 1: 2

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
O arranjo e: 1 2 

Defina uma posicao ao meio do arranjo 1: 2

Defina quantos numeros serao apagados a partir dessa posicao: 2

[Erro] Posicao ou quantidade para apagar invalida
*/


/**
Method_07.  - Exercicio 7

Para os próximos exercícios considerar as seguintes definições de tipo/classe
typedef struct s_intArray { int length; int *data } intArray;
typedef intArray* ref_intArray;

Funcao para comparar arranjos de inteiros
por meio de apontadores.
@return zero , se forem iguais;
negativo, se o valor da diferenca for menor e estiver no primeiro arranjo
positivo , se o valor da diferenca for maior e estiver no primeiro arranjo
@param p - apontador para inicio do primeiro arranjo
@param q - apontador para inicio do segundo arranjo

int intArray_cmp ( ref_intArray p, ref_intArray q )

*/

void method_07 ( )
{
// identificar

    FuncoesArray *Arrays = new FuncoesArray();

    int *array = nullptr;
    int *value = nullptr;
    int quantidadeArrays = 0;
    int quantidadeValue = 0;
	int posicao = 0;

    cout << "Defina quantos numeros que se terao no arranjo 1: ";
    cin >> quantidadeArrays;
    Arrays->set_quantidadeArray(array, quantidadeArrays);

    cout << endl << "Defina uma arranjo de inteiros: ";
    Arrays->set_cadeia(array, quantidadeArrays);
	cout << "O arranjo 1 e: ";  
	Arrays->print_cadeia(array, quantidadeArrays);


    cout << endl << "Defina quantos numeros que se terao no arranjo 2: ";
    cin >> quantidadeValue;
    Arrays->set_quantidadeValue(value, quantidadeValue);


    cout << endl << "Agora defina o outro arranjo para se comparar ao arranjo 1: ";
    Arrays->set_cadeia(value, quantidadeValue);
	cout << "O arranjo 2 e: ";  
	Arrays->print_cadeia(value, quantidadeValue);

    int resultado = Arrays->intArray_cmp(array, value);

    if (resultado == 0) {
        cout << endl << "Os arranjos sao iguai " << endl;
    } else if (Arrays->get_erro() == 1) {
        std::cout << "\nQuantidade inserida de interios invalida " << endl;
    }else if (resultado < 0) {
        std::cout << "\nValor da diferenca menor no primeiro arranjo" << endl;
    } else if (resultado > 0) {
        std::cout << "\nValor da diferenca maior no primeiro arranjo" << endl;
    }
} // end method_07 ( )

/*
Method_07 - v0.0

Defina quantos numeros que se terao no arranjo 1: 3

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
O arranjo 1 e: 1 2 3 

Defina quantos numeros que se terao no arranjo 2: 3

Agora defina o outro arranjo para se comparar ao arranjo 1:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
O arranjo 2 e: 1 2 3 

Os arranjos sao iguai
--------------------------------------------------------------------
Method_07 - v0.0

Defina quantos numeros que se terao no arranjo 1: 3

Defina uma arranjo de inteiros:
Posicao[0]: 7
Posicao[1]: 8
Posicao[2]: 9
O arranjo 1 e: 7 8 9 

Defina quantos numeros que se terao no arranjo 2: 2

Agora defina o outro arranjo para se comparar ao arranjo 1:
Posicao[0]: 7
Posicao[1]: 8

O arranjo 2 e: 7 8 

Valor da diferenca maior no primeiro arranjo
--------------------------------------------------------------------
Method_07 - v0.0

Defina quantos numeros que se terao no arranjo 1: 2

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
O arranjo 1 e: 1 2 

Defina quantos numeros que se terao no arranjo 2: 3

Agora defina o outro arranjo para se comparar ao arranjo 1:
Posicao[0]: 1
Posicao[1]: 9
Posicao[2]: 5
O arranjo 2 e: 1 9 5 

Valor da diferenca menor no primeiro arranjo
--------------------------------------------------------------------
Method_07 - v0.0

Defina quantos numeros que se terao no arranjo 1: -2

Defina uma arranjo de inteiros:
O arranjo 1 e:

Defina quantos numeros que se terao no arranjo 2: 1

Agora defina o outro arranjo para se comparar ao arranjo 1:
Posicao[0]: 1
O arranjo 2 e: 1 

Quantidade inserida de interios invalida
*/


/**
Method_08.  - Exercicio 8

Funcao para juntar arranjos de inteiros
por meio de apontadores.
@return apontador para inicio do arranjo com a uniao
@param p - apontador para inicio do primeiro arranjo
@param q - apontador para inicio do segundo arranjo

ref_intArray intArray_cat ( ref_intArray p, ref_intArray q )

*/

void method_08 ( )
{
// identificar

    FuncoesArray *Arrays = new FuncoesArray();

    int *array = nullptr;
    int *value = nullptr;
    int quantidadeArrays = 0;
    int quantidadeValue = 0;

    cout << "Defina quantos numeros que se terao no arranjo 1: ";
    cin >> quantidadeArrays;
    Arrays->set_quantidadeArray(array, quantidadeArrays);

    cout << endl << "Defina uma arranjo de inteiros: ";
    Arrays->set_cadeia(array, quantidadeArrays);
	cout << "O arranjo 1 e: ";  
	Arrays->print_cadeia(array, quantidadeArrays);


    cout << endl << "Defina quantos numeros que se terao no arranjo 2: ";
    cin >> quantidadeValue;
    Arrays->set_quantidadeValue(value, quantidadeValue);


    cout << endl << "Agora defina o outro arranjo para adicionar a sua frente: ";
    Arrays->set_cadeia(value, quantidadeValue);
	cout << "O arranjo 2 e: ";  
	Arrays->print_cadeia(value, quantidadeValue);


    if (!Arrays->has_erro()) {

        int *resultado = Arrays->intArray_cat(array, value);
        cout << endl << "Agora o arranjo sera: ";

        Arrays->print_cadeia(resultado);

    } else if (Arrays->get_erro() == 1) {
        std::cout << "\n[Erro] O arranjo 1 e/ou 2 possui uma quantidade incorreta" << endl;
    }

} // end method_08 ( )

/*
Method_08 - v0.0

Defina quantos numeros que se terao no arranjo 1: 5

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
Posicao[3]: 4
Posicao[4]: 5
O arranjo 1 e: 1 2 3 4 5 

Defina quantos numeros que se terao no arranjo 2: 5

Agora defina o outro arranjo para adicionar a sua frente:
Posicao[0]: 6
Posicao[1]: 7
Posicao[2]: 8
Posicao[3]: 9
Posicao[4]: 10
O arranjo 2 e: 6 7 8 9 10 

Agora o arranjo sera: 1 2 3 4 5 6 7 8 9 10
--------------------------------------------------------------------
Method_08 - v0.0

Defina quantos numeros que se terao no arranjo 1: -2

Defina uma arranjo de inteiros:
O arranjo 1 e:

Defina quantos numeros que se terao no arranjo 2: 3

Agora defina o outro arranjo para adicionar a sua frente:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
O arranjo 2 e: 1 2 3 

[Erro] O arranjo 1 e/ou 2 possui uma quantidade incorreta
*/


/**
Method_09.  - Exercicio 9

Funcao para procurar pela primeira ocorrencia de valor em arranjo
por meio de apontador.
@return apontador para a primeira ocorrência; nullptr, caso contrario
@param a - apontador para arranjo de inteiros
@param x - valor ser procurado

ref_intArray intArray_seek ( ref_intArray a, int x )

*/

void method_09 ( )
{
// identificar

    FuncoesArray *Arrays = new FuncoesArray();

    int *array = nullptr;
    int quantidadeArrays = 0;
    int procurado = 0;

    cout << "Defina quantos numeros que se terao no arranjo 1: ";
    cin >> quantidadeArrays;
    Arrays->set_quantidadeArray(array, quantidadeArrays);

    cout << endl << "Defina uma arranjo de inteiros: ";
    Arrays->set_cadeia(array, quantidadeArrays);
	cout << "O arranjo 1 e: ";  
	Arrays->print_cadeia(array, quantidadeArrays);


    cout << endl << "Defina um numero para procurar por sua ocorrencia: ";
    cin >> procurado;

    int *resultado = Arrays->intArray_seek(array, procurado);

    if (!Arrays->has_erro() && resultado) {

        cout << endl << "A primeira ocorrencia do numero foi encontrada a partir de: ";

        Arrays->print_cadeia(resultado);

    } else if (Arrays->get_erro() == 1) {
        std::cout << "\n[Erro] O arranjo 1 e/ou 2 possui uma quantidade incorreta" << endl;
    } else if (resultado == nullptr) {
        std::cout << "\n[Erro] O numero nao foi encontrado no arranjo" << endl;
    }

} // end method_09 ( )

/*
Method_09 - v0.0

Defina quantos numeros que se terao no arranjo 1: 5

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
Posicao[3]: 4
Posicao[4]: 5
O arranjo 1 e: 1 2 3 4 5 

Defina um numero para procurar por sua ocorrencia: 3

A primeira ocorrencia do numero foi encontrada a partir de: 3 4 5
--------------------------------------------------------------------
Method_09 - v0.0

Defina quantos numeros que se terao no arranjo 1: 5

Defina uma arranjo de inteiros:
Posicao[0]: 7
Posicao[1]: 8
Posicao[2]: 9
Posicao[3]: 4
Posicao[4]: 5
O arranjo 1 e: 7 8 9 4 5 

Defina um numero para procurar por sua ocorrencia: 10

[Erro] O numero nao foi encontrado no arranjo
--------------------------------------------------------------------
Method_09 - v0.0

Defina quantos numeros que se terao no arranjo 1: -2

Defina uma arranjo de inteiros:
O arranjo 1 e:

Defina um numero para procurar por sua ocorrencia: 2

[Erro] O arranjo 1 e/ou 2 possui uma quantidade incorreta
*/


/**
Method_10.  - Exercicio 10

Funcao para separar sequencia de valores em arranjo
por meio de apontador.
@return apontador para inicio da sequencia de inteiros; nullptr, caso contrario
@param a - apontador para arranjo de inteiros
@param start - posicao inicial
@param size - quantidade de dados

ref_intArray intArray_sub ( ref_intArray a, int start, int size )

*/

void method_10 ( )
{
// identificar

    FuncoesArray *Arrays = new FuncoesArray();

    int *array = nullptr;
    int quantidadeArrays = 0;
    int start = 0;
    int size = 0;

    cout << "Defina quantos numeros que se terao no arranjo 1: ";
    cin >> quantidadeArrays;
    Arrays->set_quantidadeArray(array, quantidadeArrays);

    cout << endl << "Defina uma arranjo de inteiros: ";
    Arrays->set_cadeia(array, quantidadeArrays);
	cout << "O arranjo 1 e: ";  
	Arrays->print_cadeia(array, quantidadeArrays);

    cout << endl << "Defina um posicao de inicio: ";
    cin >> start;

    cout << endl << "Defina um quantidade de dados para separar: ";
    cin >> size;

    int *resultado = Arrays->intArray_sub(array, start, size);

    if (!Arrays->has_erro() && resultado) {

        cout << endl << "A arranjo seprado sera: ";

        Arrays->print_cadeia(resultado);

    }else if (Arrays->get_erro() == 2) {
        std::cout << "\n[Erro] Quantidade de dados fornecida ultrapassa arranjo" << endl;
    } else if (Arrays->get_erro() == 3) {
        std::cout << "\n[Erro] Posicao fornecida invalida" << endl;
    }

} 
/*
Method_10 - v0.0

Defina quantos numeros que se terao no arranjo 1: 5

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
Posicao[3]: 4
Posicao[4]: 5
O arranjo 1 e: 1 2 3 4 5 

Defina um posicao de inicio: 3

Defina um quantidade de dados para separar: 3

A arranjo seprado sera: 3 4 5
--------------------------------------------------------------------
Method_10 - v0.0

Defina quantos numeros que se terao no arranjo 1: 5

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
Posicao[3]: 4
Posicao[4]: 5
O arranjo 1 e: 1 2 3 4 5 

Defina um posicao de inicio: 2

Defina um quantidade de dados para separar: 2

A arranjo seprado sera: 2 3
--------------------------------------------------------------------
Method_10 - v0.0

Defina quantos numeros que se terao no arranjo 1: 5

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
Posicao[3]: 4
Posicao[4]: 5
O arranjo 1 e: 1 2 3 4 5 

Defina um posicao de inicio: 4

Defina um quantidade de dados para separar: 3

[Erro] Quantidade de dados fornecida ultrapassa arranjo
--------------------------------------------------------------------
Method_10 - v0.0

Defina quantos numeros que se terao no arranjo 1: -2

Defina uma arranjo de inteiros:
O arranjo 1 e:

Defina um posicao de inicio: 1

Defina um quantidade de dados para separar: 2

[Erro] Posicao fornecida invalida
*/

/**
Method_E1.  - Exercicio Extra 1

Funcao para intercalar arranjos de inteiros
por meio de apontadores.
@return apontador para inicio do arranjo com a uniao
@param p - apontador para inicio do primeiro arranjo
@param q - apontador para inicio do segundo arranjo

ref_intArray intArray_merge ( ref_intArray p, ref_intArray q )

*/

void method_E1 ( )
{
// identificar

    FuncoesArray *Arrays = new FuncoesArray();

    int *array = nullptr;
    int *value = nullptr;
    int quantidadeArrays = 0;
    int quantidadeValue = 0;

    cout << "Defina quantos numeros que se terao no arranjo 1: ";
    cin >> quantidadeArrays;
    Arrays->set_quantidadeArray(array, quantidadeArrays);

    cout << endl << "Defina uma arranjo de inteiros: ";
    Arrays->set_cadeia(array, quantidadeArrays);
	cout << "O arranjo 1 e: ";  
	Arrays->print_cadeia(array, quantidadeArrays);


    cout << endl << "Defina quantos numeros que se terao no arranjo 2: ";
    cin >> quantidadeValue;
    Arrays->set_quantidadeValue(value, quantidadeValue);


    cout << endl << "Agora defina o outro arranjo para Intercala-los: ";
    Arrays->set_cadeia(value, quantidadeValue);
	cout << "O arranjo 2 e: ";  
	Arrays->print_cadeia(value, quantidadeValue);


    if (!Arrays->has_erro()) {

        int *resultado = Arrays->intArray_merge(array, value);
        cout << endl << "Agora o arranjo sera: ";

        Arrays->print_cadeia(resultado);

    } else if (Arrays->get_erro() == 1) {
        std::cout << "\n[Erro] O arranjo 1 e/ou 2 possui uma quantidade incorreta" << endl;
    }

} // end method_E1 ( )

/*
Method_E1 - v0.0

Defina quantos numeros que se terao no arranjo 1: 5

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
Posicao[3]: 4
Posicao[4]: 5
O arranjo 1 e: 1 2 3 4 5 

Defina quantos numeros que se terao no arranjo 2: 5

Agora defina o outro arranjo para Intercala-los:
Posicao[0]: 5
Posicao[1]: 6
Posicao[2]: 7
Posicao[3]: 8
Posicao[4]: 9
O arranjo 2 e: 5 6 7 8 9 

Agora o arranjo sera: 1 5 2 6 3 7 4 8 5 9
--------------------------------------------------------------------
Method_E1 - v0.0

Defina quantos numeros que se terao no arranjo 1: 3

Defina uma arranjo de inteiros:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
O arranjo 1 e: 1 2 3 

Defina quantos numeros que se terao no arranjo 2: 5

Agora defina o outro arranjo para Intercala-los:
Posicao[0]: 7
Posicao[1]: 8
Posicao[2]: 9
Posicao[3]: 6
Posicao[4]: 5
O arranjo 2 e: 7 8 9 6 5 

Agora o arranjo sera: 1 7 2 8 3 9 6 5
--------------------------------------------------------------------
Method_E1 - v0.0

Defina quantos numeros que se terao no arranjo 1: -2

Defina uma arranjo de inteiros:
O arranjo 1 e:

Defina quantos numeros que se terao no arranjo 2: 3

Agora defina o outro arranjo para Intercala-los:
Posicao[0]: 1
Posicao[1]: 2
Posicao[2]: 3
O arranjo 2 e: 1 2 3 

[Erro] O arranjo 1 e/ou 2 possui uma quantidade incorreta
*/


/**
Method_E2.  - Exercicio Extra 2

Funcao para intercalar arranjos de inteiros em ordem crescente
por meio de apontadores.
@return apontador para inicio do arranjo com a uniao
@param p - apontador para inicio do primeiro arranjo
@param q - apontador para inicio do segundo arranjo

ref_intArray intArray_mergeUp ( ref_intArray p, ref_intArray q )

*/

void method_E2 ( )
{
// identificar


    FuncoesArray *Arrays = new FuncoesArray();

    int *array = nullptr;
    int *value = nullptr;
    int quantidadeArrays = 0;
    int quantidadeValue = 0;

    cout << "Defina quantos numeros que se terao no arranjo 1: ";
    cin >> quantidadeArrays;
    Arrays->set_quantidadeArray(array, quantidadeArrays);

    cout << endl << "Defina uma arranjo de inteiros: ";
    Arrays->set_cadeia(array, quantidadeArrays);
	cout << "O arranjo 1 e: ";  
	Arrays->print_cadeia(array, quantidadeArrays);


    cout << endl << "Defina quantos numeros que se terao no arranjo 2: ";
    cin >> quantidadeValue;
    Arrays->set_quantidadeValue(value, quantidadeValue);


    cout << endl << "Agora defina o outro arranjo para intercala-los em ordem crescente: ";
    Arrays->set_cadeia(value, quantidadeValue);
	cout << "O arranjo 2 e: ";  
	Arrays->print_cadeia(value, quantidadeValue);


    if (!Arrays->has_erro()) {

        int *resultado = Arrays->intArray_mergeUp(array, value);
        cout << endl << "Agora o arranjo sera: ";

        Arrays->print_cadeia(resultado);

    } else if (Arrays->get_erro() == 1) {
        std::cout << "\n[Erro] O arranjo 1 e/ou 2 possui uma quantidade incorreta" << endl;
    }

} // end method_E2 ( )

/*
Method_E2 - v0.0

Defina quantos numeros que se terao no arranjo 1: 6

Defina uma arranjo de inteiros:
Posicao[0]: 7
Posicao[1]: 9
Posicao[2]: 1
Posicao[3]: 3
Posicao[4]: 6
Posicao[5]: 7
O arranjo 1 e: 7 9 1 3 6 7 

Defina quantos numeros que se terao no arranjo 2: 3

Agora defina o outro arranjo para intercala-los em ordem crescente:
Posicao[0]: 3
Posicao[1]: 4
Posicao[2]: 10
O arranjo 2 e: 3 4 10 

Agora o arranjo sera: 1 3 3 4 6 7 7 9 10
--------------------------------------------------------------------
Method_E2 - v0.0

Defina quantos numeros que se terao no arranjo 1: 0

Defina uma arranjo de inteiros:
O arranjo 1 e:

Defina quantos numeros que se terao no arranjo 2: 3

Agora defina o outro arranjo para intercala-los em ordem crescente:
Posicao[0]: 1
Posicao[1]: 9
Posicao[2]: 3
O arranjo 2 e: 1 9 3 

[Erro] O arranjo 1 e/ou 2 possui uma quantidade incorreta
--------------------------------------------------------------------
Method_E2 - v0.0

Defina quantos numeros que se terao no arranjo 1: 2

Defina uma arranjo de inteiros:
Posicao[0]: 2
Posicao[1]: 8
O arranjo 1 e: 2 8 

Defina quantos numeros que se terao no arranjo 2: 3

Agora defina o outro arranjo para intercala-los em ordem crescente:
Posicao[0]: 3
Posicao[1]: 4
Posicao[2]: 7
O arranjo 2 e: 3 4 7 

Agora o arranjo sera: 2 3 4 7 8
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
