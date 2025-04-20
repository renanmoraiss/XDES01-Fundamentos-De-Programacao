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

/*
ALGORITMO
DECLARE a, b, i INTEIRO
ESCREVA("Digite um valor inteiro: ")
LEIA (a)
ESCREVA("Digite outro valor inteiro: ")
LEIA (b)

SE (a < b - 1) 
PARA (i = a + 1; i < b; i += 1)
ESCREVA(i)
FIM_PARA
FIM_SE

SENÃO SE (b < a - 1) 
PARA (i = b + 1; i < a; i += 1)
ESCREVA(i)
FIM_PARA
FIM_SENÃO_se

SENÃO
ESCREVA("Nao existem valores inteiros entre (a) e (b)")
FIM_SENÃO

FIM_ALGORITMO
*/