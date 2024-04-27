#include <stdio.h>
#include <stdlib.h>

// --------------------------- inicio biblioteca

const int MAX = 20; // tamanho maximo

/*
  Metodo para guardar valor inicial em posicoes de arranjo.
  @param value - valor a ser guardado
  @param n     - quantidade de dados
  @param array - arranjo onde guardar
*/

//aleatorios rand ()

void ale_int_array ( int n, int array [ ] )
{

    for ( int x = 0; n > x; x++){

        array[x] = 20+rand()%51;

    }

}

void init_int_array ( int value, int n, int array [ ] )
{

    for ( int x = 0; n > x; x++){

        array[x] = value;

    }
    
} // end init_int_array( )

/*
  Metodo para mostrar valores em arranjo.
  @param n     - quantidade de dados
  @param array - arranjo onde guardar
*/
void print_int_array ( int n, int array [ ] )
{
    for ( int x = 0; n > x; x++){

        printf("\n%d = %d", x , array[x]);

    }
    
} // end print_int_array( )

/*
  Funcao para ler valores para arranjo.
  @return quantidade de dados lida
  @param  m     - quantidade maxima de dados
  @param  array - arranjo onde guardar
*/
int n_scan_int_array ( int m, int array [ ] )
{
 // definir dados locais
    int n = 0;
 // retornar a quantidade de dados lida
        for ( int x = 0; m > x; x++){
        n = x;
    }

    
    return ( n +1 );
} // end n_scan_int_array( )

/*
  Metodo para gravar em arquivo valores em arranjo.
  @param filename - nome do arquivo
  @param n        - quantidade de dados
  @param array    - arranjo com dados
*/
void fprint_int_array ( char filename [ ], int n, int array [ ] )
{
 // abrir arquivo para gravar texto
    FILE *arquivo = fopen ( filename, "w" );


    for ( int x = 0; n > x; x++){

        fprintf(arquivo, "\n%d = %d", x , array[x]);

    }
    
    fprintf(arquivo, "\nA quantidade de dados lidos e %d",n_scan_int_array(MAX, array));

    
 // fechar arquivo 
    fclose ( arquivo );
} // end fprint_int_array( )

/*
  Metodo para ler de arquivo valores para arranjo.
  @return quantidade lida
  @param filename - nome do arquivo
  @param n        - quantidade de dados
  @param array    - arranjo com dados
*/
int n_fscan_int_array
    ( char filename [ ], int m, int array [ ] )
{
 // definir dados locais
    int n = 0;
 // abrir arquivo para ler texto
    FILE *arquivo = fopen ( filename, "r" );
    
    for ( int x = 0; m > x; x++){

        fscanf(arquivo, "\n%d = %d", &x , &array[x]);
        n = x;

    }
    

    
 // fechar arquivo 
    fclose ( arquivo );
 // retornar a quantidade lida
    return ( n );
} // end n_fscan_int_array( )

/*
  Funcao para achar o maior valor em arranjo.
  @return maior valor
  @param  n     - quantidade de dados
  @param  array - arranjo onde procurar
*/
int largest_int_array ( int n, int array [ ] )
{
 // definir dados locais
    int maior = 0;
    
    for ( int x = 0; n > x; x++){
        
        if ( maior < array[x]){
             maior = array[x];
        }

    }
    return ( maior );
} // end largest_int_array ( )

/*
  Funcao para achar o menor valor em arranjo.
  @return menor valor
  @param  n     - quantidade de dados
  @param  array - arranjo onde procurar
*/
int smallest_int_array ( int n, int array [ ] )
{
 // definir dados locais
    int menor = array[0];
 // retornar o menor valor
    for ( int x = 0; n > x; x++){
        
        if ( menor > array[x]){
             menor = array[x];
        }

    }

    
    return ( menor );
} // end smallest_int_array ( )

/*
  Funcao para somar valores em arranjo.
  @return soma de todos os valores
  @param  n     - quantidade de dados
  @param  array - arranjo onde procurar
*/
int sum_int_array ( int n, int array [ ] )
{
 // definir dados locais
    int soma = 0;
 // retornar a soma de todos os dados

    for ( int x = 0; n > x; x++){

        soma += array[x];
            }
    
    return ( soma );
} // end sum_int_array ( )

/*
  Funcao para calcular a media dos valores em arranjo.
  @return media dos valores
  @param  n     - quantidade de dados
  @param  array - arranjo onde procurar
*/
double average_int_array ( int n, int array [ ] )
{
 // definir dados locais
    double media = 0.0;
    double soma = 0.0;

 // retornar a media de todos os dados
    for ( int x = 0; n > x; x++){

        soma += array[x];
            }
    
    media = soma / n;
    
    return ( media );
} // end average_int_array ( )

/*
  Metodo para copiar valores em arranjo.
  @param n      - quantidade de dados
  @param array2 - arranjo onde guardar
  @param array1 - arranjo de onde copiar
*/
void copy_int_array ( int n, int array2 [ ], int array1 [ ] )
{
 // definir dados locais

        for ( int x = 0; n > x; x++){

        array2[x] = array1[x];
            }
    
 // copiar dados de um arranjo para outro
} // end copiar_int_array( )

// --------------------------- fim biblioteca

/*
   Method_01.
*/
void method_01 ( void )
{
  // testar a atribuicao de valor inicial  
    
    int array[MAX];
    int value = 0;
    
    printf("Atribua um valor a value: ");
    scanf("%d", &value );

    init_int_array( value, MAX, array );
    
    
} // end method_01 ( )

/*
   Method_02.
*/
void method_02 ( void )
{
  // testar a exibicao de dados  

    int array[MAX];
    int value = 0;
    
    printf("Atribua um valor a value: ");
    scanf("%d", &value );

    init_int_array( value, MAX, array );
    print_int_array( MAX, array );
    
    

    
} // end method_01 ( )

/*
   Method_03.
*/
void method_03 ( void )
{
  // testar a leitura de dados do teclado

    int array[MAX];
    int value = 0;
    
    printf("Atribua um valor a value: ");
    scanf("%d", &value );

    init_int_array( value, MAX, array );
    print_int_array( MAX, array );
    printf("\nA quantidade de dados lidos e %d\n",n_scan_int_array(MAX, array));
    
} // end method_03 ( )

/*
   Method_04.
*/
void method_04 ( void )
{
  // testar a gravacao de dados em arquivo

    int array[MAX];
    char aed1_texto[20] = "aed1_texto";
    int value = 0;
    
    printf("Atribua um valor a value: ");
    scanf("%d", &value );


    init_int_array( value, MAX, array );
    print_int_array( MAX, array );
    printf("\nA quantidade de dados lidos e %d",n_scan_int_array(MAX, array));
    fprint_int_array ( aed1_texto, MAX, array );
    

    
} // end method_04 ( )

/*
   Method_05.
*/
void method_05 ( void )
{
  // testar a leitura de dados de arquivo

    int array[MAX];
    char aed1_texto[20] = "aed1_texto";
    int value = 0;
    
    printf("Atribua um valor a value: ");
    scanf("%d", &value );


    init_int_array( value, MAX, array );
    print_int_array( MAX, array );
    printf("\nA quantidade de dados lidos e %d",n_scan_int_array(MAX, array));
    fprint_int_array ( aed1_texto, MAX, array );
    printf("\nA quantidade de dados lidos no arquivo e %d",n_scan_int_array(MAX, array));   
    
    
} // end method_05 ( )

/*
   Method_06.
*/
void method_06 ( void )
{
  // testar a procura do maior valor

    int array[MAX];
    int value = 0;
    


    ale_int_array( MAX, array );
    print_int_array( MAX, array );
    printf("\n\nO maior valor em aranjo e: %d",largest_int_array ( MAX, array )); 
    
} // end method_06 ( )

/*
   Method_07.
*/
void method_07 ( void )
{
  // testar a procura do menor valor

    int array[MAX];
    int value = 0;
    

    ale_int_array( MAX, array );
    print_int_array( MAX, array );
    printf("\n\nO maior valor em aranjo e: %d",largest_int_array ( MAX, array ));
    printf("\n\nO menor valor em aranjo e: %d",smallest_int_array ( MAX, array ));

} // end method_07 ( )
/*
   Method_08.
*/
void method_08 ( void )
{
  // testar a procura da soma de todos os dados
    int array[MAX];
    int value = 0;
    

    ale_int_array( MAX, array );
    print_int_array( MAX, array );
    printf("\n\nO maior valor em aranjo e: %d",largest_int_array ( MAX, array ));
    printf("\n\nO menor valor em aranjo e: %d",smallest_int_array ( MAX, array ));
    printf("\n\nA soma dos valores e: %d",sum_int_array ( MAX, array ));

    
} // end method_08 ( )

/*
   Method_09.
*/
void method_09 ( void )
{
  // testar a procura da media de todos os dados


    int array[MAX];
    int value = 0;
    

    ale_int_array( MAX, array );
    print_int_array( MAX, array );
    printf("\n\nO maior valor em aranjo e: %d",largest_int_array ( MAX, array ));
    printf("\n\nO menor valor em aranjo e: %d",smallest_int_array ( MAX, array ));
    printf("\n\nA soma dos valores e: %d",sum_int_array ( MAX, array ));
    printf("\n\nA media dos valores e %lf",average_int_array ( MAX, array ));


    
} // end method_09 ( )

/*
   Method_10.
*/
void method_10 ( void )
{
  // testar a copia de dados 
    int array[MAX];
    int value = 0;
    int array2[MAX];

    printf("\n - Array 1: \n");
    
    ale_int_array( MAX, array );
    print_int_array( MAX, array );
    
    printf("\n\n - Array 2: \n");
    
    copy_int_array( MAX, array2, array );
    print_int_array( MAX, array2 );

    

    
} // end method_10 ( )

// -------------------------- Acao principal

int main ( void )
{
 // definir dados
     int opcao = 0;

 // acoes
    do
    {
       printf ( "\nQual a opcao? " );
       scanf  ( "%d", &opcao ); getchar ( );
       printf ( "%d\n",  opcao );
       switch ( opcao )
       {
         case  0: /* nao fazer nada */
           break;
         case  1: method_01 ( ); break;
         case  2: method_02 ( ); break;
         case  3: method_03 ( ); break;
         case  4: method_04 ( ); break;
         case  5: method_05 ( ); break;
         case  6: method_06 ( ); break;
         case  7: method_07 ( ); break;
         case  8: method_08 ( ); break;
         case  9: method_09 ( ); break;
         case 10: method_10 ( ); break;
         default:
                  printf ( "ERRO: Opcao invalida.\nApertar ENTER." );
                  getchar( );
          break;
       } // end switch
    }
    while ( opcao != 0 );
 // encerrar
     printf ( "\nApertar ENTER\n\n" ); getchar( );
     return ( 0 );

} // end main ( )
/**
     Testes - Comentarios
*/

