#include <stdio.h>
#include <math.h>

int main() {
    int x;
    float S = 0.0;
    float parcial;
    int multiplicador;
    //
    printf("Digite um valor: ");
    scanf("%d", &x);
    //
    multiplicador = 1;
    for (int expoente = 25, denominador = 1; expoente >= 1 && denominador <= 25; expoente--, denominador++) {
        parcial = multiplicador * (pow(x, expoente) / denominador);
        S += (float)parcial;
        printf("%d * (pow(%d, %d) / %d)\n", multiplicador, x, expoente, denominador);
        multiplicador *= (-1);
    } printf("Soma: %0.2f\n", S);
    //
    return 0;
}