#include <stdio.h>
#include <math.h>

int main() {
    int x;
    double S = 0.0;
    double parcial;
    int multiplicador;
    //
    printf("Digite um valor: ");
    scanf("%d", &x);
    //
    multiplicador = 1;
    for (int expoente = 25, denominador = 1; expoente >= 1 && denominador <= 25; expoente--, denominador++) {
        parcial = multiplicador * (pow((double)x, (double)expoente) / (double)denominador);
        S += parcial;
        multiplicador *= (-1);
    } printf("Soma: %0.2lf\n", S);
    //
    return 0;
}