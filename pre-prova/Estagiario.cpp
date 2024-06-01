#include "Estagiario.hpp"
#include <string>
using namespace std;

Estagiario::Estagiario(int id, string nome, double bolsaAuxilio) : Funcionario(id, nome, bolsaAuxilio){
    this->bolsaAuxilio = bolsaAuxilio;
}

double Estagiario::calcularSalarioTotal(){
    return this->bolsaAuxilio;
}