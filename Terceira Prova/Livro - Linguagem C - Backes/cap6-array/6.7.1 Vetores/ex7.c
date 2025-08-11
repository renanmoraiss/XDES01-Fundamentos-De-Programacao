#include <stdio.h>

void preencheVetor(int vet[]);
void menorElemento(int vet[], int *menorElemento);
void maiorElemento(int vet[], int *maiorElemento);

int main() {
    int X[9];
    int menor, maior;
    //
    preencheVetor(X);
    //
    menorElemento(X, &menor);
    //
    maiorElemento(X, &maior);
    //
    printf("Menor elemento: %d\n", menor);
    printf("Maior elemento: %d\n", maior);
    //
    return 0;
}

void preencheVetor(int vet[]) {
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }
}

void menorElemento(int vet[], int *menorElemento) {
    *menorElemento = vet[0];
    //
    for (int i = 0; i < 10; i++) {
        if (vet[i] < *menorElemento) {
            *menorElemento = vet[i];
        }
    }
}

void maiorElemento(int vet[], int *maiorElemento) {
    *maiorElemento = vet[0];
    //
    for (int i = 0; i < 10; i++) {
        if (vet[i] > *maiorElemento) {
            *maiorElemento = vet[i];
        }
    }
}// update for commit
// update for commit
