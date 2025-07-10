#include <stdio.h>

void preencheMatriz(int mat[][5]);
void calcMatriz(int mat[][5]);

int main() {
    int matriz[5][5];
    //
    preencheMatriz(matriz);
    //
    calcMatriz(matriz);
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

void calcMatriz(int mat[][5]) {
    int somaElementosDiagonalSecundaria = 0;
    int somaElementosForaDasDiagonais1e2 = 0;
    int result;
    for (int i = 0; i < 5; i++) {
        //
        for (int j = 0; j < 5; j++) {
            if (i + j == 4) {
                somaElementosDiagonalSecundaria += mat[i][j];
            } else if ((i + j != 4) && (i != j)) {
                somaElementosForaDasDiagonais1e2 += mat[i][j];
            }
        }
    }
    result = somaElementosDiagonalSecundaria - somaElementosForaDasDiagonais1e2; //result = -5 - 15 = -20
    printf("Resultado: %d\n", result);
}