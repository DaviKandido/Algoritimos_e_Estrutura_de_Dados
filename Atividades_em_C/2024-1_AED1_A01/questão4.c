/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/



#include "io.h"


void p_04 (void)                                               
{ int x= 1, y=1, v=0, w=0, m=2, n=0;
printf(" \nn = "); scanf("%d", &n); getchar();
printf(" %d %d", x, y);
while(m<n) { v=x+y; m=m+1;printf(" %d", v);
if (m<n-1) {w=x+y+v+1; m=m+1; printf(" %d", w);
}
 x = v; y = w; }
}


int main(){

p_04 ();

 return 0;
}


/*

        Resposta:


n=5

1 1 2 5 7

    outro exemplo:

n=10

 1 1 2 5 7 15 22 45 67 112
*/