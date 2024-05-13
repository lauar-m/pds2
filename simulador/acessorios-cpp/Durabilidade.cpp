#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Durabilidade.hpp"

Durabilidade::Durabilidade(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Durabilidade::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Durabilidade::getResistencia() 
{
    return this->resistencia;
}