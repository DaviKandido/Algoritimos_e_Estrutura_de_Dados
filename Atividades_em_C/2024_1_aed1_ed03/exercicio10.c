#include <stdio.h>
#include <string.h>

int main() {
  printf("Definimeremos um intervalo (a:b) onde a obrigatoriamente a sera "
         "maior que b:\n\n ");
  double a = 0;
  double b = 0;
  do {
    printf("Inclua a: \n");

    // scan a
    scanf("%lf", &a);
    getchar();

    // sacn b
    printf("Inclua b: \n");
    scanf("%lf", &b);
    getchar();

  } while ((a > b) && (a < 0) && (b > 0));

  // numero de testes
  int n = 0;
  printf("Inclua a quantidade de valoes (n) a serem testados: \n");
  scanf("%d", &n);
  getchar();

  double valores[n];

  for (int i = 0; i < n; i++) {
    printf("Inclua %dº numero: \n", i + 1);
    scanf("%lf", &valores[i]);
    getchar();
  }

  printf("\n");
  printf("São valores com a parte fracionaria entre (a:b): \n ");
  for (int i = 0; i < n; i++) {
    if ((valores[i] - (int)valores[i] > a) &&
        (valores[i] - (int)valores[i] < b)) {
      printf("\n São inclusos: %lf , Pois sua a parte fracionaria é: %lf",
             valores[i], (valores[i] - (int)valores[i]));
    }
  }

  printf("\n\n");
  printf("São com a parte fracionaria fora de (a:b): \n");
  for (int i = 0; i < n; i++) {
    if (!((valores[i] - (int)valores[i] > a) &&
          (valores[i] - (int)valores[i] < b))) {
      printf("\n Não são inclusos: %lf , Pois sua parte fracionaria é: %lf",
             valores[i], (valores[i] - (int)valores[i]));
    }
  }
  return 0;
}

/*

Exemplo de resultado:

Definimeremos um intervalo (a:b) onde a obrigatoriamente a sera maior que b:

 Inclua a:
0.25
Inclua b:
0.50
Inclua a quantidade de valoes (n) a serem testados:
7
Inclua 1º numero:
1.0
Inclua 2º numero:
2.8
Inclua 3º numero:
3.3
Inclua 4º numero:
4.1
Inclua 5º numero:
5.5
Inclua 6º numero:
6.9
Inclua 7º numero:
8.4

São valores com a parte fracionaria entre (a:b):

 São inclusos: 3.300000 , Pois sua a parte fracionaria é: 0.300000
 São inclusos: 8.400000 , Pois sua a parte fracionaria é: 0.400000

São com a parte fracionaria fora de (a:b):

 Não são inclusos: 1.000000 , Pois sua parte fracionaria é: 0.000000
 Não são inclusos: 2.800000 , Pois sua parte fracionaria é: 0.800000
 Não são inclusos: 4.100000 , Pois sua parte fracionaria é: 0.100000
 Não são inclusos: 5.500000 , Pois sua parte fracionaria é: 0.500000
 Não são inclusos: 6.900000 , Pois sua parte fracionaria é: 0.900000


*/