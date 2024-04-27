/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/



/*
    objetivo:
    
06.) DEFINIR função e um procedimento para testes ( exercicio06 ) para:
- ler dois valores inteiros (a) e (b) do teclado,
- ler outros valores inteiros do teclado, um por vez,
até que o último valor seja igual a (-1).
- para cada valor lido que estiver no intervalo aberto ]a:b[;
calcular e mostrar a soma dos cubos dos inversos (1/x3) dos ímpares.
DICA: Evitar divisão por zero mediante uso de alternativa dupla.
Definir e usar funções para testar o pertencimento ao intervalo,
e para calcular a soma.
O resultado NÃO deverá ser mostrado dentro da função.
Exemplos:
a = 20
b = 60
x = { -20, -11, 0, 1, 10, 21, 36, 51, 70, 80, -1 }
resposta = soma_cubos ( a, b );

*/


#include"io.h"
#include <stdio.h>

double soma_cubo(int a, int b, int *x, int quantidade) {
    double soma = 0;

    for (int rep = 0; rep < quantidade; rep++) {
        if (a > b) {
            printf("Erro: 'a' deve ser menor ou igual a 'b'.\n");
            return 0.0;
        }

        if (x[rep] > a && x[rep] < b) {
            soma += 1.0 / (x[rep] * x[rep] * x[rep]);
        }
    }

    return soma;
}



int main() {

        printf ( "\n" );             
        printf ( "%s\n", "1_aed1_recuperacao01 - 24/04/2024"       );
        printf ( "%s\n", "Matricula: 857859 Nome: Davi Candido de Almeida\n" );


    int a = 0;
    int b = 0;
    int repeticao = 0;
    int x[50];

    double resposta = 0;

    printf("Defina o valor de a: ");
    scanf("%d", &a);

    printf("Defina o valor de b: ");
    scanf("%d", &b);

    do {
        printf("Digite outro valor (-1 para parar): ");
        scanf("%d", &x[repeticao]);
        repeticao++;
    } while (x[repeticao - 1] != -1 );

    resposta = soma_cubo(a, b, x, repeticao - 1);

    printf("\nA soma dos cubos dos inversos e: %lf\n", resposta);

    return 0;
}



/*
        Resposta:


Defina o valor de a: 20
Defina o valor de b: 60
Digite outro valor (-1 para parar): -20
Digite outro valor (-1 para parar): -11
Digite outro valor (-1 para parar): 0 
Digite outro valor (-1 para parar): 1
Digite outro valor (-1 para parar): 10
Digite outro valor (-1 para parar): 21
Digite outro valor (-1 para parar): 36
Digite outro valor (-1 para parar): 51
Digite outro valor (-1 para parar): 70
Digite outro valor (-1 para parar): 80
Digite outro valor (-1 para parar): -1

A soma dos cubos dos inversos e: 0.000137

ou 


Defina o valor de a: 60
Defina o valor de b: 20
Digite outro valor (-1 para parar): 64 
Digite outro valor (-1 para parar): -1
Erro: 'a' deve ser menor ou igual a 'b'.

A soma dos cubos dos inversos e: 0.000000
*/