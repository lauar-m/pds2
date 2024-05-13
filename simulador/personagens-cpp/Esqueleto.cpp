#include "../personagens-hpp/Esqueleto.hpp"

Esqueleto::Esqueleto(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Esqueleto::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Esqueleto::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Esqueleto::pegarDescricao() 
{
    return "tac-tac-tac";
}