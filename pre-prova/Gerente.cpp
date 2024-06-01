#include "Gerente.hpp"
#include <string>
using namespace std;

Gerente::Gerente(int id, string nome, double salarioBase, double bonusAnual) : Funcionario(id, nome, salarioBase){
    this-> id = id;
    this->nome = nome;
    this->  salarioBase = salarioBase;
    this->bonusAnual = bonusAnual;

}

double Gerente::calcularSalarioTotal(){
    return this->salarioBase + this->bonusAnual;
}

double Gerente::getBonusAnual(){
    return this->bonusAnual;
}

void Gerente::setBonusAnual(double bonusAnual){
    this->bonusAnual = bonusAnual;
}