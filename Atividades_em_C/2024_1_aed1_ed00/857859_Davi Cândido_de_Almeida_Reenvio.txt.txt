// ------------------------------------ EXEMPLO101
// bibliotecas de funcoes auxiliares
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void clrscr ( ) { system ( "clear" ); } // para Linux

// para entradas e saídas
int exemplo01 ( )
{
printf ( "EXEMPLO101 - PRIMEIRO EXEMPLO EM C" );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( 0 );
} // fim do programa

int exemplo02 ( )
{
system ( "cls" );
// system ( "clear" );
// (Windows) para limpar a tela
// (Linux) para limpar a tela
// (dependente do sistema operacional)
printf ( "EXEMPLO102 - PRIMEIRO EXEMPLO EM C\n" );
system ( "pause" ); // (Windows) para esperar
// getchar( );
// para esperar
// (dependente do sistema operacional)
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo03 ( )
{
clrscr ( );
// funcao para limpar a tela
printf ( "EXEMPLO103 - PRIMEIRO EXEMPLO EM C" );
printf ( "\n" ); // para mudar de linha
printf ( "MATRICULA: ______ ALUNO : __________________" );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo04 ( )
{
    printf ( "EXEMPLO104 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\n" ); // para mudar de linha (="\n")
    printf ( "MATRICULA: ______ ALUNO : __________________" );
    printf ( "\n" ); // para mudar de linha
    printf ( "PRESSIONAR <Enter> PARA TERMINAR. " );
    getchar( );
    // para esperar
    return ( EXIT_SUCCESS );
} // fim do programa

int exemplo05 ( )
{
printf ( "EXEMPLO105 - PRIMEIRO EXEMPLO EM C" );
printf ( "\nMATRICULA: ______ ALUNO : __________________" );
printf ( "\nEXEMPLOS DE VALORES : " );
printf ( "\nCARACTERE : %c",'A' ); // letra ou simbolo
printf ( "\nINTEIRO: %d",10 ); // valor sem parte fracionaria
printf ( "\nREAL: %f", 3.1415 ); // valor com parte fracionaria
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR. " );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo06 ( )
{
const float PI = 3.14; // com nome e tipo (melhor)
printf ( "EXEMPLO106 - PRIMEIRO EXEMPLO EM C " );
printf ( "\nMATRICULA: ______ ALUNO : __________________" );
printf ( "\nEXEMPLOS DE VALORES : " );
printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
printf ( "\nINTEIRO: %d", 10 ); // valor sem parte fracionaria
printf ( "\nREAL: %f", PI ); // emprego de macro
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo07 ( )
{
// definicao de constante
const float PI = 3.14; // com nome e tipo (melhor)
printf ( "EXEMPLO107 - PRIMEIRO EXEMPLO EM C" );
printf ( "\nMATRICULA: ______ ALUNO : __________________" );
printf ( "\nEXEMPLOS DE VALORES : " );
printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
printf ( "\nINTEIRO: %d", 10 ); // valor sem parte fracionaria
printf ( "\nREAL: %f" , PI ); // constante real
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo08 ( )
{
// definicao de constante
const float PI = 3.14; // com nome e tipo (melhor)
// definicao de variavel real
float X = 10.01;
// com atribuicao de valor inicial
printf ( "EXEMPLO108 - PRIMEIRO EXEMPLO EM C" );
printf ( "\nMATRICULA: ______ ALUNO : __________________" );
printf ( "\nEXEMPLOS DE VALORES : " );
printf ( "\nCARACTERE : %c", 'A' ); // letra ou simbolo
printf ( "\nINTEIRO: %d", 10 ); // valor sem parte fracionaria
printf ( "\nREAL: %f", PI ); // constante real
printf ( "\nREAL: %f", X ); // variavel real
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo09 ( )
{
// definicao de constante
const float PI = 3.14; // com nome e tipo (melhor)
// definicao de variavel real
float X = 10.01;
// definicao de variavel inteira
int I = 10;
printf ( "EXEMPLO109 - PRIMEIRO EXEMPLO EM C" );
printf ( "\nMATRICULA: ______ ALUNO : __________________" );
printf ( "\nEXEMPLOS DE VALORES : " );
printf ( "\nINTEIRO : %i" , I );
printf ( "\nREAL: %f" , X );
printf ( "\nREAL: %f" , PI );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo10 ( )
{
    // definicao de constante
    const double PI = 3.14;
    // com nome e tipo (melhor)
    // definicao de variavel real
    float X = 10.01;
    // definicao de variavel inteira
    int I = 10;
    // definicao de variavel caractere
    char N = '\n';
    // mudar de linha
    printf ( "EXEMPLO110 - PRIMEIRO EXEMPLO EM C" );
    printf ( "\nMATRICULA: ______ ALUNO : __________________" );
    printf ( "%c%s", N, "EXEMPLOS DE VALORES : " );
    printf ( "%c%s%i" , N, "INTEIRO : " , I );
    printf ( "%c%s%f" , N, "REAL: " , X );
    printf ( "%c%s%lf", N, "REAL: " , PI );
    printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
    getchar( );
    // para esperar
    return ( EXIT_SUCCESS );
} // fim do programa

int exemplo11( )
{
// PROGRAMA PARA LER E IMPRIMIR UM VALOR INTEIRO
// VARIAVEL:
int X = 0;
printf ( "EXEMPLO201 - LER E IMPRIMIR UM VALOR INTEIRO" );
printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
printf ( "\nO VALOR DIGITADO FOI: %d", X );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo12 ( )
{
// PROGRAMA PARA LER E IMPRIMIR UM VALOR REAL
// VARIAVEL:
double X = 0.0;
printf ( "EXEMPLO202 - LER E IMPRIMIR UM VALOR REAL" );
printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
scanf ( "%lf", &X );
getchar( );
// limpar a entrada de dados
printf ( "\nO VALOR DIGITADO FOI: %lf", X );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo13 ( )
{
// PROGRAMA PARA LER E IMPRIMIR UM CARACTERE
// VARIAVEL:
char X = '0';
printf ( "EXEMPLO203 - LER E IMPRIMIR UM CARACTERE" );
printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
scanf ( "%c", &X );
getchar( );
// limpar a entrada de dados
printf ( "\nO VALOR DIGITADO FOI: %c", X );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo14 ( )
{
// PROGRAMA PARA LER E IMPRIMIR, NO MAXIMO, 10 CARACTERES
// VARIAVEL:
char X [10];
printf ( "EXEMPLO204 - LER E IMPRIMIR, NO MAXIMO, 09 CARACTERES" );
printf ( "\nDIGITE, NO MAXIMO, 09 CARACTERES QUAISQUER: " );
scanf ( "%s", X );
// OBS.: NAO usar o (&) para caracteres !
getchar( );
// limpar a entrada de dados
printf ( "\nFOI DIGITADO: %s", X );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo15 ( )
{
// PROGRAMA PARA LER E SOMAR DOIS VALORES INTEIROS
// VARIAVEIS:
int X=0, Y=0, Z=0;
printf ( "EXEMPLO205 - LER E SOMAR DOIS VALORES INTEIROS" );
printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
scanf ( "%d", &Y );
getchar( );
// limpar a entrada de dados
Z = X + Y;
printf ( "\nA SOMA DOS DOIS = %d", Z );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo16 ( )
{
// PROGRAMA PARA LER E SUBTRAIR DOIS VALORES REAIS
// VARIAVEIS:
float X=0.0, Y=0.0, Z=0.0;
printf ( "EXEMPLO206 - LER E SUBTRAIR DOIS VALORES REAIS" );
printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
scanf ( "%f", &X );
getchar( );
// limpar a entrada de dados
printf ( "\nFORNECER OUTRO VALOR REAL QUALQUER: " );
scanf ( "%f", &Y );
getchar( );
// limpar a entrada de dados
Z = X - Y;
printf ( "\nA DIFERENCA ENTRE OS DOIS = %f", Z );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo17 ( )
{
// PROGRAMA PARA OPERAR VALORES LOGICOS
// VARIAVEIS:
bool X=false, Y=false, Z=false;
printf ( "EXEMPLO207 - OPERAR VALORES LOGICOS" );
X = true;
Y = false;
Z = X || Y;
// X ou Y
printf ( "\nA DISJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
Z = X && Y;
// X e Y
printf ( "\nA CONJUNCAO ENTRE VERDADEIRO E FALSO = %d", Z );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo18 ( )
{
// PROGRAMA PARA CALCULAR A VELOCIDADE DE UM VEICULO
// VARIAVEIS:
double D = 0.0,
// Distancia
T = 0.0,
// Tempo
V = 0.0;
// Velocidade
printf ( "EXEMPLO208 - CALCULAR A VELOCIDADE DE UM VEICULO" );
printf ( "\nFORNECER UMA DISTANCIA QUALQUER EM METROS: " );
scanf ( "%lf", &D );
getchar( );
// limpar a entrada de dados
printf ( "\nFORNECER O TEMPO PARA PERCORRE-LA EM SEGUNDOS: " );
scanf ( "%lf", &T );
getchar( );
// limpar a entrada de dados
V = D / T;
printf ( "\nV = D / T = %lf%s", V, " m/s " );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo19 ( )
{
// PROGRAMA PARA COMPARAR CARACTERES COM UMA SENHA
// CONSTANTE:
const char SENHA[5] = "XXXX";
// VARIAVEL:
char S [10];
printf ( "EXEMPLO209 - COMPARAR CARACTERES COM UMA SENHA" );
printf ( "\nFORNECER UMA CADEIA DE CARACTERES QUALQUER: " );
scanf ( "%s", S );
// OBS.: NAO usar o (&) para caracteres !
getchar( );
// limpar a entrada de dados
printf ( "\nA COMPARACAO COM A SENHA = %d", (strcmp(S,SENHA)==0)?1:0 );
//strcmp(S1,S2) compara S1 com S2
//igual a 0: S1 = S2 => 1 ( verdadeiro )
//diferente: S1 <> S2 => 0 ( falso )
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( ( EXIT_SUCCESS ) );
} // fim do programa

int exemplo20 ( )
{
// PROGRAMA PARA CALCULAR O ARCO TRIGONOMETRICO DE UM SENO
// CONSTANTE:
const double PI = 3.14;
// VARIAVEIS:
double ARCO
= 0.0,
COSSENO = 0.0,
SENO
= 0.0,
TANGENTE = 0.0;
printf ( "EXEMPLO210 - CALCULAR O ARCO TRIGONOMETRICO DE UM SENO" );
printf ( "\nFORNECER O VALOR DO SENO: " );
scanf ( "%lf", &SENO );
getchar( );
// limpar a entrada de dados
COSSENO = sqrt( 1.0 - pow(SENO,2) );
TANGENTE = SENO / COSSENO;
ARCO
= atan( TANGENTE );
printf ( "\nO ARCO TRIGONOMETRICO EM GRAUS = %lf", (ARCO*180.0/PI) );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo21 ( )
{
// PROGRAMA PARA LER UM VALOR INTEIRO E VERIFICAR SE E' ZERO
// VARIAVEL:
int X = 0;
printf ( "EXEMPLO301 - LER E TESTAR UM VALOR INTEIRO" );
printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
if ( X == 0 )
printf ( "\nO VALOR DIGITADO FOI ZERO" );
else
printf ( "\nO VALOR DIGITADO NAO FOI ZERO" );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo22 ( )
{
// PROGRAMA PARA LER UM REAL E TESTAR SE DIFERENTE DE ZERO
// VARIAVEL:
float X = 0.0;
printf ( "EXEMPLO302 - LER E TESTAR UM VALOR REAL" );
printf ( "\nFORNECER UM VALOR REAL DIFERENTE DE ZERO: " );
scanf ( "%f", &X );
getchar( );
// limpar a entrada de dados
if( X != 0.0 )
printf ( "\nO VALOR DIGITADO FOI DIFERENTE DE ZERO" );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo23 ( )
{
// PROGRAMA PARA LER CARACTERE E VERIFICAR SE E' UM ALGARISMO
// VARIAVEL:
char X = '0';
printf ( "EXEMPLO303 - LER E TESTAR UM CARACTERE" );
printf ( "\nFORNECER UM ALGARISMO QUALQUER: " );
scanf ( "%c", &X );
getchar( );
// limpar a entrada de dados
if( X >= '0' && X <= '9' )
{
printf ( "\nO VALOR DIGITADO FOI UM ALGARISMO" );
printf ( "\nO ALGARISMO DIGITADO FOI: %c", X );
} // if ALGARISMO
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo24 ( )
{
// PROGRAMA PARA LER CARACTERE E TESTAR SE NAO E' ALGARISMO
// VARIAVEL:
char X = '0';
printf ( "EXEMPLO304 - LER E TESTAR CARACTERE" );
printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
scanf ( "%c", &X );
getchar( );
// limpar a entrada de dados
if( !( X >= '0' && X <= '9') )
{
printf ( "\nNAO FOI DIGITADO UM ALGARISMO" );
printf ( "\nFOI DIGITADO O CARACTERE: %c", X );
} // if NAO ALGARISMO
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo25 ( )
{
// PROGRAMA PARA LER E TESTAR A IGUALDADE DE DOIS INTEIROS
// VARIAVEIS:
int X=0, Y=0;
printf ( "EXEMPLO305 - LER E TESTAR DOIS VALORES INTEIROS" );
printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
scanf ( "%d", &Y );
getchar( );
// limpar a entrada de dados
if( X == Y )
printf ( "\nDOIS VALORES IGUAIS" );
else
{
printf ( "\n%d", X );
printf ( " DIFERENTE DE " );
printf ( "%d", Y );
}
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo26 ( )
{
// PROGRAMA PARA LER E TESTAR DOIS VALORES REAIS
// VARIAVEIS:
double X=0.0, Y=0.0;
printf ( "EXEMPLO306 - LER E TESTAR DOIS VALORES REAIS" );
printf ( "\nFORNECER UM VALOR REAL QUALQUER: " );
scanf ( "%lf", &X );
getchar( );
// limpar a entrada de dados
printf ( "\nFORNECER OUTRO VALOR REAL QUALQUER: " );
scanf ( "%lf", &Y );
getchar( );
// limpar a entrada de dados
if( ! (X == Y) )
{
printf ( "\n%lf", X );
printf ( " DIFERENTE DE " );
printf ( "%lf", Y );
}
else
{
printf ( "VALORES IGUAIS" );
} // if VALORES DIFERENTES
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo27 ( )
{
// PROGRAMA PARA TRATAR ALTERNATIVAS COM VALORES LOGICOS
// VARIAVEIS:
int X=0, Y=0;
bool Z=false;
printf ( "EXEMPLO307 - TRATAR VALORES LOGICOS" );
printf ( "\nFORNECER UM VALOR INTEIRO QUALQUER: " );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
printf ( "\nFORNECER OUTRO VALOR INTEIRO QUALQUER: " );
scanf ( "%d", &Y );
getchar( );
// limpar a entrada de dados
Z = (X == Y);
if( Z )
printf ( "VALORES IGUAIS" );
else
printf ( "VALORES DIFERENTES" );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo28 ( )
{
// PROGRAMA PARA LER E TESTAR UMA LETRA
// VARIAVEL:
char X = '0';
printf ( "EXEMPLO308 - LER E TESTAR UMA LETRA" );
printf ( "\nFORNECER UMA LETRA QUALQUER: " );
scanf ( "%c", &X );
getchar( );
// limpar a entrada de dados
if( X >= 'A' && X <= 'Z' )
printf ( "FOI DIGITADA UMA LETRA MAIUSCULA" );
else
if( X >= 'a' && X <= 'z' )
printf ( "FOI DIGITADA UMA LETRA MINUSCULA" );
else
printf ( "NAO FOI DIGITADA UMA LETRA" );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo29 ( )
{
// PROGRAMA PARA COMPARAR CARACTERES < , = , >
// VARIAVEL:
char X = '0';
printf ( "EXEMPLO309 - COMPARAR CARACTERES < , = , >" );
printf ( "\nFORNECER UM DOS CARACTERES CITADOS: " );
scanf ( "%c", &X );
getchar( );
// limpar a entrada de dados
switch( X )
{
case '>': printf ( "FOI DIGITADO O SINAL DE MAIOR" );
break;
case '=': printf ( "FOI DIGITADO O SINAL DE IGUAL" );
break;
case '<': printf ( "FOI DIGITADO O SINAL DE MENOR" );
break;
default : printf ( "FOI DIGITADO UM OUTRO CARACTERE QUALQUER" );
} // COMPARACAO DE X COM < , = , >
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo30 ( )
{
// PROGRAMA PARA IDENTIFICAR CARACTERES
// VARIAVEL
char X = '0';
printf ( "EXEMPLO310 - IDENTIFICAR CARACTERES" );
printf ( "\nFORNECER UM CARACTERE QUALQUER: " );
scanf ( "%c", &X );
getchar( );
// limpar a entrada de dados
switch ( X )
{
case 'A':
case 'E':
case 'I':
case 'O':
case 'U': printf ( "FOI DIGITADO UMA VOGAL" );
break;
case '0':
case '1':
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9': printf ( "FOI DIGITADO UM ALGARISMO" );
printf ( "\nO NUMERO CORRESPONDENTE = %d", (X-48) );
break;
default: printf ( "FOI DIGITADO UM OUTRO CARACTERE QUALQUER" );
} // IDENTIFICACAO DE UM CARACTERE
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo31 ( )
{
// PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
// VARIAVEIS :
int X
= 0,
CONTADOR = 0;
printf ( "EXEMPLO401 - LER E IMPRIMIR 03 VALORES INTEIROS" );
printf ( "\n" );
// mudar de linha
CONTADOR = 1;
while ( CONTADOR <= 3 )
// REPETIR
{
printf ( "\n" );
// mudar de linha
printf ( "%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
scanf( "%d", &X );
getchar( );
// limpar a entrada de dados
printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
CONTADOR = CONTADOR + 1;
}
// ENQUANTO ( CONTADOR <= 3 )
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo32 ( )
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
int X = 0, N = 0, CONTADOR = 0;
printf ( "EXEMPLO402 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
scanf ( "%d", &N );
getchar( );
// limpar a entrada de dados
CONTADOR = 1;
while ( CONTADOR <= N )
{
printf ( "\n%d", CONTADOR );
printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
CONTADOR = CONTADOR + 1;
} // ENQUANTO ( CONTADOR <= N )
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo33 ( )
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
int X = 0, N = 0;
printf ( "EXEMPLO403 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
scanf ( "%d", &N );
getchar( );
// limpar a entrada de dados
while ( N > 0 )
// REPETIR
{
printf ( "\n%d", N );
printf ( " FORNECER UM VALOR INTEIRO QUALQUER : " );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
N = N - 1;
}
// ENQUANTO N > 0
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo34 ( )
{
// PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
// VARIAVEIS :
int X
= 0,
CONTADOR = 0;
printf ( "EXEMPLO404 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );
for ( CONTADOR = 1; CONTADOR <= 3; CONTADOR = CONTADOR+1)
{
printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
} // PARA CONTADOR EM [1:3]
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo35 ( )
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
int X
= 0,
N
= 0,
CONTADOR = 0;
printf ( "EXEMPLO405 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
scanf ( "%d", &N );
getchar( );
// limpar a entrada de dados
for ( CONTADOR = 1; CONTADOR <= N; CONTADOR++ )
{
printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
printf ( "\nO VALOR DIGITADO FOI : %d", X );
} // PARA CONTADOR EM [1:N]
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo36 ( )
{
// PROGRAMA PARA LER E IMPRIMIR 03 VALORES INTEIROS
// VARIAVEIS :
int X
= 0,
CONTADOR = 0;
printf ( "EXEMPLO406 - LER E IMPRIMIR 03 VALORES INTEIROS\n" );
CONTADOR = 1;
do
// REPETIR
{
printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
CONTADOR = CONTADOR + 1;
}
while ( CONTADOR <= 3 );
// ATE' ( CONTADOR > 3 )
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo37 ( )
{
// PROGRAMA PARA LER E IMPRIMIR (N) VALORES INTEIROS
// VARIAVEIS :
int X
= 0,
CONTADOR = 0;
printf ( "EXEMPLO407 - LER E IMPRIMIR (N) VALORES INTEIROS\n" );
printf ( "\nFORNECER O NUMERO DE VEZES (N) : " );
scanf ( "%d", &CONTADOR );
getchar( );
// limpar a entrada de dados
do
// REPETIR
{
printf ( "\n%d. FORNECER UM VALOR INTEIRO : ", CONTADOR );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
CONTADOR = CONTADOR - 1;
}
while ( CONTADOR > 0 );
// ATE' ( CONTADOR <= 3 )
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo38 ( )
{
// PROGRAMA PARA LER E IMPRIMIR INTEIROS DIFERENTES DE ZERO
// VARIAVEL :
int X = 0;
printf ( "EXEMPLO408 - LER E IMPRIMIR INTEIROS NAO NULOS\n" );
printf ( "\nFORNECER UM VALOR INTEIRO (0 = PARAR) : " );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
while ( X != 0 )
// REPETIR
{
printf ( "\nO VALOR DIGITADO FOI : %d\n", X );
printf ( "\nDIGITE UM VALOR INTEIRO QUALQUER : " );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
}
// ENQUANTO X DIFERENTE DE ZERO
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo39 ( )
{
// PROGRAMA PARA LER UM INTEIRO DIFERENTE DE ZERO
// VARIAVEL :
int X = 0;
printf ( "EXEMPLO409 - PARA LER UM INTEIRO NAO NULO\n" );
printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
while ( X == 0 )
// REPETIR
{
printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
}
// ENQUANTO X IGUAL A ZERO
printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

int exemplo40 ( )
{
// PROGRAMA PARA LER UM INTEIRO DIFERENTE DE ZERO
// VARIAVEL :
int X = 0;
printf ( "EXEMPLO410 - LER UM INTEIRO NAO NULO\n" );
do
// REPETIR
{
printf ( "\nFORNECER UM VALOR DIFERENTE DE ZERO : " );
scanf ( "%d", &X );
getchar( );
// limpar a entrada de dados
}
while ( X == 0 );
// ATE' X DIFERENTE DE ZERO
printf ( "\nDIGITADO UM NUMERO DIFERENTE DE ZERO\n" );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

void P1 ( void )
{
printf ( "\n" );
printf ( "\nCHAMADO O PROCEDIMENTO P1 SEM PARAMETROS" );
printf ( "\n" );
} // fim procedimento P1( )

int exemplo41 ( void )
{
// PROGRAMA PARA CHAMADA DE PROCEDIMENTO SEM PARAMETROS
printf ( "EXEMPLO0501 - CHAMADA A UM PROCEDIMENTO" );
P1 ( );
// chamada ao procedimento
printf ( "\n" );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

void P2 ( void )
{
int X = 0;
printf ( "\n" );
printf ( "\nCHAMADO O PROCEDIMENTO P2 %d VEZ(ES)", X );
printf ( "\n" );
} // fim procedimento P2( )

int exemplo42 ( void )
{
int X = 0; // VARIAVEL EM CONTEXTO GLOBAL
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
printf ( "EXEMPLO0502 - CHAMADA COM VARIAVEL GLOBAL\n" );
for ( X = 1; X <= 5; X = X + 1 )
P2 ( );
// chamar 5 vezes
printf ( "\n" );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

void P3 ( void )
{
int X = 0;// VARIAVEL EM CONTEXTO GLOBAL
X = X + 1;// AVANCAR O CONTEXTO
printf ( "\nCHAMADO O PROCEDIMENTO P3 %d VEZ(ES)", X );
printf ( "\n" );
if ( X < 5 )
P3 ( );
// CHAMAR O PROCEDIMENTO RECURSIVAMENTE
printf ( "\nRETORNANDO AO PROCEDIMENTO P3 PARA A CHAMADA %d", X );
X = X - 1;
// RETORNAR AO CONTEXTO ANTERIOR
getchar ( );
// para esperar
} // fim procedimento P3( )

int exemplo43 ( void )
{
int X = 0;
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
printf ( "EXEMPLO0503 - CHAMADA/RETORNO COM VARIAVEL GLOBAL\n" );
X = 0;
P3 ( );
// OBSERVAR A RECURSIVIDADE !
printf ( "\n" );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

void P4 ( int X )
{
printf ( "\nCHAMADO O PROCEDIMENTO P4 %d VEZ(ES)\n", X );
if ( X < 5 )
P4( X + 1 );
// chamar recursivamente com parametro
printf ( "\nRETORNANDO AO PROCEDIMENTO P4 PARA A CHAMADA %d", X );
getchar ( );
// para esperar
} // fim procedimento P4( )

int exemplo44 ( void )
{
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
printf ( "EXEMPLO0904 - CHAMADA/RETORNO COM PARAMETRO\n" );
P4 ( 1 );
// OBSERVAR REPETICAO FINITA, SEM VARIAVEL GLOBAL !
printf ( "\n" );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

void P5 ( int X )
{
printf ( "\nCHAMADO O PROCEDIMENTO P5 %d VEZ(ES)\n", X );
if ( X > 1 )
P5 ( X - 1 );
printf ( "\nRETORNANDO AO PROCEDIMENTO P5 PARA A CHAMADA %d", X );
getchar ( );
// para esperar
} // fim procedimento P5( )

int exemplo45 ( void )
{
// PROGRAMA PARA MOSTRAR PASSAGEM DE PARAMETRO POR VALOR
printf ( "EXEMPLO0505 - CHAMADA/RETORNO COM PARAMETRO\n" );
P5 ( 5 ); // OBSERVAR REPETICAO FINITA, SEM VARIAVEL GLOBAL !
printf ( "\n" );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

void P62 (int X);
// PROTOTIPO DE PROCEDIMENTO
void P61 (int X)
{
printf ( "CHAMADO O PROCEDIMENTO P61 COM X = %d\n", X );
if ( X < 5 )
P62 ( X );
printf ( "RETORNANDO AO PROCEDIMENTO P61 PARA A CHAMADA COM X = %d\n", X );
getchar ( );
// para esperar
} // fim do procedimento P61( )
void P62 (int X)
{
printf ( "CHAMADO O PROCEDIMENTO P2 COM X = %d\n", X );
X = X+1;
printf ( "RETORNANDO AO PROCEDIMENTO P2 PARA A CHAMADA COM X = %d\n", X );
getchar ( );
// para esperar
P61 ( X );
} // fim do procedimento P2( )

int exemplo46 ( void )
{
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
printf ( "EXEMPLO0506 - CHAMADA/RETORNO COM PARAMETRO\n\n" );
P61 ( 1 ); // OBSERVAR RECURSIVIDADE INDIRETA !
printf ( "\n" );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

void P7 ( int* X )
{
*X = *X + 1;
// AVANCAR O CONTEXTO NA REFERENCIA
printf ( "\nCHAMADO O PROCEDIMENTO P7 %d VEZ(ES)\n", *X );
if ( *X < 5 )
P7 ( X );
printf ( "\nRETORNANDO AO PROCEDIMENTO P7 PARA A CHAMADA %d", *X );
*X = *X - 1;
// RETORNAR AO CONTEXTO DA REFERENCIA ANTERIOR
getchar ( );
// para esperar
} // fim procedimento P7( )

int exemplo47 ( void )
{
// PROGRAMA PARA MOSTRAR PASSAGEM DE PARAMETRO POR REFERENCIA
// VARIAVEL LOCAL
int X;
printf ( "EXEMPLO0507 - CHAMADA/RETORNO COM REFERENCIA\n" );
X = 0;
P7 ( &X );
// OBSERVAR REPETICAO FINITA !
printf ( "\n" );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

void P82 ( int X );
void P81 ( int X )
{
X = X + 1;
printf ( "CHAMADO O PROCEDIMENTO P81 COM X = %d\n", X );
if ( X < 4 )
{
P81 ( X );
P82 ( X );
}
printf ( "\nRETORNANDO AO PROCEDIMENTO P81 PARA A CHAMADA COM X = %d\n", X );
getchar ( ) ;
// para esperar
} // fim do procedimento P81( )
void P82 ( int X )
{
printf ( "CHAMADO O PROCEDIMENTO P82 COM X = %d\n", X );
if ( X > 1 )
P82 ( X - 1 );
printf ( "RETORNANDO AO PROCEDIMENTO P82 PARA A CHAMADA COM X = %d", X );
getchar ( );
// para esperar
} // fim procedimento P82( )

int exemplo48 ( void )
{
// PROGRAMA PARA MOSTRAR PASSAGENS DE PARAMETROS
printf ( "EXEMPLO0508 - MULTIPLAS CHAMADAS/RETORNOS\n\n" );
P81 ( 1 );
printf ( "\nPRESSIONAR <Enter> PARA TERMINAR." );
getchar ( );
// para esperar
return ( EXIT_SUCCESS );
} // fim do programa

void pause ( char message [ ] )
{
printf ( "\n%s", message );
fflush ( stdin );
// limpar a entrada de dados
getchar ( );
// para esperar
} // fim pause ( )
void println ( char text [ ] )
{ printf ( "%s\n", text ); }

int exemplo49 ( void )
{
// PROGRAMA PARA MOSTRAR O USO DE MODULOS
println ( "EXEMPLO0509 - USO DE MODULOS" );
pause ( "PRESSIONAR <Enter> PARA TERMINAR." );
return ( EXIT_SUCCESS );
} // fim do programa

#define EOL '\n'
#define EOS '\0'

const int STR_SIZE = 80;
// quantidade maxima de caracteres
// TIPOS GLOBAIS
typedef char* chars;
// tipo similar 'a cadeia de caracteres

// Digitar o conteudo abaixo em outro arquivo :

// ------------------------------------ EXEMPLO510
// bibliotecas de funcoes auxiliares
//#include "my_def.h"
// para definicoes globais, constantes ...
//#include "my_lib.h"
int exemplo50 ( void )
{
// PROGRAMA PARA MOSTRAR O USO DE MODULOS
// VARIAVEIS :
chars text = "MUDAR DE LINHA";
println ( "EXEMPLO0509 - USO DE MODULOS" );
printf ( "%c", EOL );
printf ( "%s%c", text, EOL );
pause ( "PRESSIONAR <Enter> PARA TERMINAR." );
return ( EXIT_SUCCESS );
} // fim do programa

int main(){

    exemplo01();
    exemplo02();
    exemplo03();
    exemplo04();
    exemplo05();
    exemplo06();
    exemplo07();
    exemplo08();
    exemplo09();
    exemplo10();
    exemplo11();
    exemplo12();
    exemplo13();
    exemplo14();
    exemplo15();
    exemplo16();
    exemplo17();
    exemplo18();
    exemplo19();
    exemplo20();
    exemplo21();
    exemplo22();
    exemplo23();
    exemplo24();
    exemplo25();
    exemplo26();
    exemplo27();
    exemplo28();
    exemplo29();
    exemplo30();
    exemplo31();
    exemplo32();
    exemplo33();
    exemplo34();
    exemplo35();
    exemplo36();
    exemplo37();
    exemplo38();
    exemplo39();
    exemplo40();
    exemplo41();
    exemplo42();
    exemplo43();
    exemplo44();
    exemplo45();
    exemplo46();
    exemplo47();
    exemplo48();
    exemplo49();
    exemplo50();
}

