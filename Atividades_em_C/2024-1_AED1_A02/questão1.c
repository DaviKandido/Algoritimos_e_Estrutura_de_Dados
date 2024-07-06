/*
    identificação: 

Avaliação: 2
Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/

//Questão 1

#include "io.h"

int q_01(int m, int n, int a[]) {
    int x = 0;
    if (0 < m && m < n - 1 && a[m - 1] - a[m] < 0 && a[m] - a[m + 1] > 0) {
        x = 1;
    }
    if (0 < m && m < n) {
        if (x >= 0) {
            x = x + q_01(m - 1, n, a);
        } else {
            x = -m;
        }
    }
    return x;
}

int main() {
    int array[] = {2, 4, 3, 9, 7, 6};
    int n = 6;
    printf("%d\n", q_01(n - 1, n, array));
    return 0;
}


/*

        Resposta:

a) 2


*/