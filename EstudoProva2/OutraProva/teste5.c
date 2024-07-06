#include <stdio.h>

void q05(int *a, int *b, int *c) {
  int d = *a, e = *b;

  // Se d > e, troca os valores de a e b
  if (d > e) {
    *a = e;
    *b = d;
  }

  // Se d > *c, troca os valores de b e c
  if (d > *c) {
    *b = *c;
    *c = d;
  }

  // Se *b > *c, troca os valores de b e c
  if (*b > *c) {
    *b = *c;
    *c = *b;
  }
}

int main() {
  int x = 3, y = 1, z = 2;
  q05(&x, &y, &z);
  printf("\n%d %d %d\n", x, y, z);
  return 0;
}