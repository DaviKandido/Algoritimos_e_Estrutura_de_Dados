/*
Ed12 - 16 / 05 / 2024
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


//Include de biblioteca propria
#include "BibliotecaClassMatriz.hpp"


/**
Method_01 - Exercicio 1

01.) Incluir métodos (1211) para
ler a quantidade de elementos ( MxN ) a serem gerados;
gerar essa quantidade ( MxN ) de valores aleatórios
dentro do intervalo e armazená-los em matriz;
gravá-los, um por linha, em um arquivo ("DADOS.TXT").
A primeira linha do arquivo deverá informar a quantidade
de números aleatórios ( N ) que serão gravados em seguida.
DICA: Usar a função rand( ), mas tentar limitar valores ao intervalo [1:100].
Exemplo: matrix.randomIntGenerate ( inferior, superior );

*/



void method_01() {
    // Inicializar o gerador de números aleatórios com o tempo atual
    srand(static_cast<unsigned int>(time(0)));

    int MxN = 0;
    int inferior = 0;
    int superior = 0;
	string filename = "Dados.TXT";

    def_ClassMatriz classMatriz = new ClassMatriz();

    std::cout << "Insira uma quantidade para MxN: ";
    std::cin >> MxN;
    std::cout << std::endl;

    std::cout << "Insira o MENOR valor possivel a se gerar (MIN 1): ";
    std::cin >> inferior;
    std::cout << std::endl;

    std::cout << "Insira o MAIOR valor possivel a se gerar (Max 100): ";
    std::cin >> superior;
    std::cout << std::endl;

    classMatriz->GerarAleatorios(MxN, inferior, superior);
	classMatriz->GravarAleatorios(filename);

    std::cout << "Foram gravados os numeros: " ;
    classMatriz->LerAleatorios();
    std::cout << std::endl;

	std::cout << "Insira uma quantidade de linhas: ";
    std::cin >> classMatriz->linhas;
    std::cout << std::endl;

    std::cout << "Insira uma quantidade de colunas: ";
    std::cin >> classMatriz->colunas;
    std::cout << std::endl;

	classMatriz->callocMatriz( classMatriz->linhas, classMatriz->colunas);
	classMatriz->GravarMatrizAleatoria(MxN);

	if (MxN >= classMatriz->linhas*classMatriz->colunas){
		std::cout << "A matriz Original e: " << endl;
		classMatriz->PrintMatriz();
	}

    delete classMatriz;
} // end method_01

/*
Method_01 - v0.0
Insira uma quantidade para MxN: 9

Insira o MENOR valor possivel a se gerar (MIN 1): 10

Insira o MAIOR valor possivel a se gerar (Max 100): 100

Foram gravados os numeros: 55 10 53 54 68 57 48 74 35

Insira uma quantidade de linhas: 3

Insira uma quantidade de colunas: 3

A matriz Original e:
55      10      53
10      53      54
53      54      68
*/


/**
Method_02. - Exercicio 2

02.) Incluir uma função (1212) para
escalar uma matriz, multiplicando todos os seus valores por uma constante.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre a matriz com os valores lidos.
Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" );
matrix2 = matrix1.scalar ( 3 ); // multiplicar cada valor pelo argumento

*/
void method_02 ( )
{
// identificar

	string filename = "Matriz.TXT";

    def_ClassMatriz classMatriz = new ClassMatriz();
	def_ClassMatriz classMatriz2 = new ClassMatriz();
	int escala = 0;
 

    std::cout << "Gravaremos uma matriz do teclado: " << endl << endl;

	std::cout << "Insira uma quantidade de linhas: ";
    std::cin >> classMatriz->linhas;
    std::cout << std::endl;

    std::cout << "Insira uma quantidade de colunas: ";
    std::cin >> classMatriz->colunas;
    std::cout << std::endl;

	classMatriz->callocMatriz(classMatriz->linhas, classMatriz->colunas);
	classMatriz2->callocMatriz( classMatriz->linhas, classMatriz->colunas);
	classMatriz->MatrizDoTeclado();

	classMatriz->GravarMatrizEmArquivo(filename);

	std::cout << "Matriz Original: " << endl;
	classMatriz->PrintMatriz();
	std::cout << std::endl;

	std::cout << "Defina um numero para escalonar a matriz: ";
	std::cin >> escala;
	classMatriz2 = classMatriz->ScalarMatriz( *classMatriz2, escala, filename);

	std::cout << std::endl;
	std::cout << "Matriz Escalonada: " << endl;
	classMatriz2->PrintMatriz();

    delete classMatriz;
} // end method_02 ( )

/*
Method_02 - v0.0
Gravaremos uma matriz do teclado:

Insira uma quantidade de linhas: 3

Insira uma quantidade de colunas: 3

matriz[0][0] = 1
matriz[0][1] = 2
matriz[0][2] = 3

matriz[1][0] = 4
matriz[1][1] = 5
matriz[1][2] = 6

matriz[2][0] = 7
matriz[2][1] = 8
matriz[2][2] = 9

Matriz Original:
1       2       3
4       5       6
7       8       9

Defina um numero para escalonar a matriz: 2

Matriz Escalonada:
2       4       6
8       10      12
14      16      18
*/


/**
Method_03. - Exercicio 3

03.) Incluir uma função (1213) para
testar se uma matriz é a identidade.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre a matriz com os valores lidos.
Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" );
teste = matrix1.identidade ( );

*/
void method_03 ( )
{
// identificar

	string filename = "MatrizIdentidade.TXT";

    def_ClassMatriz classMatriz = new ClassMatriz();
	bool teste = false;

    std::cout << "Gravaremos uma matriz do teclado: " << endl << endl;

	std::cout << "Insira uma quantidade de linhas: ";
    std::cin >> classMatriz->linhas;
    std::cout << std::endl;

    std::cout << "Insira uma quantidade de colunas: ";
    std::cin >> classMatriz->colunas;
    std::cout << std::endl;

	classMatriz->callocMatriz(classMatriz->linhas, classMatriz->colunas);
	classMatriz->MatrizDoTeclado();

	classMatriz->GravarMatrizEmArquivo(filename);

	std::cout << "Matriz Original: " << endl;
	classMatriz->PrintMatriz(filename);
	std::cout << std::endl;

	teste = classMatriz->VerificaIdentidade(filename);

	if(teste){
		std::cout << "A matriz e identidade\n";
	} else{
		std::cout << "A matriz NAO e identidade\n";

	}



} // end method_03 ( )

/*
Method_03 - v0.0
Gravaremos uma matriz do teclado:

Insira uma quantidade de linhas: 2

Insira uma quantidade de colunas: 2

matriz[0][0] = 1
matriz[0][1] = 0

matriz[1][0] = 1
matriz[1][1] = 0

Matriz Original:
1       0
1       0

A matriz NAO e identidade
---------------------------------
Method_03 - v0.0
Gravaremos uma matriz do teclado:

Insira uma quantidade de linhas: 3

Insira uma quantidade de colunas: 3

matriz[0][0] = 1
matriz[0][1] = 0
matriz[0][2] = 0

matriz[1][0] = 0
matriz[1][1] = 1
matriz[1][2] = 0

matriz[2][0] = 0
matriz[2][1] = 0
matriz[2][2] = 1

Matriz Original:
1       0       0
0       1       0
0       0       1

A matriz e identidade
*/



/**
Method_04.  - Exercicio 4

04.) Incluir em um programa (Exemplo1214) um operador para
testar a igualdade de duas matrizes.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos.
Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" );
matrix2 = readMatrixFromFile ( "DADOS2.TXT" );
teste = (matrix1 == matrix2);

*/


