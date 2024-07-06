/*

06.) Incluir um método e uma função (0716) para
ler um valor inteiro do teclado para representar certa quantidade de valores
a serem somados dentre os primeiros gravados no exercício anterior.
Testar essa função para quantidades diferentes.
Gravar em outro arquivo ("RESULTADO06.TXT") cada quantidade e seu resultado.

*/

#include <stdio.h>

// Função para somar os valores lidos do arquivo
double somar_valores_arquivo(const char *Texto_05, int quantidade) {
 
 
    FILE *Texto_5 = fopen(Texto_05, "rt");
    if (Texto_5 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0.0;
    }

    double soma = 0.0;
    double valor;

    // Ler os valores do arquivo e somá-los
    while (quantidade > 0) {
       fscanf(Texto_5, "%*[^=]=%lf\n", &valor);
       soma += valor;
       quantidade--;
    }

    fclose(Texto_5);
    return soma;
}

int main() {

    const char *Texto_05 = "Texto_5.txt";

    int quantidade = 0;

    // Abrir o arquivo para leitura

    FILE*resultado06 = fopen ("RESULTADO06.TXT", "wt");
    if (resultado06 == NULL) {
        printf("Erro ao abrir o arquivo RESULTADO06.TXT\n");
        return 1;
    } else{

        printf("Digite quantos numeros serao somados:");
        scanf("%d", &quantidade);

        double soma = somar_valores_arquivo(Texto_05, quantidade);


        fprintf (resultado06, "A soma dos valores do arquivo Texto_5.txt e: %lf\n", soma);
        fclose(resultado06);

    }




    return 0;
}




/*

Respostas em Resultado06.TXT: 

Digite quantos numeros serao somados:3

A soma dos valores do arquivo Texto_5.txt e: 1.156250

ou 

Digite quantos numeros serao somados:4

A soma dos valores do arquivo Texto_5.txt e: 1.164063


*/