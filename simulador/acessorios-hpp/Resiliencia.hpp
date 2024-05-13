#ifndef RESILIENCIA
#define RESILIENCIA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Resiliencia : public ArmaDefesa
{
    public:
        Resiliencia(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif