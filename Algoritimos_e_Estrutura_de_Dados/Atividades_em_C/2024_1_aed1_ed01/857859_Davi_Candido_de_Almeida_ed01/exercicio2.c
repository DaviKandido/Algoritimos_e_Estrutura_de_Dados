#include <stdio.h>
#include <math.h>


int main() {

    double a;
    scanf("%lf", &a);
    printf("\nO valor incerido foi: %lf", a);
    a = a/2;
    printf("\nO valor de a agora sera: %lf", a);
    a *= a;
    printf("\nO valor da area do quadrado sera: %lf", a);
    a = a+a+a+a;
    printf("\nO valor do perimetro do quadrado sera: %lf", a);

    return 0;
}

/*
    %d ou %i INTEIRO
    %f       FLOAT
    %c       CARACTER
*/
