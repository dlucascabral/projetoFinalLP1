#include <string>
#ifndef veiculos_H 
#define veiculos_H

class Veiculos {
    protected:
        std::string marca;
        std::string chassi;
        std::string fabricacao;
        float preco;
    public:
        Veiculos();
};

#endif