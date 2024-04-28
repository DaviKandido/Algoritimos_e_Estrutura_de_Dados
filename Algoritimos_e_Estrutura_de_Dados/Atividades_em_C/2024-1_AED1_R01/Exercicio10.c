/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/



/*
    objetivo:
    
10.) DEFINIR função e um procedimento para testes ( exercicio10 ) para:
- ler três cadeias de caracteres (x,y,z) do teclado, uma por vez;
- dizer se essas cadeias estão em ordem alfabética crescente,
decrescente ou em nenhuma dessas ordens e, nesse caso, a menor e a maior.
DICA: Usar strcmp( ) da biblioteca <string.h> e comparar o resultado com zero.
A função para a comparação poderá retornar um dentre
os seguintes resultados:
O resultado NÃO deverá ser mostrado dentro da função.
negativo, se a primeira cadeia preceder a segunda (resultado menor que zero);
nulo , se as cadeias forem iguais (resultado igual a zero);
positivo , se a primeira cadeia suceder a segunda (resultado maior que zero).
Exemplo:
char s1 [ ] = “abc”;
char s2 [ ] = “ABC”;
if ( strcmp ( s1, s2 ) != 0 )
{
printf ( "%s\n", “diferentes” );
} // end if

*/


#include"io.h"
#include <stdio.h>

int crescente(char *x, char *y, char *z) {
   if (strcmp(x, y) < 0 && strcmp(y, z) < 0){
    return 1;
   }
   return 0;
}

int decrescente(char *x, char *y, char *z) {
    if (strcmp(x, y) > 0 && strcmp(y, z) > 0){
    return 1;
   }
   return 0;
}


void maior_menor(char *x, char *y, char *z, char *menor, char *maior) {
    if (strcmp(x, y) <= 0 && strcmp(x, z) <= 0) {
        strcpy(menor, x);
    } else if (strcmp(y, x) <= 0 && strcmp(y, z) <= 0) {
        strcpy(menor, y);
    } else {
        strcpy(menor, z);
    }

    if (strcmp(x, y) >= 0 && strcmp(x, z) >= 0) {
        strcpy(maior, x);
    } else if (strcmp(y, x) >= 0 && strcmp(y, z) >= 0) {
        strcpy(maior, y);
    } else {
        strcpy(maior, z);
    }
}

int main() {

        printf ( "\n" );             
        printf ( "%s\n", "1_aed1_recuperacao01 - 24/04/2024"       );
        printf ( "%s\n", "Matricula: 857859 Nome: Davi Candido de Almeida\n" );


    char x[100], y[100], z[100];
    char menor[100], maior[100];

    printf("Digite a primeira cadeia: ");
    scanf("%s", x);
    printf("Digite a segunda cadeia: ");
    scanf("%s", y);
    printf("Digite a terceira cadeia: ");
    scanf("%s", z);

    if (crescente(x, y, z)) {
        printf("As cadeias estao em ordem alfabetica crescente.\n");
    } else if (decrescente(x, y, z)) {
        printf("As cadeias estao em ordem alfabetica decrescente.\n");
    } else {
        printf("As cadeias nao estao em ordem alfabetica crescente ou decrescente.\n");
    }
        maior_menor(x, y, z, menor, maior);
        printf("Menor cadeia: %s\n", menor);
        printf("Maior cadeia: %s\n", maior);

    return 0;
}





/*
        Resposta:

Digite a primeira cadeia: abc
Digite a segunda cadeia: YZW
Digite a terceira cadeia: ABC
As cadeias estao em ordem alfabetica decrescente.
Menor cadeia: ABC
Maior cadeia: abc

    outra resposta:

Digite a primeira cadeia: ABC
Digite a segunda cadeia: YWZ
Digite a terceira cadeia: abc
As cadeias estao em ordem alfabetica crescente.
Menor cadeia: ABC
Maior cadeia: abc

    outra resposta:


Digite a primeira cadeia: TWZ
Digite a segunda cadeia: abc
Digite a terceira cadeia: ABC
As cadeias nao estao em ordem alfabetica crescente ou decrescente.
Menor cadeia: ABC
Maior cadeia: abc





*/