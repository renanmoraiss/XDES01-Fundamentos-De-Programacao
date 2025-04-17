#include <stdio.h>
#include <math.h>

int main() {
    double raio, comprimento, area, volume;
    double pi = M_PI;
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);
    comprimento = 2 * pi * raio;
    printf("Comprimento = %0.2lf\n", comprimento);
    area = pi * pow(raio, 2);
    printf("Area = %0.2lf\n", area);
    volume = 0.75 * pi * pow(raio, 3);
    printf("Volume = %0.2lf", volume);
    return 0;
}