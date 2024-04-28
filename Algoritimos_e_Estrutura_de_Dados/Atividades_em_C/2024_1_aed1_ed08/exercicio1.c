/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

01.) Incluir um método (0811) para
ler o tamanho de um arranjo para inteiros do teclado,
bem como todos os seus elementos, garantindo que só tenha valores positivos e pares.
Verificar se o tamanho (ou dimensão) não é nulo ou negativo.
Para testar, ler diferentes quantidades de dados.

*/


#include "io.h"


bool leitorarray(int array[]){

bool positivospares = true;

 for (int i = 0; i < 5; i++ ){

    if (array[i] <= 0 || array[i] % 2 != 0){

        positivospares = false;
        break;
    }
}
    
    return positivospares;
}


int main(){


    int array [ ] = {2, 4, 6, 8, 10};

    if (array == null || (sizeof(array) / sizeof(array[0]) <= 0)){
        printf("\n\nO arranjo e nulo ou negativo\n\n");
    }else{


    if(leitorarray(array)){
        printf("\n\nO arranjo so possui elementos positivos e pares\n\n");

    } else{

        printf("\n\nO arranjo POSSUI elemntos negativos ou impares\n\n");
    }

    }
    return 0;
}


/*
    resposta:


 int array [ ] = {2, 4, 6, 8, 10};

O arranjo so possui elementos positivos e pares


 int array [ ] = {2, 4, 7, 8, 10};

O arranjo POSSUI elemntos negativos ou impares


    int array [ ] = {};

O arranjo e nulo ou negativo

*/