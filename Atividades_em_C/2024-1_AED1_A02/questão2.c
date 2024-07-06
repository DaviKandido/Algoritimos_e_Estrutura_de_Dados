/*
    identificação: 

Avaliação: 2
Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/

//Questão 2

#include "io.h"

void q_02(char *p, char *q) {
    char *r = calloc(strlen(p) + strlen(q) + 1, sizeof(char));
    int k = 0;
    for (int x = 0; x < strlen(p); x++) {
        for (int y = 0; y < strlen(q); y++) {
            if (x == strlen(p) / 2) {
                r[k] = p[x];
                r[k + 1] = q[y];
                k = k + 2;
                if (k > 6) {
                    y = strlen(q);
                    x = strlen(p);
                }
            }
        }
    }
    printf("%s\n", r);
}

int main() {
    char *p = "queijo";
    char *q = "goiabada";
    q_02(p, q);
    return 0;
}


/*

        Resposta:

b) igioiiia 


*/