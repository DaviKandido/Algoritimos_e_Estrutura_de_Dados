#include "io.h"

/*
10.) Incluir uma função recursiva (0620) para
calcular certo termo par da série de Fibonacci começando em 1.
Testar essa função para quantidades diferentes.
DICA: Separar o cálculo do termo e o teste para verificar se é par.
Exemplo: valor = 3 => 2+8+34
*/


int fibonacci(int quantidade2){

    if (quantidade2 <= 0 ){return 0;}
    if (quantidade2 == 1 ){return 1;}
    return fibonacci(quantidade2 - 1) + fibonacci(quantidade2 - 2);

    }

int fibonaccipares(int quantidade){

    int valor = 0;
    int controlador = 0;
    int continua = 0;


    while (controlador <= quantidade){

    if (fibonacci(continua) % 2 == 0){
    valor += fibonacci(continua);
    controlador++;
}

    continua++;
  }

    return valor;
}


int main (){
    

    int quantidade = 0;


    printf("Defina uma quantidade: ");
    scanf("%d", &quantidade);

    printf("\n A sua soma da sequencia de pares de fibonati sera: %d", fibonaccipares(quantidade));

    
    return 0;
    
}


/*

Defina uma quantidade: 3

 A sua soma da sequencia de pares de fibonati sera: 44

ou

Defina uma quantidade: 5

 A sua soma da sequencia de pares de fibonati sera: 798

ou

Defina uma quantidade: 10

 A sua soma da sequencia de pares de fibonati sera: 1089154
 
*/