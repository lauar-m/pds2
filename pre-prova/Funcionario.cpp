#include "Funcionario.hpp"
#include <string>
using namespace std;

Funcionario::Funcionario(int id, string nome, double salarioBase){

}

int Funcionario::getId(){
    return this->id;
}

string Funcionario::getNome(){
    return this->nome;
}

double Funcionario::getSalarioBase(){
    return this->salarioBase;
}

double Funcionario::calcularSalarioTotal(){
    return this->salarioBase;
}
