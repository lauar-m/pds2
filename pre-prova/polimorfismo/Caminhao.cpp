#include "Caminhao.hpp"
#include <string>
#include <iostream>

Caminhao::Caminhao(const std::string& marca, const std::string& modelo, int capacidade, int eixos)
: Veiculo(marca, modelo, capacidade), eixos(eixos) {
}