void method_04 ( )
{
// identificar

	string filename1 = "Dados1.TXT";
	string filename2 = "Dados2.TXT";

    def_ClassMatriz classMatriz1 = new ClassMatriz();
	def_ClassMatriz classMatriz2 = new ClassMatriz();
	bool teste = true;

    std::cout << "\nGravaremos a primeira Matriz do teclado: " << endl << endl;

	std::cout << "Insira uma quantidade de linhas: ";
    std::cin >> classMatriz1->linhas;
    std::cout << std::endl;

    std::cout << "Insira uma quantidade de colunas: ";
    std::cin >> classMatriz1->colunas;
    std::cout << std::endl;

	classMatriz1->callocMatriz(classMatriz1->linhas, classMatriz1->colunas);
	classMatriz1->MatrizDoTeclado();
	classMatriz1->GravarMatrizEmArquivo(filename1);

	std::cout << "Gravaremos a Segunda Matriz do teclado: " << endl << endl;

	std::cout << "Insira uma quantidade de linhas: ";
    std::cin >> classMatriz2->linhas;
    std::cout << std::endl;

    std::cout << "Insira uma quantidade de colunas: ";
    std::cin >> classMatriz2->colunas;
    std::cout << std::endl;

	classMatriz2->callocMatriz(classMatriz2->linhas, classMatriz2->colunas);
	classMatriz2->MatrizDoTeclado();
	classMatriz2->GravarMatrizEmArquivo(filename2);

	std::cout << "Matriz 1 (um): " << endl;
	classMatriz1->PrintMatriz(filename1);
	std::cout << std::endl;

	std::cout << "Matriz 2 (dois): " << endl;
	classMatriz2->PrintMatriz(filename2);
	std::cout << std::endl;

	teste = classMatriz2->VerificaIgualdade(*classMatriz1);
	if(teste){
		std::cout << "As matriz sao iguais\n";
	} else{
		std::cout << "A matriz NAO sao iguais\n";

	}

} // end method_04 ( )

/*
Method_04 - v0.0

Gravaremos a primeira Matriz do teclado:

Insira uma quantidade de linhas: 2

Insira uma quantidade de colunas: 2

matriz[0][0] = 1
matriz[0][1] = 2

matriz[1][0] = 3
matriz[1][1] = 4

Gravaremos a Segunda Matriz do teclado:

Insira uma quantidade de linhas: 2

Insira uma quantidade de colunas: 2

matriz[0][0] = 1
matriz[0][1] = 2

matriz[1][0] = 3
matriz[1][1] = 4

Matriz 1 (um):
1       2
3       4

Matriz 2 (dois):
1       2
3       4

As matriz sao iguais
---------------------------------------------
Method_04 - v0.0

Gravaremos a primeira Matriz do teclado:

Insira uma quantidade de linhas: 2

Insira uma quantidade de colunas: 2

matriz[0][0] = 1
matriz[0][1] = 2

matriz[1][0] = 3
matriz[1][1] = 4

Gravaremos a Segunda Matriz do teclado:

Insira uma quantidade de linhas: 2

Insira uma quantidade de colunas: 2

matriz[0][0] = 4
matriz[0][1] = 3

matriz[1][0] = 2
matriz[1][1] = 1

Matriz 1 (um):
1       2
3       4

Matriz 2 (dois):
4       3
2       1

A matriz NAO sao iguais
*/


/**
Method_05.  - Exercicio 5

05.) Incluir uma função (1215) para
somar duas matrizes e mostrar o resultado.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos.
Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" );
matrix2 = readMatrixFromFile ( "DADOS2.TXT" );
soma = matrix1.add ( matrix2 );

*/


void method_05 ( )
{
// identificar

	string filename1 = "Dados1.TXT";
	string filename2 = "Dados2.TXT";

    def_ClassMatriz classMatriz1 = new ClassMatriz();
	def_ClassMatriz classMatriz2 = new ClassMatriz();
	def_ClassMatriz soma = new ClassMatriz();

    std::cout << "\nGravaremos a primeira Matriz do teclado: " << endl << endl;

	std::cout << "Insira uma quantidade de linhas: ";
    std::cin >> classMatriz1->linhas;
    std::cout << std::endl;

    std::cout << "Insira uma quantidade de colunas: ";
    std::cin >> classMatriz1->colunas;
    std::cout << std::endl;

	classMatriz1->callocMatriz(classMatriz1->linhas, classMatriz1->colunas);
	classMatriz1->MatrizDoTeclado();
	classMatriz1->GravarMatrizEmArquivo(filename1);

	std::cout << "Gravaremos a Segunda Matriz do teclado: " << endl << endl;

	std::cout << "Insira uma quantidade de linhas: ";
    std::cin >> classMatriz2->linhas;
    std::cout << std::endl;

    std::cout << "Insira uma quantidade de colunas: ";
    std::cin >> classMatriz2->colunas;
    std::cout << std::endl;

	classMatriz2->callocMatriz(classMatriz2->linhas, classMatriz2->colunas);
	classMatriz2->MatrizDoTeclado();
	classMatriz2->GravarMatrizEmArquivo(filename2);

	std::cout << "Matriz 1 (um): " << endl;
	classMatriz1->PrintMatriz(filename1);
	std::cout << std::endl;

	std::cout << "Matriz 2 (dois): " << endl;
	classMatriz2->PrintMatriz(filename2);
	std::cout << std::endl;

	soma = classMatriz1->SomarMatrizes(*classMatriz2, *soma);

	std::cout << "A soma das Matrizes sera: " << endl;
	soma->PrintMatriz();
	std::cout << std::endl;


} // end method_05 ( )

