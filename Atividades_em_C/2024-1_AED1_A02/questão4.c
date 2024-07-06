/*
    identificação: 

Avaliação: 2
Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/

//Questão 4

#include "io.h"

void q_02(char* p) {
    int x = 0;
    for (int y = 0; y < strlen(p); y = y + 1) {
        if (y < strlen(p) - 1 && p[y] == 'a' || p[y] == 'o') {
            for (int z = y; z < strlen(p); z = z + 1) {
                p[z] = p[z + 1];
            }
        }
    }
    printf("%s\n", p);
}

int main() {
    char p[] = "achocolatado";
    q_02(p);
    return 0;
}

/*

        Resposta:

 d) chcltd

*/