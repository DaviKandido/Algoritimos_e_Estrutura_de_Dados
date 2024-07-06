/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/



/*
    objetivo:
    
09.) DEFINIR função e um procedimento para testes ( exercicio09 ) para:
- ler três caracteres (x,y,z) do teclado, um por vez;
- dizer se esses valores estão em ordem crescente,
decrescente ou em nenhuma dessas ordens.
DICA: Usar uma função lógica para comparar os códigos inteiros de cada caractere,
e dizer se o segundo sucede o primeiro em ordem alfabética.
Definir funções para testar as ordens alfabéticas crescente e decrescente.
O resultado NÃO deverá ser mostrado dentro da função.
Exemplos:
x = '1', y = '2', z = '3'
x = '3', y = '2', z = '1'
x = '1', y = '1', z = '1'
resposta1 = crescente ( x, y, z );
resposta2 = decrescente ( x, y, z );
resposta3 = sucessor ( x, y );


*/


#include"io.h"

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

int sucessor(int x, int y, int z) {

if (x + 1 == y){
    return 1;
}

return 0;
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
    }

    if (sucessor(x, y, z)) {
    
    printf("\n %d e sucessor de: %d\n", x, y);
    }

    return 0;
}





/*
        Resposta:


Digite o valor de x: 1
Digite o valor de y: 2
Digite o valor de z: 3
Os valores estao em ordem crescente.

 1 e sucessor de: 2

    outra resposta:

Digite o valor de x: 3
Digite o valor de y: 2
Digite o valor de z: 1
Os valores estao em ordem decrescente.

    outra resposta:


Digite o valor de x: 7
Digite o valor de y: 8
Digite o valor de z: 5
Os valores nao estao em ordem crescente ou decrescente.

 7 e sucessor de: 8





*/