/*
    identificação: 

Nome: Davi Cândido de Almeida
Matricula: 857859
Codigo de Pessoa: 1527368

/*

Questão:

06) Defina uma função inteira para verificar se um valor inteiro é primo.
Use essa função em um procedimento para determinar quantos valores no intervalo de [11:99] 
podem ser candidatos a um par de números de Sheldon.
Números de Sheldon são primos “espelhados” de dois algarismos diferentes, como (37 e 73).
Restrições:
Use apenas uma repetição por método.
Não utilize “break” ou “continue”


*/



#include "io.h"


int primoespelhados(int p1)
{                       

   for(int x = 2; x <= sqrt(p1); x++){
        if(p1 % x == 0){
            return 0;
        }
   }
        return 1;

}


void ParesSheldon(){

int cont = 0;

    for(int x =11; x <= 99; x++){

        if(primoespelhados(x) && primoespelhados((x % 10) * 10 + (x / 10))){

        printf("\n(%d , %d) sao pares de sheldon", x, (x % 10) * 10 + (x / 10));
        cont++;

        }
    }
    printf("\n\nTotal de pares de sheldon: %d", cont);

}


int main(){

 

ParesSheldon();


 return 0;
}


/*

        Resposta:

(11 , 11) sao pares de sheldon
(13 , 31) sao pares de sheldon
(17 , 71) sao pares de sheldon
(31 , 13) sao pares de sheldon
(37 , 73) sao pares de sheldon
(71 , 17) sao pares de sheldon
(73 , 37) sao pares de sheldon
(79 , 97) sao pares de sheldon
(97 , 79) sao pares de sheldon

Total de pares de sheldon: 9
*/