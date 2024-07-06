

#include <stddef.h>   
#include <stdarg.h>   
#include <ctype.h>     
#include <math.h>     
#include <time.h>
#include <stdio.h>      



int calcularFatorial(int Numero[], int quantidade){

int soma[quantidade];

    for(int x = 0; x < quantidade; x++){
     soma[x] = 1;
    }

    for(int x = 0; x < quantidade; x++){

        for(int y = Numero[x]; y >  0; y--){
        soma[x] *= y;
        }

    }

int resultado = 0;

    for(int x = 0; x < quantidade; x++){
     resultado += soma[x];
    }

    return resultado;
}



int main(){

int quantidade = 0;

scanf("%d", &quantidade);


int Numero[quantidade];


for(int x = 0; x < quantidade; x++){
scanf("%d", &Numero[x]);
}

printf("%d", calcularFatorial(Numero, quantidade));

}