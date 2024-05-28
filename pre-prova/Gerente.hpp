#ifndef GERENTE
#define GERENTE

#include <string>
#include "Funcionario.hpp"

using std::string;

class Gerente : public Funcionario
{
    private:
        double bonusAnual;
    
    public:
        Gerente(int id, string nome, double salarioBase, double bonusAnual);
        double getBonusAnual();
        double calcularSalarioBase();
};

#endif 