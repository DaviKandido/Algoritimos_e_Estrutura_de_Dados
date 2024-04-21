#include <stdio.h>
#include <string.h>

char palavra[100];
int quantidade;
int qtdalfanumericos;


int letras (){

  int tamanhopalavra = strlen(palavra);


  for (int i = 0; i < tamanhopalavra; i++)
    if (((int)palavra[i] >= 65 && (int)palavra[i] < 90)||((int)palavra[i] >= 97 && (int)palavra[i] < 122)) {
      printf("%c", palavra[i]);
      quantidade ++;
    }
  return (quantidade);
}

int numeros (){

  int tamanhopalavra = strlen(palavra);


  for (int i = 0; i < tamanhopalavra; i++)
    if (((int)palavra[i] >= 48 && (int)palavra[i] < 57)) {
      printf("%c", palavra[i]);
      quantidade ++;
    }
  return (quantidade);
}

int alfanumericos (){

  int tamanhopalavra = strlen(palavra);


  for (int i = 0; i < tamanhopalavra; i++)
    if (!(((int)palavra[i] >= 48 && (int)palavra[i] < 57)||
    ((int)palavra[i] >= 65 && (int)palavra[i] < 90)||
    ((int)palavra[i] >= 97 && (int)palavra[i] < 122))) {
      printf("%c", palavra[i]);
      qtdalfanumericos ++;
    }
  return (qtdalfanumericos);
}



int main() {

  printf("Digite uma sequencia de caracteres: ");
  scanf("%s", &palavra); getchar();

  printf( "\nSao letras : ");
  letras(palavra);
  printf( "\nSao numeros: ");
  numeros(palavra);

  printf( "\nSao alfanumericos : ");
  alfanumericos(palavra);
  printf( "\n");

  printf("\nA quantidade numeros e letras: %d", quantidade);
  printf("\nA quantidade de alfanumericos: %d", qtdalfanumericos);


    return(0);
}


/*
Digite uma sequencia de caracteres: (A1b2+C3d4)*E5f6

Sao letras : AbCdEf
Sao numeros: 123456
Sao alfanumericos : (+)*

A quantidade numeros e letras: 12
A quantidade de alfanumericos: 4
*/