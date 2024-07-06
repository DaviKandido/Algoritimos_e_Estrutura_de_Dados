
# include "io.h"

typedef struct
{

int array[50];
int quantidade;

}int_array;

typedef int_array* ref_array;


// Ler Arranjo de Arquivo
void LerArquivoGravarEmArray(char* filename, ref_array int_array) {
    FILE *arquivo = fopen(filename, "rt");

    if (arquivo == NULL) {
        perror("[Erro] ao abrir o arquivo ou arquivo inexistente");
        return;
    }

    if(int_array->quantidade > 0){

        fscanf(arquivo, "%d", &int_array->quantidade);

        for(int i = 0; i < int_array->quantidade; i++){
            fscanf(arquivo, "%d", &int_array->array[i]);
        }

    } else {

    int cont = 0;

    while ( !feof(arquivo)) {
        fscanf(arquivo, "%d", &int_array->array[cont]);
        cont++;
    }

    int_array->quantidade = cont;
    }

    fclose(arquivo);
}


// Ordena Arranjo
void OrdenarArranjo(ref_array int_array) {
    int aux;

    for (int i = 0; i < int_array->quantidade - 1; i++) {
        for (int j = 0; j < int_array->quantidade - 1 - i; j++) { 
            if (int_array->array[j] < int_array->array[j + 1]) { 
                aux = int_array->array[j];
                int_array->array[j] = int_array->array[j + 1];
                int_array->array[j + 1] = aux;
            }
        }
    }
}


// Grava Arranjo em arquivo
bool GravarArrayEmArquivo(char* filename, ref_array int_array){

   FILE *arquivo = fopen(filename, "wt");

    if (arquivo == NULL) {
         return false;
    }
    

   fprintf(arquivo, "%d\n", int_array->quantidade);

   for(int i = 0; i < int_array->quantidade; i++){
      fprintf(arquivo, "%d\n", int_array->array[i]);
   }


    fclose(arquivo);
   return true;
}


// Inverte Arranjos
void InverteArranjos(ref_array arranjo1, ref_array arranjo2){

arranjo2-> quantidade = arranjo1->quantidade;
int quant = arranjo2-> quantidade;

        for (int i = 0; i < (quant/2); i++) { 
            arranjo2->array[i] = arranjo1->array[quant-i-1];
            arranjo2->array[quant-i-1] = arranjo1->array[i];
        }

}

//Acha a mediana
int AcharMediana(ref_array arranjo){

int soma = 0;
int mediana = 0;
double MenorDiferenca = 0.11;
    for(int i = 0; i < arranjo->quantidade; i++){
        soma += arranjo->array[i];
    }

    double media = soma/(arranjo->quantidade*1.0);

    printf("\nO Array tem %d Numeros\n", arranjo->quantidade);
    printf("\nA soma deles sera %d\n", soma);

    printf("\nA media do array e: %lf\n", media);

    for(int i = 0; i < arranjo->quantidade; i++){
        double diferenca = abs(media - arranjo->array[i]);
        if(diferenca == MenorDiferenca) {
            printf("\nO array possui duas medianas proximas e diferentes que sao %d e %d\n", mediana, arranjo->array[i]);
            mediana = (mediana + arranjo->array[i])/2;
            MenorDiferenca = diferenca;

        } else if(diferenca <= MenorDiferenca || MenorDiferenca == 0.11){
            mediana = arranjo->array[i];
            MenorDiferenca = diferenca;
        }
    }

    return mediana;
}

//Faz tabela de moda
int AcharModa(ref_array arranjo){

    int moda = 0;
    int tabela[arranjo->quantidade][2];

    for(int i = 0; i < arranjo->quantidade; i++){
        tabela[i][0] = arranjo->array[i];
        tabela[i][1] = 0;
    }

    int achado = 0;
    int soma = 0;

    for(int i = 0; i < arranjo->quantidade; i++){

        achado = arranjo->array[i];

        for(int i = 0; i < arranjo->quantidade; i++){
            if( achado == tabela[i][0]){
                soma++;
                tabela[i][1] = soma;
            }
        }
        soma = 0;
    }

    //print tabela
    printf("Tabela com contagem de aparicoes:\n");
    for(int i = 0; i < arranjo->quantidade; i++){
        for(int c = 0; c < 2; c++){
            printf("%d \t", tabela[i][c]);
        }
        printf("\n");
    }

    int maior = tabela[0][1];
    for(int i = 0; i < arranjo->quantidade; i++){
        if(tabela[i][1] > maior){
            maior = tabela[i][1];
            moda = tabela[i][0];
        }
    }
    return moda;
}


// Filtra elementos comuns
void FiltrarComuns(ref_array arranjo3, ref_array arranjo1, ref_array arranjo2){

    int cont = 0;
    bool naoTem;
    int unicos = 0;

    for (int i = 0; i < arranjo1->quantidade; i++) {
        for (int c = 0; c < arranjo2->quantidade; c++) {
            if (arranjo2->array[c] == arranjo1->array[i]) {
                naoTem = true;

                // Verificar se já foi adicionado a arranjo3
                for (int p = 0; p < cont; p++) {
                    if (arranjo1->array[i] == arranjo3->array[p]) {
                        naoTem = false;
                        break; 
                    }
                }

                if (naoTem) {
                    arranjo3->array[cont] = arranjo1->array[i];
                    cont++;
                }

                break;
            } else{
                unicos++;
            }
        }
    }

    arranjo3->quantidade = cont;
}


//Le Arquivo em Binario
void LerArquivoBINARIOGravarEmArray(char* filename, ref_array int_array) {
    FILE *arquivo = fopen(filename, "rt");

    if (arquivo == NULL) {
        perror("[Erro] ao abrir o arquivo ou arquivo inexistente");
        return;
    }

    int cont = 0;
    int numero = 0;

    while ( !feof(arquivo)) {
        fscanf(arquivo, "%d", &numero);
        if (numero == 0 || numero == 1){
            int_array->array[cont] = numero;
            cont++;
        } else{
        perror("[Erro] Arquivo possui caracteres não binarios");
        }
    }

    int_array->quantidade = cont;

    fclose(arquivo);
}

//Converte Binario Em Decimal
int ConverteBinarioEmDecimal(ref_array int_array){

    int decimal = 0;

    for(int i = 0; i < int_array->quantidade; i++){
        decimal += int_array->array[i] * pow(2, int_array->quantidade - i - 1);
    }

    return decimal;
}