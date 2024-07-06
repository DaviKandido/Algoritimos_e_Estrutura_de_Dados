#ifndef _ERRO_H_
#define _ERRO_H_

// dependencias
#include <string>

/**
* Classe para tratar erro.
*/

class Erro{

// tratamento de erro.
// Codigos de erro:
// 0. Nao ha' erro.

    private:
    int erro;

    public:

    ~Erro(){

    }

    Erro(){

        erro = 0;
    }

    //Constante da classe.
    static const std::string NO_ERROR;

    int get_erro(){

        return (erro);
    }

    void set_erro(int codigo){

        erro = codigo;
    }

    bool has_erro(){

        return (get_erro() != 0);
    }

    virtual std::string get_ErroMsg ( ){
    return ( "" );
    } // end getErroMsg ( )

}; // end class Erro


const std::string Erro::NO_ERROR = "[ERRO] Nao ha erro.\n"; // definir o valor da constante

using def_Erro = Erro*;
#endif