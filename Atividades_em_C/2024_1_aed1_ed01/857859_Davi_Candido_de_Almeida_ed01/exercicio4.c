#include <stdio.h>
#include <math.h>

int main() {

    double a, b, area;
    scanf("%lf", &a);
    printf("\nO valor de a incerido foi: %lf", a);
    scanf("%lf", &b);
    printf("\nO valor de b incerido foi: %lf", b);
    a = a/4;
    b = b/4;
    printf("\nO valor de a/4 agora sera: %lf", a);
    printf("\nO valor de b/4 agora sera: %lf", b);
    area = a*b;
    printf("\nO valor da area do quadrado sera: %lf", area);

    return 0;
}

/*
    %lf ou %i INTEIRO
    %lf       FLOAT
    %c       CARACTER
*/
