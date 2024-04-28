#include "io.h"

void multiplosde6decrescentes(int leituras){

    if (leituras >= 1) {

        printf ("\n%d", leituras*6);

        multiplosde6decrescentes(leituras-1);

    }

}

int main (void){
    

    int leituras = 0;


    printf("Defina uma quantidade de leituras: ");
    scanf("%d", &leituras);

    printf("\nSao multiplodo de 6 decrescentes: ");
    multiplosde6decrescentes(leituras);

    
    return 0;
}


/*

Defina uma quantidade de leituras: 5

Sao multiplodo de 6 decrescentes: 
30
24
18
12
6

ou

Defina uma quantidade de leituras: 10

Sao multiplodo de 6 decrescentes: 
60
54
48
42
36
30
24
18
12
6

*/