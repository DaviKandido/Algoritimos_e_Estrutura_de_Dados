/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

05.) Incluir um método e uma função (0815) para
procurar o maior valor ímmpar em um arranjo.
Para testar, receber um nome de arquivo como parâmetro e
aplicar a função sobre o arranjo com os valores lidos;
DICA: Usar o primeiro valor imimpar da tabela, se houver, como referência inicial.
Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
maior = acharMaiorImimpar ( n, arranjo );

*/
#include <stdio.h>

int acharMaiorimpar(int n, int arranjo[]) {
    int Maiorimpar = arranjo[0];

    for (int i = 0; i < n; i++) {
        if (arranjo[i] % 2 != 0 && arranjo[i] > Maiorimpar) {
            Maiorimpar = arranjo[i];
        }
    }

    return Maiorimpar;
}

int lerArquivo(int *n, char *filename) {
    FILE *arquivo = fopen(filename, "rt");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }

    int i = 0;

    printf("\nSao impares do arquivo %s: \n", filename);

    while (fscanf(arquivo, "%d", &n[i]) != EOF) {
        if (n[i] % 2 != 0) {
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
    int Maior = acharMaiorimpar(n, arranjo);

    if (Maior != 0) {
        printf("\nE o Maior numero impar de DADOS.txt e: %d\n", Maior);
    } else {
        printf("\nNenhum numero impar encontrado em DADOS.txt.\n");
    }

    return 0;
}



/*
    -Resposta em terminal:
    
Sao impares do arquivo DADOS.txt:
41
85
69
65
49
67
51
61
63
87
83

E o Maior numero impar de DADOS.txt e: 87
*/