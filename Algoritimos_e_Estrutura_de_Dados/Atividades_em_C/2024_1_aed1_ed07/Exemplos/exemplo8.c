#include "io.h"

/**
appendText - Gravar em arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
@param x - quantidade de valores
*/
void appendText ( chars fileName )
{
// definir dados
FILE* arquivo = fopen ( fileName, "at" );
chars linha = IO_new_chars ( STR_SIZE );
// repetir ate' desejar parar
IO_println ( "Gravar linhas (para terminar, entrar com \"PARAR\"):\n" );
do
{
// ler do teclado
strcpy ( linha, IO_readln ( "" ) );
// gravar valor
IO_fprintln ( arquivo, linha );
}
while ( strcmp ( "PARAR", linha ) != 0 );
// fechar arquivo (INDISPENSAVEL para gravacao)
fclose ( arquivo );
} // end appendText ( )
/**
Method_08.
*/
void method_08 ( )
{
// identificar
IO_id ( "EXEMPLO0710 - Method_08 - v0.0" );
// executar o metodo auxiliar
appendText ( "DADOS4.TXT" );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_08 ( )



int main (void){
    
    method_08();

}