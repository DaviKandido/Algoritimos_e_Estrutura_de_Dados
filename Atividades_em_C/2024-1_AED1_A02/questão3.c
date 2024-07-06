/*
    identificação: 

Avaliação: 2
Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/

//Questão 3

#include "io.h"

void q_03(int a, int b, int c, char m[][3][8]) {
    for (int x = 0; x < a; x++) {
        for (int y = 0; y < b; y++) { 
            if ('A' < m[x][0][0] && m[x][0][0] < 'Z') {
                printf("%8s", m[x][2]);
                y = b; 
            }
        }
    }
    printf("\n");
}

int main() {
    char m[][3][8] = {{{"Cinza"  }, {"Gray"  }, {"Grau" }},
                      {{"Amarelo"}, {"Yellow"}, {"Gelb" }},
                      {{"Roxo"   }, {"Purple"}, {"Lila" }}};
    q_03(3, 3, 8, m);
    return 0;
}

/*

        Resposta:

 c)    Grau    Lila

*/