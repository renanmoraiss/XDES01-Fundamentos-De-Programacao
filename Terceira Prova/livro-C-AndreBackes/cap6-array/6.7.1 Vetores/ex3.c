/*3) Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida,
mostre todos os valores lidos juntamente com a média dos valores.*/

#include <stdio.h>

void preencheVetor(int vetor[], int *soma, float *media);
void imprimeValores(int vetor[], float media);

int main() {
    int vetor[4];
    int S;
    float M;
    //
    preencheVetor(vetor, &S, &M);
    //
    imprimeValores(vetor, M);
    //
    return 0;
}

void preencheVetor(int vetor[], int *soma, float *media) {
    *soma = 0;
    //
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
        *soma += vetor[i];
    }
    //
    *media = *soma / 5;
}

void imprimeValores(int vetor[], float media) {
    for (int i = 0; i < 5; i++) {
        printf("%d\t", vetor[i]);
    } printf("\n");
    //
    printf("%0.2f\n", media);
}