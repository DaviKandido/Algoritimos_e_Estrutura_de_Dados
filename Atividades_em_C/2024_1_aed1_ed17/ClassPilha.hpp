/*
    identificação: 

Ed17 - v0.0. - 28 / 06 / 2024

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

O Seguinte exercicio foi feito com pilha e fila 
*/

// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres

// ----------------------------------------------- classes / pacotes

#include "io.hpp"

using namespace std;


class Celula {

    public:
    int dado;
    Celula *prox;
    Celula *ant;

    public:

    Celula(int x){
        dado = x;
        prox = nullptr;
        ant = nullptr;
    }

};


class intPilha { 

    private:
    Celula *primeiro;
    Celula *ultimo;

    public:

    void intpilha(){
        primeiro = nullptr;
        ultimo = primeiro;
    }


    //Adiciona uma nova celula ao final
    int push_back(int x){
        Celula *nova = new Celula(x);
        if (primeiro == nullptr){
            primeiro = nova;
            ultimo = nova;
        }else{
            nova->ant = ultimo;
            ultimo->prox = nova;
            ultimo = nova;
        }
    }

    //Adiciona uma nova celula ao inicio/topo
    int push_front(int x){
        Celula *nova = new Celula(x);
        if (primeiro == nullptr){
            primeiro = nova;
            ultimo = nova;
        }else{
            nova->prox = primeiro;
            primeiro->ant = nova;
            nova->ant = nullptr;
            primeiro = nova;
        }
    }


    //Exclui uma celula do final
    int pop_back() {
        if (primeiro == nullptr) {
            std::cout << "Pilha vazia" << std::endl;
            return 0;
        }
        
        int elemento = ultimo->dado;

        if (primeiro->prox == nullptr) {
            delete primeiro;
            primeiro = nullptr;
            ultimo = nullptr; 
        } else {
            Celula* tmp = primeiro;
            while (tmp->prox->prox != nullptr) {
                tmp = tmp->prox;
            }
            delete tmp->prox; 
            tmp->prox = nullptr;
            ultimo = tmp;
        }

        return elemento;
}

    //Exclui uma celula do inicio/topo
    int pop_front(){
        if (primeiro == nullptr){
            std::cout << "Pilha vazia" << std::endl;
            return 0;
        }
        int elemento = primeiro->dado;
        Celula *aux = primeiro;
        primeiro = primeiro->prox;
        delete aux;
        return elemento;
    }


    // Duplica o valor no topo da pilha 'quantidade' vezes
    int duplica_back(int quantidade){
        if (primeiro == nullptr) {
            std::cout << "Pilha vazia" << std::endl;
            return 0;
        }

        for (int i = 0; i < quantidade; i++) {
            Celula* novo = new Celula(ultimo->dado);

            novo->ant = ultimo;
            ultimo->prox = novo;
            ultimo = novo;
        }

        return ultimo->dado;
    }

    //Troca a ordem dos elementos do topo
    int back_swap( ){
        if (primeiro == nullptr) {
            std::cout << "Pilha vazia" << std::endl;
            return 0;
        }

        Celula *tmp = new Celula(ultimo->dado);
        
        tmp->dado = ultimo->ant->dado;
        ultimo->ant->dado = ultimo->dado;
        ultimo->dado = tmp->dado;


        return ultimo->dado;
    }

    //Inverte a ordem da pilha
    int pilha_invert(){

        if (primeiro == nullptr) {
            std::cout << "Pilha vazia" << std::endl;
            return 0;
        }

        Celula* atual = primeiro;
        Celula* proximo;
        Celula* anterior = nullptr;

        while (atual != nullptr) {
            proximo = atual->prox;
            atual->prox = anterior;
            anterior = atual;
            atual = proximo;
        }

        ultimo = primeiro;
        primeiro = anterior;
    }

    //zero , se forem iguais; negativo, valor da diferenca for menor e estiver na primeira fila 
    //positivo , se diferenca for maior e estiver na primeira fila
    int fila_compare(intPilha fila1, intPilha fila2){

        Celula *celula1 = fila1.primeiro;
        Celula *celula2 = fila2.primeiro;

        int diferenca = 0;

        while (celula1 !=nullptr && celula2 != nullptr){

            
            diferenca = celula1->dado - celula2->dado;

            if (diferenca != 0) {
                if (diferenca < 0) {
                    return -1;
                }
                else if (diferenca > 0) {
                    return 1;
                }
            }

            celula1 = celula1->prox;
            celula2 = celula2->prox;
        }

        return 0;   
    }

    //Funcao para juntar filas de inteiros
    void fila_join(intPilha fila1, intPilha fila2){

        Celula *celula1 = fila1.ultimo;
        Celula *celula2 = fila2.primeiro;

        celula1->prox = celula2;

    }

    //Imprimi celulas de tras para frente
    void imprimiCelulas(){
        Celula *atual = primeiro;

        while(atual != nullptr){
            std::cout << atual->dado << std::endl;
            atual = atual->prox;
        }
        std::cout << endl ;
    }

    //Imprimi celulas da traz para Frente (Invertida)
    void imprimiCelulasInvertida(){
        Celula *atual = ultimo;

        while(ultimo->ant != nullptr){
            std::cout << atual->dado << std::endl;
            atual = atual->ant;
        }
        std::cout << endl ;
    }

    //Verifica existencia de valor
    int fila_search(int valor){

        Celula *tmp = primeiro;

        while(tmp != nullptr){
            if(tmp->dado == valor){
                return 1;
            }
            tmp = tmp->prox;
        }

        return 0;
    }

    //Intercala 2 filas
    void fila_merge(intPilha& fila1, intPilha& fila2){


        Celula *celula1 = fila1.primeiro;
        Celula *celula2 = fila2.primeiro;

        Celula *front = nullptr;
        Celula *back = nullptr;


        while (celula1 != nullptr || celula2 != nullptr){
            
            if (celula1 != nullptr){
                if(front == nullptr){
                    front = celula1;
                    back = celula1;
                }else{
                    back->prox = celula1;
                    back = back->prox;
                }
                celula1 = celula1->prox;
            }

            if(celula2 != nullptr){
              if(front == nullptr){
                front = celula2;
                back = celula2;
              }else{
                back->prox = celula2;
                back = back->prox;

             }
             celula2 = celula2->prox;
            }
        }

        primeiro = front;
        ultimo = back;
    }

    //Intercala 2 filas em ordem crescente
    void fila_mergeUp(intPilha& fila1, intPilha& fila2){

    fila_merge(fila1, fila2);

    int valores[50];
    int i = 0;

    Celula* celula = fila1.primeiro;

    while (celula != nullptr) {
        valores[i] = celula->dado;
        celula = celula->prox;
        i++;
    }

    for (int j = 0; j < i - 1; j++) {
        for (int x = 0; x < i - j - 1; x++) {
            if (valores[x] > valores[x + 1]) {
                int aux = valores[x];
                valores[x] = valores[x + 1];
                valores[x + 1] = aux;
            }
        }
    }

    fila1.primeiro = nullptr;
    fila1.ultimo = nullptr;
    bool repete = false;

    for (int x = 0; x < i; x++) {
        for (int j = x+1; j < i; j++) {
            if(valores[x] == valores[j]){
                repete = true;
            }
        }
        if(!repete){
            fila1.push_back(valores[x]);
        }
        repete = false;
    }
}
};


using Ref_intPilha = intPilha*;
