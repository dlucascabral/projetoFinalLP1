#include <string>
#include "veiculos.h"
#ifndef concessionaria_H 
#define concessionaria_H 

class Concessionaria {
    protected:
        std::string nome;
        std::string cnpj;
        int estoque;
        Veiculos lista[10];
    public:
        //construtor
        Concessionaria();

        //metodos
        void addVeiculo();

        //metodos getters
        std::string getNome();
        std::string getCnpj();
        int getEstoque();

        
};

#endif