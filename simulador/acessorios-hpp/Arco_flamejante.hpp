#ifndef ARCO_FLAMEJANTE
#define ARCO_FLAMEJANTE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Arco_flamejante : public ArmaAtaque
{
    public:
        Arco_flamejante(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif