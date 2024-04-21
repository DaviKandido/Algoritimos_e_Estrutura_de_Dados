#include "io.h"

/**
 contarDigitos - Contar digitos recursivamente.
 @return quantidade de digitos
 @param x - numero cuja quantidade de digitos sera' calculada
*/
int contarDigitos ( int x )
{
// definir dado
 int resposta = 1; // base
// testar se contador valido
 if ( x >= 10 )
 {
 // tentar fazer de novo com valor menor
 resposta = 1 + contarDigitos ( x/10 ); // motor 1
 }
 else
 {
 if ( x < 0 )
 {
 // fazer de novo com valor absoluto
 resposta = contarDigitos ( -x ); // motor 2
 } // end if
 } // end if
// retornar resposta
 return ( resposta );
} // end contarDigitos ( )
/**
 Method_08.
*/
void method_08 ( )
{
// identificar
 IO_id ( "Method_08 - v0.0" );
// mostrar resultado
 IO_printf ( "digitos (%3d) = %d\n", 123, contarDigitos (123) );
 IO_printf ( "digitos (%3d) = %d\n", 1 , contarDigitos ( 1 ) );
 IO_printf ( "digitos (%3d) = %d\n", -10, contarDigitos ( -10 ) );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_08 ( )

int main (void){
    
    method_08();

}