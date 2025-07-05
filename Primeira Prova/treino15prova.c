#include <stdio.h>

int main() {
    int n1;
    printf("Digite um valor: ");
    scanf("%d", &n1);

    if (n1 % 2 == 0) {
        printf("%d e par", n1);
    }
    if (n1 % 2 != 0) {
        printf("%d e impar", n1);
    }
    return 0;
}

/*
ALGORITMO
DECLARE n1 INTEIRO
ESCREVA("Digite um valor: ")
LEIA (n1)

SE (n1 % 2 = 0) ENTÃO
ESCREVA("par")
FIM_SE

SE (n1 % 2 ≠ 0) ENTÃO
ESCREVA("impar")
FIM_SE

FIM_ALGORITMO
*/