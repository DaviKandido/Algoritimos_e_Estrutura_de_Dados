#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int num =0;
    int cont =0;
    FILE *Dados = fopen("DADOS.TXT", "rt");
    FILE *Resultados = fopen ("RESULTADOS.TXT", "wt");

    while(!feof(Dados) && cont < 7){

        fscanf(Dados, "%d", &num);
        if(num >= 30000 && num < 40000 && num%10 == 1){
            fprintf(Resultados, "%d\n", num);
            cont++;
        }
    }
    if(cont < 7){
        for(int i = cont; i < 7; i++){
            fprintf(Resultados, "0\n");
        }
    }
    return 0;
}