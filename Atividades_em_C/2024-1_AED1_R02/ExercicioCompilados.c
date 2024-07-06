/*
    identificação: 

Avaliação: 2
Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/


//---Inclusão Bibliotecas---///

#include "io.h"
#include "array.h"
#include "matriz.h"


/**
   Questao01.
 01.) FAZER um programa para:
- definir uma função para determinar se os valores
no arranjo estão em ordem decrescente;
- ler arranjo do arquivo DADOS1.TXT;
- se não estiverem, colocá-los em ordem decrescente,
antes de regravar os dados no arquivo DECRESCENTE.TXT,
colocando a quantidade de elementos na primeira linha do arquivo.
DICA: Para ordenar usar o princípio de troca dos elementos vizinhos
que não estiverem ordenados, e testar novamente usando a função,
até que não seja necessário fazer mais trocas.

  */

void Questao01(void) {
    // identificar
    printf("\n%s\n", "Questao01");

    int_array arr;
    ref_array int_array = &arr;

    int_array->quantidade = 0;

    char* filename = "DADOS1.TXT";

    LerArquivoGravarEmArray(filename, int_array);
    OrdenarArranjo(int_array);

    printf("O array ordenado em ordem decrescente sera: ");
    for (int i = 0; i < int_array->quantidade; i++) {
        printf("%d ", int_array->array[i]);
    }

   filename = "DECRESCENTES.TXT";

   if(GravarArrayEmArquivo(filename, int_array)){
      printf("\n\nQuantidade e Array gravado em %s \n", filename);
   } else{
      printf("\n\n[Erro] ao gravar array em %s \n", filename);
   }

    // encerrar
    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();
} // fim Questao01 ( )


/*
Questao01
O array ordenado em ordem decrescente sera: 129 108 69 40 34 28 27 23 15 14 13 9 7 7 4 3 

Quantidade e Array gravado em DECRESCENTES.TXT
*/



/**
  * Questao02.
  02.) FAZER um programa para:
- definir uma função para receber o arranjo como
parâmetro e inverter a ordem de seus elementos;
- ler arranjo do arquivo DECRESCENTE.TXT;
- gravar o arranjo invertido no arquivo INVERTIDOS.TXT,
colocando a quantidade de dados elementos na primeira linha.
DICA: Trocar o último com o primeiro e prosseguir até a metade.
Exemplo:
// arranjo1 = { 4, 3, 2, 1 };
arranjo_inverter ( arranjo2, arranjo1 ); // [ 1, 2, 3, 4 ]

  */

void Questao02 ( void )
{
 // identificar
    printf ( "\n%s"  , "Questao02\n" );

    int_array arr;
    int_array att;

    ref_array arranjo1 = &arr;
    ref_array arranjo2 = &att;

   char* filename = "DECRESCENTES.TXT";

    LerArquivoGravarEmArray(filename, arranjo1);

    printf("O array lido de %s foi: ", filename);
    for (int i = 0; i < arranjo1->quantidade; i++) {
        printf("%d ", arranjo1->array[i]);
    }

   InverteArranjos(arranjo1, arranjo2);

   printf("\nO array invertido sera: ", filename);
    for (int i = 0; i < arranjo2->quantidade; i++) {
        printf("%d ", arranjo2->array[i]);
    }

   filename = "INVERTIDOS.TXT";

   if(GravarArrayEmArquivo(filename, arranjo2)){
      printf("\n\nQuantidade e Array gravado em %s \n", filename);
   } else{
      printf("\n\n[Erro] ao gravar array em %s \n", filename);
   }

    // encerrar
    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();

    return 0;
} // fim Questao02 ( )


/*
Questao02
O array lido de DECRESCENTES.TXT foi: 129 108 69 40 34 28 27 23 15 14 13 9 7 7 4 3 
O array invertido sera: 3 4 7 7 9 13 14 15 23 27 28 34 40 69 108 129

Quantidade e Array gravado em INVERTIDOS.TXT
*/


