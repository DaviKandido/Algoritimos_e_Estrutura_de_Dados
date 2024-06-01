/*
Ed11 - v0.0. - 16 / 05 / 2024
Author: Davi Cândido de Almeida
*/

// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres
#include <cstring>

// ----------------------------------------------- classes / pacotes

#include "io.hpp"
#include "myarray.hpp"
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

01.) Incluir métodos (1111) para
ler a quantidade de elementos ( N ) a serem gerados;
gerar essa quantidade ( N ) de valores aleatórios
dentro do intervalo e armazená-los em arranjo;
gravá-los, um por linha, em um arquivo ("DADOS.TXT").
A primeira linha do arquivo deverá informar a quantidade
de números aleatórios ( N ) que serão gravados em seguida.
DICA: Usar a função rand( ), mas tentar limitar valores muito grandes.
Exemplo: valor = arranjo.randomIntGenerate ( inferior, superior );
*/



void Geraraleatorios(int quantidade, int minimo, int maximo, int arranjo[]){

    srand(time(NULL));

    for(int i = 0; quantidade > i; i++){
        arranjo[i] = minimo + rand() %  (maximo - minimo);
    }

}

void Printararranjo(int quantidade, int arranjo[]){

    for(int i = 0; quantidade > i; i++){
        std::cout << arranjo[i] << " ";
    }
    std::cout << endl;
}

void Gravararranjo(int quantidade, int arranjo[], string filename){

    std::ofstream arquivo (filename);

arquivo << quantidade << endl;

    for(int i = 0; quantidade > i; i++){
        arquivo << arranjo[i] << endl;
    }

arquivo.close();
}


void method_01 ( ) {

string filename = "DADOS.TXT";

int quantidade = 0;
int maximo, minimo;

std::cout << "Defina uma quantidade de numeros aleatorio: ";
std::cin >> quantidade;

if(quantidade <= 0){
    cout << "\nValor invalo: insira outro novamente\n";
    method_01();
}


int arranjo[quantidade];

std::cout << "\nDefina um valor minimo: ";
std::cin >> minimo;

std::cout << "\nDefina um valor maximo: ";
std::cin >> maximo;

Geraraleatorios(quantidade, minimo, maximo, arranjo);

std::cout << "\nSao valores do arranjo: ";
Printararranjo(quantidade, arranjo);
std::cout << endl;


Gravararranjo(quantidade, arranjo, filename);

} // end method_01 ( )

/*
Method_01 - v0.0
Defina uma quantidade de numeros aleatorio: 10

Defina um valor minimo: 100

Defina um valor maximo: 1000

Sao valores do arranjo: 141 567 134 500 369 524 778 658 962 264
*/

/**
Method_02. - Exercicio 2

02.) Incluir uma função (1112) para
procurar o maior valor par em um arranjo.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos;
DICA: Usar o primeiro valor par como referência inicial.
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
maior = arranjo.searchFirstOdd ( );

*/

class classeArranjo
{
public:
 int quantidade;
 string arranjo;
 int soma;
 double media;
};

using def_arranjo = classeArranjo;


int MaiorValorPar(string arranjo){

int maior = -1;

 for(int i = 0; i < arranjo.length(); i++){
    if(arranjo[i] % 2 == 0 && arranjo[i] > maior){
        maior = int(arranjo[i]);
    }
 }
    return maior;
}

string LerArquivo(string filename){

    ifstream arquivo (filename);

    string arranjo;
    int lido;
    int quantidade;

    arquivo >> quantidade;

    for(int i = 0; quantidade > i; i++){
        arquivo >> lido;

        arranjo += lido;
    }
    arquivo.close();

    return arranjo;
}

void method_02 ( )
{

string filename = "DADOS.TXT";

method_01();

def_arranjo ClasArranjo;

int MaiorPar = -1;

ClasArranjo.arranjo = LerArquivo(filename);

MaiorPar = MaiorValorPar(ClasArranjo.arranjo);

if(MaiorPar == -1)
cout << "Nao possuem valores pares em " << filename;
else
cout << "O maior numero par e: " << MaiorPar << endl;

} // end method_02 ( )

