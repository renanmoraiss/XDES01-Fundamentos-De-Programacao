#include <stdio.h>
#include <math.h>

float volumeCilindro (float altura, float raio) {
    return M_PI * pow(raio,2) * altura;
}

int main () {
    float a, r, res;
    printf("Digite a altura do cilindro: ");
    scanf("%f", &a);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);
    res = volumeCilindro(a, r);
    printf("%0.2f", res);
}