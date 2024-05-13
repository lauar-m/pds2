#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Tridente.hpp"

Tridente::Tridente(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Tridente::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Tridente::gerarRuidoAtaque()
{
    return "cush cush";
}
