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
gravá-los, um por linha, em um arquivo ("DADOS1.TXT").
A primeira linha do arquivo deverá informar a quantidade
de números aleatórios ( N ) que serão gravados em seguida.
DICA: Usar a função rand( ), mas tentar limitar valores muito grandes.
Exemplo: valor = RandomIntGenerate ( inferior, superior );

*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "io.h"

typedef struct IntervaloAleatorio {
    int quantidade;
    int maximo;
    int minimo;
    int *aleatorio;
    int *arranjo
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
    char *filename = "Dados1.TXT";

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


 -Resposta em Dados1.TXT:

5
36
47
49
70
23

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
02.) Incluir uma função (1012) para
procurar certo valor inteiro em um arranjo.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos.
Exemplo: arranjo = readArrayFromFile ( "DADOS1.TXT" );
resposta = arraySearch ( valor, arranjo );
*/


int LerArquivo(chars filename){

FILE* arquivo = fopen(filename, "rt");

int quantidade = 0; 

fscanf(arquivo, "%d", &quantidade);

fclose(arquivo);

return quantidade;

}



bool EncontrarNumero(int valor, int arranjo){

FILE *arquivo = fopen ("Dados1.TXT", "rt");

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

    arranjo = LerArquivo ( "DADOS1.TXT" );

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

    -Dados em Dados1.TXT:

5 //Representa a quantidade de numeros gravados e não um numero contino no array
65
22
11
54
39

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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


void printarranjo(chars filename){

    FILE* arquivo = fopen(filename, "rt");

    int quantidade = 0;
    int numero = 0;
    
    fscanf(arquivo, "%d", &quantidade);

    for (int i = 0; i < quantidade; i++)
    {
    fscanf(arquivo, "%d", &numero);
    printf("%d ", numero);
    }
    
    fclose(arquivo);
}


int arranjo2(){
    int_valores valores;
    char *filename = "Dados2.TXT";

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


void method_03(){

    printf("\n\n-Defina o primeiro arranjo:- \n");
    method_01();

    printf("\n-Defina o segundo arranjo:- \n");
    arranjo2();

    int quantidade1 = LerArquivo("Dados1.TXT");
    int quantidade2 = LerArquivo("Dados2.TXT");

    printf("\nO primeiro arranjo possui %d numero, que sao: ", quantidade1);
    printarranjo("Dados1.TXT");

    printf("\nO segundo arranjo possui %d numero, que sao: ", quantidade2);
    printarranjo("Dados2.TXT");

    printf("\n\n");


    if(quantidade1 == quantidade2){
        printf("\nA quantidade de numeros e a mesma nos 2 arranjos\n\n");
    } else{
        printf("\nA quantidade de numeros e diferente entre os 2 arranjos\n\n");
    }

 }

/*
-Defina o primeiro arranjo:-

 Defina um Valor Minimo: 10

 Defina um Valor Maximo: 100

 Agora defina quantos numeros serao gerados: 5

Sao 5 numeros aleatorios entre 10 e 100:
74
43
37
58
51

-Defina o segundo arranjo:-

 Defina um Valor Minimo: 10

 Defina um Valor Maximo: 100

 Agora defina quantos numeros serao gerados: 5

Sao 5 numeros aleatorios entre 10 e 100:
87
91
17
77
81

O primeiro arranjo possui 5 numero, que sao: 74 43 37 58 51
O segundo arranjo possui 5 numero, que sao: 87 91 17 77 81


A quantidade de numeros e a mesma nos 2 arranjos

    -Outra resposta: 

    -Defina o primeiro arranjo:-

 Defina um Valor Minimo: 10

 Defina um Valor Maximo: 100

 Agora defina quantos numeros serao gerados: 5

Sao 5 numeros aleatorios entre 10 e 100:
99
45
28
79
89

-Defina o segundo arranjo:-

 Defina um Valor Minimo: 10

 Defina um Valor Maximo: 100

 Agora defina quantos numeros serao gerados: 7

Sao 7 numeros aleatorios entre 10 e 100:
29
79
89
59
41
87
68

O primeiro arranjo possui 5 numero, que sao: 99 45 28 79 89
O segundo arranjo possui 7 numero, que sao: 29 79 89 59 41 87 68


A quantidade de numeros e diferente entre os 2 arranjos


*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
04.) Incluir uma função (1014) para
operar a soma de dois arranjos, com o segundo escalado por uma constante.
Para testar, receber dados de arquivos e
aplicar a função sobre os arranjos com os valores lidos;
DICA: Verificar se os tamanhos são compatíveis.
Exemplo: arranjo1 = readArrayFromFile ( "DADOS1.TXT" );
arranjo2 = readArrayFromFile ( "DADOS2.TXT" );
soma = arrayAdd ( arranjo1, 1, arranjo2 );
*/

int SomarArranjosEscalonado(chars filename1, chars filename2, int escalonador){

FILE*arquvo1 = fopen(filename1, "rt");
FILE*arquvo2 = fopen(filename2, "rt");

int quantidade1 = 0;
int quantidade2 = 0;
int soma = 0;
int valor1 = 0;
int valor2 = 0;


fscanf(arquvo1, "%d", &quantidade1);
fscanf(arquvo2, "%d", &quantidade2);


for (size_t i = 0; i < quantidade1; i++)
{
fscanf(arquvo1, "%d", &valor1);
fscanf(arquvo2, "%d", &valor2);
soma = valor1 + (valor2*escalonador);

printf("%d ", soma);

}

fclose(arquvo1);
fclose(arquvo2);
}


void method_04(){

    printf("\n\n-Defina o primeiro arranjo:- \n");
    method_01();

    printf("\n-Defina o segundo arranjo:- \n");
    arranjo2();

    int quantidade1 = LerArquivo("Dados1.TXT");
    int quantidade2 = LerArquivo("Dados2.TXT");
    int escalonador = 0;

    printf("\nO primeiro arranjo possui %d numero, que sao: ", quantidade1);
    printarranjo("Dados1.TXT");

    printf("\nO segundo arranjo possui %d numero, que sao: ", quantidade2);
    printarranjo("Dados2.TXT");

    printf("\n");
if(quantidade1 == quantidade2){

        printf("\nDefina uma valor para o escalonador do segundo array: ");
        scanf("%d", &escalonador);

        printf("\nA soma dos arrays com o segundo escalonados por uma constante:\n");    
        SomarArranjosEscalonado("Dados1.TXT", "Dados2.TXT", escalonador);
        printf("\n");
    } else{
        printf("\nA quantidade de numeros nao sao compativeis entre os 2 arranjos\n\n");
    }
 }

/*

Resposta Terminal:


-Defina o primeiro arranjo:-

 Defina um Valor Minimo: 0

 Defina um Valor Maximo: 10

 Agora defina quantos numeros serao gerados: 5

Sao 5 numeros aleatorios entre 0 e 10:
4
7
7
7
8

-Defina o segundo arranjo:-

 Defina um Valor Minimo: 0

 Defina um Valor Maximo: 10

 Agora defina quantos numeros serao gerados: 5

Sao 5 numeros aleatorios entre 0 e 10:
7
3
7
6
0

O primeiro arranjo possui 5 numero, que sao: 4 7 7 7 8
O segundo arranjo possui 5 numero, que sao: 7 3 7 6 0

Defina uma valor para o escalonador do segundo array: 2

A soma dos arrays com o segundo escalonados por uma constante:
18 13 21 19 8



-Defina o primeiro arranjo:-

 Defina um Valor Minimo: 0

 Defina um Valor Maximo: 10

 Agora defina quantos numeros serao gerados: 0

Sao 0 numeros aleatorios entre 0 e 10:

-Defina o segundo arranjo:-

 Defina um Valor Minimo: 5

 Defina um Valor Maximo: 10

 Agora defina quantos numeros serao gerados: 6

Sao 6 numeros aleatorios entre 5 e 10:
9
9
7
8
5
6

O primeiro arranjo possui 0 numero, que sao:
O segundo arranjo possui 6 numero, que sao: 9 9 7 8 5 6

A quantidade de numeros nao sao compativeis entre os 2 arranjos

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
05.) Incluir uma função (1015) para
dizer se um arranjo está em ordem decrescente.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos.
Exemplo: arranjo1 = readArrayFromFile ( "DADOS1.TXT" );
resposta = isArrayDecrescent ( arranjo );
*/

ref_valores CriarArranjoArquivo(int_valores valores, chars filename){

FILE*arquivo = fopen(filename, "wt");

fprintf(arquivo, "%d\n", valores.quantidade);
int numero = 0;
int i = 0;

for ( i = 0; i < valores.quantidade; i++)
{
printf("valor[%d]: ", i+1);
scanf("%d", &numero);
fprintf(arquivo, "%d\n", numero);
}

fclose(arquivo);

return NULL;
}

bool VerificarOrdemCrescente(chars filename){

    FILE* arquvo = fopen(filename, "rt");

    bool crescente;

    int quantidade = 0;
    fscanf(arquvo, "%d", &quantidade);

    int numero = 0;
    fscanf(arquvo, "%d", &numero);

    int teste = 0;

    for (int i = 0; i < quantidade-1; i++)
    {
        teste = numero;
        fscanf(arquvo, "%d", &numero);

        if (teste < numero){
            crescente = true;

        }else{

            crescente = false;
            break;
        }
    }

    return crescente;
}

void method_05(){

    int_valores valores;

    bool Resposta = false;

    chars filename = "Dados3.TXT";

    printf("\n\n - Defina o arranjo: - \n");

    printf("\n Defina quantos numeros terao neste arranjo: ");
    scanf("%d", &valores.quantidade);

    CriarArranjoArquivo(valores, filename);

    Resposta = VerificarOrdemCrescente(filename);

    if(Resposta){
        printf("\n - O arranjo { ");
        printarranjo(filename);
        printf ("} ESTA em ordem crescente - \n");
    }else{
        printf("\n - O arranjo { ");
        printarranjo(filename);
        printf ("} NAO esta em ordem crescente - \n");
    }
  
 }

/*
    Resposta Terminal:

 - Defina o arranjo: -

 Defina quantos numeros terao neste arranjo: 5
valor[1]: 1
valor[2]: 2
valor[3]: 3
valor[4]: 4
valor[5]: 5

 - O arranjo { 1 2 3 4 5 } ESTA em ordem crescente -

   Outra Resposta no Terminal:

  - Defina o arranjo: -

 Defina quantos numeros terao neste arranjo: 10
valor[1]: 1
valor[2]: 2
valor[3]: 3
valor[4]: 4
valor[5]: 5
valor[6]: 5
valor[7]: 4
valor[8]: 3
valor[9]: 5
valor[10]: 6

 - O arranjo { 1 2 3 4 5 5 4 3 5 6 } NAO esta em ordem crescente -

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
06.) Incluir uma função (1016) para
obter a transposta de uma matriz.
Para testar, receber dados de arquivos e
aplicar a função sobre as matrizes com os valores lidos.
DICA: Verificar se os tamanhos são compatíveis.
Exemplo: matrix1 = readMatrixFromFile ( "DADOS1.TXT" );
matriz2 = matrixTranspose ( matriz1 );
*/

typedef struct Matrix {
    int linhas;
    int colunas;
    int **matrix;
} int_Matrix;

typedef int_Matrix* ref_Matrix;

ref_Matrix CriarMatrix(int_Matrix *matrix, chars filename) {
    FILE* arquivo = fopen(filename, "wt");
    if (arquivo == NULL) {
        printf("\nErro ao abrir o arquivo para escrita.\n");
        exit(1);
    }

    printf("\n Defina quantas linhas terao essa Matrix: ");
    scanf("%d", &matrix->linhas);
    fprintf(arquivo, "%d\n", matrix->linhas);

    printf("\n Defina quantas colunas terao essa Matrix: ");
    scanf("%d", &matrix->colunas);
    fprintf(arquivo, "%d\n", matrix->colunas);

    matrix->matrix = (int **)malloc(matrix->linhas * sizeof(int *));
    if (matrix->matrix == NULL) {
        printf("\nErro ao alocar memoria para a matriz.\n");
        exit(1);
    }

    for (int i = 0; i < matrix->linhas; i++) {
        matrix->matrix[i] = (int *)malloc(matrix->colunas * sizeof(int));
        if (matrix->matrix[i] == NULL) {
            printf("\nErro ao alocar memoria para a matriz.\n");
            exit(1);
        }
        for (int j = 0; j < matrix->colunas; j++) {
            printf("\nMatrix [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix->matrix[i][j]);
            fprintf(arquivo, "%d\n", matrix->matrix[i][j]);
        }
    }

    fclose(arquivo);
    return matrix;
}

ref_Matrix CriarMatrixTransposta(int_Matrix *matrix1, chars filename) {
    FILE* arquivo = fopen(filename, "wt");
    if (arquivo == NULL) {
        printf("\nErro ao abrir o arquivo para escrita.\n");
        exit(1);
    }

    int_Matrix matrixtransposta;
    matrixtransposta.colunas = matrix1->linhas;
    matrixtransposta.linhas = matrix1->colunas;

    matrixtransposta.matrix = (int **)malloc(matrixtransposta.linhas * sizeof(int *));
    if (matrixtransposta.matrix == NULL) {
        printf("\nErro ao alocar memoria para a matriz transposta.\n");
        exit(1);
    }

    fprintf(arquivo, "%d\n", matrixtransposta.linhas);
    fprintf(arquivo, "%d\n", matrixtransposta.colunas);

    for (int i = 0; i < matrixtransposta.linhas; i++) {
        matrixtransposta.matrix[i] = (int *)malloc(matrixtransposta.colunas * sizeof(int));
        if (matrixtransposta.matrix[i] == NULL) {
            printf("\nErro ao alocar memoria para a matriz transposta.\n");
            exit(1);
        }
        for (int j = 0; j < matrixtransposta.colunas; j++) {
            matrixtransposta.matrix[i][j] = matrix1->matrix[j][i];
            fprintf(arquivo, "%d\n", matrixtransposta.matrix[i][j]);
        }
    }

    fclose(arquivo);
    return &matrixtransposta;
}

void PrintMatrix(int_Matrix *matrix, chars filename) {
    FILE* arquivo = fopen(filename, "rt");
    if (arquivo == NULL) {
        printf("\nErro ao abrir o arquivo para leitura.\n");
        exit(1);
    }

    int linhas = 0;
    int colunas = 0;
    int numero = 0;

    fscanf(arquivo, "%d", &linhas);
    fscanf(arquivo, "%d", &colunas);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            fscanf(arquivo, "%d", &numero);
            printf("%d\t", numero);
        }
        printf("\n");
    }

    fclose(arquivo);
}

void method_06() {
    int_Matrix matrix1;
    chars filename = "Dados4.TXT";
    chars filename2 = "Dados4Transposta.TXT";

    printf("\n\n-Defina a matriz:- \n");
    CriarMatrix(&matrix1, filename);

    printf("\n-A matriz criada foi:- \n\n");
    PrintMatrix(&matrix1, filename);

    printf("\n-A matriz transposta sera:- \n\n");
    CriarMatrixTransposta(&matrix1, filename2);
    PrintMatrix(&matrix1, filename2);
}

/*

-Defina a matriz:-

 Defina quantas linhas terao essa Matrix: 2

 Defina quantas colunas terao essa Matrix: 3

Matrix [1][1]: 1

Matrix [1][2]: 2

Matrix [1][3]: 3

Matrix [2][1]: 4

Matrix [2][2]: 5

Matrix [2][3]: 6

-A matriz criada foi:-

1       2       3
4       5       6

-A matriz transposta sera:-

1       4
2       5
3       6

*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
07.) Incluir uma função (1017) para
testar se uma matriz só contém valores iguais a zero.
Para testar, receber dados de arquivos e
aplicar a função sobre as matrizes com os valores lidos.
DICA: Verificar se os tamanhos são compatíveis.
Exemplo: matriz1 = readMatrixFromFile ( "DADOS1.TXT" );
resposta = matrixZero ( matriz1 );
*/


bool VerificarZeros(chars filename){

    bool contem = true;
    
    FILE* arquivo = fopen(filename, "rt");

    int linhas = 0;
    int colunas = 0;
    int numero = 0;

    fscanf(arquivo, "%d", &linhas);
    fscanf(arquivo, "%d", &colunas);

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            fscanf(arquivo, "%d", &numero);
            if(numero != 0){
                contem = false;
                break;
            }
        }
        printf("\n");
    }

    fclose(arquivo);

return contem;
}


void method_07() {
    int_Matrix matrix1;
    chars filename = "Dados5.TXT";

    printf("\n\n-Defina a matriz:- \n");
    CriarMatrix(&matrix1, filename);

    printf("\n-A matriz criada foi:- \n");
    PrintMatrix(&matrix1, filename);

    if(VerificarZeros(filename)){
        printf("A matriz SO COMTEM zeros\n");
    } else{
        printf("A matriz NAO COMTEM APENAS zeros\n");
    }
}

/*
    -Resposta terminal:

-Defina a matriz:-

 Defina quantas linhas terao essa Matrix: 2

 Defina quantas colunas terao essa Matrix: 2

Matrix [1][1]: 0

Matrix [1][2]: 0

Matrix [2][1]: 0

Matrix [2][2]: 0

-A matriz criada foi:-
0       0
0       0


A matriz SO COMTEM zeros


-Defina a matriz:-

 Defina quantas linhas terao essa Matrix: 2

 Defina quantas colunas terao essa Matrix: 3

Matrix [1][1]: 1

Matrix [1][2]: 2

Matrix [1][3]: 3

Matrix [2][1]: 4

Matrix [2][2]: 5

Matrix [2][3]: 6

-A matriz criada foi:-
1       2       3
4       5       6


A matriz NAO COMTEM APENAS zeros

*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
08.) Incluir uma função (1018) para
testar a igualdade de duas matrizes.
Para testar, receber dados de arquivos e
aplicar a função sobre as matrizes com os valores lidos.
DICA: Verificar se os tamanhos são compatíveis.
Exemplo: matriz1 = readMatrixFromFile ( "DADOS1.TXT" );
matriz2 = readMatrixFromFile ( "DADOS2.TXT" );
resposta = matrixCompare ( matriz1, matriz2 );
*/


bool VerificarIgualdade(chars filename, chars filename2){

    bool contem = true;
    
    FILE* arquivo = fopen(filename, "rt");
    FILE* arquivo2 = fopen(filename2, "rt");


    int linhas = 0;
    int colunas = 0;
    int linhas2 = 0;
    int colunas2 = 0;
    int numero = 0;
    int numero2 =0;

    fscanf(arquivo, "%d", &linhas);
    fscanf(arquivo, "%d", &colunas);
    fscanf(arquivo2, "%d", &linhas2);
    fscanf(arquivo2, "%d", &colunas2);

if(linhas == linhas2 && colunas == colunas2){
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            fscanf(arquivo, "%d", &numero);
            fscanf(arquivo2, "%d", &numero2);
            if(numero != numero2){
                contem = false;
                break;
            }
        }
        printf("\n");
    }
} else{
    printf("Tamanhos de matrizes diferentes\n\n");
    contem = false;
}
    fclose(arquivo);

return contem;
}

void method_08() {
    int_Matrix matrix1;
    chars filename = "Dados6_Matriz1.TXT";
    chars filename2 = "Dados6_Matriz2.TXT";

    printf("\n\n-Defina a primeira matriz:- \n");
    CriarMatrix(&matrix1, filename);
    printf("\n-A matriz criada foi:- \n");
    PrintMatrix(&matrix1, filename);

    printf("\n\n-Defina a segunda matriz:- \n");
    CriarMatrix(&matrix1, filename2);
    printf("\n-A matriz criada foi:- \n");
    PrintMatrix(&matrix1, filename2);

    if(VerificarIgualdade(filename, filename2)){
        printf("Portanto as matrixs sao IGUAIS\n");
    } else{
        printf("Portanto as matrixs NAO sao iguais\n");
    }
}