/*
Method_02 - v0.0
Defina uma quantidade de numeros aleatorio: 10

Defina um valor minimo: 5

Defina um valor maximo: 50

Sao valores do arranjo: 46 22 39 45 49 24 8 23 12 34
O maior numero par e: 46
*/


/**
Method_03. - Exercicio 3

03.) Incluir uma função (1113) para
procurar o menor valor ímpar em um arranjo.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos;
DICA: Usar o primeiro valor ímpar múltiplo de 3 como referência inicial.
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
menor = arranjo.searchFirstOddx3 ( );

*/


int MenorValorImpar(string arranjo){

int menor;

 for(int i = 0; i < arranjo.length(); i++){
    if(arranjo[i] % 2 != 0 && arranjo[i] < menor){
        menor = int(arranjo[i]);
    }
 }
    return menor;
}
void method_03 ( )
{

string filename = "DADOS.TXT";

method_01();

def_arranjo ClasArranjo;

int MenorImpar = -1;

ClasArranjo.arranjo = LerArquivo(filename);

MenorImpar = MenorValorImpar(ClasArranjo.arranjo);

if(MenorImpar == -1)
cout << "Nao possuem valores impares em " << filename;
else
cout << "O mneor valor impar e: " << MenorImpar << endl;

} // end method_03 ( )



/**
Method_04.  - Exercicio 4

04.) Incluir uma função (1114) para
somar todos os valores em um arranjo entre duas posições dadas.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos;
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
soma = arranjo.addInterval ( inicio, fim );

*/

def_arranjo SomaEntreDuasPosicoes(def_arranjo Clasarranjo){

    int posicao1, posicao2;
    int soma = 0;

    cout << "Defina a posicao de partida: ";
    cin >> posicao1;
    cout << "Defina a posicao de parada: ";
    cin >> posicao2;

    int i = posicao1-1;

    while(i <= posicao2-1){

        soma += int(Clasarranjo.arranjo[i]);
        i++;
    }

    Clasarranjo.soma = soma;
    Clasarranjo.quantidade = i-1;

return Clasarranjo;
}



void method_04 ( )
{
// identificar

string filename = "DADOS.TXT";
def_arranjo ClasArranjo;

method_01();


ClasArranjo.arranjo = LerArquivo(filename);

ClasArranjo = SomaEntreDuasPosicoes(ClasArranjo);

cout << "\nA soma de todos os numeros entre as posicoes dadas e: " << ClasArranjo.soma;

} // end method_04 ( )

/*
Method_04 - v0.0
Defina uma quantidade de numeros aleatorio: 10

Defina um valor minimo: 0

Defina um valor maximo: 10

Sao valores do arranjo: 3 8 3 2 7 9 4 0 4 1

Defina a posicao de partida: 2
Defina a posicao de parada: 5

A soma de todos os numeros entre as posicoes dadas e: 20
*/


/**
Method_05.  - Exercicio 5

05.) Incluir uma função (1115) para
achar a média dos valores em um arranjo entre duas posições dadas.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos;
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
media = arranjo.averageInterval ( inicio, fim );

*/

def_arranjo MediaEntreDuasPosicoes(def_arranjo Clasarranjo){


    Clasarranjo.media = 1.0*(Clasarranjo.soma)/Clasarranjo.quantidade;

return Clasarranjo;
}

void method_05 ( )
{

string filename = "DADOS.TXT";

def_arranjo ClasArranjo;

method_01();


ClasArranjo.arranjo = LerArquivo(filename);

ClasArranjo = SomaEntreDuasPosicoes(ClasArranjo);

ClasArranjo = MediaEntreDuasPosicoes(ClasArranjo);


cout << "\nA soma de todos os numeros entre as posicoes dadas e: " << ClasArranjo.soma;

cout << "\nE a media destes numeros entre as posicoes dadas e: " << ClasArranjo.media;

} // end method_05 ( )

/*
Method_05 - v0.0
Defina uma quantidade de numeros aleatorio: 10

Defina um valor minimo: 2

Defina um valor maximo: 10

Sao valores do arranjo: 8 9 4 2 2 9 3 2 4 7

Defina a posicao de partida: 2
Defina a posicao de parada: 5

A soma de todos os numeros entre as posicoes dadas e: 17
E a media destes numeros entre as posicoes dadas e: 4.25
*/


/**
Method_06.  - Exercicio 6

06.) Incluir uma função (1116) para
verificar se todos os valores são negativos em um arranjo.
Para testar, ler o arquivo ("DADOS.TXT")
armazenar os dados em um arranjo.
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
teste = arranjo.negatives ( );

*/

void PrintDefArarranjo(def_arranjo ClasArranjo){

    for(int i = 0; ClasArranjo.quantidade > i; i++){
        cout << int(ClasArranjo.arranjo[i]) << " ";
    }
    cout << endl;
}

void ArranjoPersonalzado(def_arranjo ClasArranjo, string filename){

    ofstream arquivo (filename);

    int numero = 0;

    arquivo << ClasArranjo.quantidade << endl;

    for(int i = 0; ClasArranjo.quantidade > i; i++){
        cout << "Arranjo["<<i+1<<"] = ";
        cin >> numero;
        arquivo << numero << endl;
    }
}

bool VerificarTodosNegativos(def_arranjo ClasArranjo){

    bool negativos = true;

    for(int i = 0; i < ClasArranjo.quantidade; i++){
        if(ClasArranjo.arranjo[i] >= 0){
            negativos = false;
        }
    }

    return negativos;
}


void method_06 ( )
{
def_arranjo ClasArranjo;

string filename = "DADOS_Ex6.TXT";

std::cout << "Defina uma quantidade de numeros a se terem no arrajo: ";
std::cin >> ClasArranjo.quantidade;

ArranjoPersonalzado(ClasArranjo, filename);

ClasArranjo.arranjo = LerArquivo(filename);

std::cout << "\nSao valores do arranjo: ";
PrintDefArarranjo(ClasArranjo);

if(VerificarTodosNegativos(ClasArranjo)){
    cout << "\nTodos os numeros sao NEGATIVOS\n";
} else {
    cout << "\nNEM todos os numeros sao negativos\n";
}

} // end method_06 ( )

/*
Method_06 - v0.0
Defina uma quantidade de numeros a se terem no arrajo: 5
Arranjo[1] = -1
Arranjo[2] = -2
Arranjo[3] = -3
Arranjo[4] = -4
Arranjo[5] = -5

Sao valores do arranjo: -1 -2 -3 -4 -5

Todos os numeros sao NEGATIVOS
*/



/**
Method_07.  - Exercicio 7

07.) Incluir uma função (1117) para
dizer se está ordenado, ou não, em ordem crescente.
DICA: Testar se não está desordenado, ou seja,
se existe algum valor que seja maior que o seguinte.
Não usar break !
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
teste = arranjo.isDecrescent ( );

*/

bool VerificarOrdemCrescente(def_arranjo ClasArranjo){

    bool Crescente = true;
    int Proximo = ClasArranjo.arranjo[0];

    for(int i = 1; i < ClasArranjo.quantidade; i++){

        if(ClasArranjo.arranjo[i] <= Proximo){
            Crescente = false;
        }
        
    Proximo = ClasArranjo.arranjo[i];
    }

    return Crescente;
}

void method_07 ( )
{

def_arranjo ClasArranjo;

string filename = "DADOS_Ex6.TXT";

std::cout << "Defina uma quantidade de numeros a se terem no arrajo: ";
std::cin >> ClasArranjo.quantidade;

ArranjoPersonalzado(ClasArranjo, filename);

ClasArranjo.arranjo = LerArquivo(filename);

std::cout << "\nSao valores do arranjo: ";
PrintDefArarranjo(ClasArranjo);

if(VerificarOrdemCrescente(ClasArranjo)){
    cout << "\nOs numeros ESTAO em ordem Crescente\n";
} else {
    cout << "\nOs numeros NAO estao em ordem Crescente\n";
}

} // end method_07 ( )

