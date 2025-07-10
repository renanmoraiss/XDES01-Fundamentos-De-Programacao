#include <stdio.h>

void preencheVetor(float vet[]);
void encontraValores(float vet[], float *soma, int *totalNegativos);

int main() {
    float vet[10];
    float S;
    int totalN;
    //
    preencheVetor(vet);
    //
    encontraValores(vet, &S, &totalN);
    //
    printf("Total negativos: %d\n", totalN);
    printf("Soma dos positivos: %0.2f\n", S);
    //
    return 0;
}

void preencheVetor(float vet[]) {
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vet[i]);
    }
}

void encontraValores(float vet[], float *soma, int *totalNegativos) {
    *soma = 0;
    *totalNegativos = 0;
    //
    for (int i = 0; i < 10; i++) {
        if (vet[i] < 0) {
            (*totalNegativos)++;
        } else {
            *soma += vet[i];
        }
    }
}