#include <stdio.h>
#include <string.h>

int main() {
  printf("Definimeremos um intervalo (a:b) onde a obrigatoriamente a sera maior que b:\n\n ");
  double a = 0;
  double b = 0;
do{
  printf("Inclua a: \n");
  
  //scan a
  scanf("%lf", &a);
  getchar();

  //sacn b
  printf("Inclua b: \n");
  scanf("%lf", &b);
  getchar();
  
  } while(a > b);

   // numero de testes
  int n = 0;
  printf("Inclua a quantidade de valoes (n) a serem testados: \n");
  scanf("%d", &n);
  getchar();

  double valores[n];

  for (int i = 0; i < n; i++) {
    printf("Inclua %dº numero: \n", i + 1);
    scanf("%lf", &valores[i]); getchar();
  }

  printf("\n");
  printf("São valores entre [a:b] e par: ");
  for (int i = 0; i < n; i++) {
    if ((((valores[i] > a) && (valores[i] < b)) && ((int)valores[i] % 2 == 0))) {
      printf("\n Em double %lf e em inteiro %d", valores[i], (int)valores[i]);
    }
  }

  return 0;
}

/*

Exemplo de resultado:

Definimeremos um intervalo (a:b) onde a obrigatoriamente a sera maior que b:

 Inclua a: 
2.5
Inclua b: 
7.8
Inclua a quantidade de valoes (n) a serem testados: 
7
Inclua 1º numero: 
1.0
Inclua 2º numero: 
2.4
Inclua 3º numero: 
3.3
Inclua 4º numero: 
4.1
Inclua 5º numero: 
5.5
Inclua 6º numero: 
6.3
Inclua 7º numero: 
8.4

São valores entre [a:b] e par: 
 Em double 4.100000 e em inteiro 4
 Em double 6.300000 e em inteiro 6



*/