#include <stdio.h>
#include <math.h>


int main() {

    int a, b, area;
    scanf("%d", &a);
    printf("\nO valor de a incerido foi: %d", a);
    scanf("%d", &b);
    printf("\nO valor de b incerido foi: %d", b);
    area = a*b;
    printf("\nO valor da area do quadrado e: %d", area);
    area = area*6;
    printf("\nO valor da area vezes 6 sera: %d", area);

    return 0;
}


/*
    %d ou %i INTEIRO
    %f       FLOAT
    %c       CARACTER
*/
