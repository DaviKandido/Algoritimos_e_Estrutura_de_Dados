// QUESTAO 7

#include "io.h"

void passar_string()
{
    //Declaração de dados
    int i = 0;
    char s[100];
    printf("Digite aqui a string: ");
    //ARMAZENAR A STRING
    scanf("%s", s);
    //VERIFICAR OS CARACTERES DA STRING
    for (i = 0;i< strlen(s); i++)
    {
        if (!(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T' || s[i] == 'U'))
        {
            printf("Ha algum erro na cadeia");
            return;
        }
    }
    //CHAMADA DA FUNCAO
   printf ("%d", verif_DNA(s));
}
int verif_DNA(char s[100])
{
    //VERIFICAR DADOS
    int i = 0;
    bool verif_T = false, verif_U = false;

    for (i = 0; i<strlen(s); i++)
    {
        if (s[i] == 'T')
        {
            verif_T = true;
        }
        if (s[i] == 'U')
        {
            verif_U = true;
        }
        if (verif_T == true && i == strlen(s)-1)
        {
            return (2);
        }
        if (verif_U == true && i == strlen(s)-1)
        {
            return (1);
        }
        if (verif_T == false && verif_U == false)
        {
            return (0);
        }   

        return (-1);
    }
}
int main()
{
    passar_string();
    return 0;
}