#include <stdio.h>
#include <string.h>

char palavra[200];
int qtdnaodigitos;
int qtddigitos;
int leituras;
int contador;


int digitos (){

  int tamanhopalavra = strlen(palavra);


  for (int i = 0; i < tamanhopalavra; i++)
    if ((int)palavra[i] >= 48 && (int)palavra[i] < 57) {
      printf("%c", palavra[i]);
      qtddigitos ++;
    }
  return (qtddigitos);
}

int naodigitos (){

  int tamanhopalavra = strlen(palavra);


  for (int i = 0; i < tamanhopalavra; i++)
    if (!(((int)palavra[i] >= 48 && (int)palavra[i] < 57))) {
      printf("%c", palavra[i]);
      qtdnaodigitos ++;
    }
  return (qtdnaodigitos);
}



int main() {


  printf("Digite uma sequencia de caracteres: ");
  scanf("%s", &palavra); getchar();
  
  printf( "\nSao digitos de 1: ");
  digitos(palavra);

  printf( "\nNao sao digitos de 1: ");
  naodigitos(palavra);

  int digitos1 = qtddigitos;

  printf("\n\nDigite uma segunda sequencia de caracteres: ");
  scanf("%s", &palavra); getchar();
  
  printf( "\nSao digitos de 2: ");
  digitos(palavra);

  printf( "\nNao sao digitos de 2: ");
  naodigitos(palavra);

  int digitos2 = qtddigitos;
  
  if (digitos1 < digitos2){
      
    printf( "\n\nPortanto a palavra 1 possui menos digitos que a palavra 2");

  }else {
        printf( "\n\nPortanto a palavra 2 possui menos digitos que a palavra 1");

  }




    return(0);
}


/*
Digite uma sequencia de caracteres: A1b2

Sao digitos de 1: 12
Nao sao digitos de 1: Ab

Digite uma segunda sequencia de caracteres: C3d4E5

Sao digitos de 2: 345
Nao sao digitos de 2: CdE

Portanto a palavra 1 possui menos digitos que a palavra 2
*/