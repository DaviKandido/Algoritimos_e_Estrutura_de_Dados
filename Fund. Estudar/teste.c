#include <stdio.h>

int calcularmovimentos(int x1, int y1, int x2, int y2) {
  if (x1 == x2 && y1 == y2) {
    return 0;
  }

  int diferenca_x = x1 - x2;
  int diferenca_y = y1 - y2;

  // Se a rainha está na mesma linha, coluna ou diagonal, ela pode se mover em um único passo.
  if (x1 == x2 || y1 == y2 || abs(diferenca_x) == abs(diferenca_y)) {
    return 1;
  }

  // Caso contrário, calcule o número de movimentos como o maior valor entre as diferenças em x e y.
  if (diferenca_x > 0) {
    diferenca_x = -diferenca_x;
  }

  if (diferenca_y > 0) {
    diferenca_y = -diferenca_y;
  }

  return (diferenca_x > diferenca_y) ? diferenca_x : diferenca_y;
}

int main() {
  int x1, y1, x2, y2;

  // Obter as coordenadas da posição inicial e final da rainha.
  printf("Digite as coordenadas da posição inicial da rainha (x1 y1): ");
  scanf("%d %d", &x1, &y1);

  printf("Digite as coordenadas da posição final da rainha (x2 y2): ");
  scanf("%d %d", &x2, &y2);

  // Calcular o número mínimo de movimentos.
  int movimentos = calcularmovimentos(x1, y1, x2, y2);

  // Imprimir o resultado.
  printf("Número mínimo de movimentos: %d\n", movimentos);

  return 0;
}