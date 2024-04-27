/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/



#include "io.h"


int f_02 (int a, int b){

if (a%2 == 0 && b%2 ==0) return(f_02 (a/2, b/2));
else
if(a%2 != 0 && b%2==0) return(f_02 (b%a, b/2));
else
if(a%2 == 0 && b%2 != 0) return(f_02 (a/2, b%b));

return ( (b-1)%(a-1)/2);

}


int main(){

    printf("\nf_02 (35,75) = %d\n", f_02 (35,75));


 return 0;
}


/*

        Resposta:

f_02 (35,75) = 3

*/