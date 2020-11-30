#include <string>
#include "veiculos.h"
#ifndef automoveis_H 
#define automoveis_H

class Automoveis : public Veiculos {
    protected:
        std::string tipoMotor;
    public:
        Automoveis();
};

#endif