#include <stdio.h>
#include <math.h>

void preencherValor(float vetor[], int tamanho);
void imprimirValor(float vetor[], int tamanho);
void calcularQuadrado(float vetor[], float vetorQuadr[], int tamanho);

int main() {
    int tam = 5;
    float vet[tam];
    float vetQuadrado[tam];
    //
    preencherValor(vet, tam);
    //
    imprimirValor(vet, tam);
    //
    calcularQuadrado(vet, vetQuadrado, tam);
    //
    imprimirValor(vetQuadrado, tam);
    //
    return 0;
}

void preencherValor(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &vetor[i]);
    }
}

void imprimirValor(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%0.2f\t", vetor[i]);
    }
    printf("\n");
}

void calcularQuadrado(float vetor[], float vetorQuadr[], int tamanho) {
        for (int i = 0; i < tamanho; i++) {
            vetorQuadr[i] = pow(vetor[i], 2);
        }
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
