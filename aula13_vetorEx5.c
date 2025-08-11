#include <stdio.h>

int main() {
    int vet[5];
    int soma = 0;
    int elementosMaioresQue5 = 0;
    float media = 0.0;
    //
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &vet[i]);
        if (vet[i] > 5) {
            elementosMaioresQue5 ++;
        }
        soma += vet[i];
    }
    //
    int maiorElemento = vet[0];
    int menorElemento = vet[0];
    //
    for (int i = 0; i < 5; i++) {
        if (vet[i] > maiorElemento) {
            maiorElemento = vet[i];
        }
    }
    //
    for (int i = 0; i < 5; i++) {
        if (vet[i] < menorElemento) {
            menorElemento = vet[i];
        }
    }
    //
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: %d\n", i, vet[i]);
    }
    //
    media = (float) soma / 5;
    printf("Soma: %d\n", soma);
    printf("Media: %0.2f\n", media);
    printf("Elementos maiores que 5: %d\n", elementosMaioresQue5);
    printf("Maior elemento: %d\n", maiorElemento);
    printf("Menor elemento: %d\n", menorElemento);
    //
    printf("Saida 1: ");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", vet[i]);
    }
    printf("\n");
    printf("Saida 2: ");
    for (int i = 0; i < 5; i++) {
        vet[i] += maiorElemento;
        printf("%d\t", vet[i]);
    }
    printf("\n");
    //
    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
