#include "Veiculo.hpp"
#include <string>

Veiculo::Veiculo(const std::string& marca, const std::string& modelo, int capacidade)
: marca(marca), modelo(modelo), capacidade(capacidade) {
}
