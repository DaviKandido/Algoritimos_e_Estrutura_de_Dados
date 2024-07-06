#ifndef _ERRO_H_
#define _ERRO_H_


class Erro{
    private:
    int erro;

    public:

    ~Erro(){

    }

    Erro(){

        erro = 0;
    }

    int get_erro(){

        return (erro);
    }

    void set_erro(int codigo){

        erro = codigo;
    }

    bool has_erro(){

        return (get_erro() != 0);
    }

};

using def_Erro = Erro*;
#endif