#include <stdio.h>

void potenciasde4(int a) {
    int potencia4 = 1;
    int repeticoes = a;
    int repeticoes2 = a;

    printf("\nSao %d numeros potencia de 4 em ordem decrescente: ", a);

    while (repeticoes > 0) {

    while(repeticoes2 > 0){
        potencia4 *= 4;
        repeticoes2--;
    }
        printf("\n%d ", potencia4);

        potencia4 = 1;
        repeticoes--;
        repeticoes2 = repeticoes;
    }
    printf("\n");
}

int main() {
    int leituras = 0;

    printf("Defina uma quantidade de leituras: ");
    scanf("%d", &leituras);

    potenciasde4(leituras);

    return 0;
}


/*
Defina uma quantidade de leituras: 5

Sao 5 numeros potencia de 4 em ordem decrescente: 
1024 
256 
64 
16 
4 


*/