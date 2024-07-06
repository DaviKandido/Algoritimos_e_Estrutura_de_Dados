#include <stdio.h>
#include <math.h>

/*
E2.) Fazer um programa (01E2) para:
- definir e ler um valor real do teclado;
- supor que esse valor represente o volume de uma esfera;
- calcular e mostrar o raio de cinco oitavos do volume da esfera e a área de sua superfície.
DICA: Usar constantes reais em expressões que envolvam valores reais.
Exemplo: valor = 5.0
*/


int main() {
    double volumeTotal, volumeCincoOitavos, raio, areaSuperficie;
    const double PI = 3.14;

    printf("Digite o valor do volume da esfera: ");
    scanf("%lf", &volumeTotal);

    volumeCincoOitavos = (5.0 / 8.0) * volumeTotal;

    raio = cbrt((3.0 * volumeCincoOitavos) / (4.0 * PI));

    areaSuperficie = 4.0 * PI * raio * raio;

    printf("O valor do raio de cinco oitavos do volume e: %lf\n", raio);
    printf("A area da superficie da esfera e: %lf\n", areaSuperficie);

    return 0;
}


/*
    Digite o valor do volume da esfera: 100
    O valor do raio de cinco oitavos do volume e: 2.462279
    A area da superficie da esfera e: 76.148975

    %d ou %i INTEIRO
    %f       FLOAT
    %c       CARACTER
*/
