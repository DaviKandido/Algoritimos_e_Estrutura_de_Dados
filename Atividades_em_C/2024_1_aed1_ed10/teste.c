

#include <stdio.h>
#include <stdlib.h>

typedef struct Matrix {
    int linhas;
    int colunas;
    int **matrix;
} int_Matrix;

int ProdutoMatrix(chars filename1, chars filename2) {
    FILE *arquivo1 = fopen(filename1, "rt");
    FILE *arquivo2 = fopen(filename2, "rt");

    int linhas1 = 0;
    int linhas2 = 0;
    int colunas1 = 0;
    int colunas2 = 0;
    int valor1 = 0;
    int valor2 = 0;

    fscanf(arquivo1, "%d", &linhas1);
    fscanf(arquivo2, "%d", &linhas2);
    fscanf(arquivo1, "%d", &colunas1);
    fscanf(arquivo2, "%d", &colunas2);

    if (colunas1 == linhas2) { // Verificando se as dimensões são compatíveis para a multiplicação
        for (int i = 0; i < linhas1; i++) {
            for (int j = 0; j < colunas2; j++) {
                int soma = 0;
                for (int k = 0; k < colunas1; k++) {
                    fscanf(arquivo1, "%d", &valor1);
                    fscanf(arquivo2, "%d", &valor2);
                    soma += valor1 * valor2; // Multiplicação e acumulação dos valores
                }
                printf("%d\t", soma);
            }
            printf("\n");
        }
    } else {
        printf("As matrizes não são compatíveis para a multiplicação.");
    }

    fclose(arquivo1);
    fclose(arquivo2);
}

void method_10() {
    chars filename1 = "Dados7_Matriz1.TXT";
    chars filename2 = "Dados7_Matriz2.TXT";

    printf("\n\n-Defina a primeira matriz:- \n");
    CriarMatrix(&matrix1, filename1);
    printf("\n-A matriz criada foi:- \n");
    PrintMatrix(&matrix1, filename1);

    printf("\n\n-Defina a segunda matriz:- \n");
    CriarMatrix(&matrix1, filename2);
    printf("\n-A matriz criada foi:- \n");
    PrintMatrix(&matrix1, filename2);

    printf("\nO produto das Matrizes é:\n");
    ProdutoMatrix(filename1, filename2);
    printf("\n");
}
