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

#endif