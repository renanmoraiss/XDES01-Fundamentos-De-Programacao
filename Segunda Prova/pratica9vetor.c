#include <stdio.h>
#include <math.h>

void preencheVetor(float vetNormal[], int tamanho);
void calculoQuadrado(float vetNormal[], float vetCalc[], int tamanho);
void imprimeVetorNormal(float vetNormal[], int tamanho);
void imprimeVetorQuadrado(float vetCalc[], int tamanho);

int main() {
    float vet[5];
    float calculo[5];
    //
    preencheVetor(vet, 5);
    imprimeVetorNormal(vet, 5);
    //
    calculoQuadrado(vet, calculo, 5);
    imprimeVetorQuadrado(calculo, 5);
    //
    return 0;
}

void preencheVetor(float vetNormal[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite um valor para a posicao %d: ", i);
        scanf("%f", &vetNormal[i]);
    }
}

void calculoQuadrado(float vetNormal[], float vetCalc[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetCalc[i] = pow(vetNormal[i], 2);
    }
}

void imprimeVetorNormal(float vetNormal[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%0.2f\t", vetNormal[i]);
    } printf("\n");
}

void imprimeVetorQuadrado(float vetCalc[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%0.2f\t", vetCalc[i]);
    }
}