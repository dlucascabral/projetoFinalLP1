#include <iostream>
#include <string>
#include "concessionaria.h"
//#include "automoveis.h"

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

void Concessionaria::addVeiculo() {
    int op;
    std::cout << "Qual tipo de veículo gostaria de adicionar:" << std::endl;
    std::cout << "1 - Automóveis " << std::endl;
    std::cout << "2 - Motos " << std::endl;
    std::cout << "3 - Caminhões " << std::endl;
    std::cin >> op;

    switch (op)
    {
    case 1:
        Automoveis();
        break;
    
    default:
        break;
    }
}