/*
Method_05 - v0.0

Gravaremos a primeira Matriz do teclado:

Insira uma quantidade de linhas: 2

Insira uma quantidade de colunas: 2

matriz[0][0] = 1
matriz[0][1] = 2

matriz[1][0] = 3
matriz[1][1] = 4

Gravaremos a Segunda Matriz do teclado:

Insira uma quantidade de linhas: 2

Insira uma quantidade de colunas: 2

matriz[0][0] = 1
matriz[0][1] = 2

matriz[1][0] = 3
matriz[1][1] = 4

Matriz 1 (um):
1       2
3       4

Matriz 2 (dois):
1       2
3       4

A soma das Matrizes sera:
2       4
6       8
----------------------------------
Method_05 - v0.0

Gravaremos a primeira Matriz do teclado:

Insira uma quantidade de linhas: 2

Insira uma quantidade de colunas: 1

matriz[0][0] = 2

matriz[1][0] = 2

Gravaremos a Segunda Matriz do teclado:

Insira uma quantidade de linhas: 1

Insira uma quantidade de colunas: 2

matriz[0][0] = 1
matriz[0][1] = 2

Matriz 1 (um):
2
2

Matriz 2 (dois):
1       2

ERRO: Tamanho de Matrizes incompativeis
*/

/**
Method_06.  - Exercicio 6

06.) Incluir uma função (1216) para
operar duas linhas da matriz, guardando no lugar da primeira,
as somas de cada elemento da primeira linha com o respectivo da segunda linha
multiplicados por uma constante.
Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" );
matrix1.addRows ( 0, 1, (-1) );

*/



void method_06 ( )
{
// identificar

	string filename1 = "Dados1.TXT";

    def_ClassMatriz classMatriz1 = new ClassMatriz();
	int PrimeiraLinha= 0;
	int Segundalinha= 1;
	int Constante = 0;

    std::cout << "\nGravaremos a Matriz do teclado: " << endl << endl;

	std::cout << "Insira uma quantidade de linhas: ";
    std::cin >> classMatriz1->linhas;
    std::cout << std::endl;

    std::cout << "Insira uma quantidade de colunas: ";
    std::cin >> classMatriz1->colunas;
    std::cout << std::endl;

	classMatriz1->callocMatriz(classMatriz1->linhas, classMatriz1->colunas);
	classMatriz1->MatrizDoTeclado();
	classMatriz1->GravarMatrizEmArquivo(filename1);
	
	std::cout << "Matriz Original: " << endl;
	classMatriz1->PrintMatriz(filename1);
	std::cout << std::endl;

	std::cout << "Insira uma constante a multiplicar: ";
    std::cin >> Constante;
    std::cout << std::endl;

	classMatriz1->SomaLinhasMultConstante(PrimeiraLinha, Segundalinha, Constante);

	std::cout << "A operacao da  primeira linha + segunda linhas * constante sera: " << endl;
	classMatriz1->PrintMatriz();
	std::cout << std::endl;


} // end method_06 ( )

/*
/*
Method_06 - v0.0

Gravaremos a Matriz do teclado:

Insira uma quantidade de linhas: 2

Insira uma quantidade de colunas: 2

matriz[0][0] = 1
matriz[0][1] = 2

matriz[1][0] = 3
matriz[1][1] = 4

Matriz Original:
1       2
3       4

Insira uma constante a multiplicar: 2

A operacao da  primeira linha + segunda linhas * constante sera:
8       12
3       4
*/

/**
Method_07.  - Exercicio 7

07.) Incluir uma função (1217) para
operar duas linhas da matriz, guardando no lugar da primeira,
as diferenças de cada elemento da primeira linha com o respectivo da segunda linha
multiplicado por uma constante.
Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" );
matrix1.subtractRows ( 0, 1, (2) );

*/



