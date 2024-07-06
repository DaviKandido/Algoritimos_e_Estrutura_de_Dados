#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int q01(char *text) {
  int result = 1;
  int x = strlen(text) / 2, y = 0;
  if (text[x] == '-') x = x - 1;
  while (y < x && text[y] == text[x + y + 2]) y = y + 1;
  return (y - x);
}


int main(){

    char text[10] = "teco-teco";

    int p = strlen(text) / 2;

    printf("\nstrlen: %d\n", p);

    printf("%d\n", q01(text));

//Alternativa: c)
/*

c) 0

*/
}   