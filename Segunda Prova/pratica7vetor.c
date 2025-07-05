#include <stdio.h>

void preencheA(int vetA[], int tamanho);
void preencheB(int vetB[], int tamanho);
void calcularVetorC(int vetA[], int vetB[], int vetC[], int tamanho);

int main() {
    int vetorA[5];
    int vetorB[5];
    int vetorC[5];
    //
    preencheA(vetorA, 5);
    //
    preencheB(vetorB, 5);
    //
    calcularVetorC(vetorA, vetorB, vetorC, 5);
    //
    return 0;
}

void preencheA(int vetA[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor da posicao %d de A: ", i);
        scanf("%d", &vetA[i]);
    }
}

void preencheB(int vetB[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor da posicao %d de B: ", i);
        scanf("%d", &vetB[i]);
    }
}

void calcularVetorC(int vetA[], int vetB[], int vetC[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetC[i] = vetA[i] - vetB[i];
        printf("%d\n", vetC[i]);
    }
}