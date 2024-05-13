#include "../personagens-hpp/Zombie.hpp"

Zombie::Zombie(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Zombie::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Zombie::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Zombie::pegarDescricao() 
{
    return "Grrrrooaahh";
}