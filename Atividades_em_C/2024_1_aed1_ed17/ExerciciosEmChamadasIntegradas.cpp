/*
    identificação: 

Ed17 - v0.0. - 27 / 06 / 2024

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

ed feito com os conceitos de celula
usando pilhas e filas

*/

// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres

// ----------------------------------------------- classes / pacotes

#include "io.hpp"
#include "ClassPilha.hpp"

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

Funcao para acrescentar valor no topo de uma pilha (LIFO)
montada em um arranjo, por meio de apontador.
@return apontador para pilha atualizada
@param stack - apontador para pilha
@param value - valor a ser inserido

ref_intStack intStack_push ( ref_intStack stack, int value )

*/

void method_01() {

    Ref_intPilha pilha = new intPilha();
    int quantidade = 0;
    int valor = 0;

    std::cout << "Defina uma quantidade de elementos para a pilha: " ;

    std::cin >> quantidade;

    if(quantidade>0){

        std::cout << "Digite valores para adicionar ao topo da pilha: " << endl;

        for(int i = quantidade; i > 0; i--){
            std::cout << "valor["<<i<<"] = ";
            std::cin >> valor;
            pilha->push_front(valor);
        }

        std::cout << "A Pilha formada foi: " << endl;

        pilha->imprimiCelulas();

    }else{
        std::cout << "Quantidade invalida" << endl;
    }

}

/*
Method_01 - v0.0

Defina uma quantidade de elementos para a pilha: 5
Digite valores para adicionar ao topo da pilha: 
valor[5] = 1
valor[4] = 2
valor[3] = 3
valor[2] = 4
valor[1] = 5
A Pilha formada foi: 
5
4
3
2
1
----------------------------------------------------------------------------------
Method_01 - v0.0

Defina uma quantidade de elementos para a pilha: -1
Quantidade invalida
*/



/**
Method_02. - Exercicio 2

Funcao para remover valor do topo de uma pilha (LIFO)
montada em um arranjo, por meio de apontador.
@return apontador para pilha atualizada
@param stack - apontador para pilha

ref_intStack intStack_pop ( ref_intStack stack )

*/

void method_02 ( )
{

    Ref_intPilha pilha = new intPilha();
    int quantidade = 0;
    int valor = 0;

    std::cout << "Defina uma quantidade de elementos para a pilha: " ;

    std::cin >> quantidade;

    if(quantidade>0){

        std::cout << "Digite valores para adicionar ao topo da pilha: " << endl;

        for(int i = quantidade; i > 0; i--){
            std::cout << "valor["<<i<<"] = ";
            std::cin >> valor;
            pilha->push_front(valor);
        }

        std::cout << "A Pilha formada foi: " << endl;

        pilha->imprimiCelulas();


    }else{
        std::cout << "Quantidade invalida" << endl;
    }

       std::cout << "Digite uma quantidade de valores para se remover do topo: " ;

        std::cin >> quantidade;

    if(quantidade>0){

        for(int i = 0; i < quantidade && pilha->pop_back(); i ++){
        }
    
        std::cout << "A Pilha com "<<quantidade<<" elementos excluidos do topo sera: " << endl;

        pilha->imprimiCelulas();


    }else{
        std::cout << "Quantidade invalida" << endl;
    }


} // end method_02 ( )

/*
Method_02 - v0.0

Defina uma quantidade de elementos para a pilha: 5
Digite valores para adicionar ao topo da pilha: 
valor[5] = 1
valor[4] = 2
valor[3] = 3
valor[2] = 4
valor[1] = 5
A Pilha formada foi: 
5
4
3
2
1

Digite uma quantidade de valores para se remover do topo: 3
A Pilha com 3 elementos excluidos do topo sera: 
5
4
----------------------------------------------------------------------------------
Method_02 - v0.0

Defina uma quantidade de elementos para a pilha: 5
Digite valores para adicionar ao topo da pilha: 
valor[5] = 1
valor[4] = 2
valor[3] = 3
valor[2] = 4
valor[1] = 5
A Pilha formada foi: 
5
4
3
2
1

Digite uma quantidade de valores para se remover do topo: 6
Pilha vazia
----------------------------------------------------------------------------------
Method_02 - v0.0

Defina uma quantidade de elementos para a pilha: 3
Digite valores para adicionar ao topo da pilha: 
valor[3] = 1
valor[2] = 2
valor[1] = 3
A Pilha formada foi: 
3
2
1

Digite uma quantidade de valores para se remover do topo: -2
Quantidade invalida
*/


