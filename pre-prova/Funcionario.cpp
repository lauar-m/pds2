#include "Funcionario.hpp"
#include <string>
using namespace std;

Funcionario::Funcionario(int id, string nome, double salarioBase)
{
   
}

int getId()
{
    return this->id;
}

string getNome()
{
    return this->nome;
}

double getSalarioBase()
{
    return this->salarioBase;
}

double Funcionario::calcularSalarioTotal()
{
    return this->salarioBase;
}
