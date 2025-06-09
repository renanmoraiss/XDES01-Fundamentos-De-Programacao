/*Faça um programa que preencha um vetor com nove números inteiros, calcule e mostre os números
primos e suas respectivas posições.*/

#include <stdio.h>

void preencheVetor(int vet[], int tamanho);
void calcularPrimos(int vet[], int tamanho);

int main() {
    int vetor[8];
    //
    preencheVetor(vetor, 8);
    //
    calcularPrimos(vetor, 8);
    //
    return 0;
}

void preencheVetor(int vet[], int tamanho) {
    for (int i = 0; i <= tamanho; i++) {
        scanf("%d", &vet[i]);
    }
}

void calcularPrimos(int vet[], int tamanho) {
}