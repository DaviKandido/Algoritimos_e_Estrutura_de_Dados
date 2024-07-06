/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368
Lista: 2024-1_aed1_ed10
*/


/*

01.) Incluir um método (1011) para
gerar um valor inteiro aleatoriamente dentro de um intervalo,
cujos limites de início e de fim serão recebidos como parâmetros.
Para para testar, ler os limites do intervalo do teclado;
ler a quantidade de elementos ( N ) a serem gerados;
gerar essa quantidade ( N ) de valores aleatórios
dentro do intervalo e armazená-los em arranjo;
gravá-los, um por linha, em um arquivo ("DADOS.TXT").
A primeira linha do arquivo deverá informar a quantidade
de números aleatórios ( N ) que serão gravados em seguida.
DICA: Usar a função rand( ), mas tentar limitar valores muito grandes.
Exemplo: valor = RandomIntGenerate ( inferior, superior );

*/



#include <stdio.h>
#include "io.h"

typedef struct IntervaloAleatorio {
    int quantidade;
    int maximo;
    int minimo;
    int *aleatorio;
} int_valores;

typedef int_valores* ref_valores;


ref_valores GerarAleatoriosNoIntervalo(int_valores valores) {
    srand(time(NULL));

    if (valores.minimo < valores.maximo && valores.quantidade >= 0) {
        printf("\nSao %d numeros aleatorios entre %d e %d: \n", valores.quantidade, valores.minimo, valores.maximo);

        for (int i = 0; i < valores.quantidade; i++) {
            valores.aleatorio[i] = valores.minimo + rand() % (valores.maximo - valores.minimo);
            printf("%d\n", valores.aleatorio[i]);
        }
    } else {
        printf("\nValores invalidos, tente de novo");
        method_01();
    }
}

ref_valores GravarEmArquivo(int_valores valores, char *filename) {
    FILE *arquivo = fopen(filename, "wt");
    if (arquivo == NULL) {
        printf("\nErro ao abrir o arquivo.\n");
        return NULL;
    }

    if (valores.minimo < valores.maximo && valores.quantidade >= 0) {
        fprintf(arquivo, "%d\n", valores.quantidade);

        for (int i = 0; i < valores.quantidade; i++) {
            fprintf(arquivo, "%d\n", valores.aleatorio[i]);
        }
    } else {
        printf("\nValores invalidos, tente de novo");
        method_01();
    }

    fclose(arquivo);
    return NULL;
}

void method_01() {
    int_valores valores;
    char *filename = "Dados.TXT";

    printf("\n Defina um Valor Minimo: ");
    scanf("%d", &valores.minimo);

    printf("\n Defina um Valor Maximo: ");
    scanf("%d", &valores.maximo);

    printf("\n Agora defina quantos numeros serao gerados: ");
    scanf("%d", &valores.quantidade);

    valores.aleatorio = (int*)malloc(valores.quantidade * sizeof(int));
    if (valores.aleatorio == NULL) {
        printf("\nErro ao alocar memoria.\n");
        return;
    }

    GerarAleatoriosNoIntervalo(valores);
    GravarEmArquivo(valores, filename);

    free(valores.aleatorio); // Liberando a memória alocada
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