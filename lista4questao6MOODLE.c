#include <stdio.h>
#include <math.h>

int main () {
    int x, base, expoente, denominador, sinalPosNeg;
    double resultado, soma = 0;
    //
    scanf("%d", &x);
    base = x;
    //
    for (expoente = 25, denominador = 1, sinalPosNeg = 1; expoente >= 1 && denominador <= 25; expoente -= 1, denominador += 1) {
        resultado = sinalPosNeg * (pow((double)base, (double)expoente) / denominador);
        soma += resultado;
        sinalPosNeg *= -1;
    }
    printf("%0.2lf\n", soma);
    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