void method_07 ( )
{
// identificar

	string filename1 = "Dados1.TXT";

    def_ClassMatriz classMatriz1 = new ClassMatriz();
	int PrimeiraLinha= 0;
	int Segundalinha= 1;
	int Constante = 0;

    std::cout << "\nGravaremos a Matriz do teclado: " << endl << endl;

	std::cout << "Insira uma quantidade de linhas: ";
    std::cin >> classMatriz1->linhas;
    std::cout << std::endl;

    std::cout << "Insira uma quantidade de colunas: ";
    std::cin >> classMatriz1->colunas;
    std::cout << std::endl;

	classMatriz1->callocMatriz(classMatriz1->linhas, classMatriz1->colunas);
	classMatriz1->MatrizDoTeclado();
	classMatriz1->GravarMatrizEmArquivo(filename1);
	
	std::cout << "Matriz Original: " << endl;
	classMatriz1->PrintMatriz(filename1);
	std::cout << std::endl;

	std::cout << "Insira uma constante a multiplicar: ";
    std::cin >> Constante;
    std::cout << std::endl;

	classMatriz1->SubtraiLinhasMultConstante(PrimeiraLinha, Segundalinha, Constante);

	std::cout << "A operacao da  primeira linha + segunda linhas * constante sera: " << endl;
	classMatriz1->PrintMatriz();
	std::cout << std::endl;




} // end method_07 ( )

/*
Method_07 - v0.0

Gravaremos a Matriz do teclado:

Insira uma quantidade de linhas: 2

Insira uma quantidade de colunas: 2

matriz[0][0] = 1
matriz[0][1] = 2

matriz[1][0] = 3
matriz[1][1] = 4

Matriz Original:
1       2
3       4

Insira uma constante a multiplicar: 2

A operacao da  primeira linha + segunda linhas * constante sera:
-4      -4
3       4
*/

/*
Method_08.  - Exercicio 8

08.) Incluir uma função (1218) para
dizer em qual linha da matriz se encontra certo valor, se houver.
Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" );
teste = matrix1.searchRows ( procurado );

*/

void method_08 ( )
{
// identificar

	string filename1 = "Dados1.TXT";

    def_ClassMatriz classMatriz1 = new ClassMatriz();

	int ValorProcurado = 0;
	int teste = 0;

    std::cout << "\nGravaremos a Matriz do teclado: " << endl << endl;

	std::cout << "Insira uma quantidade de linhas: ";
    std::cin >> classMatriz1->linhas;
    std::cout << std::endl;

    std::cout << "Insira uma quantidade de colunas: ";
    std::cin >> classMatriz1->colunas;
    std::cout << std::endl;

	classMatriz1->callocMatriz(classMatriz1->linhas, classMatriz1->colunas);
	classMatriz1->MatrizDoTeclado();
	classMatriz1->GravarMatrizEmArquivo(filename1);
	
	std::cout << "Matriz Original: " << endl;
	classMatriz1->PrintMatriz(filename1);
	std::cout << std::endl;

	std::cout << "Insira um valor a se procurar: ";
    std::cin >> ValorProcurado;
    std::cout << std::endl;

	teste = classMatriz1->ProcurarValorNaLinhaDaMatriz(ValorProcurado);

	if(teste){
		std::cout << "O Valor foi encontrado na linha "<< teste << endl;
	} else{
		std::cout << "O Valor NAO foi encontrado\n";
	}

} // end method_08 ( )


/*
Method_08 - v0.0

Gravaremos a Matriz do teclado:

Insira uma quantidade de linhas: 2

Insira uma quantidade de colunas: 2

matriz[0][0] = 1
matriz[0][1] = 2

matriz[1][0] = 3
matriz[1][1] = 4

Matriz Original:
1       2
3       4

Insira um valor a se procurar: 3

O Valor foi encontrado na linha 2
--------------------------------------------
Method_08 - v0.0

Gravaremos a Matriz do teclado:

Insira uma quantidade de linhas: 3

Insira uma quantidade de colunas: 3

matriz[0][0] = 1
matriz[0][1] = 2
matriz[0][2] = 3

matriz[1][0] = 4
matriz[1][1] = 5
matriz[1][2] = 6

matriz[2][0] = 7
matriz[2][1] = 8
matriz[2][2] = 9

Matriz Original:
1       2       3
4       5       6
7       8       9

Insira um valor a se procurar: 8

O Valor foi encontrado na linha 3
----------------------------------------------
Method_08 - v0.0

Gravaremos a Matriz do teclado:

Insira uma quantidade de linhas: 2

Insira uma quantidade de colunas: 2

matriz[0][0] = 1
matriz[0][1] = 2

matriz[1][0] = 3
matriz[1][1] = 4

Matriz Original:
1       2
3       4

Insira um valor a se procurar: 5

O Valor NAO foi encontrado
*/


