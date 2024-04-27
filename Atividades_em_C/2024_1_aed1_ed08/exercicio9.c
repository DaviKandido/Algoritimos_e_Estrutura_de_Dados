/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

09.) Incluir um método e uma função (0819) para
procurar por determinado valor em arranjo e
dizer onde se encontra esse valor,
indicada a posição inicial para começar a procura.
Para testar, ler o arquivo ("DADOS.TXT"),
e armazenar os dados em arranjo;
ler do teclado um valor inteiro para ser procurado;
determinar onde o valor procurado estiver no arranjo,
se houver.
Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
onde = acharPosicao ( procurado, 0, n, arranjo );

*/

#include <stdio.h>
#include "io.h"

int AcharNumero(int arranjo[], int procura, char *filename, int posicao) {

    FILE *arquivo = fopen(filename, "rt");

    int numeroencontrar = 0;

    int n = 0;

    while (!feof(arquivo)) {
        
            fscanf(arquivo, "%d", &arranjo[n]);
            n++;    
    }    

    int cont = posicao;

    while (n > cont) {
        if (arranjo[cont] == procura){
            numeroencontrar = cont;
            break;
        }
        cont++;
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

    if(onde > 0){
        printf("\nO numero %d foi encontrado na posicao %d referente a todos os numeros em Dados.txt\n\n", procura, onde);

    } else{

        printf("\nO numero %d NAO foi encontrado\n\n", procura);
    }
 

    return 0;
}


/*

    Obs: Fiquei na duvida se a posição 0 contava, pela via das duvidas eu contabilizei
    a posição 0, no entanto caso não contasse uma possivel solução é a soma de + 1 ao retorno
    da função AcharNumero.


    resposta:

Digite um numero a ser procurado: 67
A partir de qual posicao deve se procurar: 5

Sera procurado entre os numeros: 

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

O numero 67 foi encontrado na posicao 11 referente a todos os numeros em Dados.txt



    outra resposta:

A partir de qual posicao deve se procurar: 0

Sera procurado entre os numeros:

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

O numero 72 foi encontrado na posicao 2 referente a todos os numeros em Dados.txt



*/