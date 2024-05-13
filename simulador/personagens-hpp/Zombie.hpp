#ifndef ZOMBIE
#define ZOMBIE
#include "../core-simulador-hpp/Personagem.hpp"
class Zombie : public Personagem
{
    public:
        Zombie(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif