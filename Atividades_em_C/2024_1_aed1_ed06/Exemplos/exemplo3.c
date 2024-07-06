#include "io.h"

/**
 Method_03a - Mostrar certa quantidade de valores recursivamente.
 @param x - quantidade de valores a serem mostrados
*/
void method_03a ( int x )
{
// repetir enquanto valor maior que zero
 if ( x > 1 )
 {
 // passar ao proximo
 method_03a ( x - 1 ); // motor da recursividade
 // mostrar valor
 IO_printf ( "%s%d\n", "Valor = ", x );
 }
 else
 { // base da recursividade
 // mostrar o ultimo
 IO_printf ( "%s\n", "Valor = 1" );
 } // end if
} // end method_03a( )
/**
 Method_03.
*/
void method_03 ( )
{
// identificar
 IO_id ( "Method_03 - v0.0" );
// executar o metodo auxiliar
 method_03a ( 5 ); // motor da recursividade
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_03 ( )


int main (void){
    
    method_03();


}