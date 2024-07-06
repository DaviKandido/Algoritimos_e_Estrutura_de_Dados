/*
Exemplo1600 - v0.0. - 21 / 06 / 2023
Author: Davi Cândido de Almeida
*/
// ----------------------------------------------- preparacao
// dependências
#include <iostream>
// ----------------------------------------------- definicoes globais
using namespace std;

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
// identificar
cout << "\nMethod_01 - v0.0\n" << endl;
// encerrar
pause ( "Apertar ENTER para continuar" );
} // end method_01 ( )
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
cout << "EXEMPLO1600 - Programa - v0.0\n " << endl;
// mostrar opcoes
cout << "Opcoes " << endl;
cout << " 0 - parar " << endl;
cout << " 1 - testar definicoes " << endl;
// ler do teclado
cout << endl << "Entrar com uma opcao: ";
cin >> x;
// escolher acao
switch ( x )
{
case 0:
method_00 ( );
break;
case 1:
method_01 ( );
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