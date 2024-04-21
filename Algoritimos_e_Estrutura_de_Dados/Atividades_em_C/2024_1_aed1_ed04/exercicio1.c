#include <stdio.h>
#include <string.h>

int main() {

  double valor1 = 0;
  double valor2 = 0;
  double x;
  int leituras = 0;
  double teste = 0;
  int fora = 0;
  int dentro = 0;

  do {
    printf("Definindo o intervalo \n\n");

    printf("Digite o primeiro valor: \n");
    scanf("%lf.1", &valor1);
    getchar();
    printf("\nO valor incerido foi: %lf \n", valor1);

    printf("\nDigite o segundo valor: \n");
    scanf("%lf.1", &valor2);
    getchar();
    printf("\nO valor incerido foi: %lf \n", valor2);

  } while (valor1 > valor2);

  printf("\nDefina o numero de leituras: \n");
  scanf("%d", &leituras); 
  getchar();

  for (int i = 0; i < leituras; i++) {

    printf("Leitura %d:", i + 1);
    scanf("%lf", &teste); 
    getchar();

    if (teste > valor1 && teste < valor2) {
      printf("Esta dentro do intervalo [%lf:%lf]\n", valor1, valor2);
      dentro++;
    } else {
      printf("Esta fora do intervalo [%lf:%lf]\n", valor1, valor2);
      fora++;
    }
  }

  printf("\n Portanto a quantidade de valores dentro do intervalo é: %d",
         dentro);
  printf("\n E a quantidade de valores fora do intervalo é: %d", fora);

  return (0);
}

/*

Definindo o intervalo

Digite o primeiro valor:
13.6

O valor incerido foi: 13.600000

Digite o segundo valor:
22.6

O valor incerido foi: 22.600000

Defina o numero de leituras:
10
Leitura 1:5.1
Esta fora do intervalo [13.600000:22.600000]
Leitura 2:10.5
Esta fora do intervalo [13.600000:22.600000]
Leitura 3:12.4
Esta fora do intervalo [13.600000:22.600000]
Leitura 4:15.3
Esta dentro do intervalo [13.600000:22.600000]
Leitura 5:18.3
Esta dentro do intervalo [13.600000:22.600000]
Leitura 6:20.4
Esta dentro do intervalo [13.600000:22.600000]
Leitura 7:21.7
Esta dentro do intervalo [13.600000:22.600000]
Leitura 8:23.1
Esta fora do intervalo [13.600000:22.600000]
Leitura 9:24.2
Esta fora do intervalo [13.600000:22.600000]
Leitura 10:14.2
Esta dentro do intervalo [13.600000:22.600000]

 Portanto a quantidade de valores dentro do intervalo é: 5
 E a quantidade de valores fora do intervalo é: 5

*/
