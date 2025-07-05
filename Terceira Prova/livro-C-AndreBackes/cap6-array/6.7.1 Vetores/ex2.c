/*2) Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
tela os valores lidos na ordem inversa.*/

#include <stdio.h>

void preencheVetor(int vetor[]);
void imprimeInverso(int vetor[]);

int main() {
    int vet[5];
    //
    preencheVetor(vet);
    //
    imprimeInverso(vet);
    //
    return 0;
}

void preencheVetor(int vetor[]) {
    for (int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
}

void imprimeInverso(int vetor[]) {
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }
}