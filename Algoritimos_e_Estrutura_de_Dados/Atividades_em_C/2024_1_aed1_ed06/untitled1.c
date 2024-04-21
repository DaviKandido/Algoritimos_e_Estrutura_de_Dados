#include "io.h"
#include <math.h>

/*
E1.) Incluir uma função recursiva (06E1) para
calcular o valor da função definida abaixo,
lidos os valores de (x) e (n) do teclado:
f ( x, n ) = 1 + x3 + x5 + x7 + x9 + ...
*/



double elevado(int x, int n, int soma, int contador){
	
	if (n >= contador){
		soma += pow(x , 1+contador*2);
		
		elevado(x, n, soma, contador+1);
	} else{
		
		return soma+1;
		
	}
	
}


int main (){
	
	
	int x = 0;
	int n = 0;
	int soma = 0;
	int contador = 1;
	
	
	printf("Defina x: ");
	scanf("%d", &x);
	
	printf("Defina n vezes: ");
	scanf("%d", &n);
	
	printf("\n A sua soma da sequencia de x elevado de 2 em 2, %d vezes e: %lf", n, elevado(x, n, soma, contador));
	
}


/*

Defina x: 2
Defina n vezes: 3

A sua soma da sequencia de x elevado de 2 em 2, 3 vezes e: 169

OBS: Agumas vezes o resultado vinha no formato como exemplificado abaixo:

A sua soma da sequencia de x elevado de 2 em 2, 3 vezes e: 1.#QNAN0

- Não consegui identificar o problema, acredito que tenha algo haver com o VScode, no entanto
não consegui textar para ver se o erro se repetia pelo Dev.ice pois a função pow não era reconhecida
*/
