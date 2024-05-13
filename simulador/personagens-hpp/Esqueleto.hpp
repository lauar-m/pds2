#ifndef ESQUELETO
#define ESQUELETO
#include "../core-simulador-hpp/Personagem.hpp"
class Esqueleto : public Personagem
{
    public:
        Esqueleto(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif