#include "io.h"

/**
 Method_05a - Mostrar certa quantidade de valores recursivamente.
 @param x - quantidade de valores a serem mostrados
*/
void method_05a ( int x )
{
// repetir enquanto valor maior que zero
 if ( x > 1 )
 {
 // passar ao proximo
 method_05a ( x - 1 ); // motor da recursividade
 // mostrar valor
 IO_printf ( "%d: %d/%d\n", x, (2*(x-1)), (2*(x-1)+1) );
 }
 else
 { // base da recursividade
 // mostrar o ultimo
 IO_printf ( "%d; %d\n", x, 1 );
 } // end if
} // end method_05a( )
/**
 Method_05.
*/
void method_05 ( )
{
// identificar
 IO_id ( "Method_05 - v0.0" );
// executar o metodo auxiliar
 method_05a ( 5 ); // motor da recursividade
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_05 (  

int main (void){
    
    method_05();

}