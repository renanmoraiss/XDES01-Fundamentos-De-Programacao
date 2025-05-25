#include <stdio.h>

void preencheValor(int *A, int *B);
void repete(int *A, int *B);

int main() {
    int a, b;
    //
    preencheValor(&a, &b);
    //
    repete(&a, &b);
    //
    return 0;
}

void preencheValor(int *A, int *B) {
    printf("Digite o valor de a: ");
    scanf("%d", A);
    printf("Digite o valor de b: ");
    scanf("%d", B);
}

void repete(int *A, int *B) {
    for (int i = *A + 1; i < *B; i++) {
        printf("%d\t", i);
    }
}