/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

10.) Incluir um método e uma função (0820) para
procurar por determinado valor em arranjo e
dizer quantas vezes esse valor pode ser encontrado,
indicada a posição inicial para começar a procura.
Para testar, ler o arquivo ("DADOS.TXT"),
e armazenar os dados em arranjo;
ler do teclado um valor inteiro para ser procurado;
determinar quantas vezes o valor procurado aparece no arranjo,
se ocorrer.
Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
vezes = acharQuantos ( procurado, 0, n, arranjo );

*/

#include <stdio.h>
#include "io.h"

int AcharNumero(int arranjo[], int procura, char *filename, int posicao) {

    FILE *arquivo = fopen(filename, "rt");

    int numeroencontrar = 0;
    int quantidade = 0;

    int n = 0;

    while (!feof(arquivo)) {
        
            fscanf(arquivo, "%d", &arranjo[n]);
            n++;    
    }    

    int cont = posicao;

    while (n > cont) {
        if (arranjo[cont] == procura){
            numeroencontrar = cont;
            quantidade++;
        }
        cont++;
    }

    if(numeroencontrar > 0){
        printf("\nO numero %d foi encontrado %d vezes em Dados.txt\n\n", procura, quantidade);

    } else{

        printf("\nO numero %d NAO foi encontrado\n\n", procura);
    }

    fclose(arquivo);


    return numeroencontrar;
}

int lerArquivo(int n[], char *filename, int posicao) {
    
    FILE *arquivo = fopen(filename, "rt");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }

    int cont = posicao;
    int i = 0;

    printf("\nSera procurado entre os numeros: \n\n");

    while (!feof(arquivo)) {
        
            fscanf(arquivo, "%d", &n[i]);
            i++;    
    }

    while (i > cont)
    {
        printf("%d\n", n[cont]);
        cont++;        
    }
    

    fclose(arquivo);
    return cont;
}

int main() {
    int arranjo[100];

    int procura = 0;
    int posicao = 0;
    int onde = 0;

    printf("Digite um numero a ser procurado: ");
    scanf("%d", &procura);

    printf("A partir de qual posicao deve se procurar: ");
    scanf("%d", &posicao);

    lerArquivo(arranjo, "DADOS.txt", posicao);
    onde = AcharNumero(arranjo, procura, "DADOS.txt", posicao);


    return 0;
}


/*


    resposta:

A partir de qual posicao deve se procurar: 2

Sera procurado entre os numeros: 

72
38
80
69
65
68
80
22
49
67
51
80
63
87
66
24
80
83

O numero 80 foi encontrado 4 vezes em Dados.txt



    outra resposta:

Digite um numero a ser procurado: 38
A partir de qual posicao deve se procurar: 10

Sera procurado entre os numeros: 

49
67
51
80
63
87
66
24
80
83

O numero 38 NAO foi encontrado


    Outra resposta:

Digite um numero a ser procurado: 63
A partir de qual posicao deve se procurar: 5

Sera procurado entre os numeros: 

69
65
68
80
22
49
67
51
80
63
87
66
24
80
83

O numero 63 foi encontrado 1 vezes em Dados.txt

*/