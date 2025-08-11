#include <stdio.h>

void preencheVetor(int vet[], int tamanho);
int retornaPares(int vet[], int tamanho);

int main() {
    int tam = 10;
    int vet[tam];
    int pares;
    //
    preencheVetor(vet, tam);
    //
    pares = retornaPares(vet, tam);
    printf("Total de pares: %d", pares);
    //
    return 0;
}

void preencheVetor(int vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }
}

int retornaPares(int vet[], int tamanho) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vet[i] % 2 == 0) {
            contador++;
        }
    }
    return contador;
}// update for commit
// update for commit
