/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/


#include "io.h"


int f_01 (char p[]){

    int x = 0, y = 0;
    bool r = false, s =false, t=false;
    bool u =false, v=false, w=false;
    
    for (x=0; x < strlen(p); x=x+1){
        r = ('a' <= p[x] && p[x] <= 'z');
        s = ('A' <= p[x] && p[x] <= 'Z');
        t = ('0' <= p[x] && p[x] <= '9');
        u = (r || s) && !w; v = !u && t; w=!v;
        if (u) y=y+1; else if (v)  y=y-1;   }
return (y);

}


int main(){

    printf("%d", f_01 ("5aP4+O_8r4nKO"));


 return 0;
}


/*

        Resposta:

-1


*/