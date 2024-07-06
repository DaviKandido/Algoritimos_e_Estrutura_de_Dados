/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

04.) Incluir um método e uma função (0814) para
procurar o menor valor par em um arranjo.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos;
DICA: Procurar o primeiro valor par da tabela como referência inicial
para o menor valor par.
Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
menor = acharMenorPar ( n, arranjo );

*/
#include <stdio.h>

int acharMenorPar(int n, int arranjo[]) {
    int menorpar = arranjo[0];

    for (int i = 0; i < n; i++) {
        if (arranjo[i] % 2 == 0 && arranjo[i] < menorpar) {
            menorpar = arranjo[i];
        }
    }

    return menorpar;
}

int lerArquivo(int *n, char *filename) {
    FILE *arquivo = fopen(filename, "rt");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }

    int i = 0;

    printf("\nSao pares do arquivo %s: \n", filename);

    while (fscanf(arquivo, "%d", &n[i]) != EOF) {
        if (n[i] % 2 == 0) {
            printf("%d\n", n[i]);
        }
        i++;
    }

    fclose(arquivo);
    return i;
}

int main() {
    int arranjo[100];
    int n = lerArquivo(arranjo, "DADOS.txt");
    int menor = acharMenorPar(n, arranjo);

    if (menor != 0) {
        printf("\nE o menor numero par de DADOS.txt e: %d\n", menor);
    } else {
        printf("\nNenhum numero par encontrado em DADOS.txt.\n");
    }

    return 0;
}



/*
    -Resposta em terminal:
    
Sao pares do arquivo DADOS.txt: 
72
38
80
68
96
22
66
24
80

E o menor numero par de DADOS.txt e: 22

*/