/*
    -Resposta terminal:

-Defina a primeira matriz:-

 Defina quantas linhas terao essa Matrix: 2

 Defina quantas colunas terao essa Matrix: 2

Matrix [1][1]: 1

Matrix [1][2]: 2

Matrix [2][1]: 3

Matrix [2][2]: 4

-A matriz criada foi:-
1       2
3       4


-Defina a segunda matriz:-

 Defina quantas linhas terao essa Matrix: 2

 Defina quantas colunas terao essa Matrix: 2

Matrix [1][1]: 1

Matrix [1][2]: 2

Matrix [2][1]: 3

Matrix [2][2]: 4

-A matriz criada foi:-
1       2
3       4


Portanto as matrixs sao IGUAIS

--------------------------------------------------------------------------
-Defina a primeira matriz:-

 Defina quantas linhas terao essa Matrix: 2

 Defina quantas colunas terao essa Matrix: 2

Matrix [1][1]: 1

Matrix [1][2]: 2

Matrix [2][1]: 3

Matrix [2][2]: 4

-A matriz criada foi:-
1       2
3       4

-Defina a segunda matriz:-

 Defina quantas linhas terao essa Matrix: 2

 Defina quantas colunas terao essa Matrix: 2

Matrix [1][1]: 4

Matrix [1][2]: 3

Matrix [2][1]: 2

Matrix [2][2]: 1

-A matriz criada foi:-
4       3
2       1

Portanto as matrixs NAO sao iguais
*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
09.) Incluir uma função (1019) para
operar a soma de duas matrizes, com a segunda escalado por uma constante.
Para testar, receber dados de arquivos e
aplicar a função sobre as matrizes com os valores lidos.
DICA: Verificar se os tamanhos são compatíveis.
Exemplo: matriz1 = readMatrixFromFile ( "DADOS1.TXT" );
matriz2 = readMatrixFromFile ( "DADOS2.TXT" );
soma = matrixAdd ( matriz1, -1, matriz2 );
*/