/**
Method_09.  - Exercicio 9

09.) Incluir uma função (1219) para
dizer em qual coluna da matriz se encontra certo valor, se houver.
Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" );
teste = matrix1.searchColumns ( procurado );

*/

void method_09 ( )
{
// identificar

	string filename1 = "Dados1.TXT";

    def_ClassMatriz classMatriz1 = new ClassMatriz();

	int ValorProcurado = 0;
	int teste = 0;

    std::cout << "\nGravaremos a Matriz do teclado: " << endl << endl;

	std::cout << "Insira uma quantidade de linhas: ";
    std::cin >> classMatriz1->linhas;
    std::cout << std::endl;

    std::cout << "Insira uma quantidade de colunas: ";
    std::cin >> classMatriz1->colunas;
    std::cout << std::endl;

	classMatriz1->callocMatriz(classMatriz1->linhas, classMatriz1->colunas);
	classMatriz1->MatrizDoTeclado();
	classMatriz1->GravarMatrizEmArquivo(filename1);
	
	std::cout << "Matriz Original: " << endl;
	classMatriz1->PrintMatriz(filename1);
	std::cout << std::endl;

	std::cout << "Insira um valor a se procurar: ";
    std::cin >> ValorProcurado;
    std::cout << std::endl;

	teste = classMatriz1->ProcurarValorNaColunaDaMatriz(ValorProcurado);

	if(teste){
		std::cout << "O Valor foi encontrado na coluna: "<< teste << endl;
	} else{
		std::cout << "O Valor NAO foi encontrado\n";
	}

} // end method_09 ( )

/*
Method_09 - v0.0

Gravaremos a Matriz do teclado:

Insira uma quantidade de linhas: 2

Insira uma quantidade de colunas: 2

matriz[0][0] = 1
matriz[0][1] = 2

matriz[1][0] = 3
matriz[1][1] = 4

Matriz Original:
1       2
3       4

Insira um valor a se procurar: 3

O Valor foi encontrado na coluna: 1
---------------------------------------------------
Method_09 - v0.0

Gravaremos a Matriz do teclado:

Insira uma quantidade de linhas: 3

Insira uma quantidade de colunas: 3

matriz[0][0] = 1
matriz[0][1] = 2
matriz[0][2] = 3

matriz[1][0] = 4
matriz[1][1] = 5
matriz[1][2] = 6

matriz[2][0] = 7
matriz[2][1] = 8
matriz[2][2] = 9

Matriz Original:
1       2       3
4       5       6
7       8       9

Insira um valor a se procurar: 10

O Valor NAO foi encontrado
*/


/**
Method_10.  - Exercicio 10

10.) Incluir uma função (1220) para
transpor os dados em uma matriz.
Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" );
matrix1.transpose ( );

*/

void method_10 ( )
{
// identificar

	string filename1 = "Dados1.TXT";

    def_ClassMatriz classMatriz1 = new ClassMatriz();
	int PrimeiraLinha= 0;
	int Segundalinha= 1;
	int Constante = 0;

    std::cout << "\nGravaremos a Matriz do teclado: " << endl << endl;

	std::cout << "Insira uma quantidade de linhas: ";
    std::cin >> classMatriz1->linhas;
    std::cout << std::endl;

    std::cout << "Insira uma quantidade de colunas: ";
    std::cin >> classMatriz1->colunas;
    std::cout << std::endl;

	classMatriz1->callocMatriz(classMatriz1->linhas, classMatriz1->colunas);
	classMatriz1->MatrizDoTeclado();
	classMatriz1->GravarMatrizEmArquivo(filename1);
	
	std::cout << "Matriz Original: " << endl;
	classMatriz1->PrintMatriz(filename1);
	std::cout << std::endl;


	classMatriz1->TrasnporMatriz();

	std::cout << "A transposta da Matriz sera: " << endl;
	classMatriz1->PrintMatriz();
	std::cout << std::endl;

} 

