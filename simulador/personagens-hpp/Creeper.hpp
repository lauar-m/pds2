#ifndef CREEPER
#define CREEPER
#include "../core-simulador-hpp/Personagem.hpp"
class Creeper : public Personagem
{
    public:
        Creeper(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif