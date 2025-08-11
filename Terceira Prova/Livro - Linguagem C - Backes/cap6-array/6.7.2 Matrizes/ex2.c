#include <stdio.h>

void preencheMatriz(int matriz[][4]);
void encontraMaiorValor(int matriz[][4], int *maiorV, int *L, int *C);

int main() {
    int mat[4][4];
    int maiorValor, linha, coluna;
    //
    preencheMatriz(mat);
    //
    encontraMaiorValor(mat, &maiorValor, &linha, &coluna);
    //
    printf("Maior valor: %d\n", maiorValor);
    printf("[%d][%d]\n", linha, coluna);
    //
    return 0;
}

void preencheMatriz(int matriz[][4]) {
    for (int i = 0; i < 4; i++) {
        //
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void encontraMaiorValor(int matriz[][4], int *maiorV, int *L, int *C) {
    *maiorV = matriz[0][0];
    *L = 0;
    *C = 0;
    for (int i = 0; i < 4; i++) {
        //
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > *maiorV) {
                *maiorV = matriz[i][j];
                *L = i;
                *C = j;
            }
        }
    }
}// update for commit
// update for commit
