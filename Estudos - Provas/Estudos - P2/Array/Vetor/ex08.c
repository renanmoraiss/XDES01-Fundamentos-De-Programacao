#include <stdio.h>

void imprimeVetor(float vetor[], int tamanho);
void multiplica(float vet[], int tamanho, float valor);

int main() {
    float notas[] = {6.5, 8.7, 6.9, 3.6, 7};
    float valor;
    //
    imprimeVetor(notas, 5);
    //
    printf("Digite o valor que deseja multiplicar o vetor: ");
    scanf("%f", &valor);
    //
    multiplica(notas, 5, valor);
    //
    imprimeVetor(notas, 5);
    //
    return 1;
}

void imprimeVetor(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%0.2f\n", vetor[i]);
    }
}

void multiplica(float vet[], int tamanho, float valor) {
    for (int i = 0; i < tamanho; i++) {
        vet[i] = vet[i] * valor;
    }
}