/**
  * Questao03.
  
  03.) FAZER um programa para:
- definir uma função para receber um arranjo e um valor inteiro
como parâmetros, e achar a mediana (valor mais perto da média);
se houver dois próximos e diferentes, usar a média desses dois;
- ler arranjo do arquivo DADOS1.TXT;
- receber e mostrar a moda usando a função definida;
DICA: Montar uma tabela para cada valor e quantas vezes aparece,
quando o procurar por outra função.
Exemplo:
arranjo_ler ( "DADOS1.TXT", tabela );
valor = arranjo_mediana ( tabela );
tela <- valor

  */


void Questao03 ( void )
{
 // identificar
    printf ( "\n%s"  , "Questao03\n" );

    int_array arr;
    ref_array int_array = &arr;

    int_array->quantidade = 0;

    char* filename = "DADOS1.TXT";

    LerArquivoGravarEmArray(filename, int_array);

    printf("\nO array lido de %s foi: ", filename);
    for (int i = 0; i < int_array->quantidade; i++) {
        printf("%d ", int_array->array[i]);
    }

   int mediana = AcharMediana(int_array);

   printf("\nPortanto a mediana do array e: %d\n\n", mediana);

   int moda = AcharModa(int_array);

   printf("\nLogo a moda do array e: %d\n", moda);


 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );
    
  return 0; 
} // fim Questao03 ( )


/*
Questao03

O array lido de DADOS1.TXT foi: 28 27 4 9 7 3 13 108 129 14 15 69 32 7 34 40 23
A media do array e: 33.000000

O array possui duas medianas proximas e diferentes que sao 32 e 34

Portanto a mediana do array e: 33
-------------------------------------------------------------------------------------

O array lido de DADOS1.TXT foi: 28 27 27 9 7 3 13 108 129 7 15 69 32 7 34 69 23 7 15 69
O Array tem 20 Numeros

A soma deles sera 698

A media do array e: 34.900000

Portanto a mediana do array e: 34

Tabela com contagem de aparicoes:
28      1
27      1
27      2
9       1
7       1
3       1
13      1
108     1
129     1
7       2
15      1
69      1
32      1
7       3 
34      1
69      2
23      1
7       4
15      2
69      3

Logo a moda do array e: 7
*/



/**
  * Questao04.
  
  04.) FAZER um programa para:
- ler um arranjo do arquivo DADOS1.TXT;
- ler outro arranjo do arquivo DADOS2.TXT;
- filtrar e mostrar os elementos comuns aos dois arranjos, sem repetições;
- gravar o resultado no arquivo FILTRADOS.TXT,
colocando a "quantidade" de dados únicos na primeira linha.
Exemplo:
arranjo_ler ( "DADOS1.TXT", arranjo_1 );
arranjo_ler ( "DADOS2.TXT", arranjo_2 );
arranjo_filtrar ( arranjo3, arranjo1, arranjo2 );
arranjo_gravar ( "FILTRADOS.TXT", arranjo3 );
  
  */


void Questao04 ( void )
{
 // identificar
    printf ( "\n%s"  , "Questao04\n" );

    int_array arr;
    int_array att;
    int_array app;

    ref_array arranjo1 = &arr;
    ref_array arranjo2 = &att;
    ref_array arranjo3 = &app;

    arranjo1->quantidade = 0;
    arranjo2->quantidade = 0;
    arranjo3->quantidade = 0;

    char* filename = "DADOS1.TXT";

    LerArquivoGravarEmArray(filename, arranjo1);

    printf("\nO array lido de %s foi: ", filename);
    for (int i = 0; i < arranjo1->quantidade; i++) {
        printf("%d ", arranjo1->array[i]);
    }

    filename = "DADOS2.TXT";

    LerArquivoGravarEmArray(filename, arranjo2);

    printf("\nO array lido de %s foi: ", filename);
    for (int i = 0; i < arranjo2->quantidade; i++) {
        printf("%d ", arranjo2->array[i]);
    }   

   FiltrarComuns(arranjo3, arranjo1, arranjo2 );

   filename = "FILTRADOS.TXT";

   if(GravarArrayEmArquivo(filename, arranjo3)){
      printf("\n\nQuantidade de dados Unicos e Array gravado em %s \n", filename);
   } else{
      printf("\n\n[Erro] ao gravar array em %s \n", filename);
   }

 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );

  return 0; 

} // fim Questao04 ( )


