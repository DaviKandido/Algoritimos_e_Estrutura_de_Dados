#include <stdio.h>
#include <string.h>

char palavra[100];
int qtdnaoalfanumericos;
int qtdalfanumericos;


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

  printf("Digite uma sequencia de caracteres: ");
  scanf("%s", &palavra); getchar();

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
Digite uma sequencia de caracteres: (A1b2+C3d4)*E5f6

Sao alfanumericos : A1b2C3d4E5f6
Sao nao alfanumericos : (+)*

A quantidade de alfanumericos: 12
A quantidade de nao alfanumericos: 4
*/