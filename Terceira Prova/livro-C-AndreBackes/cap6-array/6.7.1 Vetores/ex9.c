/*9) Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. Crie um novo array C calculando C = A − B. Mostre na tela os dados
do array C.*/

#include <stdio.h>

void preencheVetor(int vet[]);
void preencheC(int vetC[], int vetA[], int vetB[]);
void exibeC(int vetC[]);

int main(){
    int A[10];
    int B[10];
    int C[10];
    //
    preencheVetor(A);
    preencheVetor(B);
    //
    preencheC(C, A, B);
    //
    exibeC(C);
    //
    return 0;
}

void preencheVetor(int vet[]) {
    for (int i = 0; i < 10; i++) {
        scanf("%d\n", &vet[i]);
    }
}

void preencheC(int vetC[], int vetA[], int vetB[]) {
    for (int i = 0; i < 10; i++) {
        vetC[i] = vetA[i] - vetB[i];
    }
}

void exibeC(int vetC[]) {
    for (int i = 0; i < 10; i++) {
        printf("%d\t", vetC[i]);
    }
}