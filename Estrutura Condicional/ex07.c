#include <stdio.h>

int main() {
    int a, b, i;
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    printf("Digite outro valor inteiro: ");
    scanf("%d", &b);
    
    if (a < b - 1) {
        for (i = a + 1; i < b; i += 1) {
            printf("%d\n", i);
        }
    } else if (b < a - 1) {
        for (i = b + 1; i < a; i += 1) {
            printf("%d\n", i);
        }
    } else {
        printf("Nao existem valores inteiros entre %d e %d", a, b);
    }

    return 0;
}