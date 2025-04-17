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

/*
ALGORITMO
DECLARE n1,n2 REAL
ESCREVA("Digite o primeiro valor: ")
LEIA (n1)
ESCREVA("Digite o segundo valor: ")
LEIA (n2)

SE (n1 < n2) ENTÃO
ESCREVA (n1) é menor que (n2)
FIM_SE

SE (n2 < n1) ENTÃO
ESCREVA (n2) é menor que (n1)
FIM_SE

FIM_ALGORITMO
*/