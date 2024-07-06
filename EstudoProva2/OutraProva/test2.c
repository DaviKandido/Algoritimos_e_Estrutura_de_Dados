#include <stdio.h>
#include <string.h>

int q02(char a[], int y, int x) {
    y = y - 1;
    if (x <= y && a[x] == a[y]) {
        return 1 + q02(a, y, x);
    } else if (x < y) {
        return q02(a, y, x);
    }
    return 0; // Adicionado para garantir que a função sempre retorne um valor
}

int main() {
    char a[] = "abacadara";

    // Chama a função q02 e imprime o resultado
    printf("\n%d\n", q02(a, strlen(a), 0));

    return 0;
}
