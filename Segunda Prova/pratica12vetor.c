#include <stdio.h>

void preencheVetor(int vet[], int tamanho);
void imprimeVetor(int vet[], int tamanho);
void maiorMenor(int vet[], int tam, int vetRes[]);

int main() {
    int vetor[5];
    int vetorDois[2];
    int Maior, menor;
    //
    preencheVetor(vetor, 5);
    //
    imprimeVetor(vetor, 5);
    printf("\n");
    //
    maiorMenor(vetor, 5, vetorDois);
    printf("Maior elemento do vetor: %d\n", vetorDois[0]);
    printf("Menor elemento do vetor: %d\n", vetorDois[1]);
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

void maiorMenor(int vet[], int tam, int vetRes[]) {
    int maior = vet[0];
    int menor = vet[0];
    for (int i = 0; i < tam; i++) {
        if (vet[i] > maior) {
            vetRes[0] = vet[i];
        } if (vet[i] < menor) {
            vetRes[1] = vet[i];
        }
    }
}// update for commit
// update for commit
