#include "io.h"

/**
fibonacci - Gerador de numero de Fibonacci.
@return numero de Fibonacci
@param x - numero de ordem cujo valor sera' calculado
*/
int fibonacci ( int x )
{
// definir dado
int resposta = 0;
// testar se contador valido
if ( x == 1 || x == 2 )
{
// primeiros dois valores iguais a 1
resposta = 1; // bases
}
else
{
if ( x > 1 )
{
// fazer de novo com valor absoluto
resposta = fibonacci ( x-1 ) + fibonacci ( x-2 );
} // end if
} // end if
// retornar resposta
return ( resposta );
} // end fibonacci ( )
/**
Method_09.
*/
void method_09 ( )
{
// identificar
IO_id ( "Method_09 - v0.0" );
// calcular numero de Fibonacci
IO_printf ( "fibonacci (%d) = %d\n", 1, fibonacci ( 1 ) );
IO_printf ( "fibonacci (%d) = %d\n", 2, fibonacci ( 2 ) );
IO_printf ( "fibonacci (%d) = %d\n", 3, fibonacci ( 3 ) );
IO_printf ( "fibonacci (%d) = %d\n", 4, fibonacci ( 4 ) );
IO_printf ( "fibonacci (%d) = %d\n", 5, fibonacci ( 5 ) );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_09 ( )
int main (void){
    
    method_09();

}