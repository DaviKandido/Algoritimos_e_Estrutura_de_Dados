/*

08.) Incluir um método e uma função (0718) para
ler um valor inteiro do teclado, e até atingir essa quantidade, um valor por vez,
gravar o valor correspondente aos primeiros termos pares da série de Fibonacci.
Gravar em outro arquivo ("RESULTADO08.TXT") cada quantidade e seu resultado.
Exemplo: n = 5 => { 2, 8, 34, 144, 610 }

*/


#include "io.h"

void GravarFibonnaciPares ( int quantidade) { 

    FILE * arquivo = fopen ("RESULTADO08.TXT", "wt" );
        if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int fibonacci = 1; 
    int fibonaccianterior = 0; 
    int controle = 0;

    while (quantidade > 0 ){

    controle = fibonacci;
    fibonacci = fibonacci + fibonaccianterior; 
    fibonaccianterior = controle;

 
        if (fibonacci % 2 == 0){
        fprintf(arquivo, "%d\n", fibonacci);
        quantidade--;
        }
    }

    fclose ( arquivo );
}






int main (){

    int quantidade = 0;

    printf("Quantos numeros pares da sequencia de Fibonnaci devem ser gravados: ");
    scanf("%d", &quantidade);

    GravarFibonnaciPares(quantidade);

    return 0;
}



/*

Respostas em Resultado06.TXT: 

Quantos numeros pares da sequencia de Fibonnaci devem ser gravados: 5

2
8
34
144
610

ou 

Quantos numeros pares da sequencia de Fibonnaci devem ser gravados: 10

2
8
34
144
610
2584
10946
46368
196418
832040


*/