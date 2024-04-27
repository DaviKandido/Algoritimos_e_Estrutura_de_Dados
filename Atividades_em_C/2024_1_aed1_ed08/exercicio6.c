/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

06.) Incluir um método e uma função (0816)
para determinar a média valores em um arranjo.
Para testar, ler o arquivo ("DADOS.TXT")
armazenar os dados em um arranjo;
separar em dois outros arquivos,
os valores menores ou iguais à média, e os Maiores que ela.
Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
media = acharMedia ( n, arranjo );
DICA: Considerar a possiblidade de que a quantidade de dados possa ser igual a zero.

*/
#include <stdio.h>


int lerArquivo(int *n, char *filename) {
    FILE *arquivo = fopen(filename, "rt");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }

    int i = 0;

    printf("\nSao valores do arquivo %s: \n\n", filename);

    while (fscanf(arquivo, "%d", &n[i]) != EOF) {

        printf("%d\n", n[i]);
        i++;
    }

    fclose(arquivo);
    return i;
}


int acharMedia(int n, int arranjo[]) {

    int Media = arranjo[0];

    for (int i = 0; i < n; i++) {
            Media += arranjo[i];
        }

        printf("\nA media e: %d", Media/n);

    return Media/n;
}

int Separador(int Media, int arranjo[], int n){


    FILE *arquivoMenor = fopen("MenorMedia.txt", "wt");
    FILE *arquivoMaior = fopen("MaiorMedia.txt", "wt");


    for (int i = 0; i < n; i++) {

        if(arranjo[i] >= Media){

            fprintf(arquivoMaior, "%d\n", arranjo[i]);
            

        } else{

            fprintf(arquivoMenor, "%d\n", arranjo[i]);
        }


    }


}



int main() {
    int arranjo[100];
    int n = lerArquivo(arranjo, "DADOS.txt");
    int Media = acharMedia(n, arranjo);

    Separador(Media, arranjo, n);

    return 0;
}



/*
    -Resposta em terminal:
    
Sao valores do arquivo DADOS.txt:

41
85
72
38
80
69
65
68
96
22
49
67
51
61
63
87
66
24
80
83

A media e: 65


    -resposta  em "MaiorMedia.txt":

85
72
80
69
65
68
96
67
87
66
80
83

    -resposta  em "MenorMedia.txt":

41
38
22
49
51
61
63
24


*/