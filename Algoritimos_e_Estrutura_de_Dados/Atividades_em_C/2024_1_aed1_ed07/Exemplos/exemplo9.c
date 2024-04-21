#include "io.h"


/**
readWords - Ler palavras de arquivo.
@param fileName - nome do arquivo
*/
void readWords ( chars fileName )
{
// definir dados
FILE* arquivo = fopen ( fileName, "rt" );
chars linha = IO_new_chars ( STR_SIZE );
// tentar ler a primeira
strcpy ( linha, IO_fread ( arquivo ) );
// repetir enquanto houver dados
while ( ! feof (arquivo) &&
strcmp ( "PARAR", linha ) != 0 )
{
// mostrar valor
printf ( "%s\n", linha );
// tentar ler o proximo
strcpy ( linha, IO_fread ( arquivo ) );
} // end while
// fechar arquivo (RECOMENDAVEL para leitura)
fclose ( arquivo );
} // end readWords ( )
/**
Method_09.
*/
void method_09 ( )
{
// identificar
IO_id ( "Method_09 - v0.0" );
// executar o metodo auxiliar
readWords ( "DADOS4.TXT" );
// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_09 ( )


int main (void){
    
    method_09();

}