/*

06.) Incluir um método e uma função (0716) para
ler um valor inteiro do teclado para representar certa quantidade de valores
a serem somados dentre os primeiros gravados no exercício anterior.
Testar essa função para quantidades diferentes.
Gravar em outro arquivo ("RESULTADO06.TXT") cada quantidade e seu resultado.

*/

#include <stdio.h>

// Função para somar os valores lidos do arquivo
double somar_valores_arquivo(const char *nome_arquivo) {
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0.0;
    }

    double soma = 0.0;
    double valor;

    // Ler os valores do arquivo e somá-los
    while (fscanf(arquivo, "%*[^=]=%lf\n", &valor) == 1) {
        soma += valor;
    }

    fclose(arquivo);
    return soma;
}

int main() {
    const char *nome_arquivo = "Texto_5.txt";

    // Chama a função para somar os valores do arquivo
    double resultado = somar_valores_arquivo(nome_arquivo);

    // Grava o resultado no arquivo
    FILE *arquivo_saida;
    arquivo_saida = fopen("RESULTADO06.TXT", "a");
    if (arquivo_saida == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1;
    }
    fprintf(arquivo_saida, "Resultado da soma dos valores do arquivo %s: %lf\n", nome_arquivo, resultado);
    fclose(arquivo_saida);

    printf("Resultado gravado em RESULTADO06.TXT.\n");

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