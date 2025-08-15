#include <stdio.h>

int main() {
    float n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    if (n1 < n2) {
        printf("%0.0f e menor que %0.0f", n1, n2);
    }
    if (n2 < n1) {
        printf("%0.0f e menor que %0.0f", n2, n1);
    }
}