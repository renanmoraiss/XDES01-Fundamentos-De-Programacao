#include <stdio.h>

int main() {
    int n;
    float S = 0.0;
    float parcial;
    //
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);
    //
    for (int i = 1; i <= n; i++) {
        parcial = (1 / (float)i);
        S += parcial;
        printf("1 / %d: %0.2f\n", i, parcial);
    } printf("Valor final de S: %0.2f\n", S);
    //
    return 0;
}