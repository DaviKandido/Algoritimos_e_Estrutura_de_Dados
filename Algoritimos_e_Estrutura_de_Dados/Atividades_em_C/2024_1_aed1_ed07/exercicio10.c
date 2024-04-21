/*

09.) Incluir um método e uma função (0719) para
para calcular a quantidade de maiúsculas em cadeia de caracteres de um arquivo texto.
Gravar em outro arquivo ("RESULTADO09.TXT") cada cadeia de caracteres e seus resultados.
Testar essa função com cadeias de tamanhos diferentes.
Exemplo: PaReDe de TiJoLoS AmaRElOs

*/


#include "io.h"

void Mairoesque5 ( chars cadeia, int quantidade) { 

    FILE * arquivo = fopen ("RESULTADO10.TXT", "wt" );
        if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    int soma = 0;

    fprintf(arquivo, "Sao caracteres Maiusculos de %s; \n\n", cadeia);

    for (int i = 0; strlen(cadeia) > i; i++) {

        if (cadeia[i] >= 'A' && cadeia[i] <= 'Z') {

            fprintf( arquivo, "%c", cadeia[i]);

    }
    }

    fprintf(arquivo, "\n\nSao caracteres Minusculos de %s; \n\n", cadeia);

    for (int i = 0; strlen(cadeia) > i; i++) {

        if (cadeia[i] >= 'a' && cadeia[i] <= 'z') {

            fprintf( arquivo, "%c", cadeia[i]);

      }
    }
    fprintf(arquivo, "\n\nSao dígitos maiores ou iguais a 5 de %s; \n\n", cadeia);

    for (int i = 0; strlen(cadeia) > i; i++) {

        if (cadeia[i] >= '5') {

            fprintf( arquivo, "%c", cadeia[i]);
            soma += 1;

      }
    }


    fprintf(arquivo, "\n\nE quantidade de dígitos maiores ou iguais a 5 e: %d", soma);
}


int main (){

    FILE * arquivo = fopen ("RESULTADO10.TXT", "wt" );

    char cadeia[100];
    int quantidade = 0;

    printf("Qual sera a cadeia de caracteres a ser inserida: ");
    scanf("%[^\n]", &cadeia);


    Mairoesque5(cadeia, quantidade);

    fclose ( arquivo );

    return 0;
}



/*

Sao caracteres Maiusculos de P4R3D3 de T1J0L05 4maR3105; 

PRDTJLR

Sao caracteres Minusculos de P4R3D3 de T1J0L05 4maR3105; 

dema

Sao dígitos maiores ou iguais a 5 de P4R3D3 de T1J0L05 4maR3105; 

PRDdeTJL5maR5

E quantidade de dígitos maiores ou iguais a 5 e: 13



ou 



Sao caracteres Maiusculos de 45678991KJGFDhhch kakh ; 

KJGFD

Sao caracteres Minusculos de 45678991KJGFDhhch kakh ; 

hhchkakh

Sao dígitos maiores ou iguais a 5 de 45678991KJGFDhhch kakh ; 

567899KJGFDhhchkakh

E quantidade de dígitos maiores ou iguais a 5 e: 19


*/