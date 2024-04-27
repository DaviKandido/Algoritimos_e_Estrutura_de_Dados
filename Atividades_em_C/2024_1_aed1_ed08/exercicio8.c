/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

08.) Incluir um método e uma função (0818) para
procurar por determinado valor em arranjo e
dizer se esse valor pode ser nele encontrado,
indicada a posição inicial para se começar a procura.
Para testar, ler o arquivo ("DADOS.TXT"),
e armazenar os dados em arranjo;
ler do teclado um valor inteiro para ser procurado;
determinar se o valor procurado existe no arranjo,
a partir da posição indicada.
Exemplo: arranjo = lerArquivo ( n, "DADOS.TXT" );
existe = acharValor ( procurado, 0, n, arranjo );

*/

#include <stdio.h>
#include "io.h"

bool AcharNumero(int arranjo[], int procura, char *filename, int posicao) {

    FILE *arquivo = fopen(filename, "rt");

    bool numeroencontrar = false;

    int n = 0;

    while (!feof(arquivo)) {
        
            fscanf(arquivo, "%d", &arranjo[n]);
            n++;    
    }    

    int cont = posicao;

    while (n > cont) {
        if (arranjo[cont] == procura){
            numeroencontrar = true;
        }
        cont++;
    }

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

    printf("\nSera procurado %d entre os numeros: \n\n", posicao);

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

    printf("Digite um numero a ser procurado: ");
    scanf("%d", &procura);

    printf("A partir de qual posicao deve se procurar: ");
    scanf("%d", &posicao);

    lerArquivo(arranjo, "DADOS.txt", posicao);

    if(AcharNumero(arranjo, procura, "DADOS.txt", posicao)){
        printf("\nO numero %d foi encontrado\n\n", procura);

    } else{

        printf("\nO numero %d NAO foi encontrado\n\n", procura);
    }
 

    return 0;
}


/*
    resposta:

A partir de qual posicao deve se procurar: 5

Sera procurado 5 entre os numeros:

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

O numero 10 NAO foi encontrado


Digite um numero a ser procurado: 67
A partir de qual posicao deve se procurar: 10

Sera procurado 10 entre os numeros: 

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

O numero 67 foi encontrado



*/