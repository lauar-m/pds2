#include <math.h>
#include "matematica.h"

float graus_para_radianos(float graus) { //calcula graus para rad
    return graus * pi / 180.0;
}
float calcular_seno(float angulo_radianos) { //calcula o seno do ângulo fornecido
    return sin(angulo_radianos);
}
float calcular_cosseno(float angulo_radianos) { //calcula o cosseno do ângulo fornecido
    return cos(angulo_radianos);
}
float calcular_tangente(float angulo_radianos) { //calcula a tangente do ângulo fornecido
    return tan(angulo_radianos); 
}