#include "../personagens-hpp/Creeper.hpp"

Creeper::Creeper(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Creeper::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Creeper::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Creeper::pegarDescricao() 
{
    return "BOOM";
}