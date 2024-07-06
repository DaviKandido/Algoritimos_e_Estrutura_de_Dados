/*
    identificação: 

Avaliação: 2
Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/

//Questão 5

#include "io.h"


char* q_05(int x, int y, char* p) {
    char c = '_';
    if (0 <= x && x < strlen(p) && 0 <= y && y < strlen(p)) {
        c = p[x];
        p[x] = p[y];
        p[y] = c;
    }
    return p;
}

int main() {
    char p[] = "alegria"; 

    strcpy(p, q_05(1, 4, q_05(2, 3, p))); 
    printf("[%s]\n", p);

    strcpy(p, q_05(2, 3, q_05(1, 4, p))); 
    printf("[%s]\n", p);

    return 0;
}

/*

        Resposta:

 b) [argelia] [alegria]

*/