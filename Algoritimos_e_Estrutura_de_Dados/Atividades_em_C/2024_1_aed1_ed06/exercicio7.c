#include "io.h"

/*
07.) Incluir um método recursivo (0617) para
ler uma cadeia de caracteres e chamar procedimento recursivo para
mostrar cada símbolo separadamente, um por linha.
Exemplo: sequência = "abcde"
*/


char caracteres(chars cadeia, int x){

    if (x <= strlen(cadeia)){
        printf("\n%c",cadeia[x]);

        caracteres(cadeia, x+1);

    }
}


int main (){
    

    char cadeia[50];

    printf("Insira uma cadeia de caracteres: ");
    scanf("%s", &cadeia);


    printf("Sao caracteres da cadeia: ");
    caracteres(cadeia, 0);


    
    return 0;

}

/*

Insira uma cadeia de caracteres: abcde
Sao caracteres da cadeia: 
a
b
c
d
e

ou

Insira uma cadeia de caracteres: DeRlKoP
Sao caracteres da cadeia: 
D
e
R
l
K
o
P

*/