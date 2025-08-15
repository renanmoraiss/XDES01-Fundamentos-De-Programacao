#include <stdio.h>

void preencheMatriz(int mat[][4]);
void encontraValores(int mat[][4], int *total);

int main() {
    int matriz[4][4];
    int T;
    //
    preencheMatriz(matriz);
    //
    encontraValores(matriz, &T);
    printf("Total de valores < 0: %d\n", T);
    //
    return 0;
}

void preencheMatriz(int mat[][4]) {
    for (int i = 0; i < 4; i++) {
        //
        for (int j = 0; j < 4; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void encontraValores(int mat[][4], int *total) {
    *total = 0;
    //
    for (int i = 0; i < 4; i++) {
        //
        for (int j = 0; j < 4; j++) {
            if (mat[i][j] < 0) {
                (*total)++;
            }
        }
    }
}