#include <stdio.h>
#include <math.h>


int main() {

    double lado, area, altura, perimetro;
    scanf("%lf", &lado);
    printf("\nO valor do lado incerida foi: %lf", lado);
    lado = lado*3;
    area *= lado;
    area = lado/2;
    printf("\nO valor da area do triangulo equilatero e: %lf", area);
    altura = lado*1.732/2;
    printf("\nO valor da altura do triangulo equilatero e: %lf", altura);
    perimetro = lado+lado+lado;
    printf("\nO valor do perimetro do trinagulo com o dobro da altura sera: %lf", perimetro);

    return 0;
}

/*
    %lf ou %i INTEIRO
    %f       FLOAT
    %c       CARACTER
*/