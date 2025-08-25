#include <stdio.h>

void preencheVetor(int vetor[]);
void exibeVetor(int vetor[]);

int main() {
    int vet[5];
    //
    preencheVetor(vet);
    //
    exibeVetor(vet);
    //
    return 0;
}

void preencheVetor(int vetor[]) {
    for (int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
}

void exibeVetor(int vetor[]) {
    for (int i = 0; i < 6; i++) {
        printf("%d\n", vetor[i]);
    }
}