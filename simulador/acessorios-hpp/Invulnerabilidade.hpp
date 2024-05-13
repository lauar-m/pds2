#ifndef INVULNERABILIDADE
#define INVULNERABILIDADE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Invulnerabilidade : public ArmaDefesa
{
    public:
        Invulnerabilidade(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif