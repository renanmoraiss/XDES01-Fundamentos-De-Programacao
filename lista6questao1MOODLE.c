#include <stdio.h>

void soma(int *n1, int *n2);

int main() {
    int nmr1, nmr2;
    //
    scanf("%d", &nmr1);
    //
    scanf("%d", &nmr2);
    //
    printf("Antes da função\n");
    printf("A: %d B: %d\n", nmr1, nmr2);
    //
    soma(&nmr1, &nmr2);
    //
    printf("Depois da função\n");
    printf("A: %d B: %d\n", nmr1, nmr2);
    //
    return 0;
}

void soma(int *n1, int *n2) {
    *n1 = *n1 + *n2;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
