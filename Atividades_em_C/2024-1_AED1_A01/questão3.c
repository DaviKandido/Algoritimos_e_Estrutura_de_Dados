/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/



#include "io.h"


int f_03 (int a, int b){                                                
for (int x = 1; x <= 5; x=x+1)                      //3
{ printf("\nx= %d", 2*x+1); }                       //5
printf("\n");                                       //7   
for ( int x = a; x <= b; x=x+3)                     //9
{ printf("\nx= %d", ((2*x)/3)+1); /*c*/ }           //11

}


int main(){

f_03 (3,5*3);


 return 0;
}


/*

        Resposta:


        a = 3; b = 5*3; c = ((2*x)/3)+1)

x= 3
x= 5
x= 7
x= 9
x= 11

x= 3
x= 5
x= 7
x= 9
x= 11

*/