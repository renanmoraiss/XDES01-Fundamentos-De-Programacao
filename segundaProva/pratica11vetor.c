#include <stdio.h>

void preencheVetor(int vet[], int tamanho);
void imprimeVetor(int vet[], int tamanho);
void maiorMenor(int vet[], int tam, int *maior, int *menor);

int main() {
    int vetor[5];
    int Maior, menor;
    //
    preencheVetor(vetor, 5);
    //
    imprimeVetor(vetor, 5);
    printf("\n");
    //
    maiorMenor(vetor, 5, &Maior, &menor);
    printf("Maior elemento do vetor: %d\n", Maior);
    printf("Menor elemento do vetor: %d\n", menor);
    //
    return 0;
}

void preencheVetor(int vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vet[i]);
    }
}

void imprimeVetor(int vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d\t", vet[i]);
    }
}

void maiorMenor(int vet[], int tam, int *maior, int *menor) {
    *maior = vet[0];
    *menor = vet[0];
    for (int i = 0; i < tam; i++) {
        if (vet[i] > *maior) {
            *maior = vet[i];
        } if (vet[i] < *menor) {
            *menor = vet[i];
        }
    }
}