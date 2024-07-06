/*
    identificação: 

Avaliação: 2
Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

*/

/*
07) Questão 7:

Outro dia, três professores de Matemática conversavam no corredor, 
sobre suas datas de aniversário dados os dias que já tinham vivido. 
Por curiosidade, perguntaram a um professor de Algoritmos como resolver 
o problema de saber qual dos professores estava mais perto da comemoração 
de seu aniversário. O professor disse para usar a estrutura abaixo.

struct Datas {
    int dias[3];
    struct Data {
        int dia, mes, ano;
    } data[3];
};

Exemplos:
Dias vividos = { 9876, 8967, 6789 }

Qual dos professores fará aniversário primeiro?

Supor ano com 365 dias e mês com 30 dias. Sem anos bissextos.


*/

#include "io.h"



struct Datas {
    int dias[3];
    struct Data {
        int dia, mes, ano;
    }data[3];
};

struct GuardaDatas {
    int dias[3];
};

int ProximoAniversariante(struct Datas professores){

    // Data de aniversário de cada professor
    for (int i = 0; i < 3; i++) {
        professores.data[i].ano = professores.dias[i] / 365;
        professores.dias[i] %= 365;
        professores.data[i].mes = professores.dias[i] / 30;
        professores.dias[i] %= 30;
        professores.data[i].dia = professores.dias[i];

        printf("O professor %d viveu %d anos, %d meses, %d dias \n", i+1, professores.data[i].ano,
                                                                          professores.data[i].mes,
                                                                          professores.data[i].dia );

    }
    


    // Encontra o professor que faz aniversário primeiro
    int indice_menor = 0;
    for (int i = 1; i < 3; i++) {
        if (professores.data[i].ano < professores.data[indice_menor].ano) {
            indice_menor = i;
        } else if (professores.data[i].ano == professores.data[indice_menor].ano) {
            if (professores.data[i].mes < professores.data[indice_menor].mes) {
                indice_menor = i;
            } else if (professores.data[i].mes == professores.data[indice_menor].mes) {
                if (professores.data[i].dia < professores.data[indice_menor].dia) {
                    indice_menor = i;
                }
            }
        }
    }

    return indice_menor;
    
}

int main() {

    struct Datas professores;
    struct GuardaDatas GuardaProfessores;

    printf("Defina os dias vividos de cada professor: \n");
    for(int i = 0; i < 3; i++){
        printf("Professor %d: ", i+1);
        scanf("%d", &professores.dias[i]); 
        GuardaProfessores.dias[i] = professores.dias[i];
    }


    int aniversariante = ProximoAniversariante(professores);

    printf("\nPortanto o professor que fara aniversario primeiro e o professor %d\n", aniversariante + 1);
    printf("Ou seja o que viveu %d dias \n", GuardaProfessores.dias[aniversariante]);


    return 0;
}

/*
    //Informações uteis (Conforme data de 11/06/2024):

    Professor 1:
    Data de nascimento: 28 de maio de 1997
    Próximo aniversário: 28 de maio de 2025

    Professor 2:
    Data de nascimento: 23 de novembro de 1999
    Próximo aniversário: 23 de novembro de 2024

    Professor 3:
    Data de nascimento: 9 de novembro de 2005
    Próximo aniversário: 9 de novembro de 2024


        Respostas terminal:

    Defina os dias vividos de cada professor: 
    Professor 1: 9876
    Professor 2: 8967
    Professor 3: 6789
    O professor 1 viveu 27 anos, 0 meses, 21 dias 
    O professor 2 viveu 24 anos, 6 meses, 27 dias
    O professor 3 viveu 18 anos, 7 meses, 9 dias

    Portanto o professor que fara aniversario primeiro e o professor 3
    Ou seja o que viveu 6789 dias

       Respostas de teste alternativo terminal:

    Defina os dias vividos de cada professor: 
    Professor 1: 8967
    Professor 2: 6789
    Professor 3: 9876
    O professor 1 viveu 24 anos, 6 meses, 27 dias 
    O professor 2 viveu 18 anos, 7 meses, 9 dias 
    O professor 3 viveu 27 anos, 0 meses, 21 dias 

    Portanto o professor que fara aniversario primeiro e o professor 2
    Ou seja o que viveu 6789 dias 
*/