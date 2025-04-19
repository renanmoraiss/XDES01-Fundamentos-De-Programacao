#include <stdio.h>

int main () {
    int n, i;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 1) {
        if (n % i == 0) {
            printf("Divisor encontrado: %d\n", i);
        }
    }
    return 0;
}

/*
ALGORITMO
DECLARE n, i INTEIRO
ESCREVA("Digite um valor inteiro: ")
LEIA (n)

PARA (i = 1; i <= n; i += 1)
SE (n % i = 0)
ESCREVA("Divisor encontrado: (i)")
FIM_SE
FIM_PARA

FIM_ALGORITMO
*/