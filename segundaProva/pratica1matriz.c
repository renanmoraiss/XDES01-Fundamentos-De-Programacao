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
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite um valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimeMatriz(int matriz[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        } printf("\n");
    }
}