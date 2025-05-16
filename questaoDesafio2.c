#include <stdio.h>

void preencheVetor(int vetor[], int tamanho);
void imprimeVetor(int vetor[], int tamanho);
void encontraIguais(int vetor[], int tamanho);

int main() {
    int tamanho = 10;
    int vetor[tamanho];

    preencheVetor(vetor, tamanho);
    imprimeVetor(vetor, tamanho);
    encontraIguais(vetor, tamanho);

    return 0;
}

void preencheVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i ++) {
        printf("Digite um valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
        }
    }

void imprimeVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Valor da posicao %d: %d\n", i, vetor[i]);
        }
    }


void encontraIguais(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        int vezesQueRepetiu = 0;
        //
        for (int r = 0; r < i; r++) {
            if (vet[r] == vet[i]) {
                vezesQueRepetiu = 1;
                break;
            }
        }

        //

        for (int v = i + 1; v < tamanho; v++) {
            if (vet[v] == vet [i]) {
                if(vezesQueRepetiu == 0) {
                printf("%d\t", vet[i]);
                break;
                }
            }
        }
    }
}