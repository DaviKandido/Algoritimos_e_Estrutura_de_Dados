#include "io.h"

/**
writeDoubles - Gravar em arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void writeDoubles ( chars fileName, int x )
{
// definir dados
FILE* arquivo = fopen ( fileName, "wt" );
int y = 0;
// gravar quantidade de valores
IO_fprintf ( arquivo, "%d\n", x );
// repetir para a quantidade de dados
for ( y = 1; y <= x; y = y + 1 )
{
// gravar valor
IO_fprintf ( arquivo, "%lf\n", (0.1*y) );
} // end for
// fechar arquivo (INDISPENSAVEL para gravacao)
fclose ( arquivo );
} // end writeDoubles ( )
/**
Method_03.
*/
void method_03 ( )
{
// identificar
IO_id ( "Method_03 - v0.0" );
// executar o metodo auxiliar
writeDoubles ( "DADOS2.TXT", 10 );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_03 ( )



int main (void){
    
    method_03();

}