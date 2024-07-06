/*
    identificação: 

Avaliação: 2
Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/

/*

Questão:

06) Questão 6:

Isopsefia (Em grego, "isos" significa "igual" e "psephos" significa "pedregulho"). 
A palavra grega indica a antiga prática de juntar os valores numéricos de letras de uma palavra para formar um único número. 
As somas com dois algarismos, exceto 11 e 22, deverão ter seus algarismos somados também.

1	2	3	4	5	6	7	8	9
A	B	C	D	E	F	G	H	I
J	K	L	M	N	O	P	Q	R
S	T	U	V	W	X	Y	Z	

Exemplo:

"MARIA DA SILVA" = 4 + 1 + 9 + 9 + 1 + 4 + 1 + 1 + 9 + 3 + 4 + 1 = 47 = 4 + 7 = 11
"ZIRALDO" = 8 + 9 + 9 + 1 + 3 + 4 + 6 = 40 = 4 + 0 = 4
Definir uma função para receber um nome e calcular o número correspondente.


*/

#include "io.h"


int isopsefia(char nome[]) {

    int soma = 0;
    int resultado = 0;
    int quantidade = strlen(nome);

    for(int i = 0; i < quantidade; i++){
        if( nome[i]== 'A' || nome[i] == 'J' || nome[i] ==  'S'){ soma += 1;}
        if( nome[i]== 'B' || nome[i] == 'K' || nome[i] ==  'T'){ soma += 2;}
        if( nome[i]== 'C' || nome[i] == 'L' || nome[i] ==  'U'){ soma += 3;}
        if( nome[i]== 'D' || nome[i] == 'M' || nome[i] ==  'V'){ soma += 4;}
        if( nome[i]== 'E' || nome[i] == 'N' || nome[i] ==  'W'){ soma += 5;}
        if( nome[i]== 'F' || nome[i] == 'O' || nome[i] ==  'X'){ soma += 6;}
        if( nome[i]== 'G' || nome[i] == 'P' || nome[i] ==  'Y'){ soma += 7;}
        if( nome[i]== 'H' || nome[i] == 'Q' || nome[i] ==  'Z'){ soma += 8;}
        if( nome[i]== 'I' || nome[i] == 'R'                   ){ soma += 9;}
    }
    printf("A soma e: %d\n", soma);

    resultado = resultadoSoma(soma, resultado);

return resultado;
}

int resultadoSoma(int soma, int resultado){

        if (soma != 11 && soma != 22){
            if (soma / 100 == 0){
                resultado = (soma % 10) + (soma % 10);
            } else {
                resultado = (soma / 100) + ((soma / 10) % 10)  + ((soma % 100)%10)  ;
            }
        return resultado;
    } else{
        return soma;
    }
}

int main() {

    char nome[50];
    int resultado = 0;

    printf("Dedina um nome para a soma: ");
    gets(nome);

    resultado = isopsefia(nome);

    printf("O resultado e: %d", resultado);

    return 0;
}

/*

        Respostas:

Dedina um nome para a soma: ZIRALDO
A soma e: 40
O resultado e: 4

Dedina um nome para a soma: MARIA DA SILVA
A soma e: 47
O resultado e: 11

Dedina um nome para a soma: MBMA
A soma e: 11
O resultado e: 11

Dedina um nome para a soma: MARIA DA SILVA COSTA MARFIM ALMEIDA SOUZA TEIXEIRA
A soma e: 185
O resultado e: 14

*/