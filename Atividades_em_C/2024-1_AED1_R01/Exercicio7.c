/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/



/*
    objetivo:
    
07.) DEFINIR função e um procedimento para testes ( exercicio07 ) para:
- ler dois valores reais (a) e (b) do teclado,
- ler outros valores reais do teclado, um por vez,
até que o último valor seja igual a zero,
e não considerá-lo para os cálculos.
- contar quantos desses valores estão dentro ou fora
do intervalo definido pelo intervalo aberto ]a:b[;
- para os valores fora do intervalo, calcular separadamente
as porcentagens dos que estiverem acima e abaixo do intervalo, nessa ordem.
DICA: Evitar divisão por zero mediante uso de alternativas duplas.
Reutilizar a função para testar o pertencimento (ou não) ao intervalo.
O resultado NÃO deverá ser mostrado dentro da função.
Exemplos:
a = 20
b = 60
x = { -20, -10, 1, 10, 20, 30, 60, 70, 80, 0 }
resposta = no_intervalo ( a, b, valor );

*/


#include"io.h"
#include <stdio.h>


void soma_cubo(int a, int b, int *x, int quantidade, int *dentro, int *forabaixo, int *foracima) {

    *dentro = 0;
    *forabaixo = 0;
    *foracima = 0;

    for (int rep = 0; rep < quantidade; rep++) {
        if (a > b) {
            printf("Erro: 'a' deve ser menor ou igual a 'b'.\n");
            return;
        }

        if (x[rep] > a && x[rep] < b) {
            (*dentro)++;
        }

        if (x[rep] < a) {
            (*forabaixo)++;
        }

        if (x[rep] > b) {
            (*foracima)++;
        }
    }
}

int main() {

        printf ( "\n" );             
        printf ( "%s\n", "1_aed1_recuperacao01 - 24/04/2024"       );
        printf ( "%s\n", "Matricula: 857859 Nome: Davi Candido de Almeida\n" );


    int a = 0;
    int b = 0;
    int repeticao = 0;
    int x[50];

    int dentro = 0;
    int forabaixo = 0;
    int foracima = 0;

    printf("Defina o valor de a: ");
    scanf("%d", &a);

    printf("Defina o valor de b: ");
    scanf("%d", &b);

    printf("Digite os valores (0 para parar):\n");
    while (1) {
        printf("Digite outro valor: ");
        scanf("%d", &x[repeticao]);
        if (x[repeticao] == 0) {
            break;
        }
        repeticao++;
    }

    soma_cubo(a, b, x, repeticao, &dentro, &forabaixo, &foracima);

    printf("\nAcima do intervalo: %d%%\n", (foracima * 100) / repeticao);
    printf("Abaixo do intervalo: %d%%\n", (forabaixo * 100) / repeticao);
    printf("Dentro do intervalo: %d%%\n", (dentro * 100) / repeticao);

    return 0;
}




/*
        Resposta:


Defina o valor de a: 20
Defina o valor de b: 60
Digite os valores (0 para parar):
Digite outro valor: -20
Digite outro valor: -10
Digite outro valor: 1
Digite outro valor: 10
Digite outro valor: 20
Digite outro valor: 30
Digite outro valor: 60
Digite outro valor: 70
Digite outro valor: 80
Digite outro valor: 0

Acima do intervalo: 22%
Abaixo do intervalo: 44%
Dentro do intervalo: 11%
*/