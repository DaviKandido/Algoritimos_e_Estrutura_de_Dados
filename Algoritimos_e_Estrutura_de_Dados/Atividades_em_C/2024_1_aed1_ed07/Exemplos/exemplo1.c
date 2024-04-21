#include "io.h"

/**
writeInts - Gravar em arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void writeInts ( chars fileName, int x )
{
// definir dados
FILE* arquivo = fopen ( fileName, "wt" );
int y = 0;
// repetir para a quantidade de dados
for ( y = 1; y <= x; y = y + 1 )
{
// gravar valor
fprintf ( arquivo, "%d\n", y );
} // end for
// fechar arquivo (INDISPENSAVEL para gravacao)
fclose ( arquivo );
} // end writeInts ( )
/**
Method_01 - Mostrar certa quantidade de valores.
*/
void method_01 ( )
{
// identificar
IO_id ( "Method_01 - v0.0" );
// executar o metodo auxiliar
writeInts ( "DADOS1.TXT", 10 );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_01 ( )



int main (void){
    
    method_01();

}