#ifndef FUNCIONARIO_REGULAR
#define FUNCIONARIO_REGULAR

#include <string>
#include "Funcionario.hpp"

using std::string;

class FuncionarioRegular : public Funcionario
{
    public:
        FuncionarioRegular(int id, string nome, double salarioBase);
        double calcularSalarioTotal();
};

#endif