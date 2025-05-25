#include <stdio.h>

void imprimeExclamacao(int n); //passagem de parametro por valor (copia)

int main() {
    int valorN;
    //
    printf("Digite um valor inteiro: ");
    scanf("%d", &valorN);
    //
    imprimeExclamacao(valorN);
    //
    return 0;
}

void imprimeExclamacao(int n) {
    char exclamacao = '!';
    for (int i = 1; i <= n; i++) {
        for (int r = 1; r <= i; r++) {
            printf("%c", exclamacao);
        } printf("\n");
    }
}