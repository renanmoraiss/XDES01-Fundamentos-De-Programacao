#include <stdio.h>

void imprimeExclamacao(int n);

int main() {
    int n1;
    //
    printf("Digite um valor inteiro: ");
    scanf("%d", &n1);
    //
    imprimeExclamacao(n1);
    //
    return 0;
}

void imprimeExclamacao(int n) {
    for (int i = 1; i <= n; i++) {
        for (int r = 1; r <= i; r++) {
            printf("!");
        } printf("\n");
    }
}