/*
Method_07 - v0.0
Defina uma quantidade de numeros a se terem no arrajo: 5
Arranjo[1] = 1
Arranjo[2] = 2
Arranjo[3] = 3
Arranjo[4] = 4
Arranjo[5] = 5

Sao valores do arranjo: 1 2 3 4 5

Os numeros ESTAO em ordem Crescente
-----------------------------------------------
Method_07 - v0.0
Defina uma quantidade de numeros a se terem no arrajo: 5
Arranjo[1] = -1
Arranjo[2] = -2
Arranjo[3] = 3
Arranjo[4] = 5
Arranjo[5] = 3

Sao valores do arranjo: -1 -2 3 5 3

Os numeros NAO estao em ordem Crescente
*/


/**
Method_08.  - Exercicio 8

08.) Incluir uma função (1118) para
dizer se determinado valor está presente em arranjo,
entre duas posições indicadas.
Para testar, ler o arquivo ("DADOS.TXT"),
e armazenar os dados em arranjo;
ler do teclado um valor inteiro para ser procurado;
determinar se o valor procurado existe no arranjo.
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
existe = arranjo.searchInterval ( procurado, inicio, fim );

*/
bool AcharNumeroEntrePosicoes(def_arranjo ClasArranjo, int Procurado, int PosicaoInicial, int PosicaoFinal){

    int possuinumero = false;

    for(int i = PosicaoInicial-1; i < PosicaoFinal-1; i++){

        if(ClasArranjo.arranjo[i] == Procurado){
            possuinumero = true;
        }
        
    }

    return possuinumero;
}

void method_08 ( )
{
def_arranjo ClasArranjo;

string filename = "DADOS_Ex8.TXT";

std::cout << "Defina uma quantidade de numeros a se terem no arrajo: ";
std::cin >> ClasArranjo.quantidade;

ArranjoPersonalzado(ClasArranjo, filename);

ClasArranjo.arranjo = LerArquivo(filename);

std::cout << "\nSao valores do arranjo: ";
PrintDefArarranjo(ClasArranjo);

int Procurado = 0;
int PosicaoInicial = 0;
int PosicaoFinal = 0;

std::cout << "Defina um numero a se procurar: ";
std::cin >> Procurado;

cout << "Defina uma posicao de partida: ";
std::cin >> PosicaoInicial;

cout << "Defina uma posicao de parada: ";
std::cin >> PosicaoFinal;

if(PosicaoInicial > 0 && PosicaoFinal <= ClasArranjo.quantidade){


if(AcharNumeroEntrePosicoes(ClasArranjo, Procurado, PosicaoInicial, PosicaoFinal)){
    cout << "\nO arranjo POSSUI o numero " << Procurado << endl ;
} else {
    cout << "\nO arranjo NAO possui o numero " << Procurado << endl ;
}

}else {

    cout << "\nValores de posicoes invalidas, Tente novamente\n\n";
    method_08();
}

} // end method_08 ( )

/*
Method_08 - v0.0
Defina uma quantidade de numeros a se terem no arrajo: 5
Arranjo[1] = 1
Arranjo[2] = 2
Arranjo[3] = 3
Arranjo[4] = 4
Arranjo[5] = 5

Sao valores do arranjo: 1 2 3 4 5
Defina um numero a se procurar: 3
Defina uma posicao de partida: 2
Defina uma posicao de parada: 4

O arranjo POSSUI o numero 3
---------------------------------------------------
Method_08 - v0.0
Defina uma quantidade de numeros a se terem no arrajo: 6
Arranjo[1] = 1
Arranjo[2] = 45
Arranjo[3] = 6
Arranjo[4] = 8
Arranjo[5] = 9
Arranjo[6] = -35

Sao valores do arranjo: 1 45 6 8 9 -35
Defina um numero a se procurar: 7
Defina uma posicao de partida: 1
Defina uma posicao de parada: 6

O arranjo NAO possui o numero 7
*/


/**
Method_09.  - Exercicio 9

09.) Incluir uma função (1119) para
escalar dados em arranjo, entre duas posições dadas,
multiplicando cada valor por uma constante.
Para testar, ler o arquivo ("DADOS.TXT"),
e armazenar os dados em arranjo;
ler do teclado um valor inteiro para indicar a constante.
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
novo = arranjo.scalar( constante, inicio, fim );

*/

