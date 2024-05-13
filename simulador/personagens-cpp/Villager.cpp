#include "../personagens-hpp/Villager.hpp"

Villager::Villager(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Villager::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Villager::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Villager::pegarDescricao() 
{
    return "Hmm-hmm-hmm";
}