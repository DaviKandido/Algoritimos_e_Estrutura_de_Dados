#include<stdio.h>
#include<string.h>

int main(){
    char nome[50];
    printf("Digite uma palvra: ");
    scanf("%[^\n]",nome);
    int tampalavra = strlen(nome);

    int qtd = 0;

    for(int i = 0; i < tampalavra; i++) {
         if((int)nome[i]>=65&&(int)nome[i]<=90){
               printf("%c", nome[i]); 
               qtd += 1; 
        }
    }
    printf("\n");
    printf("A quantidade de maiusculas e: %d", qtd);
    printf("\n");
}

/*

Exemplo de resultado:

Digite uma palvra: PaLaVrA
PLVA
A quantidade de maiusculas e: 4

  */