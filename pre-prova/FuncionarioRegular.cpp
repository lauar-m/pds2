#include "FuncionarioRegular.hpp"
#include <string>
using namespace std;

FuncionarioRegular::FuncionarioRegular(int id, string nome, double salarioBase) : Funcionario(id, nome, salarioBase){
    this->id = id;
    this->nome = nome;
    this->salarioBase = salarioBase;
}

double FuncionarioRegular::calcularSalarioTotal(){
    return this->salarioBase;
}