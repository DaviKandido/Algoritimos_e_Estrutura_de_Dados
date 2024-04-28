#include <stdio.h>
#include <math.h>

int main() {

    int a;
    scanf("%d", &a);
    printf("\nO valor incerido foi: %d", a);
    a = a*3;
    printf("\nO valor de a agora e: %d", a);
    a *= a;
    printf("\nO valor da area do quadrado sera: %d", a);


    return 0;
}

/*
    %d ou %i INTEIRO
    %f       FLOAT
    %c       CARACTER
*/
