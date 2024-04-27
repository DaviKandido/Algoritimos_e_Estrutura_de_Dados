#include <stdio.h>
#include <string.h>

char palavra[100];
int quantidademaiu;
int quantidademinu;

int maiusculasL (){

  int tamanhopalavra = strlen(palavra);


  for (int i = 0; i < tamanhopalavra; i++)
    if ((int)palavra[i] >= 65 && (int)palavra[i] < 76) {
      printf("%c", palavra[i]);
      quantidademaiu ++;
    }
  return (quantidademaiu);
}

int minusculasL (){

  int tamanhopalavra = strlen(palavra);


  for (int i = 0; i < tamanhopalavra; i++)
    if ((int)palavra[i] >= 97 && (int)palavra[i] < 108) {
      printf("%c", palavra[i]);
      quantidademinu ++;
    }
  return (quantidademinu);
}


int main() {

  printf("Digite uma palvra: ");
  scanf("%s", &palavra); getchar();

  printf( "\nSao menores que L a seguinte cadeia de caracteres: ");
  maiusculasL(palavra);
  printf( "\n\nSao menores que l a seguinte cadeia de caracteres: ");
  minusculasL(palavra);
  printf( "\n");

  printf("\nA quantidade de maiusculas menores que L e: %d", quantidademaiu);
  printf("\nE A quantidade de maiusculas menores que l e: %d", quantidademinu);


    return(0);
}

/*
Digite uma palvra: AaKkLmM0*Nx

Sao menores que L a seguinte cadeia de caracteres: AK

Sao menores que l a seguinte cadeia de caracteres: ak

A quantidade de maiusculas menores que L e: 2
E A quantidade de maiusculas menores que l e: 2
*/