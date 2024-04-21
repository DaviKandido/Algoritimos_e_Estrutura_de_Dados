#include <stdio.h>
#include <math.h>

int main() {

    double raio, volume;
    double PI = 3.14;
    scanf("%lf", &raio);
    printf("\nO valor do raio da esfera e: %lf", raio);
    raio = (3*raio)/4;
    printf("\nO valor de 3/4 do raio sera: %lf", raio);
    volume = (4*PI*raio*raio*raio)/4;
    printf("\nO valor do volume da esfera com 3/4 do raio sera: %lf", volume);



    return 0;
}

/*
    %d ou %i INTEIRO
    %f       FLOAT
    %c       CARACTER
*/
