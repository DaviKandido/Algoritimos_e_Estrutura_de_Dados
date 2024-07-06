#include <stdio.h>
#include <string.h>

char palavra[100];
int quantidade;

int maioresqueL (){

  int tamanhopalavra = strlen(palavra);

  for (int i = 0; i < tamanhopalavra; i++)
    if ((int)palavra[i] > 76 && (int)palavra[i] <= 90) {
      printf("\nMaior que L: %c", palavra[i]);
      quantidade ++;
    }
  return (quantidade);
}


int main() {


  printf("Digite uma palvra: ");
  scanf("%s", &palavra); getchar();
  maioresqueL(palavra);
  printf("\nA quantidade de maiusculas maiores que L e: %d", quantidade);


    return(0);
}

/*


Digite uma palvra: AaKkLmM0*Nx

Maior que L: L
Maior que L: M
Maior que L: N
A quantidade de maiusculas maiores que L e: 3



*/
