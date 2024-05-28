#ifndef FUNCIONARIO
#define FUNCIONARIO

#include <string>
using namespace std;

class Funcionario
{
    protected:
        string nome;
        int id;
        double salarioBase;
    
    public:
        Funcionario(int id, string nome, double salarioBase);
        virtual double calcularSalarioTotal() = 0;
        int getId();
        string getNome();
        double getSalarioBase();
};

#endif