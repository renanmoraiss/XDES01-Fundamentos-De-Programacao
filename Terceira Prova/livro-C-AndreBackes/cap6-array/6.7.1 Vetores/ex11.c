/*Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor armazenando esse resultado em outro
vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos
de números.*/

#include <stdio.h>

#define TAM 20

void preencheVetor(float vet[]);
void quadradoNumero(float vet[], float calc[]);
void imprimeVetor(float vetRes[]);

int main() {
    float vetor[TAM];
    float vetorCalc[TAM];
    //
    preencheVetor(vetor);
    //
    quadradoNumero(vetor, vetorCalc);
    //
    imprimeVetor(vetor);
    imprimeVetor(vetorCalc);
    //
    return 0;
}

void preencheVetor(float vet[]) {
    for (int i = 0; i < TAM; i++) {
        scanf("%f", &vet[i]);
    }
}

void quadradoNumero(float vet[], float calc[]) {
    for (int i = 0; i < TAM; i++) {
        calc[i] = pow(vet[i], 2);
    }
}

void imprimeVetor(float vetRes[]) {
    for (int i = 0; i < TAM; i++) {
        printf("%0.2f\t", vetRes[i]);
    }
    //
    printf("\n");
}