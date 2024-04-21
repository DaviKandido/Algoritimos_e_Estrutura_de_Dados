/*

07.) Incluir um método e uma função (Exemplo0717) para
ler um valor inteiro do teclado, e até essa quantidade, um valor por vez,
calcular a soma dos inversos das potências do exercício 04.
Gravar em outro arquivo ("RESULTADO07.TXT") cada quantidade e seu resultado.
Exemplo: n = 5 => { 1/625 + 1/125 + 1/25 + 1/5 + 1 }

*/

#include <stdio.h>

// Função para somar os valores lidos do arquivo
double somar_valores_arquivo(const char *Texto_04, int quantidade) {
 
    FILE*resultado06 = fopen ("RESULTADO07.TXT", "wt");

    FILE *Texto_4 = fopen(Texto_04, "rt");
    if (Texto_4 == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0.0;
    }

    double soma = 0.0;
    double valor;

    // Ler os valores do arquivo e somá-los
    while (quantidade > 0) {
       fscanf(Texto_4, "%*[^=]=%lf\n", &valor);
       fprintf (resultado06, "O valor da soma por enquanto e: %lf\n", soma);
       soma += valor;
       quantidade--;
 
    }

    fprintf (resultado06, "A soma de todos os %d valores do arquivo Texto_4.txt e: %lf\n", quantidade, soma);
    fclose(Texto_4);
    return soma;
}

int main() {

    const char *Texto_04 = "Texto_4.txt";

    int quantidade = 0;

    // Abrir o arquivo para leitura

    FILE*resultado06 = fopen ("RESULTADO07.TXT", "wt");
    if (resultado06 == NULL) {
        printf("Erro ao abrir o arquivo RESULTADO06.TXT\n");
        return 1;
    } else{

        printf("Digite quantos numeros serao somados: ");
        scanf("%d", &quantidade);

        double soma = somar_valores_arquivo(Texto_04, quantidade);


        fprintf (resultado06, "A soma de todos os %d valores do arquivo Texto_4.txt e: %lf\n", quantidade, soma);
        fclose(resultado06);

    }




    return 0;
}




/*

Respostas em Resultado06.TXT: 

Digite quantos numeros serao somados:3

A soma dos valores do arquivo Texto_4.txt e: 1.156250

ou 

Digite quantos numeros serao somados:4

A soma dos valores do arquivo Texto_4.txt e: 1.164063


*/