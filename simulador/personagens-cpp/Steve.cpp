#include "../personagens-hpp/Steve.hpp"

Steve::Steve(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Steve::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Steve::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Steve::pegarDescricao() 
{
    return "HAHAHA";
}