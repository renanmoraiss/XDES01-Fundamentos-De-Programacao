#include <stdio.h>

int main() {
    float n1, n2, n3;
    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &n3);

    if ((n1 > n2) && (n1 > n3)) {
        printf("%0.2f e maior que %0.2f e %0.2f", n1, n2, n3);
    }
    if ((n2 > n1) && (n2 > n3)) {
        printf("%0.2f e maior que %0.2f e %0.2f", n2, n1, n3);
    }
    if((n3 > n1) && (n3 > n2)) {
        printf("%0.2f e maior que %0.2f e %0.2f", n3, n1, n2);
    }
    return 0;
}