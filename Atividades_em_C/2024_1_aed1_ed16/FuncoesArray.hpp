// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres
#include <cstring>

// ----------------------------------------------- classes / pacotes

#include "io.hpp"
#include "ExercicioClassErro.hpp"

using namespace std;

// ----------------------------------------------- definicoes globais

class FuncoesArray : public Erro {
private:
    int quantidadeArrays = 0;
    int *array;
    int quantidadeValues = 0;
    int *value;

public:
    int quantidadetotal;

    // Construtor
    FuncoesArray() {
        quantidadeArrays = 0;
        quantidadeValues = 0;
        quantidadetotal = 0;
        array = nullptr;
        value = nullptr;
    }

    // Destrutor
    ~FuncoesArray() {
        delete[] array;
        delete[] value;
    }

    //Define a quantidade de inteiros no arranjo
    void set_quantidadeArray(int *&Variavel, int quantidade) {
        if (quantidade > 0) {
            set_erro(0);
            Variavel = new int[quantidade];
            quantidadeArrays = quantidade;
            }else {
            set_erro(1);
        }
    }

    //Define a quantidade de inteiros no arranjo
    void set_quantidadeValue(int *&Variavel, int quantidade) {
        if (quantidade > 0) {
            Variavel = new int[quantidade];
            quantidadeValues = quantidade;
            }else {
            set_erro(1);
        }
    }

    //Cria/Guarda a cadeia no arranjo
    void set_cadeia(int *Variavel, int quantidade) {
        cout << endl;
        for (int i = 0; i < quantidade; i++) {
            cout << "Posicao[" << i << "]: ";
            cin >> Variavel[i];
        }
    }


    //Adiciona arranjo ao final
    int* array_push_back(int *array, int *value) {
        quantidadetotal = quantidadeArrays + quantidadeValues;
        int *resultado = new int[quantidadetotal];

        for (int i = 0; i < quantidadeArrays; i++) {
            resultado[i] = array[i];
        }

        for (int i = quantidadeArrays; i < quantidadetotal; i++) {
            resultado[i] = value[i - quantidadeArrays];
        }

        return resultado;
    }

    //Adiciona arranjo ao inicio
    int* array_push_front (int *array, int *value) {
        quantidadetotal = quantidadeArrays + quantidadeValues;
        int *resultado = new int[quantidadetotal];

        for (int i = 0; i < quantidadeValues; i++) {
            resultado[i] = value[i];
        }
        for (int i = quantidadeValues; i < quantidadetotal; i++) {
            resultado[i] = array[i - quantidadeValues];
        }


        return resultado;
    }


    //Remove uma quantidade de numeros do final do arranjo
    int* array_pop_back (int *array, int quantidade) {
    

        if(quantidade>0){

            if(quantidadeArrays >= quantidade){
                quantidadetotal = quantidadeArrays - quantidade;
                int *resultado = new int[quantidadetotal];

                for (int i = 0; i < quantidadeArrays - quantidade; i++) {
                    resultado[i] = array[i];
                }

                delete array;
                array = new int[quantidadetotal];

                for (int i = 0; i < quantidadetotal; i++) {
                    array[i] = resultado[i];
                }

                return array;
            } else{
                set_erro(2);
            }
        }else{
            set_erro(3);
        }
    }


    //Remove uma quantidade de numeros do inicio do arranjo
    int* array_pop_front (int *array, int quantidade) {
    

        if(quantidade>0){

            if(quantidadeArrays >= quantidade){
                quantidadetotal = quantidadeArrays - quantidade;
                int *resultado = new int[quantidadetotal];

                for (int i = 0; i < quantidadetotal; i++) {
                    resultado[i] = array[i+quantidade];
                }

                delete array;
                array = new int[quantidadetotal];

                for (int i = 0; i < quantidadetotal; i++) {
                    array[i] = resultado[i];
                }

                return array;
            } else{
                set_erro(2);
            }
        }else{
            set_erro(3);
        }
    }

    //Adiciona um arranjo no meio de outro arranjo pela posicao indicada
    int* array_push_mid(int *array, int *value, int posicao){

        posicao -= 1;

            if(posicao>-1 && posicao <= quantidadeArrays){

                quantidadetotal = quantidadeArrays + quantidadeValues;

                int *resultado = new int[quantidadetotal];

                for (int i = 0; i < posicao; i++) {
                    resultado[i] = array[i];
                }

                for (int i = posicao; i < quantidadeValues+posicao; i++) {
                    resultado[i] = value[i-posicao];
                }

                for (int i = quantidadeValues+posicao; i < quantidadetotal; i++) {
                    resultado[i] = array[i-quantidadeValues];
                }

                delete array;
                array = new int[quantidadetotal];

                for (int i = 0; i < quantidadetotal; i++) {
                    array[i] = resultado[i];
                }

                return array;

            } else{
            set_erro(2);
        }
    }


