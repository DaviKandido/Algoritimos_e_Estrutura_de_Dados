/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

03.) Incluir um método e uma função (0813) para
gerar um valor inteiro aleatoriamente dentro de um intervalo,
cujos limites de início e de fim serão recebidos como parâmetros;
Para para testar, ler os limites do intervalo do teclado;
ler a quantidade de elementos ( N ) a serem gerados;
gerar essa quantidade ( N ) de valores aleatórios
dentro do intervalo e armazená-los em arranjo;
gravá-los, um por linha, em um arquivo ("DADOS.TXT").
A primeira linha do arquivo deverá informar a quantidade
de números aleatórios ( N ) que serão gravados em seguida.
DICA: Usar a função rand( ), mas tentar limitar valores muito grandes (usar mod=%).
Z
*/


#include "io.h"


int gravar_aleatorio_intervalo(int array[], int quantidade, int minimo, int maximo){

FILE* arquivo = fopen ( "DADOS.txt", "wt" );


    for (int i = 0; i < quantidade; i++)
    {
        array[i] = minimo+rand()%(maximo-minimo+1);
        fprintf(arquivo, "%d\n", array[i]);
        
    } 

    printf("\n A quantidade de numeros aleatorios sera : %d\n", quantidade);

}



int main(){

FILE* arquivo = fopen ( "DADOS.txt", "wt" );

int minimo = 0, maximo = 0, quantidade = 0;

    printf("\nDefina um intervalo:\n");

    printf("\n Minimo: "); scanf("%d", &minimo);
    printf("\n Maximo: "); scanf("%d", &maximo);

    printf("\nDefina quantos numeros serao gerados: "); scanf("%d", &quantidade);




    int array [quantidade];

    if (array == null || quantidade <= 0){
        printf("\n\nO arranjo e nulo ou negativo\n\n");
    }else{

    printf("\n\n O tamanho do array gravado em 'ArquivoExercicio2.txt' e : %d\n", quantidade);

    gravar_aleatorio_intervalo(array, quantidade, minimo, maximo);


    }
    return 0;
}


/*

    -Resposta em terminal:

Defina um intervalo:

 Minimo: 20

 Maximo: 100

Defina quantos numeros serao gerados: 
10

 O tamanho do array gravado em 'ArquivoExercicio2.txt' e : 10

    -resposta  em "Dados.txt":

 A quantidade de numeros aleatorios sera : 10

1: 61
2: 100
3: 36
4: 33
5: 73
6: 30
7: 77
8: 56
9: 90
10: 22



 \\   outro exemplo:    \\


    -Resposta em terminal:

Defina um intervalo:

 Minimo: 0

 Maximo: 1000

Defina quantos numeros serao gerados: 20


 O tamanho do array gravado em 'ArquivoExercicio2.txt' e : 20


    -resposta  em "Dados.txt":

 A quantidade de numeros aleatorios sera : 20

1: 41
2: 449
3: 328
4: 474
5: 150
6: 709
7: 467
8: 329
9: 936
10: 440
11: 700
12: 117
13: 258
14: 811
15: 952
16: 491
17: 993
18: 931
19: 823
20: 431

*/

/*

\\Obs: Modificações foram necessarias para o funcionamento dos exercicio 4 e 5\\

codigo original(Responsavel pelas respostas):

#include "io.h"


int gravar_aleatorio_intervalo(int array[], int quantidade, int minimo, int maximo){

FILE* arquivo = fopen ( "DADOS.txt", "wt" );

    fprintf(arquivo, "\n A quantidade de numeros aleatorios sera : %d\n", quantidade);

    int naogravados = 0;
    int cont = 0;

    for (int i = 0; i < quantidade; i++)
    {
        array[i] = minimo+rand()%(maximo-minimo+1);
        cont++;
        fprintf(arquivo, "\n%d: %d", cont , array[i]);
        
    } 
}



int main(){

FILE* arquivo = fopen ( "DADOS.txt", "wt" );

int minimo = 0, maximo = 0, quantidade = 0;

    printf("\nDefina um intervalo:\n");

    printf("\n Minimo: "); scanf("%d", &minimo);
    printf("\n Maximo: "); scanf("%d", &maximo);

    printf("\nDefina quantos numeros serao gerados: "); scanf("%d", &quantidade);




    int array [quantidade];

    if (array == null || quantidade <= 0){
        printf("\n\nO arranjo e nulo ou negativo\n\n");
    }else{

    printf("\n\n O tamanho do array gravado em 'ArquivoExercicio2.txt' e : %d\n", quantidade);

    gravar_aleatorio_intervalo(array, quantidade, minimo, maximo);


    }
    return 0;
}


*/