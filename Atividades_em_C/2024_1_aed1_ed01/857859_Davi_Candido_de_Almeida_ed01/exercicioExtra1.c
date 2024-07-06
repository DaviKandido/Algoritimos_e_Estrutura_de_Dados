#include <stdio.h>
#include <math.h>

/*
E1.) Fazer um programa (01E1) para:
- definir e ler um valor real do teclado;
- supor que esse valor informe a área de uma circunferência,
- calcular e mostrar o raio um sétimo dessa área.
Exemplo: valor = 5.0
*/

#include <stdio.h>
#include <math.h>

int main() {
    double areaTotal, areaSetimaParte, raio;
    const double PI = 3.14;

    printf("Digite o valor da area da circunferencia: ");
    scanf("%lf", &areaTotal);

    areaSetimaParte = areaTotal / 7.0;

    raio = sqrt(areaSetimaParte / PI);

    printf("O valor do raio para um setimo da area e: %lf\n", raio);

    return 0;
}



/*
    Digite o valor da area da circunferencia: 10
    O valor do raio para um setimo da area e: 0.674507

    %d ou %i INTEIRO
    %f       FLOAT
    %c       CARACTER
*/
