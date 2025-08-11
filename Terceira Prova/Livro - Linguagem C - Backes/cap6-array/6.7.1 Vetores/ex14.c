#include <stdio.h>
#include <math.h>

void preencheVetor(int vet[], int n);
void calcDesvioPadrao(int vet[], int n);

int main () {
    int v[3];
    int n = 3;
    //
    preencheVetor(v, n);
    calcDesvioPadrao(v, n);
    //
    return 0;
}

void preencheVetor(int vet[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
}

void calcDesvioPadrao(int vet[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vet[i];
    }
    //
    
    float media;
    media = (float)soma / 3.0;
    printf("%0.2f\n", media);
    //
    float vetDesvios[10];
    for (int i = 0; i < n; i++) {
        vetDesvios[i] = (float)vet[i] - media;
    }
    //
    for (int i = 0; i < n; i++) {
        printf("%0.2f\t", vetDesvios[i]);
    } printf("\n");
    //
    float vetDesviosAoQuadrado[3];
    for (int i = 0; i < n; i++) {
        vetDesviosAoQuadrado[i] = pow(vetDesvios[i], 2);
    }
    //
    for (int i = 0; i < n; i++) {
        printf("%0.2f\t", vetDesviosAoQuadrado[i]);
    } printf("\n");
    //
    float somaQuadrados = 0.0;
    for (int i = 0; i < n; i++) {
        somaQuadrados += vetDesviosAoQuadrado[i];
    }
    float mediaQuadrados;
    mediaQuadrados = somaQuadrados / 3.0;
    printf("%0.2f\n", mediaQuadrados);
    //
    float raizDaVarianca;
    raizDaVarianca = sqrt(mediaQuadrados);
    printf("%0.2f\n", raizDaVarianca);
}// update for commit
// update for commit
