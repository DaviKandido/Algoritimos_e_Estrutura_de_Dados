#include <stdio.h>
#include <string.h>

int main() {
  char nome[50];
  printf("Digite uma palvra: ");
  scanf("%[^\n]", nome);
  int tampalavra = strlen(nome);

  int letras = 0;

  printf("São Letras: \n");
  for (int i = 0; i < tampalavra; i++) {
    if (((int)nome[i] >= 65 && (int)nome[i] <= 90) ||
        ((int)nome[i] >= 97 && (int)nome[i] <= 122)) {
      printf("%c\n", nome[i]);
      letras += 1;
    }
  }

  int naoletras = 0;

  printf("Não são letras e nem numeros: \n");
  for (int n = 0; n < tampalavra; n++) {
    if (!((int)nome[n] >= 65 && (int)nome[n] <= 90) &&
        !((int)nome[n] >= 97 && (int)nome[n] <= 122) &&
        !((int)nome[n] >= 48 && (int)nome[n] <= 57)) {
      printf("%c\n", nome[n]);
      naoletras += 1;
    }
  }

  int numeros = 0;

  printf("São digitos de 0 a 9: \n");
  for (int n = 0; n < tampalavra; n++) {
    if ((int)nome[n] >= 48 && (int)nome[n] <= 57) {
      printf("%c\n", nome[n]);
      numeros += 1;
    }
  }

  printf("\n");
  printf("A quantidade de letras é: %d\n", letras);
  printf("A quantidade de outros caracteres é: %d\n", naoletras);
  printf("A quantidade de lnumeros é: %d\n", numeros);
  printf("\n");

  return 0;
}

/*

Exemplo de resultado:

Digite uma palvra: P4LaVr@
São Letras:
P
L
a
V
r
Não são letras e nem numeros:
@
São digitos de 0 a 9:
4

A quantidade de letras é: 5
A quantidade de outros caracteres é: 1
A quantidade de lnumeros é: 1
  */