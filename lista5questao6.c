#include <stdio.h>
#include <math.h>

int main () {
    int x, base, expoente, denominador, sinalPosNeg;
    double resultado, soma = 0;
    //
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
    base = x;
    //
    for (expoente = 25, denominador = 1, sinalPosNeg = 1; expoente >= 1 && denominador <= 25; expoente -= 1, denominador += 1) {
        resultado = sinalPosNeg * (pow((double)base, (double)expoente) / denominador);
        soma += resultado;
        printf("Resultado parcial: %0.2lf\n", resultado);
        sinalPosNeg *= -1;
    }
    printf("A soma e: %0.2lf\n", soma);
    return 0;
}