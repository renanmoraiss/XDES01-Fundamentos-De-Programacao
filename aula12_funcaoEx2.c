#include <stdio.h>

int somaDobro(int *a, int *b);

int main() {
    int n1, n2, res;
    //
    printf("Digite o valor de A: ");
    scanf("%d", &n1);
    //
    printf("Digite o valor de B: ");
    scanf("%d", &n2);
    //
    printf("Antes da funcao\n");
    printf("A: %d B: %d\n", n1, n2);
    //
    res = somaDobro(&n1, &n2);
    //
    printf("Depois da funcao\n");
    printf("A: %d B: %d\n", n1, n2);
    //
    printf("Dobro: %d", res);
    return 0;
}

int somaDobro(int *a, int *b) {
    int dobro;
    *a *= 2;
    *b *= 2;
    dobro = *a + *b;
    return dobro;
}