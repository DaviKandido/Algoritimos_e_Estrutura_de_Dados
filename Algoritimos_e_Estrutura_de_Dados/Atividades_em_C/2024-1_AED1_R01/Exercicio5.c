/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/



/*
    objetivo:
    
05.) DEFINIR função e procedimento para testes ( exercicio05 ) para:
- ler um valor inteiro (n) do teclado;
- ler outros (n) valores reais (x) do teclado, um por vez;
- calcular e mostrar a média dos valores menores que -17.25;
a média dos que estão entre -17.25 e 93.75, inclusive esses;
e a média dos maiores que 93.75. Dizer qual a maior média de todas.
DICA: Definir e usar função para calcular o maior dentre três valores.
O resultado NÃO deverá ser mostrado dentro da função.
Exemplos:
n = 10
x = { -15.25, -12.50, 0.0, 6.75, 20.50, 50.0, 70.25, 85.25, 92.50, 98.75 }
resposta1 = no_interavalo ( Inferior, Superior, valor );

*/


#include"io.h"

#include <stdio.h>

double mediaInferior(double *valores, int n) {
    double soma = 0.0;
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (valores[i] < -17.25) {
            soma += valores[i];
            contador++;
        }
    }

    if(contador == 0){
    return 0.0;
    }else{ 
    return soma / contador;
    }
}

double mediaEntre(double *valores, int n) {
    double soma = 0.0;
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (valores[i] >= -17.25 && valores[i] <= 93.75) {
            soma += valores[i];
            contador++;
        }
    }

    if(contador == 0){
    return 0.0;
    }else{ 
    return soma / contador;
    }
}

double mediaSuperior(double *valores, int n) {
    double soma = 0.0;
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (valores[i] > 93.75) {
            soma += valores[i];
            contador++;
        }
    }

    if(contador == 0){
    return 0.0;
    }else{ 
    return soma / contador;
    }
}

double maiorValor(double a, double b, double c) {
    double maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    return maior;
}

int main() {

        printf ( "\n" );             
        printf ( "%s\n", "1_aed1_recuperacao01 - 24/04/2024"       );
        printf ( "%s\n", "Matricula: 857859 Nome: Davi Candido de Almeida\n" );

    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    double valores[n];
    printf("Digite os %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%lf", &valores[i]);
    }

    double media_inferior = mediaInferior(valores, n);
    double media_entre = mediaEntre(valores, n);
    double media_superior = mediaSuperior(valores, n);

    double maior_media = maiorValor(media_inferior, media_entre, media_superior);

    printf("\nMedia dos valores menores que -17.25: %.2lf\n", media_inferior);
    printf("Media dos valores entre -17.25 e 93.75: %.2lf\n", media_entre);
    printf("Media dos valores maiores que 93.75: %.2lf\n", media_superior);
    printf("\nA maior media e: %.2lf\n", maior_media);

    return 0;
}


/*
        Resposta:


Digite o valor de n: 10
Digite os 10 valores:
Valor 1: -15.25
Valor 2: -12.50
Valor 3: 0.0
Valor 4: 6.75
Valor 5: 20.50
Valor 6: 50.0
Valor 7: 70.25
Valor 8: 85.25
Valor 9: 92.50
Valor 10: 98.75

Media dos valores menores que -17.25: 0.00   
Media dos valores entre -17.25 e 93.75: 33.06
Media dos valores maiores que 93.75: 98.75   

A maior media e: 98.75


*/