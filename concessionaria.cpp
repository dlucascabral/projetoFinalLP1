#include <iostream>
#include <string>
#include "concessionaria.h"

Concessionaria::Concessionaria() {

    std::cout << "Nome: " << std::endl;
    std::cin >> this->nome;
    std::cout << "CNPJ: " << std::endl;
    std::cin >> this->cnpj;
    std::cout << "Estoque inicial: " << std::endl;
    std::cin >> this->estoque;

}

std::string Concessionaria::getNome() {
    return nome;
}

std::string Concessionaria::getCnpj() {
    return cnpj;
}

int Concessionaria::getEstoque() {
    return estoque;
}


//Imjplementar essa função com sobracarga talvez seja a solução.
/* void Concessionaria::entradaVeiculos() {

} */