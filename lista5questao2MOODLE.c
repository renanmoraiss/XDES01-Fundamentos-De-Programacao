#include <stdio.h>

float calcularExponencial (float x, int y) {
    float calculo = 1.0;
    for (int i = 0; i < y; i += 1) {
        calculo *= x;
    }
    return calculo;
}

int main () {
    float base, res;
    int expoente;
    scanf("%f", &base);
    scanf("%d", &expoente);
    res = calcularExponencial(base, expoente);
    printf("%0.2f\n", res);
    return 0;
}