/*

05.) Incluir um método (0715) para
ler um valor inteiro do teclado (n) e outro valor real (x),
gravar essa quantidade (n) em valores reais da sequência: 1 1/x^3 1/x^5 1/x^7...
DICA: Usar pow ( x, y ) da biblioteca <math.h> para calcular a potência.

*/

#include "io.h"

double elevado5(int controlador, double valor, int x) {

    FILE * arquivo = fopen ("Texto_5.txt", "wt" );
        
    int controlador2 = 0;

    while (controlador >= controlador2 ){
     
        if (controlador2 == 0){
            valor = 1;
            fprintf(arquivo, "1 = 1\n");
            controlador2++;
        } else{
        valor = pow(5, controlador2*2+1);
        fprintf(arquivo, "1/%d^%d = ", x, controlador2*2+1);
        fprintf(arquivo, "%lf\n", 1/pow(x, controlador2*2+1 ));
        controlador2++;
        }
    }


   fclose(arquivo);
}



int main (){

    int controlador = 0;
    double valor = 0.0;
    int x = 0;

do{
    printf("Quantos numeros devem conter na sequencia: ");
    scanf("%d", &controlador);

    printf("Qual sera o valor de x: ");
    scanf("%d", &x);

}while (controlador <= 0);

    elevado5 (controlador, valor, x);

    return 0;
}



/*

Respostas em Texto_5: 

controlador = 5
x = 2

1 = 1
1/2^3 = 0.125000
1/2^5 = 0.031250
1/2^7 = 0.007813
1/2^9 = 0.001953
1/2^11 = 0.000488

ou 

controlador = 5
x = 3

1 = 1
1/3^3 = 0.037037
1/3^5 = 0.004115
1/3^7 = 0.000457
1/3^9 = 0.000051
1/3^11 = 0.000006


*/