int SomarMatrixEscalonado(chars filename1, chars filename2, int escalonador){

FILE*arquvo1 = fopen(filename1, "rt");
FILE*arquvo2 = fopen(filename2, "rt");

int linhas1 = 0;
int linhas2 = 0;
int colunas1 = 0;
int colunas2 = 0;
int soma = 0;
int valor1 = 0;
int valor2 = 0;


fscanf(arquvo1, "%d", &linhas1);
fscanf(arquvo2, "%d", &linhas2);
fscanf(arquvo1, "%d", &colunas1);
fscanf(arquvo2, "%d", &colunas2);


if(linhas1 == linhas2 && colunas1 == colunas2){
for (int i = 0; i < linhas1; i++)
{
for (int i = 0; i < colunas1; i++)
{
fscanf(arquvo1, "%d", &valor1);
fscanf(arquvo2, "%d", &valor2);
soma = valor1 + (valor2*escalonador);
printf("%d\t ", soma);
}
printf("\n");

}
}
else{
printf("As matrizes nao sao compativeis para a soma.");
}

fclose(arquvo1);
fclose(arquvo2);
}

void method_09() {
    int_Matrix matrix1;
    chars filename = "Dados6_Matriz1.TXT";
    chars filename2 = "Dados6_Matriz2.TXT";
    int escalonador = 0;

    printf("\n\n-Defina a primeira matriz:- \n");
    CriarMatrix(&matrix1, filename);
    printf("\n-A matriz criada foi:- \n");
    PrintMatrix(&matrix1, filename);

    printf("\n\n-Defina a segunda matriz:- \n");
    CriarMatrix(&matrix1, filename2);
    printf("\n-A matriz criada foi:- \n");
    PrintMatrix(&matrix1, filename2);


    printf("\nDefina uma valor para o escalonador do segundo array: ");
    scanf("%d", &escalonador);

    printf("\nA soma das Matrixs com o segundo escalonados por uma constante %d:\n", escalonador);    
    SomarMatrixEscalonado(filename, filename2, escalonador);
    printf("\n");
}

