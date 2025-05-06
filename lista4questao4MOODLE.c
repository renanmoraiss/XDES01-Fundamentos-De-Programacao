#include <stdio.h>

int main () {
    int n;
    float i, soma = 0;
    //
    scanf("%d", &n);
    //
    for (i = 1; i <= (float)n; i += 1) {
        soma += 1/i;
        printf("%0.2f\n", 1/i);
    }
    //
    printf("%0.2f\n", soma);
    //
    return 0;
}