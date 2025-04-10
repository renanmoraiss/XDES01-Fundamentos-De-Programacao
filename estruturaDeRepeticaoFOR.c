#include <stdio.h>

int main() {
    int a, b, i;

    printf("Digite um numero desejado: ");
    scanf("%d", &a);

    printf("Digite outro numero desejado: ");
    scanf("%d", &b);


    for (int i = a + 1; i < b; i++) {
        printf("%d\n", i);
    }

    return 0;
}