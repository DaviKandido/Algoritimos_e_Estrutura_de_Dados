#include <stdio.h>
#include <string.h>

int main() {
  char nome[50];
  printf("Digite o seu nome: ");
  scanf("%[^\n]", nome);
  int tampalavra = strlen(nome);

  for (int i = 0; i < tampalavra; i++) {
    if ((int)nome[i] >= 65 && (int)nome[i] <= 90) {
      printf("%c", nome[i]);
    }
  }
}

/*

Exemplo de resultado:

Digite o seu nome: PaLaVrA
PLVA

  */