/*
    -Resposta terminal:

-Defina a primeira matriz:-

 Defina quantas linhas terao essa Matrix: 2

 Defina quantas colunas terao essa Matrix: 2

Matrix [1][1]: 1

Matrix [1][2]: 2

Matrix [2][1]: 3

Matrix [2][2]: 4

-A matriz criada foi:-
1       2
3       4


-Defina a segunda matriz:-

 Defina quantas linhas terao essa Matrix: 2

 Defina quantas colunas terao essa Matrix: 2

Matrix [1][1]: 4

Matrix [1][2]: 3

Matrix [2][1]: 2

Matrix [2][2]: 1

-A matriz criada foi:-
4       3
2       1

Defina uma valor para o escalonador do segundo array: 1

A soma das Matrixs com o segundo escalonados por uma constante 1 :
5        5
5        5

 - Outra resposta:

-Defina a primeira matriz:-

 Defina quantas linhas terao essa Matrix: 3

 Defina quantas colunas terao essa Matrix: 3

Matrix [1][1]: 1

Matrix [1][2]: 2

Matrix [1][3]: 3

Matrix [2][1]: 4

Matrix [2][2]: 5

Matrix [2][3]: 6

Matrix [3][1]:
7

Matrix [3][2]: 8

Matrix [3][3]: 9

-A matriz criada foi:-
1       2       3
4       5       6
7       8       9


-Defina a segunda matriz:-

 Defina quantas linhas terao essa Matrix: 3

 Defina quantas colunas terao essa Matrix: 3

Matrix [1][1]: 9

Matrix [1][2]: 8

Matrix [1][3]: 7

Matrix [2][1]: 6

Matrix [2][2]: 5

Matrix [2][3]: 4

Matrix [3][1]: 3

Matrix [3][2]: 2

Matrix [3][3]: 1

-A matriz criada foi:-
9       8       7
6       5       4
3       2       1

Defina uma valor para o escalonador do segundo array: 2

A soma das Matrixs com o segundo escalonados por uma constante 2:
19       18      17
16       15      14
13       12      11


Obs caso não seja compativel exibe:

As matrizes nao sao compativeis para a soma.
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
10.) Incluir uma função (1020) para
obter o produto de duas matrizes.
Para testar, receber dados de arquivos e
aplicar a função sobre as matrizes com os valores lidos.
DICA: Verificar se os tamanhos são compatíveis.
Exemplo: matriz1 = readMatrixFromFile ( "DADOS1.TXT" );
matriz2 = readMatrixFromFile ( "DADOS2.TXT" );
soma = matrixProduct ( matriz1, matriz2 );
*/

