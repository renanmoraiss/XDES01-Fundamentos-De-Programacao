#include <stdio.h>

int main() {
    int n1, n2, n3;
    float res;
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);
    res = (n1 + n2 + n3) / 3;
    printf("A media e: %0.2f", res);
    return 0;
}