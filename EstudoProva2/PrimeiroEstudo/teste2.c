#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

void q02(int x, int n, int a[]) {
    if (x < n / 2 && a[x] != a[n / 2 + x]) {
        a[0] = a[x];
        a[x] = a[n / 2 + x];
        a[n / 2 + x] = a[0];
        a[0] = 0;
        q02(x + 1, n, a);
    }
}

int main() {
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);

    q02(0, n, a);

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

/*
Alternativa: c)

0 5 6 7 4 1 2 3 

*/
 