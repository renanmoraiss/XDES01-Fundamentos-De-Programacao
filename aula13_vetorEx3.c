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
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: %d\n", i, vet[i]);
    }
    //
    media = soma / 5;
    printf("Soma: %d\n", soma);
    printf("Media: %0.2f\n", media);
    printf("Elementos maiores que 5: %d\n", elementosMaioresQue5);
    //
    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
