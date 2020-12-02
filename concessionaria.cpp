#include <iostream>
#include <string>
#include "concessionaria.h"
#include "veiculos.h"
#include "automoveis.h"

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
