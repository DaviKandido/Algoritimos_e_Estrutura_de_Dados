#include <stdio.h>
#include <math.h>


int main() {

    double altura, base, area;
    scanf("%lf", &altura);
    printf("\nO valor da altura incerida foi: %lf", altura);
    scanf("%lf", &base);
    printf("\nO valor da base incerida foi: %lf", base);
    area = base*altura;
    printf("\nO valor da area e: %lf", area);
    altura = altura*2;
    area = base*altura;
    printf("\nO valor da area do triangulo com o dobro da altura sera: %lf", area);

    return 0;
}

/*
    %lf ou %i INTEIRO
    %f       FLOAT
    %c       CARACTER
*/
