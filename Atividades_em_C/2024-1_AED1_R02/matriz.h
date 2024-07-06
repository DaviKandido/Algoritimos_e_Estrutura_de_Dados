# include "io.h"

typedef struct 
{

int **array;
int linhas;
int colunas;


}int_matriz;

typedef int_matriz* ref_matriz;


//Le Matriz do arquivo, caso não existente aloca memoria de acordo com as linhas e colunas gravadas
 void LerMatrizDoArquivo(char* filename, ref_matriz Matriz){

    FILE *arquivo = fopen(filename, "rt");

    if (arquivo == NULL) {
        perror("[Erro] ao abrir o arquivo ou arquivo inexistente");
        return;
    }


    if( Matriz->linhas > 0 && Matriz->colunas > 0){

        fscanf(arquivo, "%d", &Matriz->linhas);
        fscanf(arquivo, "%d", &Matriz->colunas);


    Matriz->array = (int**)malloc(Matriz->linhas * sizeof(int*));
    for (int i = 0; i < Matriz->linhas; i++) {
        Matriz->array[i] = (int*)malloc(Matriz->colunas * sizeof(int));
        for (int j = 0; j < Matriz->colunas; j++) {
            fscanf(arquivo, "%d", &Matriz->array[i][j]);
        }
    }

    } else {

    fscanf(arquivo, "%d", &Matriz->linhas);
    Matriz->colunas = Matriz->linhas;

    Matriz->array = (int**)malloc(Matriz->linhas * sizeof(int*));
    for (int i = 0; i < Matriz->linhas; i++) {
        Matriz->array[i] = (int*)malloc(Matriz->colunas * sizeof(int));
        for (int j = 0; j < Matriz->colunas; j++) {
            fscanf(arquivo, "%d", &Matriz->array[i][j]);
        }
    }
}
    fclose(arquivo);

 }


/*
1 2 0 0
3 4 5 0
0 6 7 8
0 0 9 10
*/
//Monta Matriz Diagonal Crescente
 void MontarMatrizDiagonalCrescente(ref_matriz Matriz){

   int N = Matriz->linhas;
    int valor = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j == i || j == i - 1 || j == i + 1) {
                Matriz->array[i][j] = valor;
                valor++;
            } else {
                Matriz->array[i][j] = 0;
            }
        }
    }
}

/*
0 0 9 10
0 6 7 8
3 4 5 0
1 2 0 0
*/
//Monta Matriz Diagonal Decrescente
 void MontarMatrizDiagonalDecrescente(ref_matriz Matriz){

    int N = Matriz->linhas;
 
    int valor = 1;

    for (int i = N-1; i >= 0; i--) {
        for (int j = 0; j < N; j++) {
            if (j + i == N-1 || j + i == N || j + i == N-2 ) {
                Matriz->array[i][j] = valor;
                valor++;
            } else {
                Matriz->array[i][j] = 0;
            }
        }
    }
}



//Printa Matriz
 void PrintMatriz(ref_matriz Matriz){

        for(int i = 0; i < Matriz->linhas; i++){
            for(int j = 0; j < Matriz->colunas; j++){
                printf("%d\t", Matriz->array[i][j]);
            }
            printf("\n");
        }    

 }


//Grava Matriz em Arquivo
bool GravarMatrizEmArquivo(char* filename, ref_matriz Matriz) {
    FILE *arquivo = fopen(filename, "wt");

    if (arquivo == NULL) {
        return false;
    }

    fprintf(arquivo, "%d\n", Matriz->linhas);  
    fprintf(arquivo, "%d\n", Matriz->colunas); 

    for (int i = 0; i < Matriz->linhas; i++) {
        for (int j = 0; j < Matriz->colunas; j++) {
            fprintf(arquivo, "%d\n", Matriz->array[i][j]); 
        }
    }
    
    fclose(arquivo);
    return true;
}


/*
Se apresenta a característica abaixo (potências por linha).
Exemplo:
1 1 1 1
1 2 4 8
1 3 9 27
1 4 16 64 */
bool VerificarPotenciaPorLinha(ref_matriz Matriz){

    bool apresenta = true;

    int cont = 1;
    int cont2 = 0;

     for(int i = 0; i < Matriz->linhas; i++){
        cont2 = 0;
        for(int j = 0; j < Matriz->colunas; j++){
           int potencia = 1; 
           for (int k = 0; k < cont2; k++) {
               potencia *= cont; 
           }
           if(Matriz->array[i][j] != potencia){
            apresenta = false;
           }
           cont2++;
        }
        cont++;
    }    


    return apresenta;
}

/*
Se apresenta a característica abaixo (potências por coluna).
Exemplo:
1 1 1 1
1 2 3 4
1 4 9 16
1 8 27 64*/ 
bool VerificarPotenciaPorColuna(ref_matriz Matriz){

    bool apresenta = true;

    int cont = 1;
    int cont2 = 0;

     for(int i = 0; i < Matriz->linhas; i++){
        cont2 = 0;
        for(int j = 0; j < Matriz->colunas; j++){
           int potencia = 1; 
           for (int k = 0; k < cont2; k++) {
               potencia *= cont; 
           }
           if(Matriz->array[j][i] != potencia){
            apresenta = false;
           }
           cont2++;
        }
        cont++;
    }    


    return apresenta;
}

typedef struct 
{

int n;
char nome[20];
int codigo;
double feijao;
double arroz;
double macarrao;

}supermercado;

typedef supermercado* ref_supermercado;


int lerQuantidadeDeSupermercados(char* filename){

    FILE *arquivo = fopen(filename, "rt");
    int quantidade = 0;


    if (arquivo == NULL) {
        perror("[Erro] ao abrir o arquivo ou arquivo inexistente");
        return;
    }

    fscanf(arquivo, "%d", &quantidade);

    fclose(arquivo);


return quantidade;
}


void LeituraDeArquivoSupermecado(char* filename, ref_supermercado mercado, int quantidade){

    FILE *arquivo = fopen(filename, "rt");

    for(int i = 0; i < quantidade; i++){
        fscanf(arquivo, "%d", &mercado[i].n);

        fscanf(arquivo, "%s", &mercado[i].nome);
        fscanf(arquivo, "%d", &mercado[i].codigo);
        fscanf(arquivo, "%lf", &mercado[i].feijao);
        fscanf(arquivo, "%lf", &mercado[i].arroz);
        fscanf(arquivo, "%lf", &mercado[i].macarrao);

    }

}

/*

   NOME	      CODIGO	     FEIJAO	    ARROZ      MACARRAO 
Santa Maria	    1122	     15.50	   18.90	    10.30      
Santo Antonio	2244	     16.80	   15.50	    8.80       
SuperSo	        4488	     20.50	   20.80	    13.40      
Mercadao	    8822	     12.60     10.80	    6.50        
Iper Mercado	2211	     18.80	   20.90	    15.50   
Média	                     16.84	   17.38	    10.90   

*/

void PrintTabelaSupermercado(ref_supermercado mercado){
    printf("NOME\t\t\tCODIGO\t\t  FEIJAO\t\t  ARROZ\t\t\tMACARRAO\n");
    for(int i = 0; i < mercado[0].n; i++){
        printf("%s\t\t%d\t\t%lf\t\t%lf\t\t%lf", mercado[i].nome, mercado[i].codigo, mercado[i].feijao, mercado[i].arroz, mercado[i].macarrao);        
        printf("\n");
    }

}

double CalculaMediaPrecos(ref_supermercado mercado, int op){

    double media = 0;

    if(op == 1){
        for(int i = 0; i < mercado[0].n; i++){
            media += mercado[i].feijao;
        }

        return media/mercado[0].n;

    } else if(op == 2){
        for(int i = 0; i < mercado[0].n; i++){
            media += mercado[i].arroz;
        }

        return media/mercado[0].n;

    } else if(op == 3){
        for(int i = 0; i < mercado[0].n; i++){
            media += mercado[i].macarrao;
        }

        return media/mercado[0].n;
    }

}


void PrintMediaPrecosDoSupermercados(ref_supermercado mercado){

    double MediaFeijao  = CalculaMediaPrecos(mercado, 1);
    double MediaArroz = CalculaMediaPrecos(mercado, 2) ;
    double MediaMacarrao = CalculaMediaPrecos(mercado, 3) ;
   
    printf("\n");        
    printf("Media:\t\t\t\t\t%lf\t\t%lf\t\t%lf", MediaFeijao, MediaArroz, MediaMacarrao);
    printf("\n");        
        
}

void SupermecadosComPrecosInferioresMedia(ref_supermercado mercado){

    double MediaFeijao  = CalculaMediaPrecos(mercado, 1);
    double MediaArroz = CalculaMediaPrecos(mercado, 2);
    double MediaMacarrao = CalculaMediaPrecos(mercado, 3);

    printf("\n");        
    printf("Tem o feijao abaixo da media os supermercados:\n");
    for(int i = 0; i< mercado[0].n; i++){
        if(mercado[i].feijao < MediaFeijao){
            printf("%s\n", mercado[i].nome);
        }
    }
    printf("\n");        

    printf("Tem o arroz abaixo da media os supermercados:\n");
    for(int i = 0; i< mercado[0].n; i++){
        if(mercado[i].arroz < MediaArroz){
            printf("%s\n", mercado[i].nome);
        }
    }
    printf("\n");        

    printf("Tem o macarrao abaixo da media os supermercados:\n");
    for(int i = 0; i< mercado[0].n; i++){
        if(mercado[i].macarrao < MediaMacarrao){
            printf("%s\n", mercado[i].nome);
        }
    }
   

}