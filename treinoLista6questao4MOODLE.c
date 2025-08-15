#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume);

int main() {
    float raio, ar, vol;
    //
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    //
    if (raio <= 0) {
        printf("O raio deve ser um valor positivo");
    } else {
    calc_esfera(raio, &ar, &vol);
    printf("raio: %0.2f\n", raio);
    printf("area: %0.2f\n", ar);
    printf("volume: %0.2f\n", vol);
    }
    //
    return 0;
}

void calc_esfera(float R, float *area, float *volume) {
    *area = 4 * M_PI * (R * R);
    *volume = (4 * M_PI * (R * R * R)) / 3;
}