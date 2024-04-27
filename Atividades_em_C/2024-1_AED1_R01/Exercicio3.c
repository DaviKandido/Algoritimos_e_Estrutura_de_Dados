/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/



/*
    objetivo:

03.) DEFINIR funções e procedimento para testes ( exercicio03 ) para:
- ler uma cadeia de caracteres do teclado;
- dizer se cada símbolo é um operador lógico (&,|,!), aritmetico (+,-,*,/,%), relacional (>,<,=),
separadores (espaço, ponto, vírgula, ponto-e-vírgula, dois-pontos, sublinha)
ou outro símbolo qualquer.
DICA: Definir e usar funções para identificar cada um desses tipos de símbolo.
O resultado NÃO deverá ser mostrado dentro da função.
Usar switch para escolhas.
Usar apenas 01 retorno.

Exemplos:
"for(x=0;x<y&&y>=0;x=x+1)"
resposta = testar_simbolo ( valor );


*/


#include"io.h"

int Operadorlogico( char x ){

    switch (x) {
        case '&':
        case '|':
        case '!':
            return 1;
        default:
            return 0;
    }

}

int Aritmetico( char x ){

    switch (x) {
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
            return 1;
        default:
            return 0;
    }
}

int Relacional( char x ){
  
    switch (x) {
        case '>':
        case '<':
        case '=':
            return 1;
        default:
            return 0;
    }

}

int Separadores( char x ){

    switch (x) {
        case ' ':
        case '.':
        case ',':
        case ';':
        case ':':
        case '_':
            return 1;
        default:
            return 0;
    }

}



int main(){

        printf ( "\n" );             
        printf ( "%s\n", "1_aed1_recuperacao01 - 24/04/2024"       );
        printf ( "%s\n", "Matricula: 857859 Nome: Davi Candido de Almeida\n" );

    int cont = 0;

    char x[100];

    printf("\nDefina uma sequecia de caracteres: ");
    scanf("%s", &x); getchar();

    while ( cont < strlen(x)){

    if (Operadorlogico(x[cont])){
    printf("\n\n %c e um Operador logico", x[cont] );
    }else if(Aritmetico(x[cont])){
    printf("\n\n %c e um aritmetico", x[cont] );
    }else if(Relacional(x[cont])){
    printf("\n\n %c e um relacional", x[cont] );
    }else if(Separadores(x[cont])){
    printf("\n\n %c e um separadore", x[cont] );
    }else{
    printf("\n\n %c e um simbolo qualquer", x[cont] );
    }

    cont++;
 }

  return 0; 
}


/*
        Resposta:


Defina uma sequecia de caracteres: for(x=0;x<y&&y>=0;x=x+1)


 f e um simbolo qualquer

 o e um simbolo qualquer

 r e um simbolo qualquer

 ( e um simbolo qualquer

 x e um simbolo qualquer

 = e um relacional

 0 e um simbolo qualquer

 ; e um separadore

 x e um simbolo qualquer

 < e um relacional

 y e um simbolo qualquer

 & e um Operador logico

 & e um Operador logico

 y e um simbolo qualquer

 > e um relacional

 = e um relacional

 0 e um simbolo qualquer

 ; e um separadore

 x e um simbolo qualquer

 = e um relacional

 x e um simbolo qualquer

 + e um aritmetico

 1 e um simbolo qualquer

 ) e um simbolo qualquer


*/