#include <string>
#ifndef pilha_H 
#define pilha_H

class Concessionaria {
    protected:
        std::string nome;
        std::string CNPJ;
        int estoque;
    public:
        void abrirNova();
        void vender();
        void entradaVeiculos();
};

#endif