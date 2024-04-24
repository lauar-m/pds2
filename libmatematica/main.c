#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include "matematica.h"
//https://github.com/malu-lauar/teste.git

int main (){
    float angulo_graus;
    printf("digite o ângulo em graus: ");//pede o ângulo em graus
    scanf("%f", &angulo_graus);

    float angulo_radianos = graus_para_radianos(angulo_graus); //tranforma graus em radianos

    printf("ângulo em graus: %.2f\n", angulo_graus);
    printf("ângulo em radianos: %.2f\n", angulo_radianos);
    printf("seno: %.3f\n", calcular_seno(angulo_radianos)); //resultado do seno a partir do angulo em rad
    printf("cos seno: %.3f\n", calcular_cosseno(angulo_radianos));//resultado do cosseno a partir do angulo em rad
    printf("tangente: %.3f\n", calcular_tangente(angulo_radianos));//resultado da tangente a partir do angulo em rad

    return 0;
}