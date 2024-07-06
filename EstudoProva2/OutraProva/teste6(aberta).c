#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char *AjustarPalavra(int n, char cadeia[]){

if(n > strlen(cadeia)){

    char *resultado = (char*) calloc(n, sizeof(char));
    int pot = (n-strlen(cadeia))/2;

    for(int i = 0; i < pot; i++){
        resultado[i] = '-';
    }
    for(int i = 0; i < strlen(cadeia); i++){
        resultado[(pot)+i] = cadeia[i];
    }
    for(int i = 0; i < pot; i++){
        resultado[n-pot+i] = '-';
    }
    resultado[n] = '\0';
    return resultado;
}else{
    return cadeia;
}


}



int main(){

char cadeia[] = "maio";
int n = 0;
printf("Defina o tamanho de n: ");
scanf("%d", &n);

char *resultado = AjustarPalavra(n, cadeia);

printf("%s", resultado);

}