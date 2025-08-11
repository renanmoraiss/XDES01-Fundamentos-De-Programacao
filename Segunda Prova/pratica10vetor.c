#include <stdio.h>

void preencheVetor(int vetor[], int tamanho);
void imprimeVetor(int vetor[], int tamanho);
int retornaSoma(int vetor[], int tamanho);
float retornaMedia(int vetor[], int tamanho);
int retornaMaior(int vetor[], int tamanho);
int retornaMenor(int vetor[], int tamanho);

int main() {
    int vet[5];
    int soma;
    float media;
    int maior;
    int menor;
    //
    preencheVetor(vet, 5);
    //
    printf("Valores armazenados no vetor:\n");
    imprimeVetor(vet, 5);
    printf("\n");
    //
    soma = retornaSoma(vet, 5);
    printf("Soma dos valores do vetor: %d\n", soma);
    //
    media = retornaMedia(vet, 5);
    printf("Media dos valores do vetor: %0.2f\n", media);
    //
    maior = retornaMaior(vet, 5);
    printf("Maior elemento do vetor: %d\n", maior);
    //
    menor = retornaMenor(vet, 5);
    printf("Menor elemento do vetor: %d\n", menor);
    //
    return 0;
}

void preencheVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}

void imprimeVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d\t", vetor[i]);
    }
}

int retornaSoma(int vetor[], int tamanho) {
    int Soma = 0;
    for (int i = 0; i < tamanho; i++) {
        Soma += vetor[i];
    } return Soma;
}

float retornaMedia(int vetor[], int tamanho) {
    int SOMA = 0;
    float Media;
    for (int i = 0; i < tamanho; i++) {
        SOMA += vetor[i];
    }
    Media = SOMA / tamanho;
    return Media;
}

int retornaMaior(int vetor[], int tamanho) {
    int maiorElemento = vetor[0];
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > maiorElemento) {
            maiorElemento = vetor[i];
        }
    }
    return maiorElemento;
}

int retornaMenor(int vetor[], int tamanho) {
    int menorElemento = vetor[0];
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] < menorElemento) {
            menorElemento = vetor[i];
        }
    }
    return menorElemento;
}// update for commit
// update for commit
