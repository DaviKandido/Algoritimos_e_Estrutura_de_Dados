/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/



#include "io.h"


int f_05 (char *s)
{                       

 int x = 0, y = strlen(s)-1;
 while (x<=y && s[x]==s[y]) {x=x+1; y=y-1;}
 return (x-y + s[x]-s[y]);

}


int main(){

 

printf("f_05 ('14641') = %d", f_05 ("14641"));


 return 0;
}


/*

        Resposta:


f_05 ('14641') = 2

*/