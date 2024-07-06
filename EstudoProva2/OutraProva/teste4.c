#include <stdio.h>

struct s {
  int a;
  double b;
  double c;
};

double q04(struct s x) {
  int y = x.a;
  double z = 1.0;
  x.c = x.b;
  while (y > 0) {
    x.c = x.c * 10;
    z = z * 10;
    y = y - 1;
  }
  return ((int)x.c / z);
}

int main() {
  struct s x = {2, 0.12345};
  printf("\n%lf\n", q04(x));
  return 0;
}