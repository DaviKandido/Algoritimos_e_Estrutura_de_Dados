#include "io.h"

/**
 somarFracoes2b - Somar certa quantidade de fracoes recursivamente.
 @return soma de valores
 @param x - quantidade de valores a serem mostrados (controle)
 @param soma - valor atual da soma (historia = memoria)
 @param numerador - numerador da parcela a ser somada
 @param denominador - denominador da parcela a ser somada
*/
double somarFracoes2b ( int x, double soma, double numerador, double denominador )
{
// repetir enquanto valor maior que zero
 if ( x > 0 )
 {
 // mostrar valores atuais
 IO_printf ( "%d: %lf/%lf\n", x, numerador, denominador );
 // somar o termo atual e passar ao proximo (motor da recursividade)
 soma = somarFracoes2b ( x - 1, // proximo
 soma + ((1.0*numerador) / denominador), // atualizar
 numerador +2.0 , // proximo
 denominador+2.0 ); // proximo
 } //end if
// retornar resultado
 return ( soma );
} // end somarFracoes2b ( )
/**
 somarFracoes2a - Somar certa quantidade de fracoes.
 Funcao de servico para preparar e 
 disparar o mecanismo recursivo.
 @return soma de valores
 @param x - quantidade de valores a serem mostrados
*/
double somarFracoes2a ( int x )
{
// definir dado local
 double soma = 0.0;
// repetir enquanto valor maior que zero
 if ( x > 0 )
 {
 // mostrar o ultimo
 IO_printf ( "%d: %lf\n", x, 1.0 );
 // preparar a soma do valor atual e o proximo
 soma = somarFracoes2b ( x-1, 1.0, 2.0, 3.0 );
 } // end if
// retornar resultado
 return ( soma );
} // end somarFracoes2a ( )
/**
 Method_07.
*/
void method_07 ( )
{
// definir dado
 double soma = 0.0;
// identificar
 IO_id ( "Method_07 - v0.0" );
// chamar a funcao e receber o resultado
 soma = somarFracoes2a ( 5 );
// mostrar resultado
 IO_printf ( "soma = %lf\n", soma );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_07 ( )

int main (void){
    
    method_07();

}