/**
Method_03. - Exercicio 3

Funcao para duplicar valor no topo de uma pilha (LIFO)
montada em um arranjo, por meio de apontador.
@return apontador para pilha atualizada
@param stack - apontador para pilha

ref_intStack intStack_dup ( ref_intStack stack )

*/

void method_03 ( )
{
// identificar

    Ref_intPilha pilha = new intPilha();
    int quantidade = 0;
    int valor = 0;

    std::cout << "Defina uma quantidade de elementos para a pilha: " ;

    std::cin >> quantidade;

    if(quantidade>0){

        std::cout << "Digite valores para adicionar ao topo da pilha: " << endl;

        for(int i = quantidade; i > 0; i--){
            std::cout << "valor["<<i<<"] = ";
            std::cin >> valor;
            pilha->push_front(valor);
        }

        std::cout << "A Pilha formada foi: " << endl;

        pilha->imprimiCelulas();


    }else{
        std::cout << "Quantidade invalida" << endl;
    }

       std::cout << "Digite uma quantidade de valores para se duplicar do topo: " ;

        std::cin >> quantidade;

    if(quantidade>0){

        pilha->duplica_back(quantidade);
    
        std::cout << "A Pilha com "<<quantidade<<" elementos duplicados do topo sera: " << endl;

        pilha->imprimiCelulas();


    }else{
        std::cout << "Quantidade invalida" << endl;
    }


} // end method_03 ( )

/*
Method_03 - v0.0

Defina uma quantidade de elementos para a pilha: 5
Digite valores para adicionar ao topo da pilha: 
valor[5] = 1
valor[4] = 2 
valor[3] = 3
valor[2] = 4
valor[1] = 5
A Pilha formada foi: 
5
4
3
2
1

Digite uma quantidade de valores para se duplicar do topo: 3
A Pilha com 3 elementos duplicados do topo sera: 
5
4
3
2
1
1
1
1
----------------------------------------------------------------------------------
Method_03 - v0.0

Defina uma quantidade de elementos para a pilha: 5
Digite valores para adicionar ao topo da pilha: 
valor[5] = 1
valor[4] = 2
valor[3] = 3
valor[2] = 4
valor[1] = 5
A Pilha formada foi: 
5
4
3
2
1

Digite uma quantidade de valores para se duplicar do topo: -2
Quantidade invalida
*/


/**
Method_04.  - Exercicio 4

Funcao para trocar a ordem dos valores no topo de uma pilha (LIFO)
montada em um arranjo, por meio de apontador, se houver pelo menos dois valores.
@return apontador para pilha atualizada
@param stack - apontador para pilha

ref_intStack intStack_swap ( ref_intStack stack )

*/

void method_04 ( )
{
// identificar
    Ref_intPilha pilha = new intPilha();
    int quantidade = 0;
    int valor = 0;

    std::cout << "Defina uma quantidade de elementos para a pilha: " ;

    std::cin >> quantidade;

    if(quantidade>0){

        std::cout << "Digite valores para adicionar ao topo da pilha: " << endl;

        for(int i = quantidade; i > 0; i--){
            std::cout << "valor["<<i<<"] = ";
            std::cin >> valor;
            pilha->push_front(valor);
        }

        std::cout << "A Pilha formada foi: " << endl;

        pilha->imprimiCelulas();

        pilha->back_swap();
    
        std::cout << "A Pilha com a ordem dos elementos trocados do topo sera: " << endl;

        pilha->imprimiCelulas();


    }else{
        std::cout << "Quantidade invalida" << endl;
    }

  

} // end method_04 ( )

/*
Method_04 - v0.0

Defina uma quantidade de elementos para a pilha: 5
Digite valores para adicionar ao topo da pilha: 
valor[5] = 1
valor[4] = 2
valor[3] = 3
valor[2] = 4
valor[1] = 5
A Pilha formada foi: 
5
4
3
2
1

A Pilha com a ordem dos elementos trocados do topo sera:
5
4
3
1
2
----------------------------------------------------------------------------------
Method_04 - v0.0

Defina uma quantidade de elementos para a pilha: 3
Digite valores para adicionar ao topo da pilha: 
valor[3] = 5
valor[2] = 6
valor[1] = 7
A Pilha formada foi: 
7
6
5

A Pilha com a ordem dos elementos trocados do topo sera:
7
5
6

*/


