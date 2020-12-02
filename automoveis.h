#include <string>
#include <iostream>
#include "veiculos.h"
#ifndef automoveis_H 
#define automoveis_H

class Automoveis : public Veiculos {
    protected:
        std::string tipoMotor;
    public:
        Automoveis();
};

Automoveis::Automoveis() : Veiculos() {

    std::cout << "Tipo de motor: " << std::endl;
    std::cin >> this->tipoMotor;

}


#endif