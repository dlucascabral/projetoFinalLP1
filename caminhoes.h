#include <iostream>
#include <string>
#include "veiculos.h"
#ifndef caminhoes_H 
#define caminhoes_H

class Caminhoes : public Veiculos {
    protected:
        std::string carga;
    public:
        Caminhoes();
};

Caminhoes::Caminhoes() : Veiculos() {

    std::cout << "Tipo de carga: " << std::endl;
    std::cin >> this->carga;

}

#endif