#include <stdio.h>
#include <math.h>

int main() {

    double raio, area;
    double PI = 3.14;
    scanf("%lf", &raio);
    printf("\nO valor do raio do circulo e: %lf", raio);
    raio = raio/6;
    printf("\nO valor de um sexto do raio sera: %lf", raio);
    area = PI*(raio*raio);
    area = area/2;
    printf("\nO valor do semicirculo sera: %lf", area);



    return 0;
}

/*
    %d ou %i INTEIRO
    %f       FLOAT
    %c       CARACTER
*/
