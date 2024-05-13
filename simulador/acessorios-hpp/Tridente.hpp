#ifndef TRIDENTE
#define TRIDENTE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Tridente : public ArmaAtaque
{
    public:
        Tridente(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif