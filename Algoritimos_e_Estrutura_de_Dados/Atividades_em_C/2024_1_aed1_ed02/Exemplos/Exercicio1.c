#include <stdio.h>
#include "io.h"
#include <math.h>
#include <stdbool.h>

void metodo1(){

    int a;
    int s;
    scanf("%d", &a);
    s = a%2;
    printf ("O resto de %d por 2 e igual a %d\n", a,s);

    if(s==0){
        printf("\nPortanto o numero e par");
    } else{
        printf("\nPortant o numero e impar");
    }

}

int main(){
    metodo1();

     return(0);
}