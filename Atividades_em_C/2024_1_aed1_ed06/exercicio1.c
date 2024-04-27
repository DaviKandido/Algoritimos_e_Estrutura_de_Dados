#include "io.h"

void multiplosde6(int leituras, int contador){

    if (leituras >= contador) {

        printf ("\n%d", contador*6);

        multiplosde6(leituras, contador+1);

    }



}



int main (void){
    

    int leituras = 0;


    printf("Defina uma quantidade de leituras: ");
    scanf("%d", &leituras);

    printf("\nSao multiplodo de 6: ");
    multiplosde6(leituras, 1);

    return 0;
}


/*
Defina uma quantidade de leituras: 5

Sao multiplodo de 6: 
6
12
18
24
30

ou

Defina uma quantidade de leituras: 10

Sao multiplodo de 6: 
6
12
18
24
30
36
42
48
54
60


*/