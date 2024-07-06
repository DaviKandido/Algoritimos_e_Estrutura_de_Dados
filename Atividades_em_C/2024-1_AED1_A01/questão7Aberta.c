/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

/*

Questão:
07.) Questão Uma sequência de nucleotídeos pode conter {‘A’,‘C’,‘G’,‘T’,‘U’} 
repetidas vezes. Se tiver ‘T’ e nenhum ‘U’ será DNA (=2); 
se tiver ‘U’ e nenhum ‘T’ será RNA (=1); se não tiver ‘T’ e nem ‘U’ será indefinida (=0); 
qualquer outra combinação será erro (=-1). Definir uma função para testar uma sequência.

Exemplo: f_07(“TACAGATA”) = 2


*/



#include "io.h"
#include <stdio.h>


int f_07(char seq[]) {
    int T = 0;
    int U = 0;
    int outro = 0;

    for (int i = 0; seq[i] != '\0'; i++) {
        if (seq[i] == 'T') {
            T++;
        } else if (seq[i] == 'U') {
            U++;
        } else if (seq[i] != 'A' && seq[i] != 'C' && seq[i] != 'G') {
            outro++;
        }
    }

    if (T > 0 && U == 0 && outro == 0) {
        return 2; // DNA
    } else if (T == 0 && U > 0 && outro == 0) {
        return 1; // RNA
    } else if (T == 0 && U == 0 && outro == 0) {
        return 0; // Indefinido
    } else {
        return -1; // Erro
    }
}

int main() {
    char seq[] = "ACAGAA";

    printf("f_07('%s') = %d\n", seq, f_07(seq));


    return 0;
}


/*

        Resposta:


    char seq[] = "TACAGATA"

f_07('TACAGATA') = 2  // DNA


    char seq[] = "UACAGAUA";
 
f_07('UACAGAUA') = 1  // RNA


    char seq[] = "ACAGAA";

f_07('ACAGAA') = 0 // Indefinido


    char seq[] = "TACAGAUA";

f_07('TACAGAUA') = -1 // Erro
*/


