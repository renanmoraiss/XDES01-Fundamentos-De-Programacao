#include <stdio.h>
#include <math.h>

void maiorMenor(int vet[], int tam, int *maior, int *menor);

int main() {
    int vet[5] = {10, 20, 30, 40, 50};
    int maior, menor;
    //
    maiorMenor(vet, 5, &maior, &menor);
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);
    //
    return 0;
}

void maiorMenor(int vet[], int tam, int *maior, int *menor) {
    *maior = vet[0];
    *menor = vet[0];
    for (int i = 0; i < tam; i++) {
        if (vet[i] > *maior) {
            *maior = vet[i];
        }
        if (vet[i] < *menor) {
            *menor = vet[i];
        }
    }
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
