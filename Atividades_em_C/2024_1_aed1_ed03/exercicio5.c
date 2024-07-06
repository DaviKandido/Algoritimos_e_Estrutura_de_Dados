#include <stdio.h>
#include <string.h>

int main() {
  char nome[50];
  printf("Digite uma palvra: ");
  scanf("%[^\n]", nome);
  int tampalavra = strlen(nome);

  int qtdMaiu = 0;
  int qtdMinu = 0;

  printf("São Miusculas: \n");
  for (int i = tampalavra - 1; i >= 0; i--) {
    if ((int)nome[i] >= 65 && (int)nome[i] <= 90) {
      printf("%c\n", nome[i]);
      qtdMaiu += 1;
    }
  }
  printf("São Minusculas: \n");
  for (int i = tampalavra - 1; i >= 0; i--) {
    if ((int)nome[i] >= 97 && (int)nome[i] <= 122) {
      printf("%c\n", nome[i]);
      qtdMinu += 1;
    }
  }

  int qtdtotal = qtdMaiu + qtdMinu;

  printf("\n");
  printf("A quantidade de maiusculas é: %d\n", qtdMaiu);
  printf("A quantidade de minuscula é: %d\n", qtdMinu);
  printf("A quantidade de letras totais é: %d\n", qtdtotal);
  printf("\n");

  return 0;
}
/*
Exemplo de resultado:

Digite uma palvra: PaLaV%Ra
São Miusculas: 
R
V
L
P
São Minusculas: 
a
a
a

A quantidade de maiusculas é: 4
A quantidade de minuscula é: 3
A quantidade de letras totais é: 7
*/