/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

07.) Incluir um método e uma função (0817) para
receber como parâmetro um array
e dizer se está ordenado, ou não, em ordem decrescente.
DICA: Testar se não está desordenado, ou seja,
se existe algum valor que seja maior que o seguinte.
Não usar break !

*/


#include "io.h"


bool Ordenado(int array[], int tamanho){

bool ordenado = true;

int maior = array[0];

 for (int i = 0; i < tamanho; i++ ){

    if (array[i] > maior){
        ordenado = false;
    }

    maior = array[i];

}
    
    return ordenado;
}


int main(){


    int array [ ] = {10, 9, 11, 15, 4, 2, 1};

    int tamanhoarray = (sizeof(array) / sizeof(array[0]));

    if (array == null || tamanhoarray <= 0){
        printf("\n\nO array e nulo ou negativo\n\n");
    }else{


    if(Ordenado(array, tamanhoarray)){
        printf("\n\nO array esta ordenado em ordem decrescente\n\n");

    } else{

        printf("\n\nO array NAO esta ordenado em ordem decrescente\n\n");
    }

    }
    return 0;
}


/*
    resposta:


 int array [ ] = {10, 9, 8, 6, 4, 2, 1};

O array esta ordenado em ordem decrescente



 int array [ ] = {10, 9, 11, 15, 4, 2, 1};

O array NAO esta ordenado em ordem decrescente



*/