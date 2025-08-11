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

/*
ALGORITMO

DECLARE n1, n2, n3 REAL
ESCREVA("Digite o primeiro valor: ")
LEIA (n1)
ESCREVA("Digite o segundo valor: ")
LEIA (n2)
ESCREVA("Digite o terceiro valor: ")
LEIA (n3)

SE ((n1 > n2) E (n1 > n3)) ENTÃO
ESCREVA (n1) é maior que (n2) e (n3)
FIM_SE 

SE ((n2 > n1) E (n2 > n3)) ENTÃO
ESCREVA (n2) é maior que (n1) e (n3)
FIM_SE 

SE ((n3 > n1) E (n3 > n2)) ENTÃO
ESCREVA (n3) é maior que (n1) e (n2)
FIM_SE

FIM_ALGORITMO
*/// update for commit
// update for commit
