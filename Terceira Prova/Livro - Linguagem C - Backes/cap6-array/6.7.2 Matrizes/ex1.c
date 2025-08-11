#include <stdio.h>

void preencheMatriz(int matriz[][3]);
int encontraMenorValor(int matriz[][3]);

int main() {
    int mat[3][3];
    int menorValor;
    //
    preencheMatriz(mat);
    //
    menorValor = encontraMenorValor(mat);
    printf("Menor valor: %d\n", menorValor);
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

int encontraMenorValor(int matriz[][3]) {
    int menorV = matriz[0][0];
    //
    for (int i = 0; i < 3; i++) {
        //
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] < menorV) {
                menorV = matriz[i][j];
            }
        }
    }
    //
    return menorV;
}// update for commit
// update for commit
