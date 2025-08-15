#include <stdio.h>

int retornaPares(int vetor[], int tamanho);
void preencheVetor(int vetor[], int tamanho);

int main() {
    int tam = 10;
    int vet[tam];
    int pares;
    //
    preencheVetor(vet, tam);
    pares = retornaPares(vet, tam);
    //
    printf("Total de pares: %d", pares);
    //
    return 0;
}

void preencheVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}

int retornaPares(int vetor[], int tamanho) {
    int valoresPares = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            valoresPares++;
        }
    }
    return valoresPares;
}