/**
Method_05.  - Exercicio 5

Funcao para inverter a ordem dos valores em uma pilha (LIFO)
montada em um arranjo, por meio de apontador, se houver pelo menos dois valores.
@return apontador para pilha atualizada
@param stack - apontador para pilha

ref_intStack intStack_invert ( ref_intStack stack )

*/

void method_05 ( )
{
// identificar
    Ref_intPilha pilha = new intPilha();
    int quantidade = 0;
    int valor = 0;

    std::cout << "Defina uma quantidade de elementos para a pilha: " ;

    std::cin >> quantidade;

    if(quantidade>0){

        std::cout << "Digite valores para adicionar ao topo da pilha: " << endl;

        for(int i = quantidade; i > 0; i--){
            std::cout << "valor["<<i<<"] = ";
            std::cin >> valor;
            pilha->push_front(valor);
        }

        std::cout << "A Pilha formada foi: " << endl;

        pilha->imprimiCelulas();

        pilha->pilha_invert();
    
        std::cout << "A Pilha invertida sera: " << endl;

        pilha->imprimiCelulas();


        //pilha->imprimiCelulasInvertida();  //Pode ser feito dessa forma ou usando a funçãopilha_Invert()

    }else{
        std::cout << "Quantidade invalida" << endl;
    }

    

} // end method_05 ( )

/*
Method_05 - v0.0

Defina uma quantidade de elementos para a pilha: 5
Digite valores para adicionar ao topo da pilha: 
valor[5] = 1
valor[4] = 2
valor[3] = 3
valor[2] = 4
valor[1] = 5
A Pilha formada foi: 
5
4
3
2
1

A Pilha invertida sera:
1
2
3
4
5
----------------------------------------------------------------------------------
Method_05 - v0.0

Defina uma quantidade de elementos para a pilha: 0
Quantidade invalida
*/

/*

Method_06.  - Exercicio 6


Funcao para acrescentar valor no final de uma fila (FIFO)
montada em um arranjo, por meio de apontador.
@return apontador para fila atualizada
@param queue - apontador para fila
@param value - valor a ser inserido

ref_intQueue intQueue_push ( ref_intQueue queue, int value )

*/


void method_06 ( )
{
// identificar

 Ref_intPilha pilha = new intPilha();
    int quantidade = 0;
    int valor = 0;

    std::cout << "Defina uma quantidade de elementos para a pilha: " ;

    std::cin >> quantidade;

    if(quantidade>0){

        std::cout << "Digite valores para serem adicionados ao final pilha: " << endl;

        for(int i = 0; i < quantidade; i ++){
            std::cout << "valor["<<i+1<<"] = ";
            std::cin >> valor;
            pilha->push_back(valor);
        }

        std::cout << endl;

        std::cout << "A Pilha formada foi: " << endl;

        pilha->imprimiCelulas();

    }else{
        std::cout << "Quantidade invalida" << endl;
    }


} // end method_06 ( )

/*
Method_06 - v0.0

Defina uma quantidade de elementos para a pilha: 5
Digite valores para serem adicionados ao final pilha: 
valor[1] = 1
valor[2] = 2
valor[3] = 3
valor[4] = 4
valor[5] = 5

A Pilha formada foi: 
1
2
3
4
5

*/


/**
Method_07.  - Exercicio 7

Funcao para remover valor do início de uma fila (FIFO)
montada em um arranjo, por meio de apontador.
@return apontador para fila atualizada
@param queue - apontador para fila

ref_intQueue intQueue_pop ( ref_intQueue queue )

*/

void method_07 ( )
{
// identificar

 Ref_intPilha pilha = new intPilha();
    int quantidade = 0;
    int valor = 0;

    std::cout << "Defina uma quantidade de elementos para a pilha: " ;

    std::cin >> quantidade;

    if(quantidade>0){

        std::cout << "Digite um valores para a pilha: " << endl;

        for(int i = 0; i < quantidade; i ++){
            std::cout << "valor["<<i+1<<"] = ";
            std::cin >> valor;
            pilha->push_back(valor);
        }

        std::cout << "A Pilha formada foi: " << endl;

        pilha->imprimiCelulas();


    }else{
        std::cout << "Quantidade invalida" << endl;
    }

       std::cout << "Digite uma quantidade de valores para se remover do topo: " ;

        std::cin >> quantidade;

    if(quantidade>0){

        for(int i = 0; i < quantidade && pilha->pop_front(); i ++){
        }
    
        std::cout << "A Pilha com "<<quantidade<<" elementos excluidos do inicio sera: " << endl;

        pilha->imprimiCelulas();


    }else{
        std::cout << "Quantidade invalida" << endl;
    }
    

} // end method_07 ( )

/*
Method_07 - v0.0

Defina uma quantidade de elementos para a pilha: 5
Digite um valores para a pilha: 
valor[1] = 1
valor[2] = 2
valor[3] = 3
valor[4] = 4
valor[5] = 5
A Pilha formada foi: 
1
2
3
4
5

Digite uma quantidade de valores para se remover do topo: 3
A Pilha com 3 elementos excluidos do inicio sera: 
4
5
----------------------------------------------------------------------------------
Method_07 - v0.0

Defina uma quantidade de elementos para a pilha: 5
Digite um valores para a pilha: 
valor[1] = 7
valor[2] = 8
valor[3] = 9
valor[4] = 4
valor[5] = 10
A Pilha formada foi: 
7
8
9
4
10

Digite uma quantidade de valores para se remover do topo: 1
A Pilha com 1 elementos excluidos do inicio sera: 
8
9
4
10
----------------------------------------------------------------------------------
Method_07 - v0.0

Defina uma quantidade de elementos para a pilha: 3
Digite um valores para a pilha: 
valor[1] = 1
valor[2] = 2
valor[3] = 3
A Pilha formada foi: 
1
2
3

Digite uma quantidade de valores para se remover do topo: 0
Quantidade invalida
*/


/**
Method_08.  - Exercicio 8

/**
Funcao para comparar filas de inteiros
por meio de apontadores.
@return zero , se forem iguais;
negativo, se o valor da diferenca for menor e estiver na primeira fila
positivo , se o valor da diferenca for maior e estiver na primeira fila
@param p - apontador para inicio da primeira fila
@param q - apontador para inicio da segunda fila

ref_intQueue intQueue_compare ( ref_intQueue p, ref_intQueue q )

*/

void method_08 ( )
{
// identificar

    Ref_intPilha pilha1 = new intPilha();
    Ref_intPilha pilha2 = new intPilha();
    int quantidade = 0;
    int valor = 0;

    std::cout << "Defina uma quantidade de elementos para a fila 1: " ;

    std::cin >> quantidade;

    if(quantidade>0){

        std::cout << "Digite valores para a fila 1: " << endl;

        for(int i = 0; i < quantidade; i ++){
            std::cout << "valor["<<i+1<<"] = ";
            std::cin >> valor;
            pilha1->push_back(valor);
        }

        std::cout << "A Pilha 1 formada foi: " << endl;

        pilha1->imprimiCelulas();

        std::cout << "Defina uma quantidade de elementos para a fila 2: " ;

        std::cin >> quantidade;

        if(quantidade>0){

            std::cout << "Digite valores para a fila 2: " << endl;

            for(int i = 0; i < quantidade; i ++){
                std::cout << "valor["<<i+1<<"] = ";
                std::cin >> valor;
                pilha2->push_back(valor);
            }

            std::cout << "A Pilha 2 formada foi: " << endl;

            pilha2->imprimiCelulas();

        }else{
        std::cout << "Quantidade invalida" << endl;
        }
    }else{
        std::cout << "Quantidade invalida" << endl;
    }


        if(pilha1->fila_compare(*pilha1, *pilha2) == 0){
            std::cout << "A fila 1 e  fila 2 sao IGUAIS" << endl;
        }else if(pilha1->fila_compare(*pilha1, *pilha2) > 0){
            std::cout << "Valor da diferenca MAIOR na primeira fila" << endl;
        }else if(pilha1->fila_compare(*pilha1, *pilha2) < 0){
            std::cout << "Valor da diferenca MENOR na prieira fila" << endl;
        }
    

} // end method_08 ( )

/*
Method_08 - v0.0

Defina uma quantidade de elementos para a pilha 1: 3
Digite valores para a pilha 1: 
valor[1] = 1
valor[2] = 2
valor[3] = 3
A Pilha 1 formada foi: 
1
2
3

Defina uma quantidade de elementos para a pilha 2: 3
Digite valores para a pilha 2: 
valor[1] = 1
valor[2] = 2
valor[3] = 3
A Pilha 2 formada foi: 
1
2
3

A fila 1 e  fila 2 sao IGUAIS
----------------------------------------------------------------------------------
Method_08 - v0.0

Defina uma quantidade de elementos para a pilha 1: 3
Digite valores para a pilha 1: 
valor[1] = 8
valor[2] = 2
valor[3] = 3
A Pilha 1 formada foi: 
8
2
3

Defina uma quantidade de elementos para a pilha 2: 3
Digite valores para a pilha 2: 
valor[1] = 1
valor[2] = 2
valor[3] = 3
A Pilha 2 formada foi: 
1
2
3

Valor da diferenca MAIOR na primeira fila
----------------------------------------------------------------------------------
Method_08 - v0.0

Defina uma quantidade de elementos para a pilha 1: 3
Digite valores para a pilha 1: 
valor[1] = 1
valor[2] = 2
valor[3] = 3
A Pilha 1 formada foi: 
1
2
3

Defina uma quantidade de elementos para a pilha 2: 3
Digite valores para a pilha 2: 
valor[1] = 8
valor[2] = 2
valor[3] = 3
A Pilha 2 formada foi: 
8
2
3

Valor da diferenca MENOR na prieira fila
*/


/**
Method_09.  - Exercicio 9

Funcao para juntar filas de inteiros
por meio de apontadores.
@return fila resultante da fusão
@param p - apontador para inicio da primeira fila
@param q - apontador para inicio da segunda fila

ref_intQueue intQueue_join ( ref_intQueue p, ref_intQueue q )

*/

void method_09 ( )
{
// identificar

    Ref_intPilha pilha1 = new intPilha();
    Ref_intPilha pilha2 = new intPilha();
    int quantidade = 0;
    int valor = 0;

    std::cout << "Defina uma quantidade de elementos para a fila 1: " ;

    std::cin >> quantidade;

    if(quantidade>0){

        std::cout << "Digite valores para a fila 1: " << endl;

        for(int i = 0; i < quantidade; i ++){
            std::cout << "valor["<<i+1<<"] = ";
            std::cin >> valor;
            pilha1->push_back(valor);
        }

        std::cout << "A Pilha 1 formada foi: " << endl;

        pilha1->imprimiCelulas();

        std::cout << "Defina uma quantidade de elementos para a fila 2: " ;

        std::cin >> quantidade;

        if(quantidade>0){

            std::cout << "Digite valores para a fila 2: " << endl;

            for(int i = 0; i < quantidade; i ++){
                std::cout << "valor["<<i+1<<"] = ";
                std::cin >> valor;
                pilha2->push_back(valor);
            }
            std::cout << "A Pilha 2 formada foi: " << endl;

            std::cout << endl;

            pilha1->fila_join(*pilha1, *pilha2);

            std::cout << "A fila 1 fudida com a fila 2  sera: " << endl;

            pilha1->imprimiCelulas();

        }else{
        std::cout << "Quantidade invalida" << endl;
        }
    }else{
        std::cout << "Quantidade invalida" << endl;
    }

} // end method_09 ( )

/*
Method_09 - v0.0

Defina uma quantidade de elementos para a fila 1: 5
Digite valores para a fila 1: 
valor[1] = 1
valor[2] = 2
valor[3] = 3
valor[4] = 4
valor[5] = 5
A Pilha 1 formada foi: 
1
2
3
4
5

Defina uma quantidade de elementos para a fila 2: 5
Digite valores para a fila 2: 
valor[1] = 6
valor[2] = 7
valor[3] = 8
valor[4] = 9
valor[5] = 10

A fila 1 fudida com a fila 2  sera: 
1
2
3
4
5
6
7
8
9
10
----------------------------------------------------------------------------------
Method_09 - v0.0

Defina uma quantidade de elementos para a fila 1: 3
Digite valores para a fila 1: 
valor[1] = 1
valor[2] = 2
valor[3] = 3
A Pilha 1 formada foi: 
1
2
3

Defina uma quantidade de elementos para a fila 2: -2
Quantidade invalida
*/


