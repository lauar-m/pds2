#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Invulnerabilidade.hpp"

Invulnerabilidade::Invulnerabilidade(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Invulnerabilidade::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Invulnerabilidade::getResistencia() 
{
    return this->resistencia;
}