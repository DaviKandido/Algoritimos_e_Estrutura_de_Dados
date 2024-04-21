#include <stdio.h>
#include <string.h>

int main() {
  printf("Definimeremos um intervalo [a:b]\n ");

  printf("Inclua a: \n");
  int a = 0;
  scanf("%d", &a);
  getchar();

  int b = 0;
  printf("Inclua b: \n");
  scanf("%d", &b);
  getchar();

  int n = 0;
  printf("Inclua a quantidade de valoes (n) a serem testados: \n");
  scanf("%d", &n);
  getchar();

  // numero de testes
  int valores[n];

  for (int i = 0; i < n; i++) {
    printf("Inclua %dº numero: \n", i + 1);
    scanf("%d", &valores[i]);
    getchar();
  }

  printf("\n");
  printf("São valores entre [a:b] e divisivel por 4 mas não por 5: ");
  for (int i = 0; i < n; i++) {
    if (((valores[i] >= a) && (valores[i] <= b)) && (valores[i] % 4 == 0) &&
        !(valores[i] % 5 == 0)) {
      printf("\n%d", valores[i]);
    }
  }

  return 0;
}

/*

Exemplo de resultado:

Definimeremos um intervalo [a:b]
 Inclua a:
20
Inclua b:
60
Inclua a quantidade de valoes (n) a serem testados:
7
Inclua 1º numero:
10
Inclua 2º numero:
20
Inclua 3º numero:
30
Inclua 4º numero:
48
Inclua 5º numero:
52
Inclua 6º numero:
60
Inclua 7º numero:
84

São valores entre [a:b] e divisivel por 4 mas não por 5:
48
52

*/