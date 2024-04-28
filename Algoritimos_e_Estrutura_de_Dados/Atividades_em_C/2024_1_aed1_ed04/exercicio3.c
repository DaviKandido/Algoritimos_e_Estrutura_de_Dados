#include <stdio.h>
#include <string.h>

char palavra[100];
int quantidade;

int maioresqueL (){

  int tamanhopalavra = strlen(palavra);


  for (int i = 0; i < tamanhopalavra; i++)
    if ((int)palavra[i] > 76 && (int)palavra[i] <= 90) {
      printf("%c", palavra[i]);
      quantidade ++;
    }
  return (quantidade);
}


int main() {

  char const1[] = "Sao maiores que L a seguinte cadeia de caracteres: "; 

  printf("Digite uma palvra: ");
  scanf("%s", &palavra); getchar();
  printf("%s", const1 );
  maioresqueL(palavra);
  printf("\nE A quantidade de maiusculas maiores que L e: %d", quantidade);


    return(0);
}

/*
Digite uma palvra: AaKkLmM0*Nx
Sao maiores que L a seguinte cadeia de caracteres: MN
E A quantidade de maiusculas maiores que L e: 2
*/