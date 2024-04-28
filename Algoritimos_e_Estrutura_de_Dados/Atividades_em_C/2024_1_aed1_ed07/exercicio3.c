/*

03.) Incluir um método (0713) para
ler um valor inteiro do teclado e
gravar essa quantidade em valores da sequência: 1 5 25 125 625 ...
Exemplo: n = 5 => { 1, 5, 25, 125, 625 }

*/

#include "io.h"

int elevado5(int controlador) {

    FILE * arquivo = fopen ("Texto_3.txt", "wt" );
        
    int controlador2 = 0;

    while (controlador > controlador2){

        fprintf(arquivo, "%lf\n", pow(5, controlador2));

        controlador2++;
        }


   fclose(arquivo);
}






int main (){

    int controlador = 0;
    


do{
    printf("Quantos numeros devem conter na sequencia: ");
    scanf("%d", &controlador);

}while (controlador <= 0);

    elevado5 (controlador);

    return 0;
}



/*

Respostas em Texto_3: 

controlador = 5

1.000000
5.000000
25.000000
125.000000
625.000000

ou 

controlador = 10

1.000000
5.000000
25.000000
125.000000
625.000000
3125.000000
15625.000000
78125.000000
390625.000000
1953125.000000



*/