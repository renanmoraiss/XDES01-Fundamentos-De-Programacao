#include <stdio.h>

float calculoExponencial(float base, int expoente); //passagem de parametro por valor (copia)

int main() {
    float x, res;
    int y;
    //
    printf("Base: ");
    scanf("%f", &x);
    //
    printf("Expoente: ");
    scanf("%d", &y);
    //
    res = calculoExponencial(x, y);
    printf("%0.2f\n", res);
    //
    return 0;
}

float calculoExponencial(float base, int expoente) {
    float calc = 1.0;
    //
    for (int i = 1; i <= expoente; i++) {
        calc *= base;
    } return calc;
}// update for commit
// update for commit
