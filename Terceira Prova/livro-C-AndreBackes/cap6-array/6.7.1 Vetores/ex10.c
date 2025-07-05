/*10) Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.*/

#include <stdio.h>

#define TAM 100

void verifica(int vet[]);
void imprimeVetor(int vet[]);

int main() {
    int vet[TAM];
    //
    verifica(vet);
    //
    imprimeVetor(vet);
    //
    return 0;
}

void verifica(int vet[]) {
    int i = 0;
    int numeroNatural = 1;
    //
    while (i < TAM) {
        if (numeroNatural % 7 != 0) {
            vet[i] = numeroNatural;
            i++;
        }
        //
        numeroNatural++;
    }
}

void imprimeVetor(int vet[]) {
    for (int i = 0; i < TAM; i++) {
        printf("%d\t", vet[i]);
    }
}