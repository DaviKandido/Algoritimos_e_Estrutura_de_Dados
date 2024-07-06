/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/



/*
    objetivo:
    
08.) DEFINIR função e um procedimento para testes ( exercicio08 ) para:
- ler três valores reais (x,y,z) do teclado, um por vez;
- dizer se esses valores estão em ordem crescente,
decrescente ou em nenhuma dessas ordens e, nesse caso, o menor e o maior.
DICA: Usar testes com maior número de comparações usando conectivos lógicos ( &&, || e ! ).
Definir funções para testar as ordens crescente e decrescente.
O resultado NÃO deverá ser mostrado dentro da função.
Exemplos:
x = 10, y = 20, z = 30
x = 30, y = 20, z = 10
x = 10, y = 10, z = 10
resposta1 = crescente ( x, y, z );
resposta2 = decrescente ( x, y, z );
resposta3 = maior ( x, y, z );
resposta4 = menor ( x, y, z )


*/


#include"io.h"
#include <stdio.h>

int crescente(int x, int y, int z) {
 
 if (x < y && x < z && y < z){
    return 1;
 }

 return 0;

}

int decrescente(int x, int y, int z) {

 if (x > y && x > z && y > z){
    return 1;
 }

 return 0;
}

int maior(int x, int y, int z) {

if (x > y && x > z){
    return x;
}

if (y > x && y > z){
    return y;
}

return z;

}

int menor(int x, int y, int z) {

if (x < y && x < z){
    return x;
}

if (y < x && y < z){
    return y;
}

return z;

}

int main() {

        printf ( "\n" );             
        printf ( "%s\n", "1_aed1_recuperacao01 - 24/04/2024"       );
        printf ( "%s\n", "Matricula: 857859 Nome: Davi Candido de Almeida\n" );


    int x, y, z;
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Digite o valor de z: ");
    scanf("%d", &z);

    if (crescente(x, y, z)) {
        printf("Os valores estao em ordem crescente.\n");
    } else if (decrescente(x, y, z)) {
        printf("Os valores estao em ordem decrescente.\n");
    } else {
        printf("Os valores nao estao em ordem crescente ou decrescente.\n");
        printf("\nMaior valor: %d\n", maior(x, y, z));
        printf("Menor valor: %d\n", menor(x, y, z));
    }

    return 0;
}





/*
        Resposta:


Digite o valor de x: 10
Digite o valor de y: 20
Digite o valor de z: 30
Os valores estao em ordem crescente.

    outra resposta:

Digite o valor de x: 30
Digite o valor de y: 20
Digite o valor de z: 10
Os valores estao em ordem decrescente.

    outra resposta:


Digite o valor de x: 10
Digite o valor de y: 10
Digite o valor de z: 10
Os valores nao estao em ordem crescente ou decrescente.

Maior valor: 10
Menor valor: 10





*/