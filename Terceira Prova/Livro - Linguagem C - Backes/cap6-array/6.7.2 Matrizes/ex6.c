#include <stdio.h>

void preencheMatriz(int mat[][3]);
void somaValores(int mat[][3]);

int main() {
    int mat[3][3];
    //
    preencheMatriz(mat);
    //
    somaValores(mat);
    //
    return 0;
}

void preencheMatriz(int mat[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void somaValores(int mat[][3]) {
    int somaValores = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                somaValores += mat[i][j];
            }
        }
    }
    //
    printf("%d\n", somaValores);
}// update for commit
// update for commit