def_arranjo EscalarNumerosEntrePosicoes(def_arranjo ClasArranjo, int Escalador, int PosicaoInicial, int PosicaoFinal){


    for(int i = PosicaoInicial-1; i < PosicaoFinal-1; i++){

     ClasArranjo.arranjo[i] *= Escalador;
    }
     

    return ClasArranjo;
}

void method_09 ( )
{

def_arranjo ClasArranjo;

string filename = "DADOS_Ex8.TXT";

std::cout << "Defina uma quantidade de numeros a se terem no arrajo: ";
std::cin >> ClasArranjo.quantidade;

ArranjoPersonalzado(ClasArranjo, filename);

ClasArranjo.arranjo = LerArquivo(filename);

std::cout << "\nSao valores do arranjo: ";
PrintDefArarranjo(ClasArranjo);

int Escalador = 0;
int PosicaoInicial = 0;
int PosicaoFinal = 0;

std::cout << "Defina um numero para ser o Escalador: ";
std::cin >> Escalador;

cout << "Defina uma posicao de partida: ";
std::cin >> PosicaoInicial;

cout << "Defina uma posicao de parada: ";
std::cin >> PosicaoFinal;

if(PosicaoInicial > 0 && PosicaoFinal <= ClasArranjo.quantidade){

ClasArranjo = EscalarNumerosEntrePosicoes(ClasArranjo, Escalador, PosicaoInicial, PosicaoFinal);

std::cout << "\nO Arranjo com os valores entre as posicoes " << PosicaoInicial << " e " << PosicaoFinal << " escalonados por " << Escalador << " e: \n";
PrintDefArarranjo(ClasArranjo);

} else {

    cout << "\nValores de posicoes invalidas, Tente novamente\n\n";
    method_09();
}

// encerrar
} // end method_09 ( )

/*
Method_09 - v0.0
Defina uma quantidade de numeros a se terem no arrajo: 5
Arranjo[1] = 1
Arranjo[2] = 2
Arranjo[3] = 3
Arranjo[4] = 4
Arranjo[5] = 5

Sao valores do arranjo: 1 2 3 4 5
Defina um numero para ser o Escalador: 3
Defina uma posicao de partida: 2
Defina uma posicao de parada: 5

O Arranjo com os valores entre as posicoes 2 e 5 escalonados por 3 e:
1 6 9 12 5
*/


/**
Method_10.  - Exercicio 10

10.) Incluir um método (1120) para
colocar valores em arranjo em ordem decrescente,
mediante trocas de posições, até ficar totalmente ordenado.
Para testar, ler o arquivo ("DADOS.TXT"),
e armazenar os dados em arranjo.
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
arranjo.sortDown ( );

*/

def_arranjo OrdenarDecrescente(def_arranjo ClasArranjo){

   int valor = 0;

    for (int i = 0; i < ClasArranjo.quantidade; i++){
        for (int y = 1; y < ClasArranjo.quantidade; y++){
            if(ClasArranjo.arranjo[y-1] < ClasArranjo.arranjo[y]){
                valor = ClasArranjo.arranjo[y-1];
                ClasArranjo.arranjo[y-1] = ClasArranjo.arranjo[y];
                ClasArranjo.arranjo[y] = valor;
        }
    }
}


return ClasArranjo;
}


void method_10 ( )
{

def_arranjo ClasArranjo;

string filename = "DADOS_Ex10.TXT";

std::cout << "Defina uma quantidade de numeros a se terem no arrajo: ";
std::cin >> ClasArranjo.quantidade;

ArranjoPersonalzado(ClasArranjo, filename);

ClasArranjo.arranjo = LerArquivo(filename);

std::cout << "\nSao valores do arranjo: ";
PrintDefArarranjo(ClasArranjo);

ClasArranjo = OrdenarDecrescente(ClasArranjo);

std::cout << "\nO arranjo ordenado em ordem decrescente: ";
PrintDefArarranjo(ClasArranjo);

} 

