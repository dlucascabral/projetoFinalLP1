#include <string>
#include "veiculos.h"
#ifndef motos_H 
#define motos_H

class Motos : public Veiculos {
    protected:
        std::string modelo;
    public:
        Motos();
};

#endif