/*6) Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
quantos valores pares foram armazenados nesse vetor.*/

#include <stdio.h>

void preencheVetor(int vetor[]);
void encontraPar(int vetor[]);

int main() {
    int vet[9];
    //
    preencheVetor(vet);
    //
    encontraPar(vet);
    //
    return 0;
}

void preencheVetor(int vetor[]) {
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
}

void encontraPar(int vetor[]) {
    int totalPar = 0;
    //
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            totalPar++;
        }
    }
    //
    printf("%d\n", totalPar);
}