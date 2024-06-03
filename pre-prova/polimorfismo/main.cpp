#include <clocale>
#include <iostream>
#include <string>  
#include <vector>
#include "Veiculo.hpp"
#include "Caminhao.hpp"
#include "Van.hpp"

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    std::vector<Veiculo*> veiculos;
    veiculos.push_back(new Caminhao("Mercedes", "Actros", 50000, 3));  
    veiculos.push_back(new Van("Fiat", "Ducato", 2, 12));
    veiculos.push_back(new Caminhao("Scania", "R440", 40000, 2));
    veiculos.push_back(new Van("Renault", "Master", 1, 16));  

    
    for (Veiculo* veiculo : veiculos) {
        veiculo->exibirDados();
    }

    return 0;
}