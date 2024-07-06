#include <stdio.h>
#include <math.h>

int main() {

    double lado, volume;
    scanf("%lf", &lado);
    printf("\nO valor do lado incerida foi: %lf", lado);
    volume = lado*lado*lado;
    printf("\nO valor do volume do cubo  e: %lf", volume);
    lado = lado*5;
    printf("\nO valor do lado 5 vezes maior agora e : %lf", lado);
    volume = lado*lado*lado;
    printf("\nE o valor do volume com o lado 5 vezes maior sera: %lf", volume);

    return 0;
}

/*
    %lf ou %i INTEIRO
    %f       FLOAT
    %c       CARACTER
*/