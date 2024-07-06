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



class Contato : public Erro{
	private:
	std::string nome;
	std::string fone[10];
    std::string EnderecoProfissional;
    std::string EnderecoResidencial;
    
    int QuantidadeTelefones = 1;

    int QuantidadeNome;
    int QuantidadeNumero;

	public:

//Construtores
	Contato(){

        set_erro ( 0 );
		nome = " ";
        if(QuantidadeTelefones>1){
		fone[0] = " ";
        } else{
             for(int i = 0; i < QuantidadeTelefones; i++){
                fone[i] = " ";
                }
        }
	}


    Contato(std::string nome, std::string fone1, std::string fone2){

        set_erro ( 0 );
		this->nome = nome;
		this->fone[0] = fone1;
        this->fone[1] = fone2;
	}


    Contato(std::string nome, std::string fone){

        set_erro ( 0 );
		this->nome = nome;
		this->fone[0] = fone;
	}    

//End Construtores

//Reads

	std::string readNome(){

		return nome;
	}

	std::string readFone(){

        std::string allfones;


        if(QuantidadeTelefones > 1){

            for(int i = 0; i < QuantidadeTelefones; i++){
            allfones += "{" + fone[i] + "} ";
            }
         	return allfones;
        }

		return fone[0];
	}

	std::string readContato(){

		return ("{"+readNome()+","+readFone()+"}");
	}


    std::string readEnderecoProfissional(){

        return EnderecoProfissional;
    }

    std::string readEnderecoResidencial(){
        
        return EnderecoResidencial;
    }


//End Reads



//Sets

    void set_nome(std::string nome){

        if(nome.empty())
        set_erro(1);
        else
        this->nome = nome;

    }


     void set_QuantidadeTelefones(int QuantidadeTelefones){

        this->QuantidadeTelefones = QuantidadeTelefones;
    }


    bool NumeroValido(std::string fone){

        bool NumeroValido;

        for(int i = 0; i < fone.length(); i++){
            if(fone[i] >= '0' && fone[i] <= '9' || fone[i] == (char)45){
                NumeroValido = true;
        } else {
            return NumeroValido = false;
        }

      }
        return NumeroValido;
    }


    void set_fone(std::string fone){

        if(fone.empty()){

            set_erro(2);
        } else{

            if(NumeroValido(fone)){
                this->fone[0] = fone;
            }else{
                set_erro(3);
            } 
        }
    }


     void set_fone(std::string fone, int i){

        if(fone.empty()){

            set_erro(2);
        } else{

            if(NumeroValido(fone)){
                this->fone[i] = fone;
            }else{
                set_erro(3);
            } 
        }
    }

    
    void set_EnderecoProfissional(std::string EnderecoProfissional){

        if(EnderecoProfissional.empty() && !EnderecoResidencial.empty()){
        set_erro(5);
        }else if(EnderecoResidencial.empty() && EnderecoProfissional.empty()){
        set_erro(7);
        }else{
        this->EnderecoProfissional = EnderecoProfissional;
        }
    }


    void set_EnderecoResidencial(std::string EnderecoResidencial){

        if(EnderecoResidencial.empty() && !EnderecoProfissional.empty()){
        set_erro(6);
        }else if(EnderecoResidencial.empty() && EnderecoProfissional.empty()){
        set_erro(7);
        }else{
        this->EnderecoResidencial = EnderecoResidencial;
        }
    }


//end Sets



//Arquivos leitura  e Gravação

    void writeToFile(std::string filename){
        
        
        std::ofstream arquivo (filename);

           if (arquivo) { 

        arquivo << nome.length() << endl;
        arquivo << QuantidadeTelefones << endl;

        arquivo << nome << endl;

        for(int i = 0; i < QuantidadeTelefones; i++){
        arquivo << fone[i] << endl;
        }

        if(!EnderecoResidencial.empty()){
            arquivo << EnderecoResidencial << endl;
          }

        if(!EnderecoProfissional.empty()){
            arquivo << EnderecoProfissional << endl;
          }
        } else{

             std::cout << "\nErro ao abrir arquivo" << std::endl;
             set_erro(4);
           }


    arquivo.close();
    }

    void readFromFile(std::string filename){

        std::ifstream arquivo (filename);

    if (arquivo) { 

        string nomelido;
        string fonelido;

        arquivo >> QuantidadeNome;
        arquivo >> QuantidadeNumero;

        arquivo >> nomelido;
        set_nome(nomelido);

        arquivo >> fonelido;
        set_fone(fonelido);

    }else{
    set_erro(4);
    } 

     arquivo.close();
    }
        
//End Arquivos leitura  e Gravação


//Descobrir Alterar Excluir
    int DescobrirQuantidadeDeFones(){
    
        int quantidade = 0;

        for(int i = 0; fone[i].empty() == false; i++){
            quantidade++;
        }
        return quantidade;
     }



     bool AlterarTelefone(int telefone, std::string fone){

        bool alterado = false;

        if(telefone >= 0 && telefone < QuantidadeTelefones){
            this->fone[telefone] = fone;
            alterado = true;
        }

        return alterado;
     }

     bool ExcluirTelefone(int telefone){

        bool alterado = false;

        if(telefone >= 0 && telefone < QuantidadeTelefones){
            this->fone[telefone] = "";
            alterado = true;
        }

        return alterado;
     }

 //End Descobrir Alterar Excluir



};

using ref_Contato = Contato*;