/*
Questao04

O array lido de DADOS1.TXT foi: 28 27 27 9 7 3 13 108 129 7 15 69 32 7 34 69 23 7 15 69
O array lido de DADOS2.TXT foi: 29 27 48 9 8 3 23 108 138 7 15 69 32 10 50 43 23 8 70 93

Quantidade de dados Unicos e Array gravado em FILTRADOS.TXT
*/



/**
  * Questao05.
  
  05.) FAZER um programa para:
- ler cadeias de caracteres do arquivo BINARIOS1.TXT;
- considerar válidos apenas os valores iguais a zero ou a um;
- converter e armazenar em um arranjo de inteiros (int);
- supondo serem dígitos de um número binário,
convertê-los para decimal mediante o uso de uma função.
Exemplo:
// binario = { 1, 0, 1, 1 } // o último estará na menor potência
int x = arranjo_paraDecimal ( binario ); // x = 11
  
  */
void Questao05 ( void )
{
 // identificar
    printf ( "\n%s"  , "Questao05\n" );

    int_array arr;
    ref_array arranjo = &arr;

    arranjo->quantidade = 0;

    char* filename = "BINARIOS1.TXT";

    LerArquivoBINARIOGravarEmArray(filename, arranjo);

    printf("O array lido foi : ");
    for (int i = 0; i < arranjo->quantidade; i++) {
        printf("%d ", arranjo->array[i]);
    }

    int resultado = ConverteBinarioEmDecimal(arranjo);

   printf("\nO Arranjo binario convertido em decimal e: %d", resultado);

    // encerrar
    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();


} // fim Questao05 ( )


/*
Questao05
O array lido foi : 1 0 0 1 1 1 0 1 1
O Arranjo binario convertido em decimal e: 315
*/




/**
  * Questao06.
  
  06.) FAZER um programa para:
- ler dados para matrizes do arquivo MATRIZ1.TXT;
- ler um número inteiro ( N ) para indicar
a quantidade de linhas e colunas de uma matriz quadrada;
- montar, mostrar e gravar no arquivo MATRIZ2.TXT
uma matriz com a característica abaixo
(tridiagonal crescente).
Exemplo:
1 2 0 0
3 4 5 0
0 6 7 8
0 0 9 10

  */
void Questao06 ( void )
{

   printf ( "\n%s"  , "Questao06\n" );

    int_matriz arr;
    ref_matriz Matriz = &arr;
    Matriz->colunas = 0;
    Matriz->linhas = 0;

   char* filename = "MATRIZ1.TXT";

   LerMatrizDoArquivo(filename, Matriz);

   MontarMatrizDiagonalCrescente(Matriz);

   printf("\nPrint da matriz:\n");
   PrintMatriz(Matriz);

   filename = "MATRIZ2.TXT";

   if(GravarMatrizEmArquivo(filename, Matriz)){
      printf("\n\nMatriz gravada em %s \n", filename);
   } else{
      printf("\n\n[Erro] ao gravar matriz em %s \n", filename);
   }
    // encerrar
    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();

} // fim Questao06 ( )


/*
Print da matriz:
1       2       0       0
3       4       5       0
0       6       7       8
0       0       9       10


Matriz gravada em MATRIZ2.TXT
*/


/**
  * Questao07.
  
  07.) FAZER um programa para:
- ler dados para matrizes do arquivo MATRIZ1.TXT;
- ler um número inteiro ( N ) para indicar
a quantidade de linhas e colunas de uma matriz quadrada;
- montar, mostrar e gravar no arquivo MATRIZ2.TXT
uma matriz com a característica abaixo
(tridiagonal secundária decrescente).
Exemplo:
0 0 9 10
0 6 7 8
3 4 5 0
1 2 0 0
  
  */
void Questao07 ( void )
{
   printf ( "\n%s"  , "Questao07\n" );

    int_matriz arr;
    ref_matriz Matriz = &arr;
    Matriz->colunas = 0;
    Matriz->linhas = 0;

   char* filename = "MATRIZ1.TXT";

   LerMatrizDoArquivo(filename, Matriz);

   MontarMatrizDiagonalDecrescente(Matriz);

   printf("\nPrint da matriz:\n");
   PrintMatriz(Matriz);

   filename = "MATRIZ2.TXT";

   if(GravarMatrizEmArquivo(filename, Matriz)){
      printf("\n\nMatriz gravada em %s \n", filename);
   } else{
      printf("\n\n[Erro] ao gravar matriz em %s \n", filename);
   }
    // encerrar
    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();;

} // fim Questao07 ( )


/*
Questao07

Print da matriz:
0       0       9       10
0       6       7       8
3       4       5       0
1       2       0       0

*/


/**
  * Questao08.
  
  08.) FAZER um programa para:
- ler matriz do arquivo MATRIZ3.TXT;
- definir uma função lógica para verificar
se a matriz lida apresenta a característica abaixo (potências por linha).
Exemplo:
1 1 1 1
1 2 4 8
1 3 9 27
1 4 16 64
  
  */
void Questao08 ( void )
{
   printf ( "\n%s"  , "Questao08\n" );

    int_matriz arr;
    ref_matriz Matriz = &arr;
    Matriz->colunas = 4;
    Matriz->linhas = 4;

   char* filename = "MATRIZ3.TXT";

   LerMatrizDoArquivo(filename, Matriz);

   printf("\nPrint da matriz lida de %s:\n", filename);
   PrintMatriz(Matriz);

   if(VerificarPotenciaPorLinha(Matriz)){
      printf("\n\nA matriz lida de %s apresenta as caracteristicas \n", filename);
   } else{
      printf("\n\n[Erro] A matriz lida de %s NAO apresenta as caracteristicas \n", filename);
   }
    // encerrar
    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();;

} // fim Questao08 ( )

/*
Questao08

Print da matriz lida de MATRIZ3.TXT:
1       1       1       1
1       2       4       8
1       3       9       27
1       4       16      64


A matriz lida de MATRIZ3.TXT apresenta as caracteristicas
--------------------------------------------------------------------------
Print da matriz lida de MATRIZ3.TXT:
1       1       1       1
5       7       8       9
4       3       9       27
1       4       16      64


[Erro] A matriz lida de MATRIZ3.TXT NAO apresenta as caracteristicas
*/


/**
  * Questao09.
  
  09.) FAZER um programa para:
- ler matriz do arquivo MATRIZ4.TXT;
- definir uma função lógica para verificar e
testar se a matriz lida apresenta a característica abaixo (potências por coluna).
Exemplo:
1 1 1 1
1 2 3 4
1 4 9 16
1 8 27 64
  
  */
void Questao09 ( void )
{
   printf ( "\n%s"  , "Questao09\n" );

    int_matriz arr;
    ref_matriz Matriz = &arr;
    Matriz->colunas = 4;
    Matriz->linhas = 4;

   char* filename = "MATRIZ4.TXT";

   LerMatrizDoArquivo(filename, Matriz);

   printf("\nPrint da matriz lida de %s:\n", filename);
   PrintMatriz(Matriz);

   if(VerificarPotenciaPorColuna(Matriz)){
      printf("\n\nA matriz lida de %s apresenta as caracteristicas \n", filename);
   } else{
      printf("\n\n[Erro] A matriz lida de %s NAO apresenta as caracteristicas \n", filename);
   }
    // encerrar
    printf("\n%s\n", "Apertar ENTER para continuar.");
    getchar();;

} // fim Questao09 ( )


/*
Questao09

Print da matriz lida de MATRIZ4.TXT:
1       1       1       1
1       2       3       4
1       4       9       16
1       8       27      64


A matriz lida de MATRIZ4.TXT apresenta as caracteristicas
-------------------------------------------------------------------
Print da matriz lida de MATRIZ4.TXT:
1       1       1       1
1       2       3       4
1       4       9       9
4       1       2       3


[Erro] A matriz lida de MATRIZ4.TXT NAO apresenta as caracteristicas
*/



/**
  * Questao10.
 
 10.) FAZER um programa para:
- ler do arquivo DADOS3.TXT:
- um número inteiro ( N ) para indicar
a quantidade de supermercados cujos preços de produtos serão avaliados;
- o nome e o código (int) de cada supermercado;
- ler o preço de um produto de cada supermercado;
- calcular o preço médio desse produto;
- informar pelo menos dois supermercados com preços inferiores à média.
 
 */
/*

   NOME	      CODIGO	  FEIJAO	   ARROZ   	 MACARRAO 
Santa Maria	   1122	     15.50	   18.90	    10.30      
Santo Antonio	2244	     16.80	   15.50	    8.80       
SuperSo	      4488	     20.50	   20.80	    13.40      
Mercadao	      8822	     12.60     10.80	    6.50        
Iper Mercado	2211	     18.80	   20.90	    15.50   
Média	                    16.84	   17.38	    10.90   

*/

void Questao10 ( void )
{
 // identificar
    printf ( "\n%s"  , "Questao10\n" );

   char* filename = "DADOS3.TXT";

   int n = lerQuantidadeDeSupermercados(filename);

   supermercado Mercado[n];

   LeituraDeArquivoSupermecado(filename, Mercado, n);

   printf("\nPrint da tabela lida de %s:\n\n", filename);
   PrintTabelaSupermercado(Mercado);

   PrintMediaPrecosDoSupermercados(Mercado);
   
   SupermecadosComPrecosInferioresMedia(Mercado);

 // encerrar
    printf ( "\n%s\n", "Apertar ENTER para continuar." );
    getchar( );


} // fim Questao10 ( )

/*
Questao10

Print da tabela lida de DADOS3.TXT:

NOME                    CODIGO            FEIJAO                  ARROZ                 MACARRAO
SantaMaria              1122            15.500000               18.900000               10.300000
SantoAntonio            2244            16.800000               15.500000               8.800000
SuperPrecos             4488            20.500000               12.500000               13.400000
Mercadao                8822            12.600000               10.800000               6.500000
IperMercado             2211            18.800000               20.900000               6.850000

Media:                                  16.840000               15.720000               9.170000

Tem o feijao abaixo da media os supermercados:
SantaMaria
SantoAntonio
Mercadao

Tem o arroz abaixo da media os supermercados:
SantoAntonio
SuperPrecos
Mercadao

Tem o macarrao abaixo da media os supermercados:
SantoAntonio
Mercadao
IperMercado

*/


int main ( void )
{
 // definir dados/resultados
    int opcao = 0;

 // repetir ate' desejar parar
    do
    {
     // identificar
        printf ( "\n" );             // para saltar linha
        printf ( "%s\n", "Recuperacao_02 - 12/06/2024"       );
        printf ( "%s\n", "Matricula: 857859 Nome: Davi Candido de Almeida" );

     // mostrar opcoes
        printf ( "%s\n", "Opcoes:"         );
        printf ( "%s\n", " 0 - parar"      );
        printf ( "%s\n", " 1 - QUESTAO 01   2 - QUESTAO 02" );
        printf ( "%s\n", " 3 - QUESTAO 03   4 - QUESTAO 04" );
        printf ( "%s\n", " 5 - QUESTAO 05   6 - QUESTAO 06" );
        printf ( "%s\n", " 7 - QUESTAO 07   8 - QUESTAO 08" );
        printf ( "%s\n", " 9 - QUESTAO 09  10 - QUESTAO 10" );
        printf ( "%s\n", "" );        // para saltar linha

     // ler opcao
        printf ( "%s", "Qual a sua opcao? " );
        scanf  ( "%d", &opcao ); getchar ( );
        printf ( "%d",  opcao );

     // escolher acao
        switch ( opcao )
        {
           case  0:               break;
           case  1: Questao01 ( ); break;
           case  2: Questao02 ( ); break;
           case  3: Questao03 ( ); break;
           case  4: Questao04 ( ); break;
           case  5: Questao05 ( ); break;
           case  6: Questao06 ( ); break;
           case  7: Questao07 ( ); break;
           case  8: Questao08 ( ); break;
           case  9: Questao09 ( ); break;
           case 10: Questao10 ( ); break;
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