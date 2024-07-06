#include <stdio.h>

void q03(int n, int a[][3]) {
  int x, y, z;
  for (x = 0; x < n; x++) {
    for (y = x + 1; y < n; y++) {
      if (a[x][y] < a[y][x]) {
        a[x][y] = a[x][y] + a[y][x];
      }
    }
  }
}

int main() {
  int a[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int n = 3;
  q03(n, a);
  printf("Saida esperada:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}