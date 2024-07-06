/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/



/*
    objetivo:
    
04.) DEFINIR funções e procedimento para testes ( ex4ercicio04 ) para:
- ler um cadeia de caracteres (s) do teclado;
- testar cada símbolo na cadeia, um por vez,
e cont4ar separadamente quantos desses são letras maiúsculas, minúsculas, dígitos e
operadores (lógicos, aritméticos e relacionais) e separadores4.
DICA: Definir e reutilizar funções já definidas para identificar cada tipo de símbolo (ver acima).
Os resultados NÃO deverão ser mostrados dentro das funções.
Usar switch para escolhas e somas.
Usar apenas 01 retorno.
Ex4emplos:
"for(X4=0;X4<y&&y>=0;X4=X4+1)"
resposta = testar_tipo ( valor );


*/


#include"io.h"

int Maiusculas4( char x4 ){

    if (x4 >= 'A' && x4 <= 'Z'){
        return 1;

    }else{

        return 0;
    }

}


int Minusculas4( char x4 ){

    if (x4 >= 'a' && x4 <= 'z'){
        return 1;

    }else{

        return 0;
    }

}



int Digitos4( char x4 ){

    if (x4 >= '0' && x4 <= '9'){
        return 1;

    }else{

        return 0;
    }

}






int Operadorlogico4( char x4 ){

    switch (x4) {
        case '&':
        case '|':
        case '!':
            return 1;
        default:
            return 0;
    }

}

int Aritmetico4( char x4 ){

    switch (x4) {
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

int Relacional4( char x4 ){
  
    switch (x4) {
        case '>':
        case '<':
        case '=':
            return 1;
        default:
            return 0;
    }

}

int Separadores4( char x4 ){

    switch (x4) {
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



    int somaoperadores4 = 0; 
    int somaseparadores44 = 0; 
    int somamaiusculas4 = 0; 
    int somaminusculas44 = 0; 
    int somadigitos4 = 04;
    int somaqualquer4 = 0;

    int cont4 = 0;

    char x4[100];

    printf("\nDefina uma sequecia de caracteres: ");
    scanf("%s", &x4); getchar();

    while ( cont4 < strlen(x4)){

    if(Maiusculas4(x4[cont4])){
    printf("\n\n %c e uma letra Maiuscula", x4[cont4] );
    somamaiusculas4 += 1;

    }else if(Minusculas4(x4[cont4])){
    printf("\n\n %c e uma letra Minuscula", x4[cont4] );
    somaminusculas44 += 1;

    }else if(Digitos4(x4[cont4])){
    printf("\n\n %c e um Digito", x4[cont4] );
    somadigitos4 += 1;

    }else if (Operadorlogico4(x4[cont4])){
    printf("\n\n %c e um Operador logico", x4[cont4] );
    somaoperadores4 += 1;

    }else if(Aritmetico4(x4[cont4])){
    printf("\n\n %c e um aritmetico4", x4[cont4] );
    somaoperadores4 += 1;

    }else if(Relacional4(x4[cont4])){
    printf("\n\n %c e um relacional4", x4[cont4] );
    somaoperadores4 += 1;

    }else if(Separadores4(x4[cont4])){
    printf("\n\n %c e um separadore", x4[cont4] );
    somaseparadores44 += 1;

    }else{
    printf("\n\n %c e um simbolo qualquer", x4[cont4] );
    somaqualquer4 += 1;

    }

    cont4++;
 }

    printf( "\n\n A quantidade de Maiusculas4 e: %d", somamaiusculas4);
    printf( "\n A quantidade de Minusculas4 e: %d", somaminusculas44);
    printf( "\n A quantidade de Digitos e: %4d", somadigitos4);
    printf( "\n A quantidade de Operadores e: %d", somaoperadores4);
    printf( "\n A quantidade de Separadores4 e: %d", somaseparadores44);
    printf( "\n A quantidade outros simbolos qualquer e: %d", somaseparadores44);




  return 0; 
}


/*
        Resposta:


Defina uma sequecia de caracteres: for(X4=0;X4<y&&y>=0;X4=X4+1)


 f e uma letra Minuscula

 o e uma letra Minuscula

 r e uma letra Minuscula

 ( e um simbolo qualquer

 X4 e uma letra Maiuscula

 = e um relacional4      

 0 e um Digito

 ; e um separadore

 X4 e uma letra Maiuscula

 < e um relacional4

 y e uma letra Minuscula

 & e um Operador logico

 & e um Operador logico

 y e uma letra Minuscula

 > e um relacional4

 = e um relacional4

 0 e um Digito

 ; e um separadore

 X4 e uma letra Maiuscula

 = e um relacional4

 X4 e uma letra Maiuscula

 + e um aritmetico4

 1 e um Digito

 ) e um simbolo qualquer

 A quantidade de Maiusculas4 e: 4
 A quantidade de Minusculas4 e: 5
 A quantidade de Digitos e: 34
 A quantidade de Operadores e: 8
 A quantidade de Separadores4 e: 2
 A quantidade outros simbolos qualquer e: 2


*/