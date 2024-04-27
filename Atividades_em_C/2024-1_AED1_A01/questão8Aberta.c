/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

/*

Questão:
07.) Questão:
Defina uma função inteira para verificar se uma dada cadeia de caracteres, contendo apenas algarismos, atende à seguinte afirmativa:
“a soma de todos os algarismos elevada ao quadrado é igual à soma dos cubos de cada um de seus algarismos”
Restrições: NÃO usar biblioteca math.h. Não usar quação


*/



#include "io.h"
#include <stdio.h>
#include <stdio.h>

int qua(int numero){

int qua = 0;

    for(int i = 0 ; numero > i; i++){

        qua += numero;
    }

    return qua;

}

int cub(int numero){

int cub = 0;

for(int i = 0 ; numero > i; i++){

    for(int i = 0 ; numero > i; i++){

        cub += numero;
    }
}

    return cub;

}





int quadradoigualcubo(char algarismos[]) {
    int somaquadrados = 0, somacubos = 0;

    for (int i = 0; algarismos[i] != '\0'; i++) {
        int digit = algarismos[i] - '0';
        somaquadrados += qua(digit) ;
        somacubos += cub(digit);
    }

    printf("\n\nA soma dos quadrados dos algarismos e: %d", somaquadrados);
    printf("\nA soma dos cubos dos algarismos e: %d", somacubos);


    return somaquadrados == somacubos;
}

int main() {
    char algarismos[] = "111";

    if(quadradoigualcubo(algarismos)){
        printf("\n\n%s tem a soma dos quadrados dos algarismos igual a soma dos cubos dos algarismos\n\n", algarismos);
    } else{
        printf("\n\n%s NAO tem a soma dos quadrados dos algarismos igual a soma dos cubos dos algarismos\n\n", algarismos);
    }

    return 0;
}



/*

        Resposta:

     char algarismos[] = "1";

A soma dos quadrados dos algarismos e: 1
A soma dos cubos dos algarismos e: 1

1 tem a soma dos quadrados dos algarismos igual a soma dos cubos dos algarismos


     char algarismos[] = "123";

A soma dos quadrados dos algarismos e: 14
A soma dos cubos dos algarismos e: 36

123 NAO tem a soma dos quadrados dos algarismos igual a soma dos cubos dos algarismos


    char algarismos[] = "111"

A soma dos quadrados dos algarismos e: 3
A soma dos cubos dos algarismos e: 3

111 tem a soma dos quadrados dos algarismos igual a soma dos cubos dos algarismos


    char algarismos[] = "456";

A soma dos quadrados dos algarismos e: 77
A soma dos cubos dos algarismos e: 405

456 NAO tem a soma dos quadrados dos algarismos igual a soma dos cubos dos algarismos



     char algarismos[] = "2";

A soma dos quadrados dos algarismos e: 4
A soma dos cubos dos algarismos e: 8

2 NAO tem a soma dos quadrados dos algarismos igual a soma dos cubos dos algarismos



    char algarismos[] = "3";

A soma dos quadrados dos algarismos e: 9
A soma dos cubos dos algarismos e: 27

3 NAO tem a soma dos quadrados dos algarismos igual a soma dos cubos dos algarismos

*/


