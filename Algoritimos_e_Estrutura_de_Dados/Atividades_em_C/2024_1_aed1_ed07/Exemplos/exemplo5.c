#include "io.h"


/**
writeText - Gravar em arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void writeText ( chars fileName )
{
// definir dados
FILE* arquivo = fopen ( fileName, "wt" );
chars linha = IO_new_chars ( STR_SIZE );
// repetir ate' desejar parar
IO_println ( "Gravar linhas (para terminar, entrar com \"PARAR\"):\n" );
do
{
// ler do teclado
strcpy ( linha, IO_readln ( "" ) );
// gravar valor
IO_fprintf ( arquivo, "%s\n", linha );
}
while ( strcmp ( "PARAR", linha ) != 0 );
// fechar arquivo (INDISPENSAVEL para gravacao)
fclose ( arquivo );
} // end writeText ( )
/**
Method_05.
*/
void method_05 ( )
{
// identificar
IO_id ( "Method_05 - v0.0" );
// executar o metodo auxiliar
writeText ( "DADOS3.TXT" );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_05 ( )


int main (void){
    
    method_05();

}