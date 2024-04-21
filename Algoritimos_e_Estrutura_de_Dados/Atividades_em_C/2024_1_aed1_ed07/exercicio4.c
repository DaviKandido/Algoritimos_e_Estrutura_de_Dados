/*

04.) Incluir um método (0714) para
ler um valor inteiro do teclado e
gravar essa quantidade em valores decrescentes da sequência: ... 1/625 1/125 1/25 1/5 1.
Exemplo: n = 5 => { 1/625, 1/125, 1/25, 1/5, 1 }

*/

#include "io.h"

double elevado5(int controlador, double valor) {

    FILE * arquivo = fopen ("Texto_4.txt", "wt" );
        
    while (controlador > 0 ){
     
        valor = pow(5, controlador-1);
        fprintf(arquivo, "1/%lf = ", valor);
        fprintf(arquivo, "%lf \n", 1/valor);
        controlador--;
    }


   fclose(arquivo);
}






int main (){

    int controlador = 0;
    double valor = 0.0;



do{
    printf("Quantos numeros devem conter na sequencia: ");
    scanf("%d", &controlador);

}while (controlador <= 0);

    elevado5 (controlador, valor);

    return 0;
}



/*

Respostas em Texto_4: 

controlador = 5

1/625.000000 = 0.001600 
1/125.000000 = 0.008000 
1/25.000000 = 0.040000 
1/5.000000 = 0.200000 
1/1.000000 = 1.000000 

ou 

controlador = 10

1/1953125.000000 = 0.000001 
1/390625.000000 = 0.000003 
1/78125.000000 = 0.000013 
1/15625.000000 = 0.000064 
1/3125.000000 = 0.000320 
1/625.000000 = 0.001600 
1/125.000000 = 0.008000 
1/25.000000 = 0.040000 
1/5.000000 = 0.200000 
1/1.000000 = 1.000000 



*/