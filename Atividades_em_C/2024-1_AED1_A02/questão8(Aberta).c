/*
    identificação: 

Avaliação: 2
Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/

/*

Questão:

08) Questão 8: 

Um arquivo (DADOS.TXT) com valores inteiros, não ordenados,
deverá ser colocado em certa ordem em que todos os pares deverão
vir antes de todos os ímpares. Sem usar arranjos ou similares, 
apenas com arquivos, gravar o arquivo (RESULTADO.TXT) com a ordem desejada.

Restrição: O arquivo de dados só poderá ser lido uma única vez.

*/

#include "io.h"

void SeparadorImparPar(chars Dados, chars Resultado){

    FILE *arqDados = fopen(Dados,  "rt");
    FILE *arqResultado = fopen(Resultado, "wt");
    FILE *arqIMPARES = fopen("IMPARES.TXT", "wt");
    FILE *arqPARES = fopen("PARES.TXT", "wt");

    int num = 0;

    while(fscanf(arqDados, "%d", &num) == 1){

        if(num % 2 == 0 ){
            fprintf(arqPARES, "%d\n", num);
        } else{
            fprintf(arqIMPARES, "%d\n", num);
        }
    }

    fclose(arqIMPARES);
    fclose(arqPARES);

    arqIMPARES = fopen("IMPARES.TXT", "rt");
    arqPARES = fopen("PARES.TXT", "rt");

        while (fscanf(arqPARES, "%d", &num) == 1)
    {
         fprintf(arqResultado, "%d\n", num);
    }

       while (fscanf(arqIMPARES, "%d", &num) == 1)
    {
         fprintf(arqResultado, "%d\n", num);
    }
    

    printf("SUCESSO: Pares colocados antes dos impares em RESULTADO.TXT\n");

    fclose(arqDados);
    fclose(arqResultado);
    fclose(arqIMPARES);
    fclose(arqPARES);
}

int main() {

    chars Dados = "DADOS.TXT";
    chars Resultado = "RESULTADO.TXT";


    SeparadorImparPar(Dados, Resultado);

    return 0;
}

/*

        Respostas em RESULTADO.TXT:

28
16
64
40
100
74
98
4
10
27
65
97
7
3
1
13
9
961
301
67
21
13
7
3


*/