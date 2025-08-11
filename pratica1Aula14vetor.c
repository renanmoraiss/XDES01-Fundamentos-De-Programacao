#include <stdio.h>
#include <math.h>

void imprimirVetor(int vetor[], int tamanho);
void somaVetor(int vetor[], int tamanho, int *somaValores);
void mediaVetor(int vetor[], int tamanho, int soma, float *mediaValores);
void maiorValor(int vetor[], int tamanho, int *maior);
void menorValor(int vetor[], int tamanho, int *menor);

int main() {
    int vet[5] = {10, 20, 30, 40, 50};
    int soma = 0;
    float media = 0.0;
    int maior = vet[0];
    int menor = vet[0];
    //
    imprimirVetor(vet, 5);
    //
    somaVetor(vet, 5, &soma);
    printf("Soma: %d\n", soma);
    //
    mediaVetor(vet, 5, soma, &media);
    printf("Media: %0.2f\n", media);
    //
    maiorValor(vet, 5, &maior);
    printf("Maior valor: %d\n", maior);
    //
    menorValor(vet, 5, &menor);
    printf("Menor valor: %d\n", menor);
    //
    return 0;
}

void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Valor da posicao %d: %d\n", i, vetor[i]);
    }
}

void somaVetor(int vetor[], int tamanho, int *somaValores) {
    for (int i = 0; i < tamanho; i++) {
        *somaValores += vetor[i];
    }
}

void mediaVetor(int vetor[], int tamanho, int soma, float *mediaValores) {
    *mediaValores = (float)soma / (float)tamanho;
}

void maiorValor(int vetor[], int tamanho, int *maior) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
    }
}

void menorValor(int vetor[], int tamanho, int *menor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
