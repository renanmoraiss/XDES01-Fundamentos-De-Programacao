#include <stdio.h>
#include <math.h>

float volumeCilindro(float altura, float raio); //passagem de parametro por valor (copia)

int main() {
    float a, r, vol;
    //
    printf("Digite a altura da esfera: ");
    scanf("%f", &a);
    //
    printf("Digite o raio da esfera: ");
    scanf("%f", &r);
    //
    vol = volumeCilindro(a, r);
    printf("Volume: %0.2f\n", vol);
    //
    return 0;
}

float volumeCilindro(float altura, float raio) {
    float volume;
    //
    volume = M_PI * (raio * raio) * altura;
    //
    return volume;
}