#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Tridente_Aquatico.hpp"

Tridente_Aquatico::Tridente_Aquatico(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Tridente_Aquatico::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Tridente_Aquatico::gerarRuidoAtaque()
{
    return "cush cush";
}
