// dependencias
#include <iostream> // std::cin, std::cout, std:endl
#include <limits> // std::numeric_limits
#include <string> // para cadeias de caracteres
#include <cstring>

// ----------------------------------------------- classes / pacotes

#include "io.hpp"

using namespace std;

// ----------------------------------------------- definicoes globais



//Retorna tamanho da cadeia
int str_len (char *s){

    int length = 0;
    while (*(s+length)){
        length++;
    }

    return (length);  
}

//Adiciona caracter no inicio
char* str_push_back ( char *s, char c ){
    
    int len = str_len(s);

    s[len] = c;
    s[len+1] =  '\0';

    return s;
}

//Retira caracter no final
char* str_pop_back ( char *s ){

    int len = str_len(s);

    s[len-1] = s[len];
    s[len] = null;

    return s;
}

//Adiciona caracter no final
char* str_push_front ( char c, char *s ){

    int len = str_len(s);

    s[len+1] = '\0';

        for(int i = len; i > 0; i--){
        s[i] = s[i-1];
    }

    s[0] = c;

    return s;

}

//Retira caracter na frente
char* str_pop_front ( char *s ){

    int len = str_len(s);

    s[0] == null;

        for(int i = 0; i < len; i++){
        s[i] = s[i+1];
    }

    return s;
}

//Adiciona caracter no meio (Aprox.)
char* str_push_mid ( char *s, char c ){

    int len = str_len(s);

    if(len > 1){
        s[len+1] = '\0';
        for(int i = len; i > len/2; i--){
            s[i] = s[i-1];
        }
        s[len/2] = c;
    }

    return s;
}

//Retira caracter do meio (Aprox.) - Dois caracteres no meio, remove o primeiro.
char* str_pop_mid ( char *s ){

    int len = str_len(s);

    if(len > 2 && len % 2 == 1){
        s[len/2] = null;
        for(int i = len/2; i < len; i++){
            s[i] = s[i+1];
        }
    }else{
        s[(len/2)-1] = null;
        for(int i = (len/2)-1; i < len; i++){
            s[i] = s[i+1];
        }
    }

    return s;
}

//Adiciona caracter na posicao inserida
char* str_insert ( char *s, char c, int index ){


    int len = str_len(s);

    if( index > 0 && index <= len){
        s[len+1] = '\0';
        for(int i = len; i > index-1; i--){
            s[i] = s[i-1];
        }
        s[index-1] = c;
    }else{
        cout << "\n[Erro] Posicao invaida\n";
    }

    return s;
}

//Remove caracter de certa posicao inserida
char* str_remove ( char *s, int index ){

    int len = str_len(s);

    if(index > 0 && index <= len ){
        s[index-1] = null;
        for(int i = index-1; i < len; i++){
            s[i] = s[i+1];
        }
    }else{
        cout << "\n[Erro] Posicao invaida\n";
    }


    return s;
}

//Retorna apontador para a primeira ocorrência de caracter(c)
char* str_chr(char *s, char c) {

    while (*s != '\0') {

        if (*s == c) {
            return s; 
        }
        s++;
    }
    return NULL;
}


//Divide cadeia no local de ocorrencia de certo caracter
char* str_tok ( char *s, char delimiter ){

    char* ocorrencia;

    if(ocorrencia = str_chr ( s,  delimiter )){
    str_push_front ( '\0',  ocorrencia );

    return s;
    }else{
        return NULL;
    }
}


//Retorna apontador para a primeira ocorrência de um Prefixo
char* str_prefix ( char *prefix, char *s ){

int len = str_len(s);
int p = 0;
int i = 0;
int lugar = 0;

    while( i < len){
        if(s[i]==prefix[p]){
            p++;
            lugar = (i-p)+1;
        }
        i++;
    }

    if(p == str_len(prefix)){
        return s+lugar;
    }else{
    return NULL;
    }

}


//Retorna apontador para a primeira ocorrência de um Sufixo
char* str_suffix ( char *s, char *sufix ){

int p = str_len(sufix) - 1;
int i = str_len(s) - 1;
int lugar = 0;

    while( i >= 0){
        if(s[i]==sufix[p]){
            p--;
            lugar = i;
        }
        i--;
    }

    if(p < 0){
        return s+lugar;
    }else{
    return NULL;
    }

}
