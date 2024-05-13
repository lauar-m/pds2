#ifndef TRIDENTE_AQUATICO
#define TRIDENTE_AQUATICO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Tridente_Aquatico : public ArmaAtaque
{
    public:
        Tridente_Aquatico(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif