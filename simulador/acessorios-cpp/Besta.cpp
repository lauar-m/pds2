#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Besta.hpp"

Besta::Besta(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Besta::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Besta::gerarRuidoAtaque()
{
    return "cush cush";
}
