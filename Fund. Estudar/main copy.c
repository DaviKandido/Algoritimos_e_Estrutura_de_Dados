// Tech Fellow 2024 Q3
// Rainha
// O jogo de Xadrez possui diversas peças com movimentos curiosos. Uma delas é a Rainha, que pode se 
// mover qualquer número de casas em qualquer direção: na mesma linha, na mesma coluna ou em qualquer uma das 
// diagonais, conforme ilustrado na figura abaixo (os pontos pretos representam as posições que a rainha pode alcançar). um movimento):


// O grande mestre de xadrez Gary Carakov inventou um novo tipo de problema de xadrez: dada a posição 
// de uma rainha em um tabuleiro de xadrez padrão vazio (ou seja, um tabuleiro de 8 x 8), quantos movimentos são necessários 
// para que ela chegue a outra casa dada no quadro?

// Gary encontrou a solução para alguns desses problemas, mas está tendo dificuldades para resolver alguns 
// outros e, portanto, pediu que você escrevesse um programa para resolver esse tipo de problema.

// Entrada
// A entrada contém um caso de teste, que contém quatro inteiros X1, Y1, X2 e Y2 (1 ≤ X1, Y1, X2, Y2 ≤ 8). A rainha 
// começa na casa com coordenadas (X1, Y1), e deve terminar na casa com coordenadas (X2, Y2). No tabuleiro de xadrez, 
// as colunas são numeradas de 1 a 8, da esquerda para a direita; as linhas também são numeradas de 1 a 8, de cima para baixo. 
// As coordenadas de um quadrado na linha X e na coluna Y são (X, Y).

// Saida
// Seu programa deve imprimir uma única linha, contendo um inteiro, indicando o menor número de movimentos 
// necessários para a rainha alcançar a nova posição.

// Exemplo 1
// Entrada: 4 4 6 2

// Saida: 1

// Exemplo 2
// Entrada: 3 5 3 5

// Saida: 0

// Exemplo 3
// Entrada: 5 5 4 3

// Saida: 2

// 4 5

// 3 6
// 2 7
// 1 8


#include <stddef.h>   
#include <stdarg.h>   
#include <ctype.h>     
#include <math.h>     
#include <time.h>
#include <stdio.h> 

int calcularmovimentos(int x1, int y1, int x2, int y2){

  if (x1 == x2 && y1 == y2) {
    return 0;
  }

  if ( (x1 == x2 && y1 != y2) || (x1 != x2 && y1 == y2)){
    return 1;
  }

    if ( x1 != x2 && y1 != y2){
        if (abs(x1 - x2) == abs(y1 - y2)  ){
            return 1;
        } else{
            return 2;
        }
  }

}

int main(){
 
int x1 = 1;
int y1 = 1;

scanf("%d", &x1);
scanf("%d", &y1);


int x2 = 1;
int y2 = 1;

scanf("%d", &x2);
scanf("%d", &y2);

printf("%d", calcularmovimentos(x1, y1, x2, y2));


}

/*
#include <stdio.h>
#include <stdlib.h>

int calcular_movimentos_rainha(int x1, int y1, int x2, int y2) {
  // Se a rainha já está na posição final, não há movimentos necessários.
  if (x1 == x2 && y1 == y2) {
    return 0;
  }

  // A rainha pode se mover em uma linha, coluna ou diagonal.
  // O número mínimo de movimentos é o máximo entre a diferença de linhas e colunas.
  return (abs(x1 - x2) > abs(y1 - y2)) ? abs(x1 - x2) : abs(y1 - y2);
}

int main() {
  int x1, y1, x2, y2;

  // Obter as coordenadas da posição inicial e final da rainha.
  printf("Digite as coordenadas da posição inicial da rainha (x1 y1): ");
  scanf("%d %d", &x1, &y1);

  printf("Digite as coordenadas da posição final da rainha (x2 y2): ");
  scanf("%d %d", &x2, &y2);

  // Calcular o número mínimo de movimentos.
  int movimentos = calcular_movimentos_rainha(x1, y1, x2, y2);

  // Imprimir o resultado.
  printf("Número mínimo de movimentos: %d\n", movimentos);

  return 0;
}
*/