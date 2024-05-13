#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Arco_flamejante.hpp"

Arco_flamejante::Arco_flamejante(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Arco_flamejante::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Arco_flamejante::gerarRuidoAtaque()
{
    return "cush cush";
}
