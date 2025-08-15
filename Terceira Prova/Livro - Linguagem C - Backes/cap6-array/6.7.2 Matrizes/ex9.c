#include <stdio.h>

void preencheMatriz(int matriz[][3]);
void preencheVetor(int matriz[][3], int vet[]);
void exibeVetor(int vet[]);

int main() {
    int mat[3][3];
    int vet[3];
    //
    preencheMatriz(mat);
    //
    preencheVetor(mat, vet);
    //
    exibeVetor(vet);
    //
    return 0;
}

void preencheMatriz(int matriz[][3]) {
    for (int i = 0; i < 3; i++) {
        //
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void preencheVetor(int matriz[][3], int vet[]) {
    int somaColuna;
    int controleVetor = 0;
    //
    for (int j = 0; j < 3; j++) {
        somaColuna = 0;
        //
        for (int i = 0; i < 3; i++) {
            somaColuna += matriz[i][j];
        } vet[controleVetor] = somaColuna;
        controleVetor++;
    }
}

void exibeVetor(int vet[]) {
    for (int i = 0; i < 3; i++) {
        printf("%d\t", vet[i]);
    }
}