int ProdutoMatrix(chars filename1, chars filename2) {
    FILE *arquivo1 = fopen(filename1, "rt");
    FILE *arquivo2 = fopen(filename2, "rt");

    int linhas1 = 0;
    int linhas2 = 0;
    int colunas1 = 0;
    int colunas2 = 0;
    int valor1 = 0;
    int valor2 = 0;
    int soma = 0;

    fscanf(arquivo1, "%d", &linhas1);
    fscanf(arquivo2, "%d", &linhas2);
    fscanf(arquivo1, "%d", &colunas1);
    fscanf(arquivo2, "%d", &colunas2);

    if (colunas1 == linhas2) { // Verificando se as dimensões são compatíveis para a multiplicação
        int **matrix1 = (int **)malloc(linhas1 * sizeof(int *));
        for (int i = 0; i < linhas1; i++) {
            matrix1[i] = (int *)malloc(colunas1 * sizeof(int));
            for (int j = 0; j < colunas1; j++) {
                fscanf(arquivo1, "%d", &matrix1[i][j]);
            }
        }

        int **matrix2 = (int **)malloc(linhas2 * sizeof(int *));
        for (int i = 0; i < linhas2; i++) {
            matrix2[i] = (int *)malloc(colunas2 * sizeof(int));
            for (int j = 0; j < colunas2; j++) {
                fscanf(arquivo2, "%d", &matrix2[i][j]);
            }
        }

        // Criar matriz resultante do produto
        int **result = (int **)malloc(linhas1 * sizeof(int *));
        for (int i = 0; i < linhas1; i++) {
            result[i] = (int *)malloc(colunas2 * sizeof(int));
            for (int j = 0; j < colunas2; j++) {
                result[i][j] = 0;
            }
        }

        // Multiplicação das matrizes
        for (int i = 0; i < linhas1; i++) {
            for (int j = 0; j < colunas2; j++) {
                for (int k = 0; k < colunas1; k++) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        // printar resultado
        for (int i = 0; i < linhas1; i++) {
            for (int j = 0; j < colunas2; j++) {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
            
    } else {
        printf("As matrizes não são compatíveis para a multiplicação.");
    }

    fclose(arquivo1);
    fclose(arquivo2);
}

void method_10() {
    int_Matrix matrix1;
    chars filename = "Dados7_Matriz1.TXT";
    chars filename2 = "Dados7_Matriz2.TXT";

    printf("\n\n-Defina a primeira matriz:- \n");
    CriarMatrix(&matrix1, filename);
    printf("\n-A matriz criada foi:- \n");
    PrintMatrix(&matrix1, filename);

    printf("\n\n-Defina a segunda matriz:- \n");
    CriarMatrix(&matrix1, filename2);
    printf("\n-A matriz criada foi:- \n");
    PrintMatrix(&matrix1, filename2);


    printf("\nO produtos das Matrizes e:\n" );    
    ProdutoMatrix(filename, filename2);
    printf("\n");
}

/*
- Resposta terminal:
-Defina a primeira matriz:-

 Defina quantas linhas terao essa Matrix: 2

 Defina quantas colunas terao essa Matrix: 2

Matrix [1][1]: 1

Matrix [1][2]: 2

Matrix [2][1]: 3

Matrix [2][2]: 4

-A matriz criada foi:-
1       2
3       4


-Defina a segunda matriz:-

 Defina quantas linhas terao essa Matrix: 2

 Defina quantas colunas terao essa Matrix: 2

Matrix [1][1]: 1

Matrix [1][2]: 2

Matrix [2][1]: 3

Matrix [2][2]: 4

-A matriz criada foi:-
1       2
3       4

O produtos das Matrizes e:
7      10
15     22

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
E1.) Incluir uma função (10E1) para
colocar um arranjo em ordem decrescente, pelo método de trocas de posição.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos.
Exemplo: arranjo1 = readArrayFromFile ( "DADOS1.TXT" );
ordenado = sortArrayDown ( arranjo );
*/


ref_valores CriarArranjo(int_valores valores, chars filename){
FILE*arquivo = fopen(filename, "wt");

fprintf(arquivo, "%d\n", valores.quantidade);
int numero = 0;
int i = 0;

valores.arranjo[valores.quantidade];

for ( i = 0; i < valores.quantidade; i++)
{
printf("valor[%d]: ", i+1);
scanf("%d", &numero);
valores.arranjo[i] = numero;
fprintf(arquivo, "%d\n", numero);
}

fclose(arquivo);

return NULL;
}

void PrintArranjo(chars filename){

FILE*arquivo = fopen(filename, "rt");
int quantidade = 0;
int numero = 0;

fscanf(arquivo, "%d", &quantidade);

 for (int x = 0; x < quantidade; x++){
    fscanf(arquivo, "%d", &numero);
    printf("%d ", numero);
 }

 fclose(arquivo);

 }

 ref_valores OrdernadorArranjo(int_valores valores, chars filename){

    FILE*arquivo = fopen(filename, "wt");
    fprintf(arquivo, "%d\n", valores.quantidade);


    int valor = 0;

    for (int x = 1; x < valores.quantidade; x++){
        for (int y = 1; y < valores.quantidade; y++){
            if(valores.arranjo[y-1] < valores.arranjo[y]){
                valor = valores.arranjo[y-1];
                valores.arranjo[y-1] = valores.arranjo[y];
                valores.arranjo[y] = valor;
            }
        }
    }

    for(int x = 0; x < valores.quantidade; x++){
            fprintf(arquivo,"%d\n", valores.arranjo[x]);
    }
    fclose(arquivo);

}

void method_E1() {

    int_valores valores;

    chars filename = "Dados8_Desordenador.TXT";

    printf("\n\n - Defina o arranjo: - \n");

    printf("\n Defina quantos numeros terao neste arranjo: ");
    scanf("%d", &valores.quantidade);

    CriarArranjo(valores, filename);

    printf("\n O arranjo portanto e: ");
    PrintArranjo(filename);

    filename = "Dados8_ordenado.TXT";

    OrdernadorArranjo(valores, filename);


    printf("\n\n O arranjo orndenado sera: ");
    PrintArranjo(filename);

}

/*
 - Defina o arranjo: -

 Defina quantos numeros terao neste arranjo: 8
valor[1]: 8
valor[2]: 6
valor[3]: 2
valor[4]: 4
valor[5]: 7
valor[6]: 6
valor[7]: 9
valor[8]: 2

 O arranjo portanto e: 8 6 2 4 7 6 9 2

 O arranjo orndenado sera: 9 8 7 6 6 4 2 2
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    E2.) Incluir uma função (10E2) para
    testar se o produto de duas matrizes é igual à matriz identidade.
    Para testar, receber dados de arquivos e
    aplicar a função sobre as matrizes com os valores lidos;
    DICA: Verificar se os tamanhos são compatíveis.
    Exemplo: matriz1 = readMatrixFromFile ( "DADOS1.TXT" );
    matriz2 = readMatrixFromFile ( "DADOS2.TXT" );
    resposta = identityMatrix ( matrixProduct (matriz1, matriz2) );
*/

bool TestarProdutoIdentidade(int **produto, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if ((i == j && produto[i][j] != 1) || (i != j && produto[i][j] != 0)) {
                return false;
            }
        }
    }
    return true;
}

void ProdutoMatrixIgualdentidade(chars filename1, chars filename2) {
    FILE *arquivo1 = fopen(filename1, "rt");
    FILE *arquivo2 = fopen(filename2, "rt");

    int linhas1 = 0;
    int linhas2 = 0;
    int colunas1 = 0;
    int colunas2 = 0;

    fscanf(arquivo1, "%d", &linhas1);
    fscanf(arquivo2, "%d", &linhas2);
    fscanf(arquivo1, "%d", &colunas1);
    fscanf(arquivo2, "%d", &colunas2);

    if (colunas1 == linhas2) { 
        int **matrix1 = (int **)malloc(linhas1 * sizeof(int *));
        for (int i = 0; i < linhas1; i++) {
            matrix1[i] = (int *)malloc(colunas1 * sizeof(int));
            for (int j = 0; j < colunas1; j++) {
                fscanf(arquivo1, "%d", &matrix1[i][j]);
            }
        }

        int **matrix2 = (int **)malloc(linhas2 * sizeof(int *));
        for (int i = 0; i < linhas2; i++) {
            matrix2[i] = (int *)malloc(colunas2 * sizeof(int));
            for (int j = 0; j < colunas2; j++) {
                fscanf(arquivo2, "%d", &matrix2[i][j]);
            }
        }

        int **produto = (int **)malloc(linhas1 * sizeof(int *));
        for (int i = 0; i < linhas1; i++) {
            produto[i] = (int *)malloc(colunas2 * sizeof(int));
            for (int j = 0; j < colunas2; j++) {
                produto[i][j] = 0;
            }
        }

        for (int i = 0; i < linhas1; i++) {
            for (int j = 0; j < colunas2; j++) {
                for (int k = 0; k < colunas1; k++) {
                    produto[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        bool identidade = TestarProdutoIdentidade(produto, linhas1, colunas2);
        if (identidade) {
            printf("O produto das matrizes e igual a matriz identidade.\n");
        } else {
            printf("O produto das matrizes nao e igual a matriz identidade.\n");
        }

        // Liberar memória
        for (int i = 0; i < linhas1; i++) {
            free(matrix1[i]);
        }
        free(matrix1);

        for (int i = 0; i < linhas2; i++) {
            free(matrix2[i]);
        }
        free(matrix2);

        for (int i = 0; i < linhas1; i++) {
            free(produto[i]);
        }
        free(produto);
    } else {
        printf("As matrizes não são compatíveis para a multiplicação.\n");
    }

    fclose(arquivo1);
    fclose(arquivo2);
}


void method_E2() {
    int_Matrix matrix1;
    chars filename = "Dados7_Matriz1.TXT";
    chars filename2 = "Dados7_Matriz2.TXT";

    printf("\n\n-Defina a primeira matriz:- \n");
    CriarMatrix(&matrix1, filename);

    printf("\n\n-Defina a segunda matriz:- \n");
    CriarMatrix(&matrix1, filename2);

    printf("\nO produtos das Matrizes e:\n" );    
    ProdutoMatrix(filename, filename2);
    ProdutoMatrixIgualdentidade(filename, filename2);
    printf("\n");
}
/*

- Resposta terminal:

-Defina a primeira matriz:-

 Defina quantas linhas terao essa Matrix: 2

 Defina quantas colunas terao essa Matrix: 2

Matrix [1][1]: 1

Matrix [1][2]: 0

Matrix [2][1]: 0

Matrix [2][2]: 1


-Defina a segunda matriz:-

 Defina quantas linhas terao essa Matrix: 2

 Defina quantas colunas terao essa Matrix: 2

Matrix [1][1]: 1

Matrix [1][2]: 0

Matrix [2][1]: 0

Matrix [2][2]: 1

O produtos das Matrizes e:
1       0
0       1
O produto das matrizes e igual a matriz identidade.

- Outra Resposta terminal:

-Defina a primeira matriz:-

 Defina quantas linhas terao essa Matrix: 2

 Defina quantas colunas terao essa Matrix: 2

Matrix [1][1]: 1

Matrix [1][2]: 2

Matrix [2][1]: 3

Matrix [2][2]: 4


-Defina a segunda matriz:-

 Defina quantas linhas terao essa Matrix: 2

 Defina quantas colunas terao essa Matrix: 2

Matrix [1][1]: 1

Matrix [1][2]: 2

Matrix [2][1]: 3

Matrix [2][2]: 4

O produtos das Matrizes e:
7       10
15      22
O produto das matrizes nao e igual a matriz identidade.
*/

int main ( void )
{
 // definir dados/resultados
    int opcao = 0;

 // repetir ate' desejar parar
    do
    {
     // identificar
        printf ( "\n" );             // para saltar linha
        printf ( "%s\n", "Lista_ed10 - v.0.0 - 09/05/2024"       );
        printf ( "%s\n", "Matricula: 857859 Nome: Davi Candido de Almeida" );

     // mostrar opcoes
        printf ( "%s\n", "Opcoes:"         );
        printf ( "%s\n", " 0 - parar"      );
        printf ( "%s\n", " 1 - method_01   2 - method_02" );
        printf ( "%s\n", " 3 - method_03   4 - method_04" );
        printf ( "%s\n", " 5 - method_05   6 - method_06" );
        printf ( "%s\n", " 7 - method_07   8 - method_08" );
        printf ( "%s\n", " 9 - method_09  10 - method_10" );
        printf ( "%s\n", " 11 - method_E1  12 - method_E2" );

        printf ( "%s\n", "" );        // para saltar linha

     // ler opcao
        printf ( "%s", "Qual a sua opcao? " );
        scanf  ( "%d", &opcao ); getchar ( );
        printf ( "%d",  opcao );

     // escolher acao
        switch ( opcao )
        {
           case  0:               break;
           case  1: method_01 ( ); break;
           case  2: method_02 ( ); break;
           case  3: method_03 ( ); break;
           case  4: method_04 ( ); break;
           case  5: method_05 ( ); break;
           case  6: method_06 ( ); break;
           case  7: method_07 ( ); break;
           case  8: method_08 ( ); break;
           case  9: method_09 ( ); break;
           case 10: method_10 ( ); break;
           case 11: method_E1 ( ); break;
           case 12: method_E2 ( ); break;
           
           default:
                    printf ( "\n%s\n\n", "ERRO: Opcao invalida." );
                    break;
        } // fim escolher
    }
    while ( opcao != 0 );

 // encerrar execucao
    printf ( "\n%s\n\n", "Apertar ENTER para terminar." );
    getchar( );

} // end main ( )