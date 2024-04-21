#include <stdio.h>
#include <string.h>
#include "io.h"

int main() {
  char nome[50];
  printf("Digite uma palvra: ");
  scanf("%[^\n]", nome); //O uso do gets ou IO_readln( "_" ) comprometia o programa no entanto foi possivel sua execução com o scanf
  int tampalavra = strlen(nome);

  int letras = 0;
  printf("\n");

  printf("São Letras: \n");
  for (int i = 0; i < tampalavra; i++) {
    if (((int)nome[i] >= 65 && (int)nome[i] <= 90) ||
        ((int)nome[i] >= 97 && (int)nome[i] <= 122)) {
      printf("%c", nome[i]);
      letras += 1;
    }
  }
  printf("\n");
  int numeros = 0;

  printf("São digitos de 0 a 9: \n");
  for (int n = 0; n < tampalavra; n++) {
    if ((int)nome[n] >= 48 && (int)nome[n] <= 57) {
      printf("%c", nome[n]);
      numeros += 1;
    }
  }
  printf("\n");

  int naoletras = 0;

  printf("São alfanumericos: \n");
  for (int n = 0; n < tampalavra; n++) {
    if (!((int)nome[n] >= 65 && (int)nome[n] <= 90) &&
        !((int)nome[n] >= 97 && (int)nome[n] <= 122) &&
        !((int)nome[n] >= 48 && (int)nome[n] <= 57)) {
      printf("%c", nome[n]);
      naoletras += 1;
    }
  }

  printf("\n");
  printf("\n");
  printf("A quantidade de letras é: %d\n", letras);
  printf("A quantidade de alfanumericos são: %d\n", naoletras);
  printf("A quantidade de numeros é: %d\n", numeros);
  printf("\n");

  return 0;
}


/*

Digite uma palvra: P4LaVr@O! & pAl4vR1n#a

São Letras: 
PLaVrOpAlvRna
São digitos de 0 a 9: 
441
São alfanumericos: 
@! & #

A quantidade de letras é: 13
A quantidade de alfanumericos são: 6
A quantidade de lnumeros é: 3

*/