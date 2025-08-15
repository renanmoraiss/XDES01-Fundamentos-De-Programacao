#include <stdio.h>

int main () {
    int valor, valor2;
    //
    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &valor);
    //
    while (valor <= 0) {
        printf("%d e um valor invalido\n", valor);
        printf("Digite um valor positivo: ");
        scanf("%d", &valor);
    }
    //
    printf("Valor impresso: %d\n", valor);
    //
    do {
    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &valor2);
    } while (valor2 <= 0);
    //
    return 0;
}