#include "io.h"


/**
readText - Ler de arquivo texto certa quantidade de valores.
@param fileName - nome do arquivo
*/
void readText ( chars fileName )
{
// definir dados
FILE* arquivo = fopen ( fileName, "rt" );
chars linha = IO_new_chars ( STR_SIZE );
// tentar ler o primeiro
strcpy ( linha, IO_freadln ( arquivo ) );
// repetir enquanto houver dados
while ( ! feof (arquivo) &&
strcmp ( "PARAR", linha ) != 0 )
{   
// mostrar valor
printf ( "%s\n", linha );
// tentar ler o proximo
strcpy ( linha, IO_freadln ( arquivo ) );
} // end while
// fechar arquivo (RECOMENDAVEL para leitura)
fclose ( arquivo );
} // end readText ( )
/**
Method_06.
*/
void method_06 ( )
{
// identificar
IO_id ( "Method_06 - v0.0" );
// executar o metodo auxiliar
readText ( "DADOS3.TXT" );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_06 (


int main (void){
    
    method_06();

}