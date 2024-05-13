#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Resiliencia.hpp"

Resiliencia::Resiliencia(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Resiliencia::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Resiliencia::getResistencia() 
{
    return this->resistencia;
}