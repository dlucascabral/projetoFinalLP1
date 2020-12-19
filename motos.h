#include <iostream>
#include <string>
#ifndef motos_H 
#define motos_H

class Motos : public Veiculos {
    protected:
        std::string modelo;
    public:
        Motos();
};

Motos::Motos() : Veiculos() {

    std::cout << "Modelo: " << std::endl;
    std::cin >> this->modelo;

}

#endif