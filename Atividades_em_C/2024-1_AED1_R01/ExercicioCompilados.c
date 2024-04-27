/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/



/*
    objetivo:

01.) - 10.)


*/
#include"io.h"



/**
  * Metodo01.
  */


 int soma_divisores_impares ( int x ){

       int contador = x;
       int soma = 0;

    while ( contador > 0){

        if (x % contador == 0 && contador % 2 != 0) {

            soma = soma + contador;

            contador--;

        } else{
           contador--;
        }

    }
    return soma;

 }


void metodo01 ( void )
{
 // identificar
    printf ( "\n%s"  , "Metodo01" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );


        int n = 0;

    int resposta = 0;


    printf("\nDefina o valor de (n) quantidades: ");
    scanf("%d", &n); getchar();

    int x[n];

    while ( n > 0 ){

        printf("\n\nDefina o valor do %d(x): ", n);
        scanf("%d", &x[n]);

        resposta = soma_divisores_impares (x[n]);
        printf("\nA soma dos divisores de %d e: %d", x[n], resposta);

        n--;


    }


    return 0;
} // fim metodo01 ( )






/**
  * Metodo02.
  */

 int primo ( int x ){

       int contador = x;
       int soma = 0;

    while ( contador > 0){

        if (x % contador == 0 ) {

            soma = soma + 1;

            contador--;

        } else{
           contador--;
        }

    }
    return soma;

 }


void metodo02 ( void )
{
 // identificar
    printf ( "\n%s"  , "Metodo02" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );


        int n = 0;

    int resposta = 0;


    printf("\nDefina o valor de (n) quantidade: ");
    scanf("%d", &n); getchar();

    int x[n];

    while ( n > 0 ){

        printf("\n\nDefina o valor de (x): ");
        scanf("%d", &x[n]);

        resposta = primo (x[n]);

        if (resposta == 1 || resposta == 2){
            printf ( "\n%d e primo:", x[n]);

        } else {

            printf ( "\n%d nao e primo:", x[n]) ;

        }

        n--;


    }


    return 0;
} // fim metodo02 ( )







/**
  * Metodo03.
  */

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


void metodo03 ( void )
{
 // identificar
    printf ( "\n%s"  , "Metodo03" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );

    
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
} // fim metodo03 ( )






/**
  * Metodo04.
  */

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

void metodo04 ( void )
{
 // identificar
    printf ( "\n%s"  , "Metodo04" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );


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

} // fim metodo04 ( )









/**
  * Metodo05.
  */
void metodo05 ( void )
{
 // identificar
    printf ( "\n%s"  , "Metodo05" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );

} // fim metodo05 ( )







/**
  * Metodo06.
  */
void metodo06 ( void )
{
 // identificar
    printf ( "\n%s"  , "Metodo06" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );

} // fim metodo06 ( )










/**
  * Metodo07.
  */
void metodo07 ( void )
{
 // identificar
    printf ( "\n%s"  , "Metodo07" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );

} // fim metodo07 ( )








/**
  * Metodo08.
  */
void metodo08 ( void )
{
 // identificar
    printf ( "\n%s"  , "Metodo08" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );

} // fim metodo08 ( )









/**
  * Metodo09.
  */
void metodo09 ( void )
{
 // identificar
    printf ( "\n%s"  , "Metodo09" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );

} // fim metodo09 ( )








/**
  * Metodo10.
  */
void metodo10 ( void )
{
 // identificar
    printf ( "\n%s"  , "Metodo10" );
 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );

} // fim metodo10 ( )









int main ( void )
{
 // definir dados/resultados
    int opcao = 0;

 // repetir ate' desejar parar
    do
    {
     // identificar
        printf ( "\n" );             // para saltar linha
        printf ( "%s\n", "Lista_00 - v.0.0 - 01/mm/20aa"       );
        printf ( "%s\n", "Matricula: 999999 Nome: xxx yyy zzz" );

     // mostrar opcoes
        printf ( "%s\n", "Opcoes:"         );
        printf ( "%s\n", " 0 - parar"      );
        printf ( "%s\n", " 1 - metodo 01   2 - metodo 02" );
        printf ( "%s\n", " 3 - metodo 03   4 - metodo 04" );
        printf ( "%s\n", " 5 - metodo 05   6 - metodo 06" );
        printf ( "%s\n", " 7 - metodo 07   8 - metodo 08" );
        printf ( "%s\n", " 9 - metodo 09  10 - metodo 10" );
        printf ( "%s\n", "" );        // para saltar linha

     // ler opcao
        printf ( "%s", "Qual a sua opcao? " );
        scanf  ( "%d", &opcao ); getchar ( );
        printf ( "%d",  opcao );

     // escolher acao
        switch ( opcao )
        {
           case  0:               break;
           case  1: metodo01 ( ); break;
           case  2: metodo02 ( ); break;
           case  3: metodo03 ( ); break;
           case  4: metodo04 ( ); break;
           case  5: metodo05 ( ); break;
           case  6: metodo06 ( ); break;
           case  7: metodo07 ( ); break;
           case  8: metodo08 ( ); break;
           case  9: metodo09 ( ); break;
           case 10: metodo10 ( ); break;
           default:
                    printf ( "\n%s\n\n", "ERRO: Opcao invalida." );
                    break;
        } // fim escolher
    }
    while ( opcao != 0 );

 // encerrar execucao
    printf ( "\n%s\n\n", "Apertar ENTER para terminar." );
    getchar( );

} // end main ( )