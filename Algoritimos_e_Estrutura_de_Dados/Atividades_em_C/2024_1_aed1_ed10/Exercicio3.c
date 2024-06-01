/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368
Lista: 2024-1_aed1_ed10
*/


/*
03.) Incluir uma função (1013) para
operar a comparação de dois arranjos.
Para testar, receber dados de arquivos e
aplicar a função sobre os arranjos com os valores lidos.
DICA: Verificar se os tamanhos são compatíveis.
Exemplo: arranjo1 = readArrayFromFile ( "DADOS1.TXT" );
arranjo2 = readArrayFromFile ( "DADOS2.TXT" );
resposta = arrayCompare ( arranjo1, arranjo2 );
*/


#include <stdio.h>
#include "io.h"

typedef
struct IntervaloAleatorio
{
    int quantidade;
    int maximo;
    int minimo;
    int *aleatorio;
} int_valores;

typedef int_valores* ref_valores;




ref_valores GerarAleatoriosNoIntervalo(int_valores valores){

srand(time(NULL));


if(valores.minimo < valores.maximo && valores.quantidade >= 0){
printf("\nSao %d numeros aleatorios entre %d e %d: \n", valores.quantidade, valores.minimo, valores.maximo);

for (int i = 0; i < valores.quantidade; i++)
{
   
    valores.aleatorio [i] = valores.minimo + rand() % (valores.maximo-valores.minimo);
    printf("%d\n", valores.aleatorio[i]);

}

}else{ 
    printf("\nValores invalidos, tente de novo");
    method_01();
}

}


ref_valores GravarEmArquivo(int_valores valores, chars filename){


FILE* arquivo = fopen ( filename , "r" );


if(valores.minimo < valores.maximo && valores.quantidade >= 0){

    fprintf(arquivo, "%d\n", valores.quantidade) ;

for (int i = 0; i < valores.quantidade; i++)
{
   
    fprintf(arquivo, "%d\n", valores.aleatorio [i]) ;

}

}else{ 
    printf("\nValores invalidos, tente de novo");
    method_01();
}

}




void method_01(){

int_valores valores;

chars filename = "Dados.TXT";

FILE *arquivo = fopen (filename, "w");

printf("\n Defina um Valor Minimo: "); scanf("%d", &valores.minimo);


printf("\n Defina um Valor Maximo: "); scanf("%d", &valores.maximo);


printf("\n Agora defina quantos numeros serao gerados: "); scanf("%d", &valores.quantidade);


valores.aleatorio = (ints) malloc (valores.quantidade * sizeof(int));


GerarAleatoriosNoIntervalo(valores);
GravarEmArquivo(valores, filename);

fclose(arquivo);

}


/*

    -Resposta em terminal:

 Defina um Valor Minimo: 10

 Defina um Valor Maximo: 100

 Agora defina quantos numeros serao gerados: 5

Sao 5 numeros aleatorios entre 10 e 100: 
23
90
47
15
67


    -Outra resposta:


 Defina um Valor Minimo: 10

 Defina um Valor Maximo: 100

 Agora defina quantos numeros serao gerados: -2

 Valores invalidos, tente de novo


  Defina um Valor Minimo: 100

  Defina um Valor Maximo: 10

 Agora defina quantos numeros serao gerados: 5

Valores invalidos, tente de novo




 Defina um Valor Minimo: 10

 Defina um Valor Maximo: 100

 Agora defina quantos numeros serao gerados: 5

Sao 5 numeros aleatorios entre 10 e 100: 
36
47
49
70
23


 -Resposta em Dados.TXT:

5
36
47
49
70
23

 

*/




int main(){

 method_01 ( );

return 0;

}