    //Apaga um quantidade de numeros no meio de outro arranjo pela posicao indicada
    int* array_pop_mid(int *array, int apagados, int posicao){

        posicao -= 1;

        if(posicao>-1 && apagados+posicao <= quantidadeArrays){

            quantidadetotal = quantidadeArrays - apagados;

            int *resultado = new int[quantidadetotal];

            for (int i = 0; i < posicao; i++) {
                 resultado[i] = array[i];
            }

            for (int i = posicao+apagados; i < quantidadeArrays; i++) {
                resultado[i-apagados] = array[i];
            }

            delete array;
            array = new int[quantidadetotal];

            for (int i = 0; i < quantidadetotal; i++) {
                array[i] = resultado[i];
            }

            return array;

            }else{
            set_erro(2);
            }

    }

    //Print das cadeias
    void print_cadeia(int* resultado, int quantidade) {
        for (int i = 0; i < quantidade; i++) {
            cout << resultado[i] << " ";
        }
        cout << endl;
    }

    void print_cadeia(int* resultado) {
        for (int i = 0; i < quantidadetotal; i++) {
            cout << resultado[i] << " ";
        }
        cout << endl;
    }

    //Junta Cadeias
    int intArray_cmp(int *array, int *value){


        if(quantidadeArrays > 0 && quantidadeValues > 0){

            int resultado = 0;

            quantidadetotal = quantidadeArrays + quantidadeValues;

            if(quantidadeArrays>quantidadeValues){

                for (int i = 0; i < quantidadeArrays; i++){
                    if(array[i]!=value[i]){
                        resultado ++;
                    }
                }
            }else{
                for (int i = 0; i < quantidadeValues; i++) {
                    if(array[i]!=value[i]){
                        resultado --;
                    }
                }
            }
            
            return resultado;

            }else{
            set_erro(1);
            }
    }

    //Junta Cadeias
    int* intArray_cat(int *array, int *value){
       int* resultado = array_push_back(array, value);

       return resultado;
    }

    //Procurar pela primeira ocorrencia de valor em arranjo
    int *intArray_seek(int *array, int procurado){

        for(int i = 0; i < quantidadeArrays; i++){
            if(*array == procurado){
                quantidadetotal = quantidadeArrays - i;
                return array;
            }
            array++;
        }
    return nullptr;
    }

    //Separar sequencia de valores em arranjo
    int *intArray_sub(int *array, int start, int size){
        
        int *resultado = new int(size);

        if(start-1 < quantidadeArrays){

                if( quantidadeArrays-start-size+1 >= 0){
                    for(int i = start-1; i < size+start; i++){
                        resultado[i-(start-1)] = array[i];
                    }

                    quantidadetotal = size;

                }else{
                    set_erro(2);
                }

        } else{
            set_erro(3);
        }

        return resultado;
    }

    //Funcao para intercalar arranjos de inteiros
    int* intArray_merge (int *array, int *value){

        quantidadetotal = quantidadeArrays + quantidadeValues;

        int *resultado = new int[quantidadetotal];
        int p = 0;
        int q = 0;

    for(int i = 0; i < quantidadetotal; i++) {
        if (p < quantidadeArrays && (q >= quantidadeValues || i % 2 == 0)) {
            resultado[i] = array[p];
            p++;
        } else if (q < quantidadeValues) {
            resultado[i] = value[q];
            q++;
        }
    }

        return resultado;
    }

    //Funcao para intercalar arranjos de inteiros em ordem crescente
    int* intArray_mergeUp (int *array, int *value){

        quantidadetotal = quantidadeArrays + quantidadeValues;

        int *resultado = intArray_merge (array, value);
        int aux = resultado[0];

        for (int i = 0; i < quantidadetotal - 1; i++) {
            for (int j = 0; j < quantidadetotal - i - 1; j++) {
                if (resultado[j] > resultado[j + 1]) {
                    int temp = resultado[j];
                    resultado[j] = resultado[j + 1];
                    resultado[j + 1] = temp;
                }
            }
        }

        return resultado;
    }


};