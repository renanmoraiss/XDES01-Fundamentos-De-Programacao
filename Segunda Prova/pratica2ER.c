#include <stdio.h>

void preencheValor(int *N);
void imprimeDivisores(int *N);

int main() {
    int n;
    //
    preencheValor(&n);
    //
    imprimeDivisores(&n);
    //
    return 0;
}

void preencheValor(int *N) {
    printf("Digite um valor inteiro: ");
    scanf("%d", N);
}

void imprimeDivisores(int *N) {
    for (int i = 1; i <= *N; i++) {
        if (*N % i == 0) {
            printf("Divisor encontrado: %d\n", i);
        }
    }
}