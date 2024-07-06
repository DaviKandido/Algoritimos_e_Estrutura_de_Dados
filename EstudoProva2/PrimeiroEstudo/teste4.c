#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
struct s {
    int nc;
    char *c;
} a;

int x = 0, y = 0;

void q04(struct s c) {
    int x = c.nc - 1;
    if (x >= 0) {
        c.c = calloc(c.nc + 1, sizeof(char));
        while (x >= 0) {
            if (x % 2 != 0 && x != c.nc - 1) c.c[x] = '.';
            else if (x % 2 == 0) c.c[x] = '*';
            x = x - 1;
        }
        if (c.nc % 2 == 0) {
            printf("\n%d %s", c.nc, c.c);
        }
    }
}

for (x = 0; x < 9; x = x + 1) {
    a.nc = x;
    q04(a);
}


}
    
/*
Alternativa: a)

2 *
4 *.*
6 *.*.*
8 *.*.*.*

*/
