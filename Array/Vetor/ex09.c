#include <stdio.h>

void imprimeVetor(float vet[], int tamanho);
void multiplica(float vet[], int tamanho, float valor);

int main() {
    float valor;
    //
    float notas[] = {6.5, 8.7, 6.9, 3.6, 7};
    //
    imprimeVetor(notas, 5);
    printf("\n");
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

void imprimeVetor(float vet[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%0.2f\t", vet[i]);
    }
}

void multiplica(float vet[], int tamanho, float valor) {
    for (int i = 0; i < tamanho; i++) {
        vet[i] *= valor;
    }
}