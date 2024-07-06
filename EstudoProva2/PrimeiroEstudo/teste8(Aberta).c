#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void VerificaBoletos(int dia, int mes, int ano, char *Data, char *Boletos){
    FILE *arquivo1 = fopen(Data, "rt");
    FILE *arquivo2 = fopen(Boletos, "wt");

    int contador = 0;


    while(!feof(arquivo1)){
        int dado1 = 0;
        int dado2 = 0;
        int dado3 = 0;
        double valor = 0.0;
        

        fscanf(arquivo1, "%d", &dado1);
        fscanf(arquivo1, "%d", &dado2);
        fscanf(arquivo1, "%d", &dado3);
        fscanf(arquivo1, "%lf", &valor);

        if((dado1 == dia || dado1 == ano) && (dado3 == dia || dado3 == ano) && (dado2 == mes)){

            fprintf(arquivo2, "%lf\n", valor);
            contador++;

        }


    }

    if(contador == 0){
        fprintf(arquivo2, "0");
    }

fclose(arquivo1);
fclose(arquivo2);
}



int main() {

int dia = 0;
int mes = 0;
int ano = 0;


printf("Diga o dia, mes e ano que se verificara os boletos(Nessa Ordem): ");

scanf("%d", &dia);
scanf("%d", &mes);
scanf("%d", &ano);

VerificaBoletos(dia, mes, ano, "DATAS.TXT", "BOLETOS.TXT");

}
    

