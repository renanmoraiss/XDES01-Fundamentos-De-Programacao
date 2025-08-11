#include <stdio.h>

void preencheMatriz(int matriz[][3], int linhas, int colunas);
void imprimeMatriz(int matriz[][3], int linhas, int colunas);

int main() {
    int matriz[3][3];
    //
    preencheMatriz(matriz, 3, 3);
    //
    imprimeMatriz(matriz, 3, 3);
    //
    return 0;
}

void preencheMatriz(int matriz[][3], int linhas, int colunas) {
    for (int l = 0; l < linhas; l++) {
        for (int c = 0; c < colunas; c++) {
            printf("Digite o valor da posicao %d,%d: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
}

void imprimeMatriz(int matriz[][3], int linhas, int colunas) {
    for (int l = 0; l < linhas; l++) {
        for (int c = 0; c < colunas; c++) {
            printf("Valor da posicao %d,%d: %d\n", l, c, matriz[l][c]);
        }
    }
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
