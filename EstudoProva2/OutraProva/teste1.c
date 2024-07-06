#include <stdio.h>

void q01(int a[], int n, int x, int y) {
    if (x < y) {
        a[x] = a[x] + a[y];
        a[y] = a[x] - a[y];
        a[x] = a[x] - a[y];
        q01(a, n, x + 1, y - 1);
    }
}

int main() {
    int n = 7;
    int a[] = {2, 4, 6, 7, 5, 3, 1};

    // Chama a função q01
    q01(a, n, 0, n - 1);

    // Imprime o array após a execução da função
    printf("Array apos q01: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