/*
Method_10 - v0.0
Defina uma quantidade de numeros a se terem no arrajo: 5

Arranjo[1] = 1
Arranjo[2] = 2
Arranjo[3] = 3
Arranjo[4] = 4
Arranjo[5] = 5

Sao valores do arranjo: 1 2 3 4 5

O arranjo ordenado em ordem decrescente: 5 4 3 2 1
*/

/**
Method_E1.  - Exercicio Extra 1

E1.) Incluir uma função/operador (11E1) para
dizer se dois arranjos são diferentes, pelo menos em uma posição.

*/

bool VerificarIgualdadeDeArranjos(def_arranjo ClasArranjo1, def_arranjo ClasArranjo2){

    bool tudoigual = true;

    for (int i = 0; i < ClasArranjo1.quantidade && i < ClasArranjo2.quantidade; i++)
    {
        if(ClasArranjo1.arranjo[i] != ClasArranjo2.arranjo[i]){
            tudoigual = false;
        }
    }
    
    return tudoigual;
}

void method_E1 ( )
{

def_arranjo ClasArranjo1;

string filename1 = "DADOS_ExE1_1.TXT";

std::cout << "Defina uma quantidade de numeros a se terem no arrajo 1 : ";
std::cin >> ClasArranjo1.quantidade;

ArranjoPersonalzado(ClasArranjo1, filename1);

ClasArranjo1.arranjo = LerArquivo(filename1);

std::cout << "\nSao valores do arranjo 1: ";
PrintDefArarranjo(ClasArranjo1);

def_arranjo ClasArranjo2;

string filename2 = "DADOS_ExE1_2.TXT";

std::cout << "Defina uma quantidade de numeros a se terem no arrajo 2 : ";
std::cin >> ClasArranjo2.quantidade;

ArranjoPersonalzado(ClasArranjo2, filename2);

ClasArranjo2.arranjo = LerArquivo(filename2);

std::cout << "\nSao valores do arranjo 2: ";
PrintDefArarranjo(ClasArranjo2);

if(VerificarIgualdadeDeArranjos(ClasArranjo1, ClasArranjo2) && ClasArranjo1.quantidade == ClasArranjo2.quantidade){
    cout << "\nOs arranjos POSSUEM numeros iguais em suas posicoes " << endl ;
} else {
    cout << "\nOs arranjos NAO possuem numeros iguais em suas posicoes " <<  endl ;
}
} // end method_E1 ( )

/*
Method_E1 - v0.0
Defina uma quantidade de numeros a se terem no arrajo 1 : 5
Arranjo[1] = 1
Arranjo[2] = 2
Arranjo[3] = 3
Arranjo[4] = 4
Arranjo[5] = 5

Sao valores do arranjo 1: 1 2 3 4 5
Defina uma quantidade de numeros a se terem no arrajo 2 : 5
Arranjo[1] = 1
Arranjo[2] = 2
Arranjo[3] = 3
Arranjo[4] = 4
Arranjo[5] = 5

Sao valores do arranjo 2: 1 2 3 4 5

Os arranjos POSSUEM numeros iguais em suas posicoes
----------------------------------------------------------
Method_E1 - v0.0
Defina uma quantidade de numeros a se terem no arrajo 1 : 5
Arranjo[1] = 1
Arranjo[2] = 2
Arranjo[3] = 5
Arranjo[4] = 6
Arranjo[5] = 7

Sao valores do arranjo 1: 1 2 5 6 7
Defina uma quantidade de numeros a se terem no arrajo 2 : 5
Arranjo[1] = 5
Arranjo[2] = 7
Arranjo[3] = 8
Arranjo[4] = 9
Arranjo[5] = 6

Sao valores do arranjo 2: 5 7 8 9 6

Os arranjos NAO possuem numeros iguais em suas posicoes
*/


/**
Method_E2.  - Exercicio Extra 2

E2.) Incluir uma função/operador (11E2) para
calcular as diferenças entre dois arranjos, posição por posição,
caso tenham os mesmos tamanhos.

*/

