#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void acharmaiores(int m, int n, int matriz[m][n], int maiores[]){

maiores[0] = matriz[0][0];
maiores[1] = matriz[1][0];
maiores[2] = matriz[2][0];

for(int i = 0; i < m; i++){
    for(int p = 0; p < n; p++){
        if(matriz[i][p] > maiores[i]){
            maiores[i] = matriz[i][p];
        }
    }
}

}




int main() {

int matriz[3][3] = {{1,2,3},
                    {6,5,4},
                    {7,9,8}};
int m = 3;
int n = 3;
int maiores[3];

acharmaiores(m, n, matriz, maiores);

printf("Sao maiores de cada linha: {%d,%d,%d}", maiores[0], maiores[1], maiores[2]);

}
    

