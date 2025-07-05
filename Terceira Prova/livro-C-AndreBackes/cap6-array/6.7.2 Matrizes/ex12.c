#include <stdio.h>

void preencheMatriz(int mat[][6]);
void calculaMatriz(int mat[][6]);

int main() {
    int matriz[6][6];
    //
    preencheMatriz(matriz);
    //
    calculaMatriz(matriz);
    //
    return 0;
}

void preencheMatriz(int mat[][6]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void calculaMatriz(int mat[][6]) {
    int somaValores = 0;
    int variavelDeControle;
    int controleColuna = 0;
    //
    for (int i = 0; i < 6; i++) {
        variavelDeControle = 0;
        //
        for (int j = 0; j < 6; j++) {
            while (variavelDeControle + j < controleColuna) {
                somaValores += mat[i][j];
                variavelDeControle++;
            }
        } controleColuna++;
    }
    //
    printf("Soma dos elementos abaixo da diagonal principal:\n");
    printf("%d\n", somaValores);
}