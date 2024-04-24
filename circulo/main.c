#include <stdio.h>
#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif //M_PI 

int main(){
    float x, y, r; 
    scanf("%f %f %f", &x, &y, &r);
    printf("Circulo de raio %.2f, area %.2f\n", r, M_PI * r * r);
    
    if (r > 0)
        printf("Circulo valido\n");
    else
        printf("Circulo invalido\n"
                "O raio deve ser maior que zero\n");
    return 0;
}