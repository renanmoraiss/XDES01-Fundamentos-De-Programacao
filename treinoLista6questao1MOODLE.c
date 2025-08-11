#include <stdio.h>

void alterarValor(int *a, int *b);

int main() {
    int n1, n2;
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
    alterarValor(&n1, &n2);
    //
    printf("Depois da funcao\n");
    printf("A: %d B: %d\n", n1, n2);
    //
    return 0;
}

void alterarValor(int *a, int *b) {
    *a += *b;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
