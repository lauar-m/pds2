#ifndef ESTAGIARIO
#define ESTAGIARIO
#include <string>
#include "Funcionario.hpp"
using namespace std;

class Estagiario : public Funcionario
{
    private: 
        double bolsaAuxilio;

    public:
        Estagiario(int id, string nome, double bolsaAuxilio);
        double calcularSalarioTotal();
}; 

#endif