/*

02.) Incluir um método (0712) para
ler um valor inteiro do teclado e
gravar essa quantidade em múltiplos de 5, ímpares, em ordem decrescente encerrando em 25.
Exemplo: n = 5 => { 65, 55, 45, 35, 25 }

*/

#include "io.h"

int multiplos5decrescente(int controlador, int quantidade) {

    FILE * arquivo = fopen ("Texto_2.txt", "wt" );
        
    while (controlador > 0){
    quantidade = quantidade + 5;
         if (quantidade%2 != 0) {
        controlador--;
        }
   }
    while (quantidade != 20){
        
        if (quantidade%2 != 0){
        fprintf(arquivo, "%d\n", quantidade);
        }
        quantidade = quantidade -5;

    }



   fclose(arquivo);
}






int main (){

    int controlador = 0;
    int quantidade = 20;
    


do{
    printf("Quantos multiplos de 5, impares, em ordem decrescente serao gravados: ");
    scanf("%d", &controlador);

}while (controlador <= 0);

    multiplos5decrescente (controlador, quantidade);

    return 0;
}



/*

Respostas em Texto_2: 

controlador = 6

75
65
55
45
35
25




*/