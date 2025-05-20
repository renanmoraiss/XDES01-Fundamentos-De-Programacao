#include <stdio.h>
#include <math.h>

void maiorMenor(int vet[], int tam, int vetRes[]);

int main() {
    int vet[5] = {10, 20, 30, 40, 50};
    int vetRes[2];
    //
    maiorMenor(vet, 5, vetRes);
    //
    printf("Maior valor: %d\n", vetRes[0]);
    printf("Menor valor: %d\n", vetRes[1]);
    //
    return 0;
}

void maiorMenor(int vet[], int tam, int vetRes[]) {
    int maior = vet[0];
    int menor = vet[0];
    for (int i = 0; i < tam; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
        if (vet[i] < menor) {
            menor = vet[i];
        }
    } 
    vetRes[0] = maior;
    vetRes[1] = menor;
}