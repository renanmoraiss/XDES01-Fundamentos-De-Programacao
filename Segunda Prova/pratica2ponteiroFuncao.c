#include <stdio.h>

int somaDobro(int *a, int *b);

int main() {
    int n1, n2;
    int dobro;
    //
    printf("Digite um valor: ");
    scanf("%d", &n1);
    //
    printf("Digite um valor: ");
    scanf("%d", &n2);
    //
    printf("Antes da funcao\n");
    printf("A: %d B: %d\n", n1, n2);
    //
    dobro = somaDobro(&n1, &n2);
    //
    printf("Depois da funcao\n");
    printf("A: %d B: %d\n", n1, n2);
    printf("Dobro: %d\n", dobro);
    //
    return 0;
}

int somaDobro(int *a, int *b) {
    int somaD;
    *a = 2 * *a;
    *b = 2 * *b;
    somaD = *a + *b;
    return somaD;
}// update for commit
// update for commit
