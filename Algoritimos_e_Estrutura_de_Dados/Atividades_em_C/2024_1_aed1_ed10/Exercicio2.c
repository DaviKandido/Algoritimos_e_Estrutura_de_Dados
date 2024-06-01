/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368
Lista: 2024-1_aed1_ed10
*/
/*
02.) Incluir uma função (1012) para
procurar certo valor inteiro em um arranjo.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos.
Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
resposta = arraySearch ( valor, arranjo );
*/

#include <stdio.h>
#include "io.h"

int LerArquivo(chars filename){

FILE* arquivo = fopen(filename, "rt");

int quantidade = 0; 

fscanf(arquivo, "%d", &quantidade);

fclose(arquivo);

return quantidade;

}



bool EncontrarNumero(int valor, int arranjo){

FILE *arquivo = fopen ("Dados.TXT", "rt");

    int numero = 0;
    bool encontrei = false;

    fscanf(arquivo, "%d", &arranjo);


 for (int i = 0; i < arranjo; i++){
    fscanf(arquivo, "%d", &numero);

    if(numero == valor){
        encontrei = true;
        break;
    }
 }

fclose(arquivo);

 return encontrei;
}



void method_02(){

int valor = 0;
int arranjo = 0;
bool resposta = false;

   printf("\nDigite um numero a ser procurado: "); scanf("%d", &valor); getchar();

    arranjo = LerArquivo ( "DADOS.TXT" );

    resposta = EncontrarNumero(valor,  arranjo);


    if(resposta){
        printf("\nO numero %d foi encontrada\n\n", valor);
    } else{
        printf("\nO numero %d nao foi encontrada\n\n", valor);
    }

 }


/*
    -Resposta no terminal:

Qual a sua opcao? 2
2
Digite um numero a ser procurado: 39

O numero 39 foi encontrada


Qual a sua opcao? 2
2
Digite um numero a ser procurado: 5

O numero 5 nao foi encontrada

    -Dados em Dados.TXT:

5 //Representa a quantidade de numeros gravados e não um numero contino no array
65
22
11
54
39

*/


int main(){

 method_02 ( );

return 0;

}