#include <stdio.h>
#include <math.h>

float volumeCilindro(float altura, float raio);

int main() {
    float a, r, vol;
    //
    printf("Digite a altura do cilindro: ");
    scanf("%f", &a);
    //
    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);
    //
    vol = volumeCilindro(a, r);
    //
    printf("Volume do Cilindro: %0.2f\n", vol);
    //
    return 0;
}

float volumeCilindro(float altura, float raio) {
    float volume;
    volume = M_PI * (pow(raio, 2)) * altura;
    return volume;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
