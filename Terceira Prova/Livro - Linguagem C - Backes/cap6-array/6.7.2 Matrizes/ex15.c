#include <stdio.h>
#include <math.h>

void preencheMatriz(int mat[][5]);
void calcMatrizB(int matA[][5], int matB[][5]);
void exibeMatrizB(int matB[][5]);

int main() {
    int A[5][5];
    int B[5][5];
    //
    preencheMatriz(A);
    //
    calcMatrizB(A, B);
    //
    exibeMatrizB(B);
    //
    return 0;
}

void preencheMatriz(int mat[][5]) {
    for (int i = 0; i < 5; i++) {
        //
        for (int j = 0; j < 5; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void calcMatrizB(int matA[][5], int matB[][5]) {
    for (int i = 0; i < 5; i++) {
        //
        for (int j = 0; j < 5; j++) {
            matB[i][j] = matA[i][j] * matA[i][j];
        }
    }
}

void exibeMatrizB(int matB[][5]) {
    for (int i = 0; i < 5; i++) {
        //
        for (int j = 0; j < 5; j++) {
            printf("%d\t", matB[i][j]);
        } printf("\n");
    }
}// update for commit
// update for commit