/*
Method_10 - v0.0

Gravaremos a Matriz do teclado:

Insira uma quantidade de linhas: 2

Insira uma quantidade de colunas: 3

matriz[0][0] = 1
matriz[0][1] = 2
matriz[0][2] = 3

matriz[1][0] = 4
matriz[1][1] = 5
matriz[1][2] = 6

Matriz Original:
1       2       3
4       5       6

A transposta da Matriz sera:
1       4
2       5
3       6
*/


/**
Method_E1.  - Exercicio Extra 1

E1.) Incluir uma função (12E1) para
dizer se uma matriz apresenta a característica abaixo

					1 5 9 13
		1 4 7	 	2 6 10 14
1 3		2 5 8		3 7 11 15
2 4		3 6 9		4 8 12 16

*/

void method_E1 ( )
{
// identificar

	string filename1 = "Dados1.TXT";

    def_ClassMatriz classMatriz1 = new ClassMatriz();
	bool teste = false;

    std::cout << "\nGravaremos a Matriz do teclado: " << endl << endl;

	std::cout << "Insira uma quantidade de linhas: ";
    std::cin >> classMatriz1->linhas;
    std::cout << std::endl;

    std::cout << "Insira uma quantidade de colunas: ";
    std::cin >> classMatriz1->colunas;
    std::cout << std::endl;

	classMatriz1->callocMatriz(classMatriz1->linhas, classMatriz1->colunas);
	classMatriz1->MatrizDoTeclado();
	classMatriz1->GravarMatrizEmArquivo(filename1);
	
	std::cout << "Matriz Original: " << endl;
	classMatriz1->PrintMatriz(filename1);
	std::cout << std::endl;

	teste = classMatriz1->VerificarCrescentePorColunas();

	if(teste){
		std::cout << "A matriz e crescente conforme o exemplo " << endl;
	} else{
		std::cout << "A matriz NAO e crescente conforme o exemplo" << endl;
	}

/*
Method_E1 - v0.0

Gravaremos a Matriz do teclado:

Insira uma quantidade de linhas: 3

Insira uma quantidade de colunas: 3

matriz[0][0] = 1
matriz[0][1] = 4
matriz[0][2] = 7

matriz[1][0] = 2
matriz[1][1] = 5
matriz[1][2] = 8

matriz[2][0] = 3
matriz[2][1] = 6
matriz[2][2] = 9

Matriz Original:
1       4       7
2       5       8
3       6       9

A matriz e crescente conforme o exemplo
---------------------------------------------
Method_E1 - v0.0

Gravaremos a Matriz do teclado:

Insira uma quantidade de linhas: 2

Insira uma quantidade de colunas: 2

matriz[0][0] = 1
matriz[0][1] = 2

matriz[1][0] = 3
matriz[1][1] = 4

Matriz Original:
1       2
3       4

A matriz NAO e crescente conforme o exemplo
*/


} // end method_E1 ( )


/**
Method_E2.  - Exercicio Extra 2

E2.) Incluir uma função (12E2) para
montar uma matriz com a característica abaixo.

				  16 12 8 4
		9 6 3	  15 11 7 3
4 2		8 5 2	  14 10 6 2
3 1		7 4 1     13  9 5 1

*/


void method_E2 ( )
{
// identificar


    def_ClassMatriz classMatriz1 = new ClassMatriz();
	int quantidade = 0;

    std::cout << "\nGravaremos Matrizes Decrescentes por colunas: " << endl << endl;

	std::cout << "Quantas Matrizes com a seguinte caracteristica serao geradas: ";
    std::cin >> quantidade;
    std::cout << std::endl;
	
	std::cout << "Print das Matrizes: " << endl;
	std::cout << endl;

	classMatriz1->GerarMatrizesdecrescentesPorColunas(quantidade);

} // end method_E2 ( )

/*
Method_E2 - v0.0

Gravaremos Matrizes Decrescentes por colunas:

Quantas Matrizes com a seguinte caracteristica serao geradas: 4

Print das Matrizes:

Matriz 1:
4       2
3       1

Matriz 2:
9       6       3
8       5       2
7       4       1

Matriz 3:
16      12      8       4
15      11      7       3
14      10      6       2
13      9       5       1

Matriz 4:
25      20      15      10      5
24      19      14      9       4
23      18      13      8       3
22      17      12      7       2
21      16      11      6       1
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
	pause ( "Apertar ENTER para terminar" );
	return ( 0 );
} // end main ( )
/*
---------------------------------------------- documentacao complementar
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao matriz Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/
