#include <stdio.h>
#include <stdlib.h>

// TREINANDO PONTEIROS //

int main (){

   int valor1 = 5;
   int valor2 = 10;
   int *ptr1 = &valo12xxxsxdsdxsxsssxswxxs
    
    if (*valor1 > *valor2){
        printf("valor1 e maior");
    } else{
        printf("valor2 e maior");
    }

}



// int main(){

//     int **ptr ;
//     int linhas = 0 ;
//     int colunas = 0;

//     printf("Defina uma matriz: \n\n");
    
//     printf("Defina uma quantidade de linhas: \n");
//     scanf("%d", &linhas);

//     printf("Defina uma quantidade de colunas: \n");
//     scanf("%d", &colunas);
    
//     ptr = (int**)malloc(linhas * sizeof(int*));

//     for(int x = 0; linhas > x; x++){
//         ptr[x] = (int*)malloc(colunas * sizeof(int));
//     }

//     printf("Defina os caracteres: \n");

//     for(int l = 0; linhas > l; l++){
//         for(int c = 0; colunas > c; c++){
//             printf("ptr[%d][%d] = ", l, c);
//             scanf("%d", &ptr[l][c]);
//         }
//     }

//     for(int l = 0; linhas > l; l++){
//         for(int c = 0; colunas > c; c++){
//         printf("%d\t", ptr[l][c]);
//         }
//         printf("\n");
//     }


//     free(ptr);
// }

// int main(){

//     int *ptr ;
//     int n = 0 ;
//     int limite = 0;

//     printf("Defina um arranjo: \n\n");
    
//     printf("Defina uma quantidade de caracteres: \n");
//     scanf("%d", &n);

//     ptr = (int*)malloc(n * sizeof(int));

//     printf("Defina os caracteres: \n");

//     while(n > limite){
//     printf("ptr[%d] = ", limite);
//     scanf("%d", &ptr[limite]);
//     limite++;
//     }
    
//     for(int x = 0 ; n > x; x++){
//     printf("%d", ptr[x]);
//     }


//     free(ptr);
// }


//  ptr (int*)malloc(n * sizeof(int))
// free(ptr)

//struct 
// {
    
// };




// int soma_dobro(int*a, int*b){
//     int soma;
//     *a = 2*(*a);
//     *b =  2*(*b);
//     soma = *a + *b;

//     return soma;
// }


// int main(){

// int x, y, res;
// x = 5;
// y = 3;
// res = soma_dobro(&x, &y);
// printf("A soma dos numeros %d e %d = %d", x, y, res);


// }