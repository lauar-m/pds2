#ifndef BESTA
#define BESTA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Besta : public ArmaAtaque
{
    public:
        Besta(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif