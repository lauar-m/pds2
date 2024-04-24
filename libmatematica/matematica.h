#ifndef MATEMATICA_H // checa se o cabeçalho já foi definido
#define MATEMATICA_H // define para evitar varias inclusões do arquivo

#define pi 3.14159265358979323846 //definindo pi para o calculo de graus para radianos

// funções da biblioteca math.h
float graus_para_radianos(float graus);
float calcular_seno(float angulo_radianos);
float calcular_cosseno(float angulo_radianos);
float calcular_tangente(float angulo_radianos);

#endif //matematica_h