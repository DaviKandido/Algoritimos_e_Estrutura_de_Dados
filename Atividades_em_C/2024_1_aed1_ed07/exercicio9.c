/*

09.) Incluir um método e uma função (0719) para
para calcular a quantidade de maiúsculas em cadeia de caracteres de um arquivo texto.
Gravar em outro arquivo ("RESULTADO09.TXT") cada cadeia de caracteres e seus resultados.
Testar essa função com cadeias de tamanhos diferentes.
Exemplo: PaReDe de TiJoLoS AmaRElOs

*/


#include "io.h"

void QuantidadeDeMaiusculas ( chars cadeia, int quantidade) { 

    FILE * arquivo = fopen ("RESULTADO09.TXT", "wt" );
        if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    int soma = 0;

    fprintf(arquivo, "Sao caracteres Maiusculos de %s; \n\n", cadeia);

    for (int i = 0; strlen(cadeia) >= i; i++) {

        if (cadeia[i] >= 'A' && cadeia[i] <= 'Z') {

            fprintf( arquivo, "%c", cadeia[i]);
            soma += 1;
    }
    }

    fprintf(arquivo, "\n\nE quantidade de Maiuculas e: %d", soma);
}






int main (){

    FILE * arquivo = fopen ("RESULTADO09.TXT", "wt" );

    char cadeia[100];
    int quantidade = 0;

    printf("Qual sera a cadeia de caracteres a ser inserida: ");
    scanf("%[^\n]", &cadeia);


    QuantidadeDeMaiusculas(cadeia, quantidade);

    fclose ( arquivo );

    return 0;
}



/*


Respostas em Resultado09.TXT: 

Sao caracteres Maiusculos de PaReDe de TiJoLoS AmaRElOs; 

PRDTJLSAREO

E quantidade de Maiuculas e: 11


ou 

Sao caracteres Maiusculos de hhasuihaauihbbboosdhohaGUGUSGIGIBFSHVBYUDVCUV; 

GUGUSGIGIBFSHVBYUDVCUV

E quantidade de Maiuculas e: 22

*/