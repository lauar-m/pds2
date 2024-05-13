#ifndef DURABILIDADE
#define DURABILIDADE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Durabilidade : public ArmaDefesa
{
    public:
        Durabilidade(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif