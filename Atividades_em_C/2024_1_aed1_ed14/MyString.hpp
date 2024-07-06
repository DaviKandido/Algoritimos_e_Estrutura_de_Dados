// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres
#include <cstring>

// ----------------------------------------------- classes / pacotes

#include "io.hpp"
#include "ExercicioClassErro.hpp"

using namespace std;

// ----------------------------------------------- definicoes globais



class MyString : public Erro{
    
	private:

	string conteudo;

	public:

//Destrutor
	~MyString(){}

//Construtores
	MyString(){

		set_erro (0);
		conteudo = "";
	}


// Funcao para obter mensagem, relativa ao código de erro.
	std::string get_ErroMsg ( )
	{
	return ( NO_ERROR ); // COMPLETAR A DEFINICAO
	} // end getErroMsg ( )


//Sets

	void set_Conteudo(std::string valor){
		conteudo = valor;
	}

//End Sets


//Transformações

	//Conversão para inteiro
	int getInt ( std::string valor ){

		int num = 0;
		int i = 0;
		int sinal = 1;

		if(valor[0] == '-'){
			sinal = -1;
			i = 1;
		}
		
		for(i; i < valor.length(); i++){
			
			char c = valor[i];
			if(c >= '0' && c <= '9' ){

			num = num * 10 + (c - (char)48);

			}else{
				set_erro(1);
				return -1;
			}

		}

		return sinal * num;
	}

	//Conversão para double
		double getDouble ( std::string valor ){

		double num = 0;
		int i = 0;
		double sinal = 1;
		int travador = 0;
		double divisor = 1;

		if(valor[0] == '-'){
			sinal = -1;
			i = 1;
		}
		
		for(i; i < valor.length(); i++){
			
			char c = valor[i];
			if(c >= '0' && c <= '9'){

			num = num * 10 + (c - (char)48);

			}else if((c == '.' || c == ',') && travador == 0){

				for(int p = 0; p < valor.length()-(i+1) ; p++){ divisor *= 10; }
				travador ++;
				
			}else{
				set_erro(1);
				return 0.0;
			}
		}

		return (sinal * num)/divisor;
	}
	//End Conversão para double

	//Conversão para Boleano
	bool getBoolean ( std::string valor ){

		bool boleano;

		if (valor == "1" || valor == "True" || valor =="true" || valor =="T"|| valor =="t"){
			return boleano = true;
		} else if(valor == "0" || valor == "False" || valor =="false" || valor =="F"|| valor =="f"){
			return boleano = false;
		} else{
			set_erro(1);
			return boleano = false;
		}

	}
	//End Conversão para Boleano


	//transforma Minusculas em Maiusculas
	std::string toUpperCase(std::string conteudo2){


		for(int i = 0; i<conteudo2.length(); i++){
			if(!(conteudo2[i] >= 'a' && conteudo2[i] <= 'z')){
				set_erro(1);
			}else{
				conteudo2[i] = conteudo2[i] - 32;
			}
		}

		return conteudo2;
	}
	//End transforma Minusculas em Maiusculas

	//transforma Maiusculas em Minuscula
	std::string toLowerCase(std::string conteudo2){


		for(int i = 0; i<conteudo2.length(); i++){
			if(!(conteudo2[i] >= 'A' && conteudo2[i] <= 'Z')){
				set_erro(1);
			}else{
				conteudo2[i] = conteudo2[i] + 32;
			}
		}

		return conteudo2;
	}
	//End transforma Maiusculas em Minuscula


//Troca caracteres por outro
	std::string replace(std::string conteudo2, char original, char novo){

		int teste = 0;

		for(int i = 0; i<conteudo2.length(); i++){

			if(conteudo2[i] == original){
				conteudo2[i] = novo;
				teste ++;
			}
		}

		if (teste == 0){
			set_erro(1);
		}

		return conteudo2;
	}
//End Troca caracteres por outro


//Criptografacao pela cifra de cesar
	std::string encrypt(std::string conteudo2, int valorCripit){
		

		for(int i = 0; i<conteudo2.length(); i++){
			if((conteudo2[i] >= 'a' && conteudo2[i] <= 'z') || (conteudo2[i] >= 'A' && conteudo2[i] <= 'Z')){

				conteudo2[i] = conteudo2[i] + valorCripit;

				if(!((conteudo2[i]>='a' && conteudo2[i]<='z')||(conteudo2[i]>='A' && conteudo2[i]<='Z'))){
					conteudo2[i] = conteudo2[i] - 26;
				}

			}else{
				set_erro(1);
			}
		}
		
		return conteudo2;
	}
//End Criptografacao pela cifra de cesar



//DEScriptografacao pela cifra de cesar
	std::string decrypt(std::string conteudo2, int valorCripit){
		

		for(int i = 0; i<conteudo2.length(); i++){
			if((conteudo2[i] >= 'a' && conteudo2[i] <= 'z') || (conteudo2[i] >= 'A' && conteudo2[i] <= 'Z')){

				conteudo2[i] = conteudo2[i] - valorCripit;

				if(!((conteudo2[i]>='a' && conteudo2[i]<='z')||(conteudo2[i]>='A' && conteudo2[i]<='Z'))){
					conteudo2[i] = conteudo2[i] + 26;
				}

			}else{
				set_erro(1);
			}
		}
		
		return conteudo2;
	}
//End Transformações


//Separar por espaços
	int split(std::string conteudo2, std::string sequencia[]){

	int quantidade = 0;
	int inicio = 0;
	int tamanhoConteudo = conteudo2.length();

	for (int i = 0; i <= tamanhoConteudo; i++) {
		if (i == tamanhoConteudo || conteudo2[i] == ' ') {
			if (i > inicio) {
				for (int j = inicio; j < i; j++) {
					sequencia[quantidade] += conteudo2[j];
				}
				quantidade++;
			}
			inicio = i + 1;
		}
	}

		if(quantidade == 0){
			set_erro(1);
		}

		return quantidade;
	}
//End separar por espaços


//Teste se parametro esta contido em conteudo
	bool contemParametro(std::string parametro){

		int tamanhoConteudo = conteudo.length();
		int intContem = 0;

		for(int i = 0; i < tamanhoConteudo; i++){
			if(parametro[intContem] == conteudo[i]){
				intContem++;
			}
		}

		cout<<"Foram achadas "<< intContem << " Correspondencias de "<<parametro.length()<<", portanto ";

		if(intContem == parametro.length()){
			return true;
		} else{
			return false;
		}
	}

	bool contemParametro(std::string conteudo2, std::string parametro){
		

		int tamanhoConteudo2 = conteudo2.length();
		int intContem = 0;

		for(int i = 0; i < tamanhoConteudo2; i++){
			if(parametro[intContem] == conteudo2[i]){
				intContem++;
			}
		}

		cout<<"Foram achadas "<< intContem << " Correspondencias de "<<parametro.length()<<", portanto ";

		if(intContem == parametro.length()){
			return true;
		} else{
			return false;
		}

	}
//End Teste se parametro esta contido em conteudo

//Fragemntandor
	std::string Fragementador(std::string conteudo2, int posicao, char caracter){

		string NovaString;
		if(posicao > 0 && conteudo2 != "" && conteudo2 != " " && caracter != ' '){
			for(int i = 0; i < posicao; i++){
				NovaString += conteudo2[i];
			}
			NovaString += caracter;
			for(int i = posicao; i < conteudo2.length(); i++){
				NovaString += conteudo2[i];
			}

		}else{
			set_erro(1);
		}


		return NovaString;
	}
//End Fragementador


//Inverte Ordem de Simbolos
	std::string InverterSimbolos(std::string conteudo2){

		string NovaString;
		if( conteudo2 != "" && conteudo2 != " "){
			for(int i = conteudo2.length() - 1; i >= 0; i--){
				NovaString += conteudo2[i];
			}

		}else{
			set_erro(1);
		}

		return NovaString;
	}

//EndInverte Ordem de Simbolos

};



using ref_MyString = MyString*;