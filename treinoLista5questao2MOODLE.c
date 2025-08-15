#include <stdio.h>

float calculo(float base, int expoente);

int main() {
    float x;
    int y;
    float res;
    //
    printf("Digite a base: ");
    scanf("%f", &x);
    //
    printf("Digite o expoente: ");
    scanf("%d", &y);
    //
    res = calculo(x, y);
    //
    printf("%0.2f\n", res);
    //
    return 0;
}

float calculo(float base, int expoente) {
    float calc = 1.0;
    for (int i = 0; i < expoente; i++) {
        calc *= base;
    }
    return calc;
}