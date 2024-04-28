#include <stdio.h>
#include <string.h>

char palavra[100];
int quantidade;

int pares (){

  int tamanhopalavra = strlen(palavra);


  for (int i = 0; i < tamanhopalavra; i++)
    if ((int)palavra[i] % 2 == 0) {
      printf("%c", palavra[i]);
      quantidade ++;
    }
  return (quantidade);
}


int main() {

  

  printf("Digite uma sequencia de caracteres: ");
  scanf("%s", &palavra); getchar();
  printf("%s", "Sao digitos pares a seguinte cadeia de caracteres: " );
  pares(palavra);
  printf("\nportanto a quantidade de digitos pares sao: %d", quantidade);


    return(0);
}

/*
Digite uma sequencia de caracteres: A1b2C3d4E5f6
Sao digitos pares a seguinte cadeia de caracteres: b2d4f6
portanto a quantidade de digitos pares sao: 6
*/