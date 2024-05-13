#ifndef VILLAGER
#define VILLAGER
#include "../core-simulador-hpp/Personagem.hpp"
class Villager : public Personagem
{
    public:
        Villager(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif