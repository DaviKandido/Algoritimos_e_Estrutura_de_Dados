#include "io.h"

/**
copyText - Copiar arquivo texto.
@param fileOut - nome do arquivo de saida (destino)
@param fileIn - nome do arquivo de entrada (origem )
*/
void copyText ( chars fileOut, chars fileIn )
{
// definir dados
FILE* saida = fopen ( fileOut, "wt" );
FILE* entrada = fopen ( fileIn , "rt" );
chars linha = IO_new_chars ( STR_SIZE );
int contador = 0;
// ler da origem
strcpy ( linha, IO_freadln ( entrada ) );
// repetir enquanto houver dados
while ( ! feof ( entrada ) )
{
// contar linha lida
contador = contador + 1;
// gravar no destino,
// EXCEPCIONALMENTE sem a ultima linha, nesse caso
if ( strcmp ( "PARAR", linha ) != 0 )
{
IO_fprintln ( saida, linha );
} // end if
// ler da origem
strcpy ( linha, IO_freadln ( entrada ) );
} // end while
// informar total de linhas copiadas
IO_printf ( "Lines read = %d\n", contador );
// fechar arquivos
fclose ( saida );
fclose ( entrada );
} // end copyText ( )
/**
Method_07.
*/
void method_07 ( )
{
// identificar
IO_id ( "Method_07 - v0.0" );
// executar o metodo auxiliar
copyText ( "DADOS4.TXT", "DADOS3.TXT" );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_07 ( )

int main (void){
    
    method_07();

}