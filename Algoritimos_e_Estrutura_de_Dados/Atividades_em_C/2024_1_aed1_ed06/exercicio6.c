#include "io.h"

/*
06.) Incluir uma função recursiva (0616) para
calcular a soma dos inversos (1/x) dos primeiros valores pares positivos múltiplos do valor 6.
Testar essa função para quantidades diferentes.
Exemplo: valor = 5 => 1/6 + 1/12 + 1/18 + 1/24 + 1/30
*/


double multiplosde6inversos(int leituras, int contador, double soma){


    if (leituras >= contador) {


        printf ("\n1/%d = ", contador*6);
        printf ("%lf", 1.0/(contador*6));

        soma = soma + 1.0/(contador*6);

        multiplosde6inversos(leituras, contador+1.0, soma);

    } else {
        return (soma);

    }
}


int main (){
    

    int leituras = 0;
    double soma = 0.0;


    printf("Defina uma quantidade de leituras: ");
    scanf("%d", &leituras);
    

    printf("\nSao multiplodo de 6 inversos: ");

    soma = multiplosde6inversos(leituras, 1, soma);

    printf("\nO valor da soma sera: %lf", soma);

    
    return 0;

}

/*

Defina uma quantidade de leituras: 5

Sao multiplodo de 6 inversos: 
1/6 = 0.166667
1/12 = 0.083333
1/18 = 0.055556
1/24 = 0.041667
1/30 = 0.033333
O valor da soma sera: 0.380556

ou

Defina uma quantidade de leituras: 10

Sao multiplodo de 6 inversos: 
1/6 = 0.166667
1/12 = 0.083333
1/18 = 0.055556
1/24 = 0.041667
1/30 = 0.033333
1/36 = 0.027778
1/42 = 0.023810
1/48 = 0.020833
1/54 = 0.018519
1/60 = 0.016667
O valor da soma sera: 0.488161

*/