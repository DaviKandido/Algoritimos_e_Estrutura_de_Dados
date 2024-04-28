#include "io.h"

/*
09.) Incluir uma função recursiva (0619) para
calcular a quantidade de maiúsculas menores que 'L' em uma cadeia de caracteres.
Testar essa função para cadeias de diferentes tamanhos.
Exemplo: sequência = "P4LaVr@1"
*/


char caracteres(chars cadeia, int x, int soma){

    if ( cadeia[x] >= 65 && cadeia[x] <= 76 && x <= strlen(cadeia)){
        printf("\n%c",cadeia[x]);

        caracteres(cadeia, x+1, soma+1);

    } else if(cadeia[x] < 65 || cadeia[x] > 76 && x <= strlen(cadeia)){

        caracteres(cadeia, x+1, soma);

    } else{

        return soma;
    }
}


int main (){
    
    char cadeia[50];
    int soma = 0;

    printf("Insira uma cadeia de caracteres: ");
    scanf("%s", &cadeia);

    printf("Sao caracteres maiusculas menores que L ");
    soma = caracteres(cadeia, 0, soma);

    printf("\nTotalizando %d caracter(es) ", soma);

    
    return 0;

}

/*

Insira uma cadeia de caracteres: P4LaVr@1
Sao caracteres maiusculas menores que L 
L
Totalizando 1 caracter(es)

ou

Insira uma cadeia de caracteres: ABCDWYKZ
Sao caracteres maiusculas menores que L 
A
B
C
D
K
Totalizando 5 caracter(es)


*/