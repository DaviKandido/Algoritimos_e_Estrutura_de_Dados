#include <stdio.h>
#include <math.h>

int main() {

    double altura, largura, comprimento, volume;
    scanf("%lf", &altura);
    printf("\nO valor da altura incerida foi: %lf", altura);
    scanf("%lf", &largura);
    printf("\nO valor da largura incerida foi: %lf", largura);
    scanf("%lf", &comprimento);
    printf("\nO valor do comprimento incerida foi: %lf\n", comprimento);

    altura = altura/8;
    printf("\nO valor da altura dividido por 8 e: %lf", altura);
    largura = largura/8;
    printf("\nO valor da largura dividido por 8 e: %lf", largura);
    comprimento = comprimento/8;
    printf("\nO valor do comprimento dividido por 8 e\n: %lf", comprimento);
  
    volume = altura*largura*comprimento;
    printf("\nO valor do volume do paralelepipedo sera : %lf", volume);

    return 0;
}

/*
    %lf ou %i INTEIRO
    %f       FLOAT
    %c       CARACTER
*/