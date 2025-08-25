#include <stdio.h>
#include <math.h>

void calc_esfera(float R, float *area, float *volume);

int main() {
    float a, v, r;
    //
    printf("Digite o raio da esfera: ");
    scanf("%f", &r);
    //
    if (r > 0) {
    calc_esfera(r, &a, &v);
    printf("raio: %0.2f\n", r);
    printf("area: %0.2f\n", a);
    printf("volume: %0.2f\n", v);
    } else {
        printf("O raio deve ser um valor positivo\n");
    }
    //
    return 0;
}

void calc_esfera(float R, float *area, float *volume) {
    *area = 4 * M_PI * (R * R);
    *volume = (4 * M_PI *(R * R * R)) / 3;
}