#include <stdio.h>
#include "io.h"
#include <math.h>

// Protótipos das funções
void metodo1();
void metodo2();
void metodo3();
void metodo4();
void metodo5(); 
void metodo6();
void metodo7();
void metodo8();
void metodo9();
void metodo10();

int main() {
    int escolha;

    do {
        // Exibir menu
        printf("Escolha uma opção:\n");
        printf("1. Método 1\n");
        printf("2. Método 2\n");
        printf("3. Método 3\n");
        printf("4. Método 4\n");
        printf("5. Método 5\n");
        printf("6. Método 6\n");
        printf("7. Método 7\n");
        printf("8. Método 8\n");
        printf("9. Método 9\n");
        printf("10. Método 10\n");
        printf("0. Sair\n");

        // Ler a escolha do usuário
        scanf("%d", &escolha);

        // Executar a opção escolhida
        switch (escolha) {
            case 1:
                metodo1();
                break;
            case 2:
                metodo2();
                break;
            case 3:
                metodo3();
                break;
            case 4:
                metodo4();
                break;
            case 5:
                metodo5();
                break;
            case 6:
                metodo6();
                break;
            case 7:
                metodo7();
                break;
            case 8:
                metodo8();
                break;
            case 9:
                metodo9();
                break;
            case 10:
                metodo10();
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (escolha != 0);

    return 0;
}

// Definições das funções
void metodo1() {
    printf("Você escolheu o Método 1.\n");
    // Lógica do Método 1

    // identificar
    IO_id ( "Method_01 - Programa - v0.0" );
    // encerrar
    IO_pause ( "\nApertar ENTER para continuar.\n" );
    } // end method_01 ( )
    /*
    Funcao principal.
    @return codigo de encerramento
    */
    int main1 ( void )
    {
    // definir dado
    int opcao = 0;
    // identificar
    printf ( "%s\n", "Exemplo0200 - Programa = v0.0" );
    printf ( "%s\n", "Autor: _____________________" );
    printf ( "\n" ); // mudar de linha
    // acoes
    // repetir
    do
    {
    // para mostrar opcoes
    printf ( "\n%s\n", "Opcoes:" );
    printf ( "\n%s" , "0 - Terminar" );
    printf ( "\n%s" , "1 - Method_01" );
    printf ( "\n" );
    // ler a opcao do teclado
    printf ( "\n%s", "Opcao = " );
    scanf ( "%d", &opcao );
    getchar( ); // para limpar a entrada de dados
    // para mostrar a opcao lida
    printf ( "\n%s%d", "Opcao = ", opcao );
    // escolher acao dependente da opcao
    switch ( opcao )
    {
    case 0: /* nao fazer nada */ break;
    case 1: method_01 ( ); break;
    default: // comportamento padrao
    printf ( "\nERRO: Opcao invalida.\n" );
    break;
    } // end switch
    }
    while ( opcao != 0 );
    // encerrar
    printf ( "\n\nApertar ENTER para terminar." );
    getchar( ); // aguardar por ENTER
    return ( 0 ); // voltar ao SO (sem erros)
} 

void metodo2() {
    printf("Você escolheu o Método 2.\n");
    // Lógica do Método 2
}

void metodo3() {
    printf("Você escolheu o Método 3.\n");
    // Lógica do Método 3
}

void metodo4() {
    printf("Você escolheu o Método 4.\n");
    // Lógica do Método 4
}

void metodo5() {
    printf("Você escolheu o Método 5.\n");
    // Lógica do Método 5
}

void metodo6() {
    printf("Você escolheu o Método 6.\n");
    // Lógica do Método 6
}

void metodo7() {
    printf("Você escolheu o Método 7.\n");
    // Lógica do Método 7
}

void metodo8() {
    printf("Você escolheu o Método 8.\n");
    // Lógica do Método 8
}

void metodo9() {
    printf("Você escolheu o Método 9.\n");
    // Lógica do Método 9
}

void metodo10() {
    printf("Você escolheu o Método 10.\n");
    // Lógica do Método 10
}
