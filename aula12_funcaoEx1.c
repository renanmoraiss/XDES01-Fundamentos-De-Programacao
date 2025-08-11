#include <stdio.h>

void troca(float *a, float *b);

int main() {
    float n1, n2;
    //
    printf("Digite um valor: ");
    scanf("%f", &n1);
    //
    printf("Digite outro valor: ");
    scanf("%f", &n2);
    //
    printf("Valores antes da troca:\n");
    printf("a: %0.2f b: %0.2f\n", n1, n2);
    //
    troca(&n1, &n2);
    //
    printf("Valores depois da troca:\n");
    printf("a: %0.2f b: %0.2f\n", n1, n2);
    //
    return 0;
}

void troca(float *a, float *b) {
    float temporario;
    temporario = *a;
    *a = *b;
    *b = temporario;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
