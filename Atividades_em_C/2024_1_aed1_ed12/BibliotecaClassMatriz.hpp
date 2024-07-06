/*
Biblioteca para o ed12 Matriz - 16 / 05 / 2024
Author: Davi Cândido de Almeida
*/

// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres

// ----------------------------------------------- classes / pacotes

#include "io.hpp"
#include "mymatrix.hpp"
using namespace std;



class ClassMatriz {
public:
    int quantidade;
    int* aleatorio;
    int linhas;
    int colunas;
    int** matriz;

    ClassMatriz() : quantidade(0), aleatorio(nullptr), linhas(0), colunas(0), matriz(nullptr) {}

    void GerarAleatorios(int MxN, int inferior, int superior) {
        if (superior <= 100 && inferior >= 1) {
            quantidade = MxN;
            aleatorio = new int[quantidade];

            for (int i = 0; i < quantidade; i++) {
                aleatorio[i] = inferior + rand() % (superior - inferior + 1);
            }
        } else {
            std::cout << "Valores fora da faixa valida. Tente novamente\n";
        }
    }

	void GravarAleatorios(string filename){

		std::ofstream arquivo (filename);

		arquivo << quantidade << endl;
        for (int i = 0; i < quantidade; i++) {
            arquivo << aleatorio[i] << endl;
        }		

	}

    void LerAleatorios() {
        for (int i = 0; i < quantidade; i++) {
            std::cout << aleatorio[i] << " ";
        }
        std::cout << std::endl;
    }

	void callocMatriz(int linhas, int colunas){

     bool OK = true;
     if ( linhas > 0 && colunas > 0 )
     {  this->linhas  = 0;
        this->colunas = 0;
        matriz = (int**) new int* [linhas];
        if ( matriz )
        {  for ( int x=0; x<linhas; x=x+1 )
           {   matriz [x] = (int*) new int [colunas]; 
               if ( ! matriz [x] )
               {  std::cerr << "\n[int_Matrix] ERRO: Alocacao de dados.\n";
                  x = linhas; OK = false;   }  }  }
        if ( OK )
        {  this->linhas = linhas; this->colunas = colunas; }
     }

	}

	void GravarMatrizAleatoria(int Mxn) {

    if (Mxn >= linhas*colunas){
	  for (int x = 0; x < linhas; x++ )
        for (int y = 0; y < colunas; y++) {
            matriz[x][y] = aleatorio[x+y];
        }
    }else{
    std::cout << "ERRO: Quantidade de aleatorios gerados insuficientes para a Matriz dada\n";
    }

	}

//Print Matriz com arquivo ou sem arquivo
	void PrintMatriz() {
      for (int x = 0; x < linhas; x++) { 
        for (int y = 0; y < colunas; y++) {
            std::cout << matriz[x][y] << "\t";
        }
        std::cout << std::endl; 
    }
}

	void PrintMatriz(string filename) {

        std::ifstream arquivo (filename);

        int lido;
        arquivo >> linhas;
		arquivo >> colunas; 

      for (int x = 0; x < linhas; x++) { 
        for (int y = 0; y < colunas; y++) {
            arquivo >> matriz[x][y];
            cout << matriz[x][y] << "\t";
        }
        std::cout << std::endl; 
    }
}
//Fim dos Prints


	void MatrizDoTeclado () {
		
      for (int x = 0; x < linhas; x++) { 
        for (int y = 0; y < colunas; y++) {
            std::cout << "matriz["<<x<<"]["<<y<<"] = " ;
			std::cin >> matriz[x][y];
        }
        std::cout << std::endl; 
    }
}

	void GravarMatrizEmArquivo (string filename){

		std::ofstream arquivo (filename);

		arquivo << linhas << endl;
		arquivo << colunas << endl;

      for (int x = 0; x < linhas; x++) { 
        for (int y = 0; y < colunas; y++) {
			arquivo << matriz[x][y] << std::endl;
        }
     }	
  }


//Scala Matriz com arquivo ou sem arquivo
  ClassMatriz* ScalarMatriz(ClassMatriz& b, int escala) {
    b.linhas = this->linhas;
    b.colunas = this->colunas;

    for (int x = 0; x < this->linhas; x++) {
        for (int y = 0; y < this->colunas; y++) {
            b.matriz[x][y] = this->matriz[x][y]*escala;
        }
    }

    return &b;

}

  ClassMatriz* ScalarMatriz(ClassMatriz& b, int escala, string filename) {
	std::ifstream arquivo (filename);

   arquivo >> b.linhas ;
   arquivo >> b.colunas ;

    for (int x = 0; x < b.linhas; x++) {
        for (int y = 0; y < b.colunas; y++) {
            arquivo >> b.matriz[x][y];
			b.matriz[x][y] = b.matriz[x][y]*escala;
        }
    }

    return &b;
}
//Fim dos Escalonadores

//Verifica se é identidade, retorna Bool
    bool VerificaIdentidade(string filename){
        std::ifstream arquivo (filename);

    arquivo >> linhas ;
    arquivo >> colunas ;

    bool identidade = true;

    for (int x = 0; x < linhas; x++) {
        for (int y = 0; y < colunas; y++) {
            arquivo >> matriz[x][y];
            if (x == y) {
                    if(matriz[x][y] != 1){
                        identidade = false;
                    }
            } else{
                    if(matriz[x][y] != 0){
                        identidade = false;
                    }
            }
        }
    }
    return identidade;
}
//Fim do VerificaIdentidade

//Retira Arranjo de Matriz
int ArranjoDeMatriz(string filename){


     std::ifstream arquivo (filename);

    int arranjo[20];
    int contador = 0;
    
    while ( !arquivo.eof() )
    {
        arquivo >> arranjo[contador];
        contador++;
    }

    return *arranjo;
}

 bool VerificaIgualdade(ClassMatriz& other) {
        
    if (other.linhas != this->linhas || other.colunas != this->colunas) {
        return false;
    }

    for (int x = 0; x < other.linhas; x++) {
        for (int y = 0; y < other.colunas; y++) {
            if (other.matriz[x][y] != this->matriz[x][y]) {
                 return false;
            }
        }
    }
    return true;
 }

ClassMatriz* SomarMatrizes(ClassMatriz& other, ClassMatriz& soma) {


     if (other.linhas == this->linhas || other.colunas == this->colunas) {

	    soma.callocMatriz(this->linhas, this->colunas);

        for (int x = 0; x < other.linhas; x++) {
            for (int y = 0; y < other.colunas; y++) {
               soma.matriz[x][y] = other.matriz[x][y] + this->matriz[x][y];
            }
        }

        }else{
            cout << "ERRO: Tamanho de Matrizes incompativeis\n";
        }

    return &soma;
    }

void SomaLinhasMultConstante(int PrimeiraLinha, int Segundalinha, int Constante){

    for (int y = 0; y < this->colunas; y++) {
        this->matriz[0][y] = (this->matriz[PrimeiraLinha][y] + this->matriz[Segundalinha][y])*Constante;
    }
 }

 void SubtraiLinhasMultConstante(int PrimeiraLinha, int Segundalinha, int Constante){

    for (int y = 0; y < this->colunas; y++) {
        this->matriz[0][y] = (this->matriz[PrimeiraLinha][y] - this->matriz[Segundalinha][y])*Constante;
    }
 }

 int ProcurarValorNaLinhaDaMatriz(int ValorProcurado){

     for (int x = 0; x < this->linhas; x++) {
        for (int y = 0; y < this->colunas; y++) {
                if(matriz[x][y] == ValorProcurado){
                    return x+1;
                }
          }
     }
    return false;
 }

  int ProcurarValorNaColunaDaMatriz(int ValorProcurado){

     for (int x = 0; x < this->linhas; x++) {
        for (int y = 0; y < this->colunas; y++) {
                if(matriz[x][y] == ValorProcurado){
                    return y+1;
                }
          }
     }
    return false;
 }

void TrasnporMatriz(){

    int valor[this->linhas*this->colunas];
    int contador = 0;

     for (int x = 0; x < this->linhas; x++) {
        for (int y = 0; y < this->colunas; y++) {
             valor[contador] = this->matriz[x][y];
             contador++;
          }
     }

    this->callocMatriz( this->colunas, this->linhas);
    contador = 0;
    
     for (int x = 0; x < this->colunas; x++) {
        for (int y = 0; y < this->linhas; y++) {
            matriz[y][x] = valor[contador];
            contador++;
          }
     }

 }

bool VerificarCrescentePorColunas(){

    int valor = matriz[0][0];
        for(int x = 0; x < this->colunas; x++){
            for(int y = 0; y < this->linhas; y++){
                    if(matriz[y][x] < valor){
                        return false;
                    }
                valor = matriz[y][x];
            }
    }
    return true;
  }

 void GerarMatrizesdecrescentesPorColunas(int quantidade){

    int x = 2;
    int y = 2;

    for(int i = 0; i < quantidade; i++){

        this->linhas = x;
        this->colunas = y;
        this->callocMatriz(x, y);
        int contador = (this->linhas*this->colunas);


        for( x = 0; x < this->linhas; x++){
            for( y = 0; y < this->colunas; y++){
                matriz[y][x] = contador;
                contador--;
            }
        }
    std::cout << "Matriz "<<i+1<<":"<< endl;
    this->PrintMatriz();
    std::cout << endl;
    delete [] this->matriz;
    x++;
    y++;
    }
}

};


using def_ClassMatriz = ClassMatriz*;