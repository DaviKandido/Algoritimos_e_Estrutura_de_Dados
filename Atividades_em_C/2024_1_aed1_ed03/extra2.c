#include <stdio.h>
#include <string.h>


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
      letras += 1;M
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

  if((letras==0)&&(naoletras!=0)&&(numeros==0)){
    printf("Não há letras, nem numeros somente alfanumericos");
  } else if ((letras!=0)&&(numeros!=0)) {
    printf("Há letras e numeros portanto não é uma cadeia apenas de alfanumericos");
    }else if ((letras=!0)&&(naoletras==0)&&(numeros==0)){
    printf("Há letras, mas não há numeros nem alfanumericos");
    printf("\nPortanto é uma cadeia apenas de letras");
    }else{
    printf("A cadeia possui somente alfanumericos e/ou numeros");

 }
  

  return 0;
}

/*

//Exemplos de respostas:

Digite uma palvra: PALavra

São Letras: 
PALavra
São digitos de 0 a 9: 

São alfanumericos: 


A quantidade de letras é: 7
A quantidade de alfanumericos são: 0
A quantidade de numeros é: 0

Há letras, mas não há numeros nem alfanumericos
Portanto é uma cadeia apenas de letras

//Outro exemplo:

Digite uma palvra: 4@0!1#

São Letras: 

São digitos de 0 a 9: 
401
São alfanumericos: 
@!#

A quantidade de letras é: 0
A quantidade de alfanumericos são: 3
A quantidade de numeros é: 3

A cadeia possui somente alfanumericos e/ou numeros

//Outra resposta:

Digite uma palvra: %&*#@         

São Letras: 

São digitos de 0 a 9: 

São alfanumericos: 
%&*#@

A quantidade de letras é: 0
A quantidade de alfanumericos são: 5
A quantidade de numeros é: 0

Não há letras, nem numeros somente alfanumericos

*/