#include <string>
#ifndef concessionaria_H 
#define concessionaria_H 

class Concessionaria {
    protected:
        std::string nome;
        std::string cnpj;
        int estoque;
    public:
        //construtor
        Concessionaria();

        //metodos
        void vender();
        void entradaVeiculos();

        //metodos getters
        std::string getNome();
        std::string getCnpj();
        int getEstoque();
};

#endif