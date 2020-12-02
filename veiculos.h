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

Veiculos::Veiculos() {

    std::cout << "Marca: " << std::endl;
    std::cin >> this->marca;
    std::cout << "Chassi: " << std::endl;
    std::cin >> this->chassi;
    std::cout << "Data de fabricação: " << std::endl;
    std::cin >> this->fabricacao;
    std::cout << "Preço: " << std::endl;
    std::cin >> this->preco;

}

#endif