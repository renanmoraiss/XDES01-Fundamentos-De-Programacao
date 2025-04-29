#include <stdio.h>

int main () {
    int n;
    float i, soma = 0;
    //
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);
    //
    for (i = 1; i <= (float)n; i += 1) {
        soma += 1/i;
        printf("1 dividido por %0.0f = %0.2f\n", i, 1/i);
    }
    //
    printf("Soma: %0.2f\n", soma);
    //
    return 0;
}