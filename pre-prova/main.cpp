#include <clocale>
#include <iostream>
#include <string>  
#include "Funcionario.hpp"
#include "Estagiario.hpp"
#include "Gerente.hpp"
#include "FuncionarioRegular.hpp"
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    double salarioBase = 5000;
    double bolsaAuxilio = 1000;
    double bonusAnual = 1000;
    
    Funcionario *funcionarios[3]; 
    funcionarios[0] = new Estagiario(1, "Malu", bolsaAuxilio);
    funcionarios[1] = new Gerente(2, "Márcia", salarioBase, bonusAnual);
    funcionarios[2] = new FuncionarioRegular(3, "Monique", salarioBase);

    cout<< "Sálario total do estagiário: " << funcionarios[0]->calcularSalarioTotal() << endl;
    cout<< "Sálario total do gerente: " << funcionarios[1]->calcularSalarioTotal() << endl;
    cout<< "Sálario total do funcionário regular: " << funcionarios[2]->calcularSalarioTotal() << endl;

    return 0;
}