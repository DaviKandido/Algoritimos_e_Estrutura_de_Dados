/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

02.) Incluir um método (0812) para
ler um arranjo com inteiros positivos de arquivo.
Valores negativos e também os ímpares deverão ser descartados.
O arranjo e o nome do arquivo serão dados como parâmetros.
Guardar, em arquivo primeiro o tamanho, depois os elementos, um dado por linha.
Para testar, ler diferentes nomes e quantidade de dados.

*/


#include "io.h"


int gravarpositivosepares(int array[], int tamanhoarray){

FILE* arquivo = fopen ( "ArquivoExercicio2.txt", "wt" );

    fprintf(arquivo, "\n\n O tamanho do array que seria gravado em 'ArquivoExercicio2.txt' era : %d\n", tamanhoarray);

    int naogravados = 0;
    int cont = 0;

    for (int i = 0; i < tamanhoarray; i++)
    {
        if (array[i] % 2 == 0 && array[i] > 0){

            cont++;
            fprintf(arquivo, "\n%d: %d", cont , array[i]);


        } else{naogravados += 1;}
    }
    
    fprintf(arquivo, "\n\n No entanto %d eram negativos ou impares\n", naogravados);

}


int main(){

FILE* arquivo = fopen ( "ArquivoExercicio2.txt", "wt" );

    int array [ ] = {2, 4, 6, -8, 10, 11, 12, -14, 20, 40, -36};

    int tamanhoarray = (sizeof(array) / sizeof(array[0]));

    if (array == null || tamanhoarray <= 0){
        printf("\n\nO arranjo e nulo ou negativo\n\n");
    }else{

    printf("\n\n O tamanho do array gravado em 'ArquivoExercicio2.txt' e : %d\n", tamanhoarray);
    gravarpositivosepares(array, tamanhoarray);


    }
    return 0;
}


/*
    resposta  em "ArquivoExercicio2.txt":


    int array [ ] = {2, 4, 6, -8, 10, 11, 12, -14};


 O tamanho do array que seria gravado em 'ArquivoExercicio2.txt' era : 8

1: 2
2: 4
3: 6
4: 10
5: 12

 No entanto 3 eram negativos ou impares



    int array [ ] = {2, 4, 6, -8, 10, 11, 12, -14, 20, 40, -36};

  O tamanho do array que seria gravado em 'ArquivoExercicio2.txt' era : 11

1: 2
2: 4
3: 6
4: 10
5: 12
6: 20
7: 40

 No entanto 4 eram negativos ou impares

*/