int ContarDesigualdadesDeArranjos(def_arranjo ClasArranjo1, def_arranjo ClasArranjo2){

    int Contagem = 0;

    for (int i = 0; i < ClasArranjo1.quantidade && i < ClasArranjo2.quantidade; i++)
    {
        if(ClasArranjo1.arranjo[i] != ClasArranjo2.arranjo[i]){
            Contagem++;
        }
    }
    
    return Contagem;
}


void method_E2 ( )
{

int resposta = 0;

def_arranjo ClasArranjo1;

string filename1 = "DADOS_ExE1_1.TXT";

std::cout << "Defina uma quantidade de numeros a se terem no arrajo 1 : ";
std::cin >> ClasArranjo1.quantidade;

ArranjoPersonalzado(ClasArranjo1, filename1);

ClasArranjo1.arranjo = LerArquivo(filename1);

std::cout << "\nSao valores do arranjo 1: ";
PrintDefArarranjo(ClasArranjo1);

def_arranjo ClasArranjo2;

string filename2 = "DADOS_ExE1_2.TXT";

std::cout << "Defina uma quantidade de numeros a se terem no arrajo 2 : ";
std::cin >> ClasArranjo2.quantidade;

ArranjoPersonalzado(ClasArranjo2, filename2);

ClasArranjo2.arranjo = LerArquivo(filename2);

std::cout << "\nSao valores do arranjo 2: ";
PrintDefArarranjo(ClasArranjo2);

resposta = ContarDesigualdadesDeArranjos(ClasArranjo1, ClasArranjo2);
if(ClasArranjo1.quantidade == ClasArranjo2.quantidade){
    if(resposta == 0){
        cout << "\nOs arranjos POSSUEM SOMENTE numeros iguais em suas posicoes " << endl ;
    } else {
        cout << "\nOs arranjos possuem "<<resposta<< " numeros desiguais entre suas posicoes"<<  endl ;
    }
} else {
    cout << "\nOs arranjos possuem tamanhos diferentes"<<  endl ;
}

} // end method_E2 ( )

/*
Method_E2 - v0.0
Defina uma quantidade de numeros a se terem no arrajo 1 : 5
Arranjo[1] = 1
Arranjo[2] = 2
Arranjo[3] = 3
Arranjo[4] = 4
Arranjo[5] = 5

Sao valores do arranjo 1: 1 2 3 4 5
Defina uma quantidade de numeros a se terem no arrajo 2 : 5
Arranjo[1] = 1
Arranjo[2] = 2
Arranjo[3] = 3
Arranjo[4] = 4
Arranjo[5] = 5

Sao valores do arranjo 2: 1 2 3 4 5

Os arranjos POSSUEM SOMENTE numeros iguais em suas posicoes
----------------------------------------------------------------------------
Method_E2 - v0.0
Defina uma quantidade de numeros a se terem no arrajo 1 : 5
Arranjo[1] = 1
Arranjo[2] = 2
Arranjo[3] = 3
Arranjo[4] = 4
Arranjo[5] = 5

Sao valores do arranjo 1: 1 2 3 4 5
Defina uma quantidade de numeros a se terem no arrajo 2 : 5
Arranjo[1] = 5
Arranjo[2] = 4
Arranjo[3] = 3
Arranjo[4] = 2
Arranjo[5] = 1

Sao valores do arranjo 2: 5 4 3 2 1

Os arranjos possuem 4 numeros desiguais entre suas posicoes
-----------------------------------------------------------------------------
Method_E2 - v0.0
Defina uma quantidade de numeros a se terem no arrajo 1 : 5
Arranjo[1] = 1
Arranjo[2] = 2
Arranjo[3] = 3
Arranjo[4] = 4
Arranjo[5] = 5

Sao valores do arranjo 1: 1 2 3 4 5
Defina uma quantidade de numeros a se terem no arrajo 2 : 6
Arranjo[1] = 1
Arranjo[2] = 2
Arranjo[3] = 3
Arranjo[4] = 4
Arranjo[5] = 5
Arranjo[6] = 6

Sao valores do arranjo 2: 1 2 3 4 5 6

Os arranjos possuem tamanhos diferentes
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
Versao Data Modificacao
0.1 __/__ esboco
---------------------------------------------- testes
Versao Teste
0.1 01. ( OK ) identificacao de programa
*/