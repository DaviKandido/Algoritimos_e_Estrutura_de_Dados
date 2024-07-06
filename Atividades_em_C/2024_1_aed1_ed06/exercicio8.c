#include "io.h"

/*
08.) Incluir uma função recursiva (0618) para
contar os dígitos com valores pares em uma cadeia de caracteres.
Testar essa função para cadeias de diferentes tamanhos.
Exemplo: sequência = "P4LaVr@1"
*/


char caracteres(chars cadeia, int x, int soma){

    if ( cadeia[x] % 2 == 0 && x <= strlen(cadeia)){
        printf("\n%c",cadeia[x]);

        caracteres(cadeia, x+1, soma+1);

    } else if(cadeia[x] % 2 != 0 && x <= strlen(cadeia)){

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

    printf("Sao caracteres pares da cadeia: ");
    soma = caracteres(cadeia, 0, soma);

    printf("\nE a quantidade de caracteres pares e: %d ", soma-1);

    
    return 0;

}

/*

Insira uma cadeia de caracteres: P4LaVr@1
Sao caracteres pares da cadeia: 
P
4
L
V
r
@

E a quantidade de caracteres pares e: 6

ou

Insira uma cadeia de caracteres: abcdefghijklmnopqrstuwyv
Sao caracteres pares da cadeia: 
b
d
f
h
j
l
n
p
r
t
v

E a quantidade de caracteres pares e: 11

*/