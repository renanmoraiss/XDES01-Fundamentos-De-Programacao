#include <stdio.h>
#include <math.h>

int main() {
    int vetor[5];
    int soma = 0;
    float media;
    int elementosMaioresQueCinco = 0;
    //
    for (int i = 0; i < 5;i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    //
    int maiorElemento = vetor[0];
    for (int i = 0; i < 5; i++) {
        if (vetor[i] > maiorElemento) {
            maiorElemento = vetor[i];
    }
    }
    int menorElemento = vetor[0];
    for (int i = 0; i < 5; i++) {
        if (vetor[i] < menorElemento) {
            menorElemento = vetor[i];
        }
    }
    //
    for (int i = 0; i < 5; i++) {
        printf("Valor da posicao %d: %d\n", i, vetor[i]);
    }
    //
    for (int i = 0; i < 5; i++) {
        soma += vetor[i];
    }
    //
    for (int i = 0; i < 5; i++) {
        if(vetor[i] > 5) {
            elementosMaioresQueCinco++;
        }
    }
    //
    media = (float)soma / 5;
    printf("Soma: %d\n", soma);
    printf("Media: %0.2f\n", media);
    printf("Elementos > 5: %d\n", elementosMaioresQueCinco);
    printf("Maior elemento: %d\n", maiorElemento);
    printf("Menor elemento: %d\n", menorElemento);
    //
    printf("----------------------------\n");
    //
    printf("V: ");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    printf("V: ");
    for (int i = 4; i >= 0; i--) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    printf("Maior elemento: %d\n", maiorElemento);
    printf("Saida 1: ");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    printf("Saida 2: ");
    for (int i = 0; i < 5; i++) {
        vetor[i] += maiorElemento;
        printf("%d\t", vetor[i]);
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
