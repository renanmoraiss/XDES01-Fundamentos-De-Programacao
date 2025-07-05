#include <stdio.h>

void preencheMatriz(int mat[][5]);
void imprimeMatriz(int mat[][5]);

int main() {
    int matriz[5][5];
    //
    preencheMatriz(matriz);
    //
    imprimeMatriz(matriz);
    //
    return 0;
}

void preencheMatriz(int mat[][5]) {
    for (int i = 0; i < 5; i++) {
        //
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                mat[i][j] = 1;
            } else {
                mat[i][j] = 0;
            }
        }
    }
}

void imprimeMatriz(int mat[][5]) {
    for (int i = 0; i < 5; i++) {
        //
        for (int j = 0; j < 5; j++) {
            printf("%d\t", mat[i][j]);
        } printf("\n");
    }
}