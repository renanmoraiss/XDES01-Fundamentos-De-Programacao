#include <stdio.h>

void preencheVetor(int vet[]);
void lerValores(int *x, int *y);
void exibirSoma(int vet[], int x, int y);

int main() {
    int vet[7];
    int X, Y;
    //
    preencheVetor(vet);
    //
    lerValores(&X, &Y);
    //
    exibirSoma(vet, X, Y);
    //
    return 0;
}

void preencheVetor(int vet[]) {
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vet[i]);
    }
}

void lerValores(int *x, int *y) {
    printf("Digite X: ");
    scanf("%d", x);
    //
    printf("Digite Y: ");
    scanf("%d", y);
}

void exibirSoma(int vet[], int x, int y) {
    int soma = 0;
    soma = vet[y] + vet[x];
    //
    printf("%d\n", soma);
}// update for commit
// update for commit
