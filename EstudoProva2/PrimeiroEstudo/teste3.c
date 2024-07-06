#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void q03(int m, int n, int a[][n]) {
  int v = 0, w = 1, x = 1, y = 0;
  double z = 0.0;
  while (x < n) {
    y = 0; v = a[x][y];
    while (y < n) {
      a[x][y] = -v * a[x-w][y] + a[x][y];
      y = y + 1;
    }
    x = x + 1; w = w + 1;
  }
}

int main(){

    int a[][3] = {{1,2,3},{4,5,6},{7,8,9}};


    q03(3,3, a);


    for (int m = 0; m < 3; m++)
    {
      for(int n = 0; n <3; n++){
        printf("%d \t", a[m][n]);
      }
      printf("\n");
    }
    
/*
Alternativa: a)

1       2       3 
0       -3      -6 
0       -6      -12 

*/

}   