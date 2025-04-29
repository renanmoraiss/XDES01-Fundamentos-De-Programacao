#include <stdio.h>

int main () {
    int n1, i, res = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n1);
    if (n1 > 0) {
        for (i = n1; i >= 1; i -= 1) {
            res *= i;
        } printf("%d", res);
    } else if (n1 == 0) {
        printf("1");
    }
    return 0;
}