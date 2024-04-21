#include "io.h"

/**
contarMinusculas - Contador de letras minusculas.
@return quantidade de letras minusculas
@param x - cadeia de caracteres a ser avaliada
*/
int contarMinusculas ( chars cadeia, int x )
{
// definir dado
int resposta = 0;
// testar se contador valido
if ( 0 <= x && x < strlen ( cadeia ) )
{
// testar se letra minuscula
if ( cadeia [x] >= 'a' &&
cadeia [x] <= 'z' )
{
// fazer de novo com valor absoluto
resposta = 1;
} // end if
resposta = resposta + contarMinusculas ( cadeia, x+1 );
} // end if
// retornar resposta
return ( resposta );
} // end contarMinusculas ( )
/**
Method_10.
*/
void method_10 ( )
{
// identificar
IO_id ( "Method_10 - v0.0" );
// contar minusculas em cadeias de caracteres
IO_printf ( "Minusculas (\"abc\",0) = %d\n", contarMinusculas ( "abc", 0 ) );
IO_printf ( "Minusculas (\"aBc\",0) = %d\n", contarMinusculas ( "aBc", 0 ) );
IO_printf ( "Minusculas (\"AbC\",0) = %d\n", contarMinusculas ( "AbC", 0 ) );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_10 ( )

int main (void){
    
    method_10();

}