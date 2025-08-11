#include <stdio.h>

void soma(int *n1, int *n2);

int main() {
    int a, b;
    //
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    //
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    //
    printf("Antes da funcao\n");
    printf("A: %d B: %d\n", a, b);
    //
    soma(&a, &b);
    //
    printf("Depois da funcao\n");
    printf("A: %d B: %d\n", a, b);
    //
    return 0;
}

void soma(int *n1, int *n2) {
    *n1 = *n1 + *n2;
}// update for commit
// update for commit
