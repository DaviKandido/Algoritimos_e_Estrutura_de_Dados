#include <stdio.h>
#include <string.h>

char palavra[200];
int qtdnaoalfanumericos;
int qtdalfanumericos;
int leituras;
int contador;


int alfanumericos (){

  int tamanhopalavra = strlen(palavra);


  for (int i = 0; i < tamanhopalavra; i++)
    if (((int)palavra[i] >= 48 && (int)palavra[i] < 57)||
    ((int)palavra[i] >= 65 && (int)palavra[i] < 90)||
    ((int)palavra[i] >= 97 && (int)palavra[i] < 122)) {
      printf("%c", palavra[i]);
      qtdalfanumericos ++;
    }
  return (qtdalfanumericos);
}

int naoalfanumericos (){

  int tamanhopalavra = strlen(palavra);


  for (int i = 0; i < tamanhopalavra; i++)
    if (!(((int)palavra[i] >= 48 && (int)palavra[i] < 57)||
    ((int)palavra[i] >= 65 && (int)palavra[i] < 90)||
    ((int)palavra[i] >= 97 && (int)palavra[i] < 122))) {
      printf("%c", palavra[i]);
      qtdnaoalfanumericos ++;
    }
  return (qtdnaoalfanumericos);
}



int main() {

  printf("Digite quantas sequencias de caracteres sera lida:");
  scanf("%d", &leituras); getchar();

  do{

  printf("Digite uma sequencia de caracteres: ");
  scanf("%s", &palavra[strlen(palavra)]); getchar();

  contador++;

  }while (contador < leituras);

  printf( "\nSao alfanumericos : ");
  alfanumericos(palavra);


  printf( "\nSao nao alfanumericos : ");
  naoalfanumericos(palavra);
  printf( "\n");

  printf("\nA quantidade de alfanumericos: %d", qtdalfanumericos);
  printf("\nA quantidade de nao alfanumericos: %d", qtdnaoalfanumericos);


    return(0);
}


/*
Digite quantas sequencias de caracteres sera lida:3
Digite uma sequencia de caracteres: (A1b2+C3d4)*E5f6
Digite uma sequencia de caracteres: [P&&Q]||[R&&!S]
Digite uma sequencia de caracteres: (a<b&&b<c)

Sao alfanumericos : A1b2C3d4E5f6PQRSabbc
Sao nao alfanumericos : (+)*[&&]||[&&!](<&&<)

A quantidade de alfanumericos: 20
A quantidade de nao alfanumericos: 21
*/