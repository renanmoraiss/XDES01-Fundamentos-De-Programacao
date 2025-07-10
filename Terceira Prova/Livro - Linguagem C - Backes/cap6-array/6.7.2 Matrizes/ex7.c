#include <stdio.h>

void preencheMatriz(int matriz[][3]);
void somaValores(int matriz[][3]);

int main() {
    int mat[3][3];
    //
    preencheMatriz(mat);
    //
    somaValores(mat);
    //
    return 0;
}

void preencheMatriz(int matriz[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void somaValores(int matriz[][3]) {
    int somaValores = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i + j == 2) {
                somaValores += matriz[i][j];
            }
        }
    }
    printf("%d\n", somaValores);
}