/**
Method_10.  - Exercicio 10

Funcao para procurar valor em uma fila (FIFO)
montada em um arranjo, por meio de apontador.
@return 1, se encontrar; 0, caso contrário
@param queue - apontador para fila
@param value - valor a ser procurado

int intQueue_search ( ref_intQueue queue, int value )

*/

void method_10 ( )
{
// identificar

 Ref_intPilha pilha = new intPilha();
    int quantidade = 0;
    int valor = 0;

    std::cout << "Defina uma quantidade de elementos para a fila: " ;

    std::cin >> quantidade;

    if(quantidade>0){

        std::cout << "Digite valores para serem adicionados ao final fila: " << endl;

        for(int i = 0; i < quantidade; i ++){
            std::cout << "valor["<<i+1<<"] = ";
            std::cin >> valor;
            pilha->push_back(valor);
        }

        std::cout << endl;

        std::cout << "A filha formada foi: " << endl;

        pilha->imprimiCelulas();

        std::cout << "Digite um valor para se procurar na fila: ";
        
        std::cin >> valor;

        if(pilha->fila_search(valor)){
            std::cout << endl << "Valor foi encontrado na fila" << endl;
        }else{
            std::cout << endl << "Valor NAO foi encontrado na fila" << endl;
        }

    }else{
        std::cout << "Quantidade invalida" << endl;
    }    

} 

/*

Method_10 - v0.0

Defina uma quantidade de elementos para a fila: 5
Digite valores para serem adicionados ao final fila: 
valor[1] = 1
valor[2] = 2
valor[3] = 3
valor[4] = 4
valor[5] = 5

A filha formada foi:
1
2
3
4
5

Digite um valor para se procurar na fila: 5

Valor foi encontrado na fila
----------------------------------------------------------------------------------
Method_10 - v0.0

Defina uma quantidade de elementos para a fila: 5
Digite valores para serem adicionados ao final fila: 
valor[1] = 1
valor[2] = 2
valor[3] = 3
valor[4] = 4
valor[5] = 5

A filha formada foi:
1
2
3
4
5

Digite um valor para se procurar na fila: 8

Valor NAO foi encontrado na fila
*/

/**
Method_E1.  - Exercicio Extra 1

Funcao para intercalar filas de inteiros
por meio de apontadores.
@return apontador para fila resultante da fusão
@param p - apontador para inicio da primeira fila
@param q - apontador para inicio da segunda fila

ref_intQueue intQueue_merge ( ref_intQueue p, ref_intQueue q )

*/

void method_E1 ( )
{
// identificar

    Ref_intPilha pilha1 = new intPilha();
    Ref_intPilha pilha2 = new intPilha();
    int quantidade = 0;
    int valor = 0;

    std::cout << "Defina uma quantidade de elementos para a fila 1: " ;

    std::cin >> quantidade;

    if(quantidade>0){

        std::cout << "Digite valores para a fila 1: " << endl;

        for(int i = 0; i < quantidade; i ++){
            std::cout << "valor["<<i+1<<"] = ";
            std::cin >> valor;
            pilha1->push_back(valor);
        }

        std::cout << "A fila 1 formada foi: " << endl;

        pilha1->imprimiCelulas();

        std::cout << "Defina uma quantidade de elementos para a fila 2: " ;

        std::cin >> quantidade;

        if(quantidade>0){

            std::cout << "Digite valores para a fila 2: " << endl;

            for(int i = 0; i < quantidade; i ++){
                std::cout << "valor["<<i+1<<"] = ";
                std::cin >> valor;
                pilha2->push_back(valor);
            }
            std::cout << "A fila 2 formada foi: " << endl;

            pilha2->imprimiCelulas();

            std::cout << endl;

            pilha1->fila_merge(*pilha1, *pilha2);

            std::cout << "A fila 1 intercalada com a fila 2  sera: " << endl;

            pilha1->imprimiCelulas();

        }else{
        std::cout << "Quantidade invalida" << endl;
        }
    }else{
        std::cout << "Quantidade invalida" << endl;
    }
   

} // end method_E1 ( )

/*

Method_E1 - v0.0

Defina uma quantidade de elementos para a fila 1: 5
Digite valores para a fila 1: 
valor[1] = 1
valor[2] = 2
valor[3] = 3
valor[4] = 4
valor[5] = 5
A Pilha 1 formada foi: 
1
2
3
4
5

Defina uma quantidade de elementos para a fila 2: 5
Digite valores para a fila 2: 
valor[1] = 6
valor[2] = 7
valor[3] = 8
valor[4] = 9
valor[5] = 10
A Pilha 2 formada foi: 
6
7
8
9
10


A fila 1 intercalada com a fila 2  sera:
1
6
2
7
3
8
4
9
5
10
----------------------------------------------------------------------------------
Method_E1 - v0.0

Defina uma quantidade de elementos para a fila 1: 3
Digite valores para a fila 1: 
valor[1] = 1
valor[2] = 3
valor[3] = 5
A Pilha 1 formada foi: 
1
3
5

Defina uma quantidade de elementos para a fila 2: -1
Quantidade invalida
----------------------------------------------------------------------------------
Method_E1 - v0.0

Defina uma quantidade de elementos para a fila 1: 3
Digite valores para a fila 1: 
valor[1] = 1
valor[2] = 3
valor[3] = 5
A fila 1 formada foi: 
1
3
5

Defina uma quantidade de elementos para a fila 2: 3
Digite valores para a fila 2: 
valor[1] = 2
valor[2] = 4
valor[3] = 6
A fila 2 formada foi: 
2
4
6

A fila 1 intercalada com a fila 2  sera:
1
2
3
4
5
6
*/


/**
Method_E2.  - Exercicio Extra 2

Funcao para intercalar filas de inteiros em ordem crescente
por meio de apontadores. Descartar valores iguais.
@return apontador para fila ordenada e filtrada
@param p - apontador para inicio da primeira fila
@param q - apontador para inicio da segunda fila

ref_intQueue intQueue_mergeUp ( ref_intQueue p, ref_intQueue q )

*/

void method_E2 ( )
{
// identificar
    Ref_intPilha pilha1 = new intPilha();
    Ref_intPilha pilha2 = new intPilha();
    int quantidade = 0;
    int valor = 0;

    std::cout << "Defina uma quantidade de elementos para a fila 1: " ;

    std::cin >> quantidade;

    if(quantidade>0){

        std::cout << "Digite valores para a fila 1: " << endl;

        for(int i = 0; i < quantidade; i ++){
            std::cout << "valor["<<i+1<<"] = ";
            std::cin >> valor;
            pilha1->push_back(valor);
        }

        std::cout << "A fila 1 formada foi: " << endl;

        pilha1->imprimiCelulas();

        std::cout << "Defina uma quantidade de elementos para a fila 2: " ;

        std::cin >> quantidade;

        if(quantidade>0){

            std::cout << "Digite valores para a fila 2: " << endl;

            for(int i = 0; i < quantidade; i ++){
                std::cout << "valor["<<i+1<<"] = ";
                std::cin >> valor;
                pilha2->push_back(valor);
            }
            std::cout << "A fila 2 formada foi: " << endl;

            pilha2->imprimiCelulas();

            std::cout << endl;

            pilha1->fila_mergeUp(*pilha1, *pilha2);

            std::cout << "A fila 1 intercalada em ordem crescente com a fila 2 sera: " << endl;

            pilha1->imprimiCelulas();

        }else{
        std::cout << "Quantidade invalida" << endl;
        }
    }else{
        std::cout << "Quantidade invalida" << endl;
    }

} // end method_E2 ( )

/*
Method_E2 - v0.0

Defina uma quantidade de elementos para a fila 1: 3
Digite valores para a fila 1: 
valor[1] = 1
valor[2] = 4
valor[3] = 7
A Pilha 1 formada foi: 
1
4
7

Defina uma quantidade de elementos para a fila 2: 3
Digite valores para a fila 2: 
valor[1] = 2
valor[2] = 5
valor[3] = 8
A Pilha 2 formada foi: 
2
5
8

A fila 1 intercalada em ordem crescente com a fila 2 sera:
1
2
4
5
7
8
----------------------------------------------------------------------------------
Method_E2 - v0.0

Defina uma quantidade de elementos para a fila 1: 3
Digite valores para a fila 1: 
valor[1] = 1
valor[2] = 2
valor[3] = 3
A fila 1 formada foi: 
1
2
3

Defina uma quantidade de elementos para a fila 2: 3
Digite valores para a fila 2: 
valor[1] = 1
valor[2] = 2
valor[3] = 5
A fila 2 formada foi: 
1
2
5


A fila 1 intercalada em ordem crescente com a fila 2 sera:
1
2
3
5
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
