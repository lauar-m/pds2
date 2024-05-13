#ifndef STEVE
#define STEVE
#include "../core-simulador-hpp/Personagem.hpp"
class Steve : public Personagem
{
    public:
        Steve(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif