#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int acharmaior1(int quantidade, int arranjo[]){
    int maior1 = arranjo[0];
        for(int i = 0; i < quantidade; i++){
            if(arranjo[i] > maior1){
                maior1 = arranjo[i];
            }
        }
    
    return maior1;
}

int acharmaior2(int quantidade, int arranjo[]){
    int maior2 = 0;
        for(int i = 0; i < quantidade; i++){
            if(arranjo[i] > maior2 && arranjo[i] != acharmaior1(quantidade, arranjo)){
                maior2 = arranjo[i];
            }
        }
    return maior2;
    }


int main() {

int arranjo[5];

printf("Defina 5 numeros: ");

for(int i = 0; i < 5; i++){
    scanf("%d", &arranjo[i]);
}

int maior1 = acharmaior1(5, arranjo);
int maior2 = acharmaior2(5, arranjo);

printf("O maior 1 e : %d \nE o maior2 e: %d", maior1, maior2);

}
    

