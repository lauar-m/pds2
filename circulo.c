#include "circulo.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846

struct Circulo {
    float x, y, r;
};

Circulo circ_cria(float x, float y, float r){
    Circulo *c = malloc(sizeof(Circulo));
    c->x = x;
    c->y = y;
    c->r = r;
    return *c; 
} 

void circ_libera(Circulo *c){
    free(c);
}

float circ_area(Circulo *c){
    return M_PI * c->r * c->r;
}       

int circ_concentricos(Circulo *c1, Circulo *c2){
    return c1->x == c2->x && c1->y == c2->y;
}   

float circ_raio(Circulo *c){
    return c->r;